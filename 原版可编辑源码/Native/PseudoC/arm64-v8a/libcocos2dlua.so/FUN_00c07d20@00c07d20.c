
undefined8 FUN_00c07d20(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  while( true ) {
    lVar2 = 0;
    if (param_2 == 0xffffffff) {
      return 0;
    }
    if (param_2 != 0) {
      lVar2 = (ulong)(param_2 - 1) << 3;
    }
    uVar1 = *(uint *)(*param_1 + lVar2);
    if ((1 < (uVar1 & 0xff) - 0xc) && ((uVar1 >> 8 & 0xff) != 0xff)) break;
    uVar1 = (uint)*(ushort *)(*param_1 + (ulong)param_2 * 8 + 2);
    param_2 = param_2 + (uVar1 - 0x7fff);
    if (uVar1 == 0x7fff) {
      return 0;
    }
  }
  return 1;
}

