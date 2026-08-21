
undefined8 uv_poll_stop(long param_1)

{
  uint uVar1;
  
  FUN_011a37d8(*(undefined8 *)(param_1 + 8),param_1 + 0x68,0x2007);
  uVar1 = *(uint *)(param_1 + 0x58);
  if (((uVar1 >> 2 & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xfffffffb, (uVar1 >> 3 & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  FUN_011abfdc(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x98));
  return 0;
}

