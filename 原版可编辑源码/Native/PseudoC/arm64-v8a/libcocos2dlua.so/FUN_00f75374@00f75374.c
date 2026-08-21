
void FUN_00f75374(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  cocos2d::Data::~Data((Data *)(param_1 + 0x70));
  plVar1 = *(long **)(param_1 + 0x60);
  if ((long *)(param_1 + 0x40) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00f753b8;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00f753b8:
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x30));
  return;
}

