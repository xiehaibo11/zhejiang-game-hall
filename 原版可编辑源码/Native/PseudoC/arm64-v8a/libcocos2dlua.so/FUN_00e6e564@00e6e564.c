
void FUN_00e6e564(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)(param_1 + 0x70);
  if ((long *)(param_1 + 0x50) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00e6e5a0;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00e6e5a0:
  cocos2d::experimental::PcmData::~PcmData((PcmData *)(param_1 + 0x20));
  return;
}

