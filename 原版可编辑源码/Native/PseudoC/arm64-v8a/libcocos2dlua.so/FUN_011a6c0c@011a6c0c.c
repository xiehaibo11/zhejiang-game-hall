
void FUN_011a6c0c(long param_1)

{
  uint uVar1;
  long lVar2;
  
  **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(*(long *)(param_1 + 0x70) + 8) = *(undefined8 *)(param_1 + 0x78);
  uVar1 = *(uint *)(param_1 + 0x58);
  if (((uVar1 >> 2 & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xfffffffb, (uVar1 >> 3 & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 + 0x170 != *(long *)(lVar2 + 0x170)) {
    return;
  }
  uv_signal_stop(lVar2 + 0x268);
  return;
}

