#include <assert.h>
/*bool is_bpmokay(float bpm)
{
  return !(bpm < 70 || bpm > 150);
}
bool is_spo2okay(float spo2)
{
  return !(spo2 < 90);}
bool is_resprateokay(float respRate)
{
  return !(respRate < 30 || respRate > 95);}*/
bool isInsideLimits(float value,int lowerlimit,int upperlimit)
{
    return (value>lowerlimit&&value<upperlimit);
}
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (isInsideLimits(bpm,70,150)&&isInsideLimits(spo2,90,100)&&isInsideLimits(respRate,30,95));
}

int main() {
   assert(isInsideLimits(30,70,150)==false);
  assert(isInsideLimits(90,70,150)==true);
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
 

}
