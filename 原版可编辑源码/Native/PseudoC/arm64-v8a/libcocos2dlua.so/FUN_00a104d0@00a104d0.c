
undefined8 FUN_00a104d0(undefined8 param_1,uint *param_2,uint *param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (3 < param_4) {
    uVar1 = *param_3;
    uVar2 = 0xffffffff;
                    /* catch() { ... } // from try @ 00a10258 with catch @ 00a104e0 */
    if ((uVar1 >> 0x10 < 0x11) && ((uVar1 & 0xfffff800) != 0xd800)) {
      uVar2 = 4;
      *param_2 = uVar1;
    }
    return uVar2;
  }
  return 0xfffffffe;
}

