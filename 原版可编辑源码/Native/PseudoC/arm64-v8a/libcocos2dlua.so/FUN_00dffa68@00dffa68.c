
void FUN_00dffa68(undefined8 *param_1)

{
  byte bVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 2) == '\0') goto LAB_00dffab0;
  if ((*(byte *)((long)pvVar2 + 0x58) & 1) == 0) {
    if ((*(byte *)((long)pvVar2 + 0x40) & 1) == 0) goto LAB_00dffa98;
LAB_00dffadc:
    operator_delete(*(void **)((long)pvVar2 + 0x50));
    if ((*(byte *)((long)pvVar2 + 0x28) & 1) != 0) goto LAB_00dffaec;
LAB_00dffaa0:
    bVar1 = *(byte *)((long)pvVar2 + 0x10);
  }
  else {
    operator_delete(*(void **)((long)pvVar2 + 0x68));
    if ((*(byte *)((long)pvVar2 + 0x40) & 1) != 0) goto LAB_00dffadc;
LAB_00dffa98:
    if ((*(byte *)((long)pvVar2 + 0x28) & 1) == 0) goto LAB_00dffaa0;
LAB_00dffaec:
    operator_delete(*(void **)((long)pvVar2 + 0x38));
    bVar1 = *(byte *)((long)pvVar2 + 0x10);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)((long)pvVar2 + 0x20));
  }
LAB_00dffab0:
  operator_delete(pvVar2);
  return;
}

