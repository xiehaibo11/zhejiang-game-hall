
void FT_Stroker_Set(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   long param_5)

{
  if (param_1 != 0) {
    if (param_5 < 0x10001) {
      param_5 = 0x10000;
    }
    *(undefined4 *)(param_1 + 0x54) = param_3;
    *(undefined4 *)(param_1 + 0x58) = param_4;
    *(undefined4 *)(param_1 + 0x5c) = param_4;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
    *(long *)(param_1 + 0x60) = param_5;
    *(undefined8 *)(param_1 + 0x68) = param_2;
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}

