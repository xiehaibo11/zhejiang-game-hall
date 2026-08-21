
void FUN_00e68178(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  
  puVar3 = (void *)param_1[2];
  while (puVar3 != (void *)0x0) {
    pvVar4 = (void *)*puVar3;
    if (puVar3[7] != 0) {
      lVar1 = puVar3[5];
      plVar2 = (long *)puVar3[6];
      lVar5 = *plVar2;
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar1 + 8);
      **(long **)(lVar1 + 8) = lVar5;
      puVar3[7] = 0;
      while (plVar2 != puVar3 + 5) {
        plVar6 = (long *)plVar2[1];
        operator_delete(plVar2);
        plVar2 = plVar6;
      }
    }
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    puVar3 = pvVar4;
  }
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar4);
  return;
}

