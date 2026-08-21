
void FUN_00f75298(undefined8 *param_1)

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
    if (plVar1 == (long *)0x0) goto LAB_00f752e4;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00f752e4:
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  operator_delete(param_1);
  return;
}

