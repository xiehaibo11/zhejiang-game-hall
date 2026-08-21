
void FUN_00e6e5b0(void *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)((long)param_1 + 0x70);
  if ((long *)((long)param_1 + 0x50) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00e6e5ec;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00e6e5ec:
  cocos2d::experimental::PcmData::~PcmData((PcmData *)((long)param_1 + 0x20));
  operator_delete(param_1);
  return;
}

