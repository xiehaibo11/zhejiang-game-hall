
/* dtCrowd::setObstacleAvoidanceParams(int, dtObstacleAvoidanceParams const*) */

void __thiscall
dtCrowd::setObstacleAvoidanceParams(dtCrowd *this,int param_1,dtObstacleAvoidanceParams *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((uint)param_1 < 8) {
    uVar1 = *(undefined8 *)(param_2 + 0xc);
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(this + (long)param_1 * 0x1c + 0x28c) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(this + (long)param_1 * 0x1c + 0x284) = uVar1;
    *(undefined8 *)(this + (long)param_1 * 0x1c + 0x280) = uVar3;
    *(undefined8 *)(this + (long)param_1 * 0x1c + 0x278) = uVar2;
  }
  return;
}

