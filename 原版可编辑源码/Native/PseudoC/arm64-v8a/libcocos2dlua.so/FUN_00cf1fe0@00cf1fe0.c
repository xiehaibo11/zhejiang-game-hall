
void FUN_00cf1fe0(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      puVar1 = *(void **)((long)pvVar3 + 0x28);
      while (puVar1 != (void *)0x0) {
        pvVar2 = (void *)*puVar1;
        cocos2d::Value::~Value((Value *)(puVar1 + 5));
        if ((*(byte *)(puVar1 + 2) & 1) != 0) {
          operator_delete((void *)puVar1[4]);
        }
        operator_delete(puVar1);
        puVar1 = pvVar2;
      }
      pvVar2 = *(void **)((long)pvVar3 + 0x18);
      *(undefined8 *)((long)pvVar3 + 0x18) = 0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
    }
    operator_delete(pvVar3);
    return;
  }
  return;
}

