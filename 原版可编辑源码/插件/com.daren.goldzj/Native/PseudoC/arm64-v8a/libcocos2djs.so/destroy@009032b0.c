
/* se::NonRefNativePtrCreatedByCtorMap::destroy() */

void se::NonRefNativePtrCreatedByCtorMap::destroy(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  puVar2 = __nonRefNativeObjectCreatedByCtorMap;
  if (__nonRefNativeObjectCreatedByCtorMap != (undefined8 *)0x0) {
    puVar1 = (void *)__nonRefNativeObjectCreatedByCtorMap[2];
    while (puVar1 != (void *)0x0) {
      pvVar3 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar3;
    }
    pvVar3 = (void *)*puVar2;
    *puVar2 = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    operator_delete(puVar2);
    __nonRefNativeObjectCreatedByCtorMap = (undefined8 *)0x0;
  }
  return;
}

