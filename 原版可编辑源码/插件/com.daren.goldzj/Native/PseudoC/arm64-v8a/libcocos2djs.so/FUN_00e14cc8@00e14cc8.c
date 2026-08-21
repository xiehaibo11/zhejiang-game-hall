
void FUN_00e14cc8(long param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(long *)(param_1 + 0x128) != 0) {
    puVar1 = (uint *)(*(long *)(param_1 + 0x128) + 8);
    uVar2 = *puVar1;
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0xa8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xb8) + 0x10))();
        puVar1 = (uint *)(*(long *)(param_1 + 0x128) + 8);
        uVar2 = *puVar1;
      }
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *puVar1 = uVar2 & 0xfffffffe;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}

