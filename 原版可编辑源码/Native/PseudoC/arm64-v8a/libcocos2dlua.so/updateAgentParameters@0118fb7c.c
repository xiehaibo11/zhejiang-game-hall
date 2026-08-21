
/* dtCrowd::updateAgentParameters(int, dtCrowdAgentParams const*) */

void __thiscall
dtCrowd::updateAgentParameters(dtCrowd *this,int param_1,dtCrowdAgentParams *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    lVar1 = *(long *)(this + 8) + (long)param_1 * 0x270;
    *(undefined8 *)(lVar1 + 0x200) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(lVar1 + 0x1e8) = uVar3;
    *(undefined8 *)(lVar1 + 0x1e0) = uVar2;
    *(undefined8 *)(lVar1 + 0x1f8) = uVar5;
    *(undefined8 *)(lVar1 + 0x1f0) = uVar4;
  }
  return;
}

