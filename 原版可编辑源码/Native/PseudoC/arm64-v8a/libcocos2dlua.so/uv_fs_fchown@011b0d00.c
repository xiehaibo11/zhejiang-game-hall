
undefined4
uv_fs_fchown(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            long param_6)

{
  if (param_2 == 0) {
    return 0xffffffea;
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(long *)(param_2 + 0x50) = param_6;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(long *)(param_2 + 0x48) = param_1;
  *(undefined4 *)(param_2 + 0x118) = param_3;
  *(undefined4 *)(param_2 + 0x138) = param_4;
  *(undefined4 *)(param_2 + 8) = 6;
  *(undefined4 *)(param_2 + 0x40) = 0x1b;
  *(undefined4 *)(param_2 + 0x13c) = param_5;
  if (param_6 != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    FUN_0119e4dc(param_1,param_2 + 0x150,FUN_011af9c4,FUN_011b09c0);
    return 0;
  }
  FUN_011af9c4(param_2 + 0x150);
  return *(undefined4 *)(param_2 + 0x58);
}

