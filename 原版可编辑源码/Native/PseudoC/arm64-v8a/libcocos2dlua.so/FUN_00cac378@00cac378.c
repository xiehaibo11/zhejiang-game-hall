
void FUN_00cac378(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      puVar2 = *(undefined8 **)((long)pvVar1 + 0x28);
      puVar3 = *(undefined8 **)((long)pvVar1 + 0x30);
      if (puVar2 != puVar3) {
        do {
          cocos2d::Ref::release((Ref *)*puVar2);
          puVar2 = puVar2 + 1;
        } while (puVar3 != puVar2);
        puVar2 = *(undefined8 **)((long)pvVar1 + 0x28);
      }
      *(undefined8 **)((long)pvVar1 + 0x30) = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 **)((long)pvVar1 + 0x30) = puVar2;
        operator_delete(puVar2);
      }
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

