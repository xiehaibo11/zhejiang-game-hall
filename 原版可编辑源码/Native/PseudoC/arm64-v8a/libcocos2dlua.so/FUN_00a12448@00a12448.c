
undefined8 FUN_00a12448(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    if (uVar1 - 0x80 == 0x18) {
      return 0xffffffff;
    }
                    /* catch() { ... } // from try @ 00a1231c with catch @ 00a12468 */
    uVar1 = (uint)*(ushort *)(&DAT_012fe854 + (long)(int)(uVar1 - 0x80) * 2);
  }
  *param_2 = uVar1;
  return 1;
}

