
undefined8 FUN_00a10428(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (3 < param_4) {
    uVar1 = (uint)*param_3 << 0x18 | (uint)param_3[1] << 0x10;
    uVar2 = 0xffffffff;
    if ((uVar1 >> 0x10 < 0x11) && ((uVar1 | (uint)param_3[2] << 8 & 0xfffff800) != 0xd800)) {
      uVar2 = 4;
      *param_2 = uVar1 | (uint)param_3[2] << 8 | (uint)param_3[3];
    }
                    /* catch() { ... } // from try @ 00a102a8 with catch @ 00a10478 */
    return uVar2;
  }
  return 0xfffffffe;
}

