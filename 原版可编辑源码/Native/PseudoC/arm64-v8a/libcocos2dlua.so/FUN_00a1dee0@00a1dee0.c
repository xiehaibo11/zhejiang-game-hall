
undefined8 FUN_00a1dee0(long param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  
  uVar6 = *(uint *)(param_1 + 0x28);
  if (uVar6 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *param_2 = uVar6;
    return 0;
  }
  uVar6 = (uint)*param_3;
  if (-1 < (char)*param_3) {
    *param_2 = uVar6;
    return 1;
  }
  if ((uVar6 < 0xa1) || (uVar6 == 0xff)) {
LAB_00a1e038:
    uVar2 = FUN_00a20a78(param_2,param_3,param_4);
    if ((int)uVar2 != -1) {
      return uVar2;
    }
    bVar1 = *param_3;
    uVar4 = (uint)bVar1;
                    /* try { // try from 00a1e058 to 00b1e0a7 has its CatchHandler @ 00a1e058
                       catch() { ... } // from try @ 00a1e058 with catch @ 00a1e058
                       catch() { ... } // from try @ 00a1e0f0 with catch @ 00a1e058
                       catch() { ... } // from try @ 00a1e138 with catch @ 00a1e058 */
    if ((bVar1 == 0x87) || (bVar1 == 0x8d)) {
      if (param_4 < 2) {
        return 0xfffffffe;
      }
LAB_00a1e0fc:
      bVar1 = param_3[1];
      uVar3 = (uint)bVar1;
      if ((bVar1 - 0x40 < 0x3f) || ((0xa0 < bVar1 && (uVar3 != 0xff)))) {
                    /* try { // try from 00a1e124 to 00b1e137 has its CatchHandler @ 00a1e17c */
        iVar5 = 0x62;
        if (uVar3 < 0xa1) {
          iVar5 = 0x40;
        }
        iVar5 = (uVar3 - iVar5) + uVar4 * 0x9d;
                    /* try { // try from 00a1e138 to 00b1e197 has its CatchHandler @ 00a1e058 */
        uVar4 = iVar5 - 0x4e80;
        if (uVar4 < 0x75c) {
          if (uVar4 < 0x485) {
            uVar4 = iVar5 - 0x52cb;
            puVar7 = &DAT_0139f070;
LAB_00a1e174:
                    /* catch() { ... } // from try @ 00a1e0dc with catch @ 00a1e178 */
                    /* catch() { ... } // from try @ 00a1e0a8 with catch @ 00a1e17c
                       catch() { ... } // from try @ 00a1e124 with catch @ 00a1e17c */
            uVar3 = *(ushort *)(puVar7 + (ulong)uVar4 * 2) & 0xff |
                    *(uint *)(&DAT_0139f0e4 +
                             ((ulong)(*(ushort *)(puVar7 + (ulong)uVar4 * 2) >> 6) & 0x3fc));
            if (uVar3 != 0xfffd) goto LAB_00a1e1f8;
          }
        }
        else if (uVar4 < 0x819) {
          uVar4 = iVar5 - 0x55dc;
          puVar7 = &DAT_0139f21c;
          goto LAB_00a1e174;
        }
      }
    }
    else if (bVar1 == 0x8c) {
      if (param_4 < 2) {
        return 0xfffffffe;
      }
      bVar1 = param_3[1];
      uVar3 = (uint)bVar1;
      if ((bVar1 - 0x40 < 0x3f) || ((uVar4 = 0x8c, 0xa0 < bVar1 && (uVar3 != 0xff)))) {
        iVar5 = 0x62;
        if (uVar3 < 0xa1) {
          iVar5 = 0x40;
        }
                    /* try { // try from 00a1e0a8 to 00b1e0bf has its CatchHandler @ 00a1e17c */
                    /* try { // try from 00a1e0dc to 00b1e0ef has its CatchHandler @ 00a1e178 */
        if (((uVar3 - iVar5) + 0x75c < 0x7d7) &&
           (uVar3 = *(ushort *)(&DAT_0139de42 + (ulong)(uVar3 - iVar5) * 2) & 0xff |
                    *(uint *)(&DAT_0139df38 +
                             ((ulong)(*(ushort *)(&DAT_0139de42 + (ulong)(uVar3 - iVar5) * 2) >> 6)
                             & 0x3fc)), uVar3 != 0xfffd)) goto LAB_00a1e1f8;
        uVar4 = 0x8c;
                    /* try { // try from 00a1e0f0 to 00b1e123 has its CatchHandler @ 00a1e058 */
      }
      goto LAB_00a1e0fc;
    }
    if (uVar6 != 0x88) {
      return 0xffffffff;
    }
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    bVar1 = param_3[1];
    uVar6 = (uint)bVar1;
    if (bVar1 < 0xa3) {
      if ((uVar6 != 0x62) && (uVar6 != 100)) {
        return 0xffffffff;
      }
    }
    else if ((uVar6 != 0xa5) && (uVar6 != 0xa3)) {
      return 0xffffffff;
    }
    *param_2 = (bVar1 >> 1 & 0x7c) + 0x9a;
    *(uint *)(param_1 + 0x28) = (uVar6 & 6) * 4 + 0x2fc;
  }
  else {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    bVar1 = param_3[1];
    uVar4 = bVar1 - 0x40;
    uVar3 = (uint)bVar1;
    if ((0x3e < uVar4) && ((bVar1 < 0xa1 || (uVar3 == 0xff)))) goto LAB_00a1e038;
    if (((uVar6 == 199) ||
        ((uVar6 == 0xc6 && 0xa0 < uVar3 ||
         ((0x26 < (uVar6 + 0x5f & 0xff) && (0x30 < (uVar6 + 0x37 & 0xff))))))) ||
       ((bVar1 < 0xa1 && (0x3e < (uVar4 & 0xff))))) goto LAB_00a1e038;
    iVar5 = 0x62;
    if (bVar1 < 0xa1) {
      iVar5 = 0x40;
    }
    iVar5 = (uVar3 - iVar5) + uVar6 * 0x9d;
    uVar4 = iVar5 - 0x62bd;
    if (0x310 < uVar4 >> 3) {
      if (uVar4 >> 2 < 0xd9b) {
        uVar4 = iVar5 - 0x7b45;
        puVar7 = &DAT_0138771e;
        goto LAB_00a1e024;
      }
      goto LAB_00a1e038;
    }
    if (0x17e8 < uVar4) goto LAB_00a1e038;
    puVar7 = &DAT_0138474c;
LAB_00a1e024:
    uVar3 = (uint)*(ushort *)(puVar7 + (ulong)uVar4 * 2);
    if (*(ushort *)(puVar7 + (ulong)uVar4 * 2) == 0xfffd) goto LAB_00a1e038;
LAB_00a1e1f8:
    *param_2 = uVar3;
  }
  return 2;
}

