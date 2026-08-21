
undefined8 FUN_00a149a4(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    if (uVar1 - 0x80 == 0x18) {
      return 0xffffffff;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a14848 with catch @ 00a149c4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a14ad0 with catch @ 00a149c8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a14b4c with catch @ 00a149c8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a14b5c with catch @ 00a149c8
                        */
    uVar1 = (uint)*(ushort *)(&DAT_013026b6 + (long)(int)(uVar1 - 0x80) * 2);
  }
  *param_2 = uVar1;
  return 1;
}

