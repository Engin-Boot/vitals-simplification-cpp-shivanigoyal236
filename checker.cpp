#include <assert.h>
bool is_bpmokay(float bpm)
{
  return !(bpm < 70 || bpm > 150);
}
bool is_spo2okay(float spo2)
{
  return !(spo2 < 90);}
bool is_resprateokay(float respRate)
{
  return !(respRate < 30 || respRate > 95);}
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (is_bpmokay)||(is_spo2okay)||(is_resprateokay);
}

int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
