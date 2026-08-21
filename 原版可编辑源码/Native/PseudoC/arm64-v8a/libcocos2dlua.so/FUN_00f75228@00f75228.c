
void FUN_00f75228(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  *param_1 = &PTR_FUN_017204c0;
  cocos2d::Data::~Data((Data *)(param_1 + 0xe));
  plVar1 = (long *)param_1[0xc];
  if (param_1 + 8 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00f75274;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00f75274:
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[6]);
  return;
}

