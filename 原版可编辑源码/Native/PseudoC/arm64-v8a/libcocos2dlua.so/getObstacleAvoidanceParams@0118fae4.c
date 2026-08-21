
/* dtCrowd::getObstacleAvoidanceParams(int) const */

dtCrowd * __thiscall dtCrowd::getObstacleAvoidanceParams(dtCrowd *this,int param_1)

{
  dtCrowd *pdVar1;
  
  pdVar1 = this + (long)param_1 * 0x1c + 0x278;
  if (7 < (uint)param_1) {
    pdVar1 = (dtCrowd *)0x0;
  }
  return pdVar1;
}

