
/* cocostudio::timeline::EventFrame::onEnter(cocostudio::timeline::Frame*, int) */

void __thiscall
cocostudio::timeline::EventFrame::onEnter(EventFrame *this,Frame *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x24);
  iVar2 = (**(code **)(**(long **)(this + 0x70) + 0xc0))();
  if (((iVar2 <= iVar1) &&
      (iVar1 = *(int *)(this + 0x24), iVar2 = (**(code **)(**(long **)(this + 0x70) + 200))(),
      iVar1 <= iVar2)) && (*(int *)(this + 0x24) <= param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00ca8188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0xa0))(this);
    return;
  }
  return;
}

