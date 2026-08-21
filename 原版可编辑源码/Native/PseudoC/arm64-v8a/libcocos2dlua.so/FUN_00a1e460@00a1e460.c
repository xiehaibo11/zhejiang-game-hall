
undefined8 FUN_00a1e460(long param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  
  uVar5 = *(uint *)(param_1 + 0x28);
                    /* try { // try from 00a1e47c to 00b1e48f has its CatchHandler @ 00a1e4d4 */
  if (uVar5 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *param_2 = uVar5;
    return 0;
                    /* try { // try from 00a1e490 to 00b1e4ef has its CatchHandler @ 00a1e3b0 */
  }
  uVar5 = (uint)*param_3;
  if (-1 < (char)*param_3) {
    *param_2 = uVar5;
    return 1;
  }
  if ((uVar5 < 0xa1) || (uVar5 == 0xff)) goto LAB_00a1e5b8;
  if (param_4 < 2) {
LAB_00a1e7bc:
    uVar2 = 0xfffffffe;
  }
  else {
    bVar1 = param_3[1];
                    /* catch() { ... } // from try @ 00a1e434 with catch @ 00a1e4d0 */
    uVar4 = bVar1 - 0x40;
                    /* catch() { ... } // from try @ 00a1e400 with catch @ 00a1e4d4
                       catch() { ... } // from try @ 00a1e47c with catch @ 00a1e4d4 */
    uVar3 = (uint)bVar1;
    if ((uVar4 < 0x3f) || ((0xa0 < bVar1 && (uVar3 != 0xff)))) {
      if (((uVar5 == 199) ||
          ((uVar5 == 0xc6 && 0xa0 < uVar3 ||
           ((0x26 < (uVar5 + 0x5f & 0xff) && (0x30 < (uVar5 + 0x37 & 0xff))))))) ||
         ((bVar1 < 0xa1 && (0x3e < (uVar4 & 0xff))))) goto LAB_00a1e5b8;
      iVar6 = 0x62;
      if (bVar1 < 0xa1) {
        iVar6 = 0x40;
      }
      iVar6 = (uVar3 - iVar6) + uVar5 * 0x9d;
      uVar4 = iVar6 - 0x62bd;
                    /* try { // try from 00a1e568 to 00b1e5b7 has its CatchHandler @ 00a1e568
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e568 with catch @ 00a1e568
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e5f0 with catch @ 00a1e568
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e644 with catch @ 00a1e568
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e6ac with catch @ 00a1e568
                        */
      if (0x310 < uVar4 >> 3) {
        if (uVar4 >> 2 < 0xd9b) {
          uVar4 = iVar6 - 0x7b45;
          puVar7 = &DAT_0138771e;
          goto LAB_00a1e5a4;
        }
        goto LAB_00a1e5b8;
      }
      if (0x17e8 < uVar4) goto LAB_00a1e5b8;
      puVar7 = &DAT_0138474c;
LAB_00a1e5a4:
      uVar3 = (uint)*(ushort *)(puVar7 + (ulong)uVar4 * 2);
      if (*(ushort *)(puVar7 + (ulong)uVar4 * 2) == 0xfffd) goto LAB_00a1e5b8;
LAB_00a1e83c:
      *param_2 = uVar3;
    }
    else {
LAB_00a1e5b8:
                    /* try { // try from 00a1e5b8 to 00b1e5ef has its CatchHandler @ 00a1e694 */
      uVar2 = FUN_00a20a78(param_2,param_3,param_4);
      if ((int)uVar2 != -1) {
        return uVar2;
      }
      bVar1 = *param_3;
      uVar4 = (uint)bVar1;
      if ((bVar1 == 0x87) || (bVar1 == 0x8d)) {
        uVar3 = uVar4;
        if (1 < param_4) goto LAB_00a1e680;
        goto LAB_00a1e7bc;
      }
      if (uVar4 == 0x8c) {
                    /* try { // try from 00a1e5f0 to 00b1e617 has its CatchHandler @ 00a1e568 */
        if (param_4 < 2) goto LAB_00a1e7bc;
        bVar1 = param_3[1];
        uVar8 = (uint)bVar1;
        if ((bVar1 - 0x40 < 0x3f) || ((uVar3 = 0x8c, 0xa0 < bVar1 && (uVar8 != 0xff)))) {
                    /* try { // try from 00a1e618 to 00b1e62b has its CatchHandler @ 00a1e694 */
          iVar6 = 0x62;
          if (uVar8 < 0xa1) {
            iVar6 = 0x40;
          }
                    /* try { // try from 00a1e640 to 00b1e643 has its CatchHandler @ 00a1e6dc */
                    /* try { // try from 00a1e644 to 00b1e6a7 has its CatchHandler @ 00a1e568 */
          if ((0x7d6 < (uVar8 - iVar6) + 0x75c) ||
             (uVar3 = *(ushort *)(&DAT_0139de42 + (ulong)(uVar8 - iVar6) * 2) & 0xff |
                      *(uint *)(&DAT_0139df38 +
                               ((ulong)(*(ushort *)(&DAT_0139de42 + (ulong)(uVar8 - iVar6) * 2) >> 6
                                       ) & 0x3fc)), uVar3 == 0xfffd)) {
            uVar3 = 0x8c;
            goto LAB_00a1e680;
          }
LAB_00a1e800:
          *param_2 = uVar3;
          goto LAB_00a1e840;
        }
LAB_00a1e680:
        bVar1 = param_3[1];
        uVar8 = (uint)bVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1e5b8 with catch @ 00a1e694
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1e618 with catch @ 00a1e694
                        */
        if ((bVar1 - 0x40 < 0x3f) || ((0xa0 < bVar1 && (uVar8 != 0xff)))) {
                    /* try { // try from 00a1e6a8 to 00b1e6ab has its CatchHandler @ 00a1e6d8 */
                    /* try { // try from 00a1e6ac to 00b1e6ef has its CatchHandler @ 00a1e568 */
          iVar6 = 0x62;
          if (uVar8 < 0xa1) {
            iVar6 = 0x40;
          }
          iVar6 = (uVar8 - iVar6) + uVar3 * 0x9d;
          uVar3 = iVar6 - 0x4e80;
          if (uVar3 < 0x75c) {
            if (uVar3 < 0x485) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1e6a8 with catch @ 00a1e6d8
                        */
              uVar3 = iVar6 - 0x52cb;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1e640 with catch @ 00a1e6dc
                        */
              puVar7 = &DAT_0139f070;
LAB_00a1e6f8:
              uVar3 = *(ushort *)(puVar7 + (ulong)uVar3 * 2) & 0xff |
                      *(uint *)(&DAT_0139f0e4 +
                               ((ulong)(*(ushort *)(puVar7 + (ulong)uVar3 * 2) >> 6) & 0x3fc));
              if (uVar3 != 0xfffd) goto LAB_00a1e800;
            }
          }
          else if (uVar3 < 0x819) {
            uVar3 = iVar6 - 0x55dc;
            puVar7 = &DAT_0139f21c;
            goto LAB_00a1e6f8;
          }
        }
        if (uVar4 == 0x87) {
          if (param_4 < 2) goto LAB_00a1e7bc;
          bVar1 = param_3[1];
          uVar4 = (uint)bVar1;
          if ((bVar1 - 0x40 < 0x3f) || ((0xa0 < bVar1 && (uVar4 != 0xff)))) {
            iVar6 = 0x62;
            if (uVar4 < 0xa1) {
              iVar6 = 0x40;
            }
            if (((uVar4 - iVar6) + 1099 < 0x4c9) &&
               (uVar3 = *(ushort *)(&DAT_013a021c + (ulong)(uVar4 - iVar6) * 2) & 0xff |
                        *(uint *)(&DAT_013a0318 +
                                 ((ulong)(*(ushort *)(&DAT_013a021c + (ulong)(uVar4 - iVar6) * 2) >>
                                         6) & 0x3fc)), uVar3 != 0xfffd)) goto LAB_00a1e83c;
          }
        }
      }
      if (uVar5 != 0x88) {
        return 0xffffffff;
      }
      if (param_4 < 2) goto LAB_00a1e7bc;
      bVar1 = param_3[1];
      uVar5 = (uint)bVar1;
      if (bVar1 < 0xa3) {
        if ((uVar5 != 0x62) && (uVar5 != 100)) {
          return 0xffffffff;
        }
      }
      else if ((uVar5 != 0xa5) && (uVar5 != 0xa3)) {
        return 0xffffffff;
      }
      *param_2 = (bVar1 >> 1 & 0x7c) + 0x9a;
      *(uint *)(param_1 + 0x28) = (uVar5 & 6) * 4 + 0x2fc;
    }
LAB_00a1e840:
    uVar2 = 2;
  }
  return uVar2;
}

