
/* WARNING: Type propagation algorithm not settling */

uint FUN_00a17dc8(long param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  undefined *puVar11;
  
  uVar7 = *(uint *)(param_1 + 0x28) >> 8;
  bVar1 = *param_3;
  uVar6 = *(uint *)(param_1 + 0x28) & 0xff;
  uVar4 = 0;
  while (uVar8 = uVar4, bVar1 == 0x1b) {
    uVar5 = uVar4 + 3;
    if (param_4 < (ulong)(long)(int)uVar5) goto LAB_00a181b4;
    bVar1 = param_3[1];
    if (bVar1 < 0x2e) {
      if (bVar1 == 0x24) {
        switch(param_3[2]) {
        case 0x28:
          uVar5 = uVar4 + 4;
          if ((ulong)(long)(int)uVar5 <= param_4) {
            if (param_3[3] == 0x43) {
              uVar10 = 6;
              uVar6 = 6;
            }
            else {
              if (param_3[3] != 0x44) goto switchD_00a17ea4_caseD_29;
              uVar10 = 4;
              uVar6 = 4;
            }
            uVar8 = uVar5;
            if ((ulong)(long)(int)(uVar4 + 5) <= param_4) {
              param_3 = param_3 + 4;
              goto LAB_00a17f5c;
            }
          }
          goto LAB_00a181b4;
        default:
          goto switchD_00a17ea4_caseD_29;
        case 0x40:
        case 0x42:
          uVar6 = 3;
          break;
        case 0x41:
          uVar6 = 5;
        }
      }
      else {
        if (bVar1 != 0x28) goto switchD_00a17ea4_caseD_29;
        bVar1 = param_3[2];
        if (bVar1 == 0x4a) {
          uVar6 = 1;
        }
        else {
          if (bVar1 != 0x49) {
            if (bVar1 == 0x42) {
              uVar6 = 0;
              goto joined_r0x00a17e80;
            }
            goto switchD_00a17ea4_caseD_29;
          }
          uVar6 = 2;
        }
      }
    }
    else {
      if (bVar1 != 0x2e) {
        if ((bVar1 != 0x4e) || (uVar7 == 0)) goto switchD_00a17ea4_caseD_29;
        if (uVar7 != 2) {
          if (uVar7 != 1) goto LAB_00a18420;
          if ((char)param_3[2] < '\0') {
            uVar7 = 1;
            goto switchD_00a17ea4_caseD_29;
          }
          uVar6 = uVar6 | 0x100;
          *param_2 = param_3[2] ^ 0x80;
          goto LAB_00a18418;
        }
        if (-1 < (char)param_3[2]) {
          uVar7 = param_3[2] ^ 0x80;
          if ((uVar7 < 0xa0) ||
             (uVar7 = (uint)*(ushort *)(&DAT_012fd57c + (long)(int)(uVar7 - 0xa0) * 2),
             uVar7 != 0xfffd)) {
            uVar6 = uVar6 | 0x200;
            *param_2 = uVar7;
            goto LAB_00a18418;
          }
        }
        uVar7 = 2;
        goto switchD_00a17ea4_caseD_29;
      }
      if (param_3[2] == 0x46) {
        uVar7 = 2;
        goto joined_r0x00a17e80;
      }
      if (param_3[2] != 0x41) goto switchD_00a17ea4_caseD_29;
      uVar7 = 1;
    }
joined_r0x00a17e80:
    uVar8 = uVar5;
    if (param_4 < (ulong)(long)(int)(uVar4 + 4)) goto LAB_00a181b4;
    param_3 = param_3 + 3;
    uVar10 = uVar6;
LAB_00a17f5c:
    uVar6 = uVar10;
    uVar4 = uVar5;
    bVar1 = *param_3;
  }
  if (6 < uVar6) {
LAB_00a18420:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = (uint)bVar1;
  uVar10 = (uint)bVar1;
  switch(uVar6) {
  case 0:
    if ((char)bVar1 < '\0') goto switchD_00a17ea4_caseD_29;
LAB_00a18200:
    *param_2 = uVar5;
    if ((uVar5 == 0xd) || (uVar5 == 10)) {
      uVar7 = 0;
    }
    goto LAB_00a182a4;
  case 1:
    if ((char)bVar1 < '\0') goto switchD_00a17ea4_caseD_29;
    if (uVar5 == 0x7e) {
      uVar8 = 0x203e;
    }
    else {
      if (uVar5 != 0x5c) goto LAB_00a18200;
      uVar8 = 0xa5;
    }
    *param_2 = uVar8;
LAB_00a182a4:
    *(uint *)(param_1 + 0x28) = uVar6 | uVar7 << 8;
    return uVar4 + 1;
  case 2:
    if ((-1 < (char)bVar1) && ((uVar5 - 0x21 & 0xff) < 0x3f)) {
      *param_2 = (uVar5 ^ 0x80) + 0xfec0;
      *(uint *)(param_1 + 0x28) = uVar6 | uVar7 << 8;
      return uVar4 + 1;
    }
    goto switchD_00a17ea4_caseD_29;
  case 3:
    if (param_4 < (ulong)(long)(int)(uVar4 + 2)) {
LAB_00a181b4:
      *(uint *)(param_1 + 0x28) = uVar6 | uVar7 << 8;
      return uVar8 * -2 - 2;
    }
    if (((((char)bVar1 < '\0') || (bVar1 = param_3[1], (char)bVar1 < '\0')) ||
        (7 < uVar10 - 0x21 && 0x44 < uVar10 - 0x30)) || (0x5d < (bVar1 - 0x21 & 0xff)))
    goto switchD_00a17ea4_caseD_29;
    iVar3 = (uint)bVar1 + uVar10 * 0x5e;
    uVar8 = iVar3 - 0xc3f;
    if (0x581 < uVar8) {
      if (0x3c < uVar8 >> 7) goto switchD_00a17ea4_caseD_29;
      uVar8 = iVar3 - 0x11c1;
      puVar11 = &DAT_0130376a;
      break;
    }
    if (0x2b1 < uVar8) goto switchD_00a17ea4_caseD_29;
    puVar9 = (ushort *)(&DAT_01303206 + (ulong)uVar8 * 2);
    goto LAB_00a183e4;
  case 4:
    if (param_4 < (ulong)(long)(int)(uVar4 + 2)) goto LAB_00a181b4;
    if (((((char)bVar1 < '\0') || (bVar2 = param_3[1], (char)bVar2 < '\0')) ||
        ((0x3d < uVar5 - 0x30 &&
         ((0x2b < uVar5 || ((1L << ((ulong)bVar1 & 0x3f) & 0xec400000000U) == 0)))))) ||
       (0x5d < bVar2 - 0x21)) goto switchD_00a17ea4_caseD_29;
    iVar3 = (uint)bVar2 + uVar5 * 0x5e;
    uVar8 = iVar3 - 0xc3f;
    if (uVar8 < 0x1d6) {
      if (0xae < uVar8) goto switchD_00a17ea4_caseD_29;
      uVar8 = iVar3 - 0xc9d;
      puVar11 = &DAT_0130b5c8;
    }
    else if (uVar8 < 0x2f0) {
      if (0x291 < uVar8) goto switchD_00a17ea4_caseD_29;
      uVar8 = iVar3 - 0xe15;
      puVar11 = &DAT_0130b66a;
    }
    else if (uVar8 < 0x582) {
      if (0x402 < uVar8) goto switchD_00a17ea4_caseD_29;
      uVar8 = iVar3 - 0xf2f;
      puVar11 = &DAT_0130b7e2;
    }
    else {
      if (0x1c2a < uVar8) goto switchD_00a17ea4_caseD_29;
      uVar8 = iVar3 - 0x11c1;
      puVar11 = &DAT_0130ba08;
    }
    break;
  case 5:
    if (param_4 < (ulong)(long)(int)(uVar4 + 2)) goto LAB_00a181b4;
    if ((((char)bVar1 < '\0') || (bVar1 = param_3[1], (char)bVar1 < '\0')) ||
       ((8 < uVar5 - 0x21 && 0x47 < uVar5 - 0x30 || (0x5d < (bVar1 - 0x21 & 0xff)))))
    goto switchD_00a17ea4_caseD_29;
    iVar3 = (uint)bVar1 + uVar5 * 0x5e;
    uVar8 = iVar3 - 0xc3f;
    if (uVar8 < 0x582) {
      if (0x33e < uVar8) goto switchD_00a17ea4_caseD_29;
      puVar9 = (ushort *)(&DAT_01312c68 + (ulong)uVar8 * 2);
      goto LAB_00a183e4;
    }
    if (0xff8 < uVar8 >> 1) goto switchD_00a17ea4_caseD_29;
    uVar8 = iVar3 - 0x11c1;
    puVar11 = &DAT_013132e6;
    break;
  case 6:
    if (param_4 < (ulong)(long)(int)(uVar4 + 2)) goto LAB_00a181b4;
    if (((((char)bVar1 < '\0') || (bVar1 = param_3[1], (char)bVar1 < '\0')) ||
        (0x33 < uVar10 - 0x4a && (0xb < uVar10 - 0x21 && 0x18 < uVar10 - 0x30))) ||
       (0x5d < (bVar1 - 0x21 & 0xff))) goto switchD_00a17ea4_caseD_29;
    iVar3 = (uint)bVar1 + uVar5 * 0x5e;
    uVar8 = iVar3 - 0xc3f;
    if (uVar8 < 0x582) {
      if (0x45a < uVar8) goto switchD_00a17ea4_caseD_29;
      puVar9 = (ushort *)(&DAT_0131dd04 + (ulong)uVar8 * 2);
      goto LAB_00a183e4;
    }
    if (uVar8 < 0xf0e) {
      if (0xeaf < uVar8) goto switchD_00a17ea4_caseD_29;
      uVar8 = iVar3 - 0x11c1;
      puVar11 = &DAT_0131e5ba;
    }
    else {
      if (0x2225 < uVar8) goto switchD_00a17ea4_caseD_29;
      uVar8 = iVar3 - 0x1b4d;
      puVar11 = &DAT_0131f816;
    }
  }
  puVar9 = (ushort *)(puVar11 + (ulong)uVar8 * 2);
LAB_00a183e4:
  uVar5 = uVar4 + 2;
  if (*puVar9 != 0xfffd) {
    *param_2 = (uint)*puVar9;
    uVar6 = uVar6 | uVar7 << 8;
LAB_00a18418:
    *(uint *)(param_1 + 0x28) = uVar6;
    return uVar5;
  }
switchD_00a17ea4_caseD_29:
  *(uint *)(param_1 + 0x28) = uVar6 | uVar7 << 8;
  return uVar4 << 1 ^ 0xffffffff;
}

