
undefined8 FUN_00a20bf4(ushort *param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  
  if (param_2 < 0x2d0) {
    uVar1 = param_2 >> 4;
    puVar3 = &DAT_01397216;
  }
  else {
                    /* try { // try from 00a20c0c to 00b20c7b has its CatchHandler @ 00a20b60 */
    if (param_2 - 0x400 < 0x60) {
      uVar1 = (param_2 >> 4) - 0x40;
      puVar3 = &UNK_013972ca;
    }
    else if (param_2 - 0x1e00 < 0xd0) {
      uVar1 = (param_2 >> 4) - 0x1e0;
      puVar3 = &UNK_013972e2;
    }
    else if (param_2 - 0x2100 < 0xf0) {
      uVar1 = (param_2 >> 4) - 0x210;
      puVar3 = &UNK_01397316;
    }
    else {
                    /* try { // try from 00a20c7c to 00b20c83 has its CatchHandler @ 00a20c94 */
      if (param_2 - 0x2300 < 0x280) {
                    /* try { // try from 00a20c84 to 00b20cb3 has its CatchHandler @ 00a20b60 */
                    /* catch() { ... } // from try @ 00a20bcc with catch @ 00a20c8c */
        uVar1 = (param_2 >> 4) - 0x230;
                    /* catch() { ... } // from try @ 00a20bb8 with catch @ 00a20c90 */
        puVar3 = &UNK_01397352;
                    /* catch() { ... } // from try @ 00a20be0 with catch @ 00a20c94
                       catch() { ... } // from try @ 00a20c7c with catch @ 00a20c94 */
      }
      else {
                    /* catch() { ... } // from try @ 00a20b9c with catch @ 00a20c98 */
        if (param_2 >> 6 == 0x9c) {
          uVar1 = (param_2 >> 4) - 0x270;
          puVar3 = &LAB_012fc684;
        }
        else if (param_2 - 0x2e00 < 0x440) {
          uVar1 = (param_2 >> 4) - 0x2e0;
          puVar3 = &UNK_013973f2;
        }
        else if (param_2 - 0x3400 >> 6 < 0x1af) {
          uVar1 = (param_2 >> 4) - 0x340;
          puVar3 = &UNK_01397502;
        }
        else {
          uVar1 = param_2 >> 4;
          if (uVar1 == 0xf90) {
            puVar2 = (ushort *)&UNK_0138ca6a;
            goto LAB_00a20dd0;
          }
          if (param_2 - 0xff00 < 0xf0) {
            uVar1 = uVar1 - 0xff0;
            puVar3 = &UNK_01398ff2;
          }
          else if (param_2 - 0x20000 >> 4 < 0x91f) {
            uVar1 = uVar1 - 0x2000;
            puVar3 = &UNK_0139902e;
          }
          else if (param_2 >> 9 == 0x14a) {
            uVar1 = (param_2 >> 4) - 0x2940;
            puVar3 = &UNK_0139b4aa;
          }
          else if (param_2 - 0x29700 < 0xfb0) {
            uVar1 = (param_2 >> 4) - 0x2970;
            puVar3 = &UNK_0139b52a;
          }
          else {
            if (0x1df < param_2 - 0x2f800) {
              return 0xffffffff;
            }
            uVar1 = (param_2 >> 4) - 0x2f80;
            puVar3 = &UNK_0139b916;
          }
        }
      }
    }
  }
  puVar2 = (ushort *)(puVar3 + (ulong)uVar1 * 4);
LAB_00a20dd0:
  uVar1 = 1 << (ulong)(param_2 & 0xf);
  if ((uVar1 & puVar2[1]) == 0) {
    return 0xffffffff;
  }
  uVar1 = (uint)puVar2[1] & uVar1 - 1;
  uVar1 = (uVar1 >> 1 & 0x55555555) + (uVar1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0xffffff0f) + (uVar1 & 0xf0f0f0f);
  *param_1 = *(ushort *)
              (&DAT_0139b98e + ((ulong)*puVar2 + (ulong)((uVar1 & 0xf) + (uVar1 >> 8))) * 2) >> 8 |
             *(ushort *)
              (&DAT_0139b98e + ((ulong)*puVar2 + (ulong)((uVar1 & 0xf) + (uVar1 >> 8))) * 2) << 8;
  return 2;
}

