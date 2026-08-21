
/* WARNING: Type propagation algorithm not settling */

uint FUN_00a1b69c(long param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ushort *puVar7;
  uint uVar8;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar9;
  
  uVar15 = *(uint *)(param_1 + 0x28);
  uVar16 = 0;
  uVar12 = uVar15 & 0xff;
  uVar13 = uVar15 >> 8 & 0xff;
  uVar14 = uVar15 >> 0x10 & 0xff;
  uVar15 = uVar15 >> 0x18;
  do {
    bVar1 = *param_3;
    if (bVar1 == 0xe) {
      if (2 < uVar13 - 1) goto switchD_00a1b804_default;
      iVar4 = uVar16 + 2;
      param_3 = param_3 + 1;
      uVar12 = 1;
      uVar16 = uVar16 + 1;
      goto joined_r0x00a1b8e0;
    }
    if (bVar1 == 0xf) {
      iVar4 = uVar16 + 2;
      uVar12 = 0;
                    /* catch() { ... } // from try @ 00a1b670 with catch @ 00a1b6e8 */
      uVar16 = uVar16 + 1;
      param_3 = param_3 + 1;
      goto joined_r0x00a1b8e0;
    }
    uVar5 = (uint)bVar1;
    if (uVar5 != 0x1b) {
      uVar8 = (uint)bVar1;
      uVar9 = (uint)bVar1;
      if (uVar12 != 1) {
        if (uVar12 != 0) goto switchD_00a1b9a0_default;
        if (-1 < (char)bVar1) {
          *param_2 = uVar8;
          if ((uVar8 == 0xd) || (uVar9 == 10)) {
            uVar15 = 0;
            uVar14 = 0;
            uVar13 = 0;
          }
          *(uint *)(param_1 + 0x28) = uVar15 << 0x18 | uVar14 << 0x10 | uVar13 << 8;
          return uVar16 + 1;
        }
        goto switchD_00a1b804_default;
      }
      uVar11 = uVar16 + 2;
      if ((ulong)(long)(int)uVar11 <= param_4) {
        if (((char)bVar1 < '\0') || (bVar1 = param_3[1], (char)bVar1 < '\0'))
        goto switchD_00a1b804_default;
        switch(uVar13) {
        case 0:
          goto switchD_00a1b804_default;
        case 1:
          if ((8 < uVar8 - 0x21 && 0x47 < uVar8 - 0x30) || (0x5d < (bVar1 - 0x21 & 0xff)))
          goto switchD_00a1b804_default;
          iVar4 = (uint)bVar1 + uVar8 * 0x5e;
          uVar5 = iVar4 - 0xc3f;
          if (uVar5 < 0x582) {
            if (0x33e < uVar5) goto switchD_00a1b804_default;
            puVar7 = (ushort *)(&DAT_01312c68 + (ulong)uVar5 * 2);
          }
          else {
            if (0xff8 < uVar5 >> 1) goto switchD_00a1b804_default;
            uVar5 = iVar4 - 0x11c1;
            puVar10 = &DAT_013132e6;
LAB_00a1bdac:
            puVar7 = (ushort *)(puVar10 + (ulong)uVar5 * 2);
          }
LAB_00a1bdb0:
          uVar5 = (uint)*puVar7;
                    /* try { // try from 00a1bdb4 to 00b1be03 has its CatchHandler @ 00a1bb9c */
          goto LAB_00a1be34;
        case 2:
                    /* try { // try from 00a1bd5c to 00b1bd6b has its CatchHandler @ 00a1bdd8 */
          if ((((6 < uVar5 - 0x21) && (uVar5 != 0x42)) && (0x39 < uVar9 - 0x44)) ||
             (0x5d < bVar1 - 0x21)) goto switchD_00a1b804_default;
          iVar4 = (uint)bVar1 + uVar9 * 0x5e;
          uVar5 = iVar4 - 0xc3f;
          if (0xc1d < uVar5) {
            if (uVar5 < 0xcda) {
              if (0xc3f < uVar5) goto switchD_00a1b804_default;
              uVar5 = iVar4 - 0x185d;
              puVar10 = &DAT_0133e7c2;
            }
            else {
              if (0x21f2 < uVar5) goto switchD_00a1b804_default;
              uVar5 = iVar4 - 0x1919;
                    /* try { // try from 00a1bda4 to 00b1bdb3 has its CatchHandler @ 00a1bdc8 */
              puVar10 = &DAT_0133e806;
            }
            goto LAB_00a1bdac;
          }
          if (uVar5 < 500) {
            puVar7 = (ushort *)(&DAT_0133e3da + (ulong)uVar5 * 2);
            goto LAB_00a1bdb0;
          }
          if (iVar4 == 0xe7a) {
            uVar5 = 0x4ea0;
          }
          else if (iVar4 == 0xe86) {
            uVar5 = 0x52f9;
          }
          else {
                    /* try { // try from 00a1bd80 to 00b1bd8f has its CatchHandler @ 00a1bdd0 */
            if (iVar4 != 0xe81) goto switchD_00a1b804_default;
            uVar5 = 0x51ab;
          }
          break;
        case 3:
          iVar4 = FUN_00a15a1c(param_1,param_2,param_3,2);
          if (iVar4 == -1) goto switchD_00a1b804_default;
          if (iVar4 != 2) goto switchD_00a1b9a0_default;
          goto LAB_00a1be88;
        default:
switchD_00a1b9a0_default:
                    /* WARNING: Subroutine does not return */
          abort();
        }
LAB_00a1be84:
        *param_2 = uVar5;
LAB_00a1be88:
                    /* try { // try from 00a1be98 to 00b1beb3 has its CatchHandler @ 00a1bf10 */
        *(uint *)(param_1 + 0x28) = uVar14 << 0x10 | uVar15 << 0x18 | uVar13 << 8 | uVar12;
        return uVar11;
      }
      break;
    }
    uVar11 = uVar16 + 4;
    if (param_4 < (ulong)(long)(int)uVar11) break;
    bVar1 = param_3[1];
    if (bVar1 != 0x24) {
      if (bVar1 == 0x4e) {
        if (uVar14 == 0) goto switchD_00a1b804_default;
        if (uVar14 != 1) goto switchD_00a1b9a0_default;
        bVar1 = param_3[2];
        if ((((char)bVar1 < '\0') || (bVar3 = param_3[3], (char)bVar3 < '\0')) ||
           ((0x51 < bVar1 - 0x21 ||
            ((0x5d < (bVar3 - 0x21 & 0xff) ||
             (uVar5 = ((uint)bVar3 + (uint)bVar1 * 0x5e) - 0xc3f, 0xef0 < uVar5 >> 1))))))
        goto switchD_00a1b804_default;
        uVar5 = (uint)*(ushort *)(&DAT_0133a816 + (ulong)uVar5 * 2);
      }
      else {
        if (bVar1 != 0x4f) goto switchD_00a1b804_default;
        switch(uVar15) {
        case 0:
          goto switchD_00a1b804_default;
        case 1:
          bVar1 = param_3[2];
          if (((((char)bVar1 < '\0') || (bVar3 = param_3[3], (char)bVar3 < '\0')) ||
              (0x41 < bVar1 - 0x21 && (bVar1 & 0xfc) != 100)) || (0x5d < (bVar3 - 0x21 & 0xff)))
          goto switchD_00a1b804_default;
          iVar4 = (uint)bVar3 + (uint)bVar1 * 0x5e;
          uVar5 = iVar4 - 0xc3f;
          if (uVar5 >> 1 < 0xc4d) {
            if (0x600 < uVar5 >> 2) goto switchD_00a1b804_default;
            puVar7 = (ushort *)(&DAT_0136e49a + (ulong)uVar5 * 2);
          }
          else {
            if (0xcde < uVar5 >> 1) goto switchD_00a1b804_default;
                    /* catch() { ... } // from try @ 00a1bda4 with catch @ 00a1bdc8 */
                    /* catch() { ... } // from try @ 00a1bce8 with catch @ 00a1bdcc */
                    /* catch() { ... } // from try @ 00a1bd80 with catch @ 00a1bdd0 */
            puVar7 = (ushort *)(&DAT_013716c4 + (ulong)(iVar4 - 0x24d9) * 2);
          }
                    /* catch() { ... } // from try @ 00a1bca4 with catch @ 00a1bdd4 */
          uVar6 = (ulong)*puVar7;
                    /* catch() { ... } // from try @ 00a1bd5c with catch @ 00a1bdd8 */
                    /* catch() { ... } // from try @ 00a1bcc4 with catch @ 00a1bddc */
          puVar10 = &DAT_013714a4;
          break;
        case 2:
          bVar1 = param_3[2];
                    /* try { // try from 00a1bb9c to 00b1bc0b has its CatchHandler @ 00a1bb9c
                       catch() { ... } // from try @ 00a1bb9c with catch @ 00a1bb9c
                       catch() { ... } // from try @ 00a1bc50 with catch @ 00a1bb9c
                       catch() { ... } // from try @ 00a1bdb4 with catch @ 00a1bb9c */
          if ((((char)bVar1 < '\0') || (bVar3 = param_3[3], (char)bVar3 < '\0')) ||
             ((0x4d < bVar1 - 0x21 || (0x5d < (bVar3 - 0x21 & 0xff)))))
          goto switchD_00a1b804_default;
          iVar4 = (uint)bVar3 + (uint)bVar1 * 0x5e;
          uVar5 = iVar4 - 0xc3f;
          if (uVar5 < 0xb62) {
            uVar2 = *(ushort *)(&DAT_0137190c + (ulong)uVar5 * 2);
            puVar10 = &DAT_01372fd0;
          }
          else {
            if (0xe40 < uVar5 >> 1) goto switchD_00a1b804_default;
                    /* try { // try from 00a1be04 to 00b1be97 has its CatchHandler @ 00a1be04
                       catch() { ... } // from try @ 00a1be04 with catch @ 00a1be04
                       catch() { ... } // from try @ 00a1beb4 with catch @ 00a1be04 */
            uVar2 = *(ushort *)(&DAT_01373320 + (ulong)(iVar4 - 0x17a1) * 2);
            puVar10 = &DAT_01375560;
          }
          uVar8 = (uint)uVar2;
          uVar5 = *(uint *)(puVar10 + ((ulong)(uVar2 >> 6) & 0x3fc));
          goto LAB_00a1be2c;
        case 3:
          bVar1 = param_3[2];
                    /* try { // try from 00a1bc0c to 00b1bc23 has its CatchHandler @ 00a1bde8 */
          if (((((char)bVar1 < '\0') || (bVar3 = param_3[3], (char)bVar3 < '\0')) ||
              (0x5b < bVar1 - 0x21)) ||
             ((0x5d < (bVar3 - 0x21 & 0xff) ||
              (uVar5 = ((uint)bVar3 + (uint)bVar1 * 0x5e) - 0xc3f, 0x219a < uVar5))))
          goto switchD_00a1b804_default;
          uVar6 = (ulong)*(ushort *)(&DAT_01375940 + (ulong)uVar5 * 2);
                    /* try { // try from 00a1bc44 to 00b1bc4f has its CatchHandler @ 00a1bde4 */
          puVar10 = &DAT_01379c78;
          break;
        case 4:
          bVar1 = param_3[2];
                    /* try { // try from 00a1bc50 to 00b1bc87 has its CatchHandler @ 00a1bb9c */
                    /* try { // try from 00a1bc88 to 00b1bc97 has its CatchHandler @ 00a1bde0 */
          if ((((char)bVar1 < '\0') || (bVar3 = param_3[3], (char)bVar3 < '\0')) ||
             ((0x43 < bVar1 - 0x21 ||
              ((0x5d < (bVar3 - 0x21 & 0xff) ||
               (uVar5 = ((uint)bVar3 + (uint)bVar1 * 0x5e) - 0xc3f, 0x63c < uVar5 >> 2))))))
          goto switchD_00a1b804_default;
          uVar6 = (ulong)*(ushort *)(&DAT_0137a00c + (ulong)uVar5 * 2);
                    /* try { // try from 00a1bca4 to 00b1bcb3 has its CatchHandler @ 00a1bdd4 */
          puVar10 = &DAT_0137d1f4;
          break;
        case 5:
          bVar1 = param_3[2];
                    /* try { // try from 00a1bcc4 to 00b1bce3 has its CatchHandler @ 00a1bddc */
                    /* try { // try from 00a1bce8 to 00b1bcfb has its CatchHandler @ 00a1bdcc */
          if (((((char)bVar1 < '\0') || (bVar3 = param_3[3], (char)bVar3 < '\0')) ||
              (0x45 < bVar1 - 0x21)) ||
             ((0x5d < (bVar3 - 0x21 & 0xff) ||
              (uVar5 = ((uint)bVar3 + (uint)bVar1 * 0x5e) - 0xc3f, 0x198a < uVar5))))
          goto switchD_00a1b804_default;
          uVar6 = (ulong)*(ushort *)(&DAT_0137d524 + (ulong)uVar5 * 2);
          puVar10 = &DAT_0138083c;
          break;
        default:
          goto switchD_00a1b9a0_default;
        }
        uVar8 = (uint)uVar6;
                    /* catch() { ... } // from try @ 00a1bc88 with catch @ 00a1bde0 */
                    /* catch() { ... } // from try @ 00a1bc44 with catch @ 00a1bde4 */
                    /* catch() { ... } // from try @ 00a1bc0c with catch @ 00a1bde8 */
        uVar5 = *(uint *)(puVar10 + (uVar6 >> 6 & 0x3fc));
LAB_00a1be2c:
        uVar5 = uVar8 & 0xff | uVar5;
      }
LAB_00a1be34:
      if (uVar5 == 0xfffd) {
switchD_00a1b804_default:
        *(uint *)(param_1 + 0x28) = uVar14 << 0x10 | uVar15 << 0x18 | uVar13 << 8 | uVar12;
        return uVar16 << 1 ^ 0xffffffff;
      }
      goto LAB_00a1be84;
    }
    bVar1 = param_3[2];
    if (bVar1 != 0x2b) {
      if (bVar1 == 0x2a) {
        if (param_3[3] != 0x48) goto switchD_00a1b804_default;
        uVar14 = 1;
      }
      else {
        if (bVar1 != 0x29) goto switchD_00a1b804_default;
        bVar1 = param_3[3];
        if (bVar1 == 0x47) {
          uVar13 = 2;
          goto joined_r0x00a1b8a0;
        }
        if (bVar1 != 0x45) {
          if (bVar1 != 0x41) goto switchD_00a1b804_default;
          uVar13 = 1;
          goto joined_r0x00a1b880;
        }
        uVar13 = 3;
      }
      goto joined_r0x00a1b8e0;
    }
    switch(param_3[3]) {
    case 0x49:
      iVar4 = uVar16 + 5;
      param_3 = param_3 + 4;
      uVar15 = 1;
      uVar16 = uVar11;
      break;
    case 0x4a:
      uVar15 = 2;
      goto joined_r0x00a1b8e0;
    case 0x4b:
      uVar15 = 3;
joined_r0x00a1b8a0:
      iVar4 = uVar16 + 5;
      param_3 = param_3 + 4;
      uVar16 = uVar11;
      break;
    case 0x4c:
      uVar15 = 4;
joined_r0x00a1b8e0:
      iVar4 = uVar16 + 5;
      param_3 = param_3 + 4;
      uVar16 = uVar11;
      break;
    case 0x4d:
      uVar15 = 5;
joined_r0x00a1b880:
      iVar4 = uVar16 + 5;
      param_3 = param_3 + 4;
      uVar16 = uVar11;
      break;
    default:
      goto switchD_00a1b804_default;
    }
joined_r0x00a1b8e0:
  } while ((ulong)(long)iVar4 <= param_4);
  *(uint *)(param_1 + 0x28) = uVar14 << 0x10 | uVar15 << 0x18 | uVar13 << 8 | uVar12;
  return uVar16 * -2 - 2;
}

