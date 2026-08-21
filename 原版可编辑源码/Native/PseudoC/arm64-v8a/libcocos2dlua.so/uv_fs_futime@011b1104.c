
undefined4
uv_fs_futime(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5,
            long param_6)

{
  if (param_4 == 0) {
    return 0xffffffea;
  }
  *(undefined8 *)(param_4 + 0x60) = 0;
  *(undefined8 *)(param_4 + 0x68) = 0;
  *(long *)(param_4 + 0x50) = param_6;
  *(undefined8 *)(param_4 + 0x58) = 0;
  *(undefined8 *)(param_4 + 0x110) = 0;
  *(undefined8 *)(param_4 + 0x128) = 0;
  *(long *)(param_4 + 0x48) = param_3;
  *(undefined4 *)(param_4 + 0x118) = param_5;
  *(undefined4 *)(param_4 + 8) = 6;
  *(undefined4 *)(param_4 + 0x40) = 0xb;
  *(undefined8 *)(param_4 + 0x140) = param_1;
  *(undefined8 *)(param_4 + 0x148) = param_2;
  if (param_6 != 0) {
    *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 1;
    FUN_0119e4dc(param_3,param_4 + 0x150,FUN_011af9c4,FUN_011b09c0);
    return 0;
  }
  FUN_011af9c4(param_4 + 0x150);
  return *(undefined4 *)(param_4 + 0x58);
}

