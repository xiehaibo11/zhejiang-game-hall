
void FUN_00e6e3dc(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = (long *)param_1[0xe];
  *param_1 = &PTR_FUN_016f3c48;
  if (param_1 + 10 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00e6e424;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00e6e424:
  cocos2d::experimental::PcmData::~PcmData((PcmData *)(param_1 + 4));
  operator_delete(param_1);
  return;
}

