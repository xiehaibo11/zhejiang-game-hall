
void FUN_00d9ed10(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0x1c0) < 2) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0x1c8) + 0xc);
    if (*(int *)(param_1 + 0x1b0) == 1) {
      puVar1 = (undefined4 *)(*(long *)(param_1 + 0x1c8) + 0x4c);
    }
    uVar3 = *puVar1;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)(lVar2 + 0x30) = uVar3;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  return;
}

