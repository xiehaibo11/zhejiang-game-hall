
void FUN_00c20df8(long param_1,undefined4 param_2,ulong param_3,uint param_4)

{
  long lVar1;
  
  if ((param_4 >> 0x14 & 1) != 0) {
    FUN_00c20d34(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4 >> 0x10 & 0xf);
    return;
  }
  if (3 < (param_4 >> 0x10 & 0xf)) {
    FUN_00c20d34(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4 >> 0x10 & 0xf);
    return;
  }
  lVar1 = FUN_00c1a314(*(undefined8 *)(param_1 + 0x10),(param_3 & 0xffffffff) + 0x10);
  *(short *)(lVar1 + 10) = (short)param_2;
  *(undefined1 *)(lVar1 + 9) = 10;
  return;
}

