
undefined8 uv_poll_start(long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  
  FUN_011a37d8(*(undefined8 *)(param_1 + 8),param_1 + 0x68,0x2007);
  uVar1 = *(uint *)(param_1 + 0x58);
  if (((uVar1 >> 2 & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xfffffffb, (uVar1 >> 3 & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  FUN_011abfdc(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x98));
  if (param_2 != 0) {
    FUN_011a3688(*(undefined8 *)(param_1 + 8),param_1 + 0x68,
                 param_2 >> 2 & 2 | param_2 & 1 | (param_2 >> 1 & 1) << 2 |
                 (param_2 >> 2 & 1) << 0xd);
    uVar1 = *(uint *)(param_1 + 0x58);
    if (((uVar1 >> 2 & 1) == 0) && (*(uint *)(param_1 + 0x58) = uVar1 | 4, (uVar1 >> 3 & 1) != 0)) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
    }
    *(undefined8 *)(param_1 + 0x60) = param_3;
  }
  return 0;
}

