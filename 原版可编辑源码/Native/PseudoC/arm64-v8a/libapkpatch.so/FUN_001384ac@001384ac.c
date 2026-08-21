
void FUN_001384ac(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar4 = *(long *)(param_1 + 0x10) - (long)puVar1;
  while (uVar2 = lVar4 >> 3, 2 < uVar2) {
    operator_delete((void *)*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
    lVar4 = *(long *)(param_1 + 0x10) - (long)puVar1;
  }
  if (uVar2 == 1) {
    uVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    uVar3 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}

