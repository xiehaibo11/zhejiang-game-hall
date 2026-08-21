
long FUN_00e1ed84(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  return ((((long)iVar1 & 0xffU) * 0x1f + (ulong)(byte)((uint)iVar1 >> 8)) * 0x1f +
         (ulong)(byte)((uint)iVar1 >> 0x10)) * 0x1f + (ulong)(byte)((uint)iVar1 >> 0x18);
}

