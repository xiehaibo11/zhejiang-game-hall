
void FUN_00ceae20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  
  puVar1 = (void *)param_1[2];
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    puVar2 = (void *)puVar1[5];
    while (puVar2 != (void *)0x0) {
      pvVar3 = (void *)*puVar2;
      cocos2d::Value::~Value((Value *)(puVar2 + 5));
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = pvVar3;
    }
    pvVar3 = (void *)puVar1[3];
    puVar1[3] = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
    return;
  }
  return;
}

