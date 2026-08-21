
/* cocostudio::Tween::setBetween(cocostudio::FrameData*, cocostudio::FrameData*, bool) */

void __thiscall
cocostudio::Tween::setBetween(Tween *this,FrameData *param_1,FrameData *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  FrameData *pFVar4;
  code *pcVar5;
  
  iVar1 = *(int *)(param_1 + 0x74);
  iVar2 = *(int *)(param_2 + 0x74);
  if ((iVar1 < 0) && (-1 < iVar2)) {
    (**(code **)(**(long **)(this + 0x68) + 0x10))(*(long **)(this + 0x68),param_2);
    plVar3 = *(long **)(this + 0x78);
    pcVar5 = *(code **)(*plVar3 + 0x18);
  }
  else {
    (**(code **)(**(long **)(this + 0x68) + 0x10))(*(long **)(this + 0x68),param_1);
    plVar3 = *(long **)(this + 0x78);
    pcVar5 = *(code **)(*plVar3 + 0x18);
    pFVar4 = param_1;
    if ((iVar1 < 0) || (-1 < iVar2)) goto LAB_00c3e2e0;
  }
  pFVar4 = param_2;
LAB_00c3e2e0:
  (*pcVar5)(plVar3,pFVar4,param_2,param_3);
  if (param_1[0x70] == (FrameData)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 0x10))(*(long **)(this + 0x60),param_1);
    *(undefined1 *)(*(long *)(this + 0x60) + 0x70) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00c3e330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xf0))(this,param_1);
  return;
}

