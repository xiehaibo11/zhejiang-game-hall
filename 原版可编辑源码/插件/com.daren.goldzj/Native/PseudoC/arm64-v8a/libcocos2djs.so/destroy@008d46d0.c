
/* JSBClassType::destroy() */

void JSBClassType::destroy(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  puVar2 = __jsbClassTypeMap;
  if (__jsbClassTypeMap != (undefined8 *)0x0) {
    puVar1 = (void *)__jsbClassTypeMap[2];
    while (puVar1 != (void *)0x0) {
      pvVar3 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar3;
    }
    pvVar3 = (void *)*puVar2;
    *puVar2 = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    operator_delete(puVar2);
    __jsbClassTypeMap = (undefined8 *)0x0;
  }
  return;
}

