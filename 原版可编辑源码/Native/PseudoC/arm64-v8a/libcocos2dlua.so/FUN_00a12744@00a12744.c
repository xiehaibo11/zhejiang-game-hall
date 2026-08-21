
undefined8 FUN_00a12744(undefined8 param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_3;
  uVar2 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    if (uVar2 < 0xa0) {
                    /* catch() { ... } // from try @ 00a125e8 with catch @ 00a12774 */
      if ((0x9ffe1ffdU >> ((ulong)bVar1 & 0x3f) & 1) == 0) {
        return 0xffffffff;
      }
      uVar2 = (uint)*(ushort *)(&DAT_012febf4 + ((ulong)bVar1 - 0x80) * 2);
    }
    else {
                    /* catch() { ... } // from try @ 00a12610 with catch @ 00a12784 */
      if (0xcf < bVar1) {
        if (bVar1 < 0xe0) {
          uVar2 = (uint)*(ushort *)(&DAT_012fc9b4 + (long)(int)(uVar2 - 0xd0) * 2);
        }
        else if (0xef < uVar2) {
          uVar2 = (uint)*(ushort *)(&DAT_012fc9d4 + (long)(int)(uVar2 - 0xf0) * 2);
        }
      }
    }
  }
  *param_2 = uVar2;
  return 1;
}

