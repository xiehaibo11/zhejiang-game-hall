
void FUN_00f76d14(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  code *pcVar4;
  
  *param_1 = &PTR_FUN_01720b48;
  puVar1 = (void *)param_1[0x10];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    cocos2d::Value::~Value((Value *)(puVar1 + 5));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)param_1[0xe];
  param_1[0xe] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  plVar3 = (long *)param_1[0xc];
  if (param_1 + 8 == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_00f76dac;
    pcVar4 = *(code **)(*plVar3 + 0x28);
  }
  (*pcVar4)();
LAB_00f76dac:
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  operator_delete(param_1);
  return;
}

