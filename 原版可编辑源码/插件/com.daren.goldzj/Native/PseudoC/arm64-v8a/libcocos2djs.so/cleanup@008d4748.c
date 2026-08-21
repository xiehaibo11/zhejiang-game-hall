
/* JSBClassType::cleanup() */

void JSBClassType::cleanup(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  plVar2 = __jsbClassTypeMap;
  if (__jsbClassTypeMap[3] != 0) {
    puVar1 = (void *)__jsbClassTypeMap[2];
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    lVar3 = plVar2[1];
    plVar2[2] = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*plVar2 + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    plVar2[3] = 0;
  }
  return;
}

