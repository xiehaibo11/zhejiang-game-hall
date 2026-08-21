
/* WARNING: Removing unreachable block (ram,0x010b6b28) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_010b60b0(long param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  short sVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  uint *puVar16;
  int iVar17;
  ulong *puVar18;
  uint uVar19;
  uint uVar20;
  ulong *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong local_98;
  byte *local_90;
  long local_88 [5];
  
  uVar14 = (ulong)&local_90 ^ (ulong)local_88 ^ (ulong)&local_98;
  uVar12 = (uint)uVar14;
                    /* try { // try from 010b60e4 to 011b66e3 has its CatchHandler @ 010b60e4
                       catch() { ... } // from try @ 010b60e4 with catch @ 010b60e4
                       catch() { ... } // from try @ 010b66ec with catch @ 010b60e4 */
  uVar12 = uVar12 ^ uVar12 >> 10 ^ (uint)(uVar14 >> 0x14);
  local_98 = 0x7384;
  if ((uVar12 & 0xffff) != 0) {
    local_98 = (ulong)uVar12 & 0xffff;
  }
  puVar27 = *(undefined8 **)(param_1 + 0x88);
  *(long *)(param_1 + 0x8d8) = param_1 + 0xd8;
  *(long *)(param_1 + 0xa78) = param_1 + 0x8e0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  local_90 = param_2;
  local_88[0] = param_1;
  if ((*(void **)(param_1 + 0xb88) != (void *)0x0) && (*(uint *)(param_1 + 0xb90) != 0)) {
    memset(*(void **)(param_1 + 0xb88),0,(ulong)*(uint *)(param_1 + 0xb90) << 3);
  }
  pbVar22 = local_90;
  uVar14 = *(ulong *)(param_1 + 0x30);
  lVar4 = *(long *)(param_1 + 0x38);
  pbVar1 = local_90 + param_3;
  *(byte **)(param_1 + 0x8e8) = local_90;
  *(byte **)(param_1 + 0x8f0) = pbVar1;
  *(byte **)(param_1 + 0x8e0) = local_90;
  if (puVar27 != (undefined8 *)0x0) {
    (*(code *)puVar27[1])(*puVar27);
  }
  if (param_3 == 0) {
LAB_010b7770:
    uVar9 = 0;
switchD_010b64d4_caseD_3:
    return uVar9;
  }
  iVar13 = 0;
  bVar6 = false;
LAB_010b61a0:
  plVar15 = *(long **)(local_88[0] + 0x8d8);
  do {
    pbVar23 = pbVar22 + 1;
    uVar20 = (uint)*pbVar22;
    uVar12 = 0x10;
    switch(uVar20) {
    case 1:
      goto switchD_010b638c_caseD_1;
    case 2:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
switchD_010b638c_caseD_2:
      if (uVar20 < 0x20) {
        return 0xa0;
      }
      if (uVar20 < 0xf7) {
        uVar19 = *pbVar22 - 0x8b;
        pbVar22 = pbVar23;
      }
      else {
        pbVar22 = pbVar22 + 2;
        if (pbVar1 < pbVar22) {
          return 0xa0;
        }
        if (uVar20 < 0xfb) {
          uVar19 = (uVar20 * 0x100 - 0xf700 | (uint)*pbVar23) + 0x6c;
        }
        else {
          uVar19 = -(uVar20 * 0x100 - 0xfb00 | (uint)*pbVar23) - 0x6c;
        }
      }
      uVar12 = 0;
      uVar20 = uVar19 << 0x10;
      if (bVar6) {
        uVar20 = uVar19;
      }
      goto joined_r0x010b6328;
    case 3:
      uVar12 = 0x12;
      break;
    case 4:
      uVar12 = 0xe;
      break;
    case 5:
      uVar12 = 9;
      break;
    case 6:
      uVar12 = 6;
      break;
    case 7:
      uVar12 = 0xd;
      break;
    case 8:
      uVar12 = 0xb;
      break;
    case 9:
      uVar12 = 5;
      break;
    case 10:
      uVar12 = 0x16;
      goto joined_r0x010b6350;
    case 0xb:
      uVar12 = 0x18;
joined_r0x010b6350:
      uVar20 = 0;
      pbVar22 = pbVar23;
      goto joined_r0x010b6328;
    case 0xc:
      if (pbVar1 < pbVar23) {
        return 0xa0;
      }
      uVar9 = 0xa0;
      if (0x21 < pbVar22[1]) {
        return 0xa0;
      }
      pbVar23 = pbVar22 + 2;
      uVar12 = 0xf;
      switch(pbVar22[1]) {
      case 0:
        goto switchD_010b638c_caseD_1;
      case 1:
        uVar12 = 0x13;
        break;
      case 2:
        uVar12 = 0x11;
        break;
      default:
        goto switchD_010b64d4_caseD_3;
      case 6:
        uVar12 = 3;
        break;
      case 7:
        uVar12 = 4;
        break;
      case 0xc:
        uVar12 = 0x14;
        break;
      case 0x10:
        uVar12 = 0x15;
        goto joined_r0x010b6350;
      case 0x11:
        uVar12 = 0x17;
        goto joined_r0x010b6350;
      case 0x21:
        uVar12 = 0x19;
        goto joined_r0x010b6364;
      }
      break;
    case 0xd:
      uVar12 = 2;
      goto switchD_010b638c_caseD_1;
    case 0xe:
      uVar12 = 1;
      goto joined_r0x010b622c;
    case 0xf:
      uVar12 = 0x1a;
      goto joined_r0x010b622c;
    case 0x15:
      uVar12 = 10;
      goto joined_r0x010b622c;
    case 0x16:
      uVar12 = 7;
joined_r0x010b622c:
      uVar20 = 0;
      pbVar22 = pbVar23;
      goto joined_r0x010b6328;
    case 0x1e:
      uVar12 = 0xc;
      goto joined_r0x010b6254;
    case 0x1f:
      uVar12 = 8;
joined_r0x010b6254:
      uVar20 = 0;
      pbVar22 = pbVar23;
      goto joined_r0x010b6328;
    default:
      if (uVar20 != 0xff) goto switchD_010b638c_caseD_2;
      if (pbVar1 < pbVar22 + 5) {
        return 0xa0;
      }
      uVar12 = (*(uint *)(pbVar22 + 1) & 0xff00ff00) >> 8 | (*(uint *)(pbVar22 + 1) & 0xff00ff) << 8
      ;
      uVar19 = uVar12 >> 0x10;
      uVar20 = uVar19 | uVar12 << 0x10;
      if (uVar20 + 32000 < 0xfa01) {
        if (!bVar6) {
          uVar20 = uVar19 << 0x10;
        }
      }
      else if (!bVar6) {
        bVar6 = true;
      }
      uVar12 = 0;
      pbVar22 = pbVar22 + 5;
      goto joined_r0x010b6328;
    }
    pbVar22 = pbVar23;
    uVar20 = 0;
joined_r0x010b6328:
    if ((0 < iVar13) && ((0x18 < uVar12 || ((1 << (ulong)uVar12 & 0x1c00001U) == 0)))) {
      iVar13 = 0;
    }
    if ((bVar6 && uVar12 != 0) && uVar12 != 0x14) {
      bVar6 = false;
    }
    if (uVar12 != 0) goto code_r0x010b6528;
    if (0x7f8 < (long)plVar15 - (local_88[0] + 0xd8)) {
      return 0xa0;
    }
    *plVar15 = (long)(int)uVar20;
    *(long **)(local_88[0] + 0x8d8) = plVar15 + 1;
    plVar15 = plVar15 + 1;
    if (pbVar1 <= pbVar22) goto LAB_010b7770;
  } while( true );
switchD_010b638c_caseD_1:
joined_r0x010b6364:
  uVar20 = 0;
  pbVar22 = pbVar23;
  goto joined_r0x010b6328;
code_r0x010b6528:
  if (uVar12 != 0x15) {
    if ((long)plVar15 - (local_88[0] + 0xd8) >> 3 <
        (long)*(int *)(&UNK_014631b8 + (ulong)uVar12 * 4)) {
      return 0xa1;
    }
    if (uVar12 - 1 < 0x1a) {
                    /* WARNING: Could not recover jumptable at 0x010b6a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)(&UNK_014619a0 + *(int *)(&UNK_014619a0 + (ulong)(uVar12 - 1) * 4)))(0xa0);
      return uVar9;
    }
    return 0xa0;
  }
  puVar18 = (ulong *)(local_88[0] + 0xd8);
  if ((long)plVar15 - (long)puVar18 < 0x10) {
    return 0xa1;
  }
  uVar12 = *(uint *)(plVar15 + -2);
  lVar7 = (long)((ulong)uVar12 << 0x20) >> 0x30;
  if ((long)(plVar15 + -2) - (long)puVar18 >> 3 < lVar7) {
    return 0xa1;
  }
  iVar17 = (int)uVar12 >> 0x10;
  plVar26 = plVar15 + -lVar7;
  puVar21 = (ulong *)(plVar26 + -2);
  iVar3 = (int)*(uint *)(plVar15 + -1) >> 0x10;
  uVar20 = 0;
  iVar13 = 0;
  switch(iVar3) {
  case 0:
    if (iVar17 != 3) {
      return 0xa0;
    }
    if (*(int *)(local_88[0] + 0xae0) == 0) {
      return 0xa0;
    }
    if (*(int *)(local_88[0] + 0xae4) != 7) {
      return 0xa0;
    }
    iVar13 = 0;
    uVar20 = 2;
    *puVar21 = uVar14;
    plVar26[-1] = lVar4;
    puVar18 = puVar21;
    break;
  case 1:
    if (iVar17 != 0) {
      return 0xa0;
    }
    *(undefined8 *)(local_88[0] + 0xae0) = 1;
    uVar9 = FUN_010b5d30(param_1,uVar14,lVar4);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    lVar7 = *(long *)(param_1 + 0x18);
    if ((ulong)*(uint *)(lVar7 + 8) <
        (long)*(short *)(lVar7 + 0x1a) + (long)*(short *)(lVar7 + 0x62) + 6U) {
                    /* try { // try from 010b66e4 to 011b66eb has its CatchHandler @ 010b6794 */
                    /* try { // try from 010b66ec to 011b67af has its CatchHandler @ 010b60e4 */
      uVar9 = FT_GlyphLoader_CheckPoints(lVar7,6,0);
      iVar13 = 0;
      uVar20 = 0;
      puVar18 = puVar21;
      if ((int)uVar9 != 0) {
        return uVar9;
      }
    }
    else {
      iVar13 = 0;
      uVar20 = 0;
      puVar18 = puVar21;
    }
    break;
  case 2:
    if (iVar17 == 0) {
      if (*(int *)(local_88[0] + 0xae0) != 0) {
        iVar13 = *(int *)(local_88[0] + 0xae4);
        *(int *)(local_88[0] + 0xae4) = iVar13 + 1;
        if (iVar13 - 1U < 6) {
          lVar7 = *(long *)(param_1 + 0x28);
          if (*(char *)(param_1 + 0x84) != '\0') {
            sVar5 = *(short *)(lVar7 + 2);
            lVar25 = *(long *)(lVar7 + 8);
            lVar28 = *(long *)(lVar7 + 0x10);
            lVar10 = FT_RoundFix(uVar14);
            plVar15 = (long *)(lVar25 + (long)sVar5 * 0x10);
            *plVar15 = lVar10 >> 0x10;
            lVar10 = FT_RoundFix(lVar4);
            plVar15[1] = lVar10 >> 0x10;
            uVar11 = 1;
            if (iVar13 != 6 && iVar13 != 3) {
              uVar11 = 2;
            }
            *(undefined1 *)(lVar28 + sVar5) = uVar11;
          }
          *(short *)(lVar7 + 2) = *(short *)(lVar7 + 2) + 1;
        }
        goto LAB_010b67e8;
      }
      iVar13 = 0xd;
      iVar17 = 0xd;
    }
    else {
      iVar13 = 0x20;
      iVar17 = 0x20;
    }
    if ((iVar17 == 0x20) || (iVar13 != 0)) {
      return 0xa0;
    }
    iVar13 = 0;
    goto LAB_010b69c4;
  case 3:
    if (iVar17 != 1) {
      return 0xa0;
    }
    if (puVar27 != (undefined8 *)0x0) {
      (*(code *)puVar27[5])(*puVar27,(long)*(short *)(*(long *)(param_1 + 0x28) + 2));
    }
    goto LAB_010b6950;
  default:
    if ((int)(uVar12 | *(uint *)(plVar15 + -1)) >> 0x10 < 0) {
      return 0xa0;
    }
    uVar20 = 0;
    puVar18 = puVar21;
    iVar13 = iVar17;
    break;
  case 0xc:
  case 0xd:
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    puVar16 = *(uint **)(local_88[0] + 0xb58);
    if (puVar16 == (uint *)0x0) {
      return 0xa0;
    }
    uVar12 = *puVar16;
    if (iVar3 == 0x12) {
      iVar3 = 0x13;
    }
    uVar20 = iVar3 - 0xd;
    if (iVar17 != uVar12 * uVar20) {
      return 0xa0;
    }
    if (uVar20 == 0) {
      iVar13 = 0;
      puVar18 = puVar21;
    }
    else {
      uVar19 = 0;
      plVar15 = plVar15 + (((ulong)uVar20 - 2) - lVar7);
      puVar18 = puVar21;
      do {
        uVar8 = *puVar18;
        if (1 < uVar12) {
          uVar24 = 1;
          plVar26 = plVar15;
          do {
            plVar15 = plVar26 + 1;
            lVar7 = FT_MulFix(*plVar26,*(undefined8 *)(*(long *)(puVar16 + 0x42) + uVar24 * 8));
            uVar12 = *puVar16;
            uVar2 = (int)uVar24 + 1;
            uVar24 = (ulong)uVar2;
            uVar8 = lVar7 + uVar8;
            plVar26 = plVar15;
          } while (uVar2 < uVar12);
        }
        uVar19 = uVar19 + 1;
        *puVar18 = uVar8;
        puVar18 = puVar18 + 1;
      } while (uVar19 != uVar20);
      iVar13 = 0;
      puVar18 = puVar21;
    }
    break;
  case 0x13:
                    /* catch() { ... } // from try @ 010b66e4 with catch @ 010b6794 */
    if (iVar17 != 1) {
      return 0xa0;
    }
    puVar16 = *(uint **)(local_88[0] + 0xb58);
    if (puVar16 == (uint *)0x0) {
      return 0xa0;
    }
    iVar13 = (int)*puVar21 >> 0x10;
    if (iVar13 < 0) {
      return 0xa0;
    }
    if (*(uint *)(local_88[0] + 0xb90) < *puVar16 + iVar13) {
      return 0xa0;
    }
    memcpy((void *)(*(long *)(local_88[0] + 0xb88) + (long)iVar13 * 8),*(void **)(puVar16 + 0x42),
           (ulong)*puVar16 << 3);
LAB_010b67e8:
    iVar13 = 0;
    uVar20 = 0;
    puVar18 = puVar21;
    break;
  case 0x14:
    if (iVar17 != 2) {
      return 0xa0;
    }
    uVar8 = *puVar21 + plVar26[-1];
    goto LAB_010b6834;
  case 0x15:
    if (iVar17 != 2) {
      return 0xa0;
    }
    uVar8 = *puVar21 - plVar26[-1];
LAB_010b6834:
    iVar13 = 0;
    *puVar21 = uVar8;
    uVar20 = 1;
    puVar18 = puVar21;
    break;
  case 0x16:
    if (iVar17 != 2) {
      return 0xa0;
    }
    uVar8 = FT_MulFix(*puVar21,plVar26[-1]);
    goto LAB_010b687c;
  case 0x17:
    if (iVar17 != 2) {
      return 0xa0;
    }
    if (plVar26[-1] == 0) {
      return 0xa0;
    }
    uVar8 = FT_DivFix(*puVar21);
LAB_010b687c:
    *puVar21 = uVar8;
LAB_010b69b0:
    iVar13 = 0;
    uVar20 = 1;
    puVar18 = puVar21;
    break;
  case 0x18:
    if (iVar17 != 2) {
      return 0xa0;
    }
    if (*(long *)(local_88[0] + 0xb58) == 0) {
      return 0xa0;
    }
    uVar12 = (int)plVar26[-1] >> 0x10;
    if ((int)uVar12 < 0) {
      return 0xa0;
    }
    if (*(uint *)(local_88[0] + 0xb90) <= uVar12) {
      return 0xa0;
    }
    iVar13 = 0;
    uVar20 = 0;
    *(ulong *)(*(long *)(local_88[0] + 0xb88) + (long)(int)uVar12 * 8) = *puVar21;
    puVar18 = puVar21;
    break;
  case 0x19:
    if (iVar17 != 1) {
      return 0xa0;
    }
    if (*(long *)(local_88[0] + 0xb58) == 0) {
      return 0xa0;
    }
    uVar12 = (int)*puVar21 >> 0x10;
    if ((int)uVar12 < 0) {
      return 0xa0;
    }
    if (*(uint *)(local_88[0] + 0xb90) <= uVar12) {
      return 0xa0;
    }
    uVar8 = *(ulong *)(*(long *)(local_88[0] + 0xb88) + (long)(int)uVar12 * 8);
LAB_010b6940:
    iVar13 = 0;
    uVar20 = 1;
    *puVar21 = uVar8;
    puVar18 = puVar21;
    break;
  case 0x1b:
    if (iVar17 != 4) {
      return 0xa0;
    }
    if (plVar26[1] < *plVar26) {
      uVar8 = plVar26[-1];
      goto LAB_010b6940;
    }
LAB_010b6950:
    iVar13 = 0;
    uVar20 = 1;
    puVar18 = puVar21;
    break;
  case 0x1c:
    if (iVar17 != 0) {
      return 0xa0;
    }
    uVar8 = local_98;
    if (0x7fff < (long)local_98) {
      uVar8 = local_98 + 1;
    }
    *puVar21 = uVar8;
    uVar8 = FT_MulFix(local_98,0x10000 - local_98);
    local_98 = uVar8 + 0x2873;
    if (uVar8 != 0) {
      local_98 = uVar8;
    }
    goto LAB_010b69b0;
  }
  *(ulong **)(local_88[0] + 0x8d8) = puVar18 + (int)uVar20;
LAB_010b69c4:
  if (pbVar1 <= pbVar22) {
    return 0;
  }
  goto LAB_010b61a0;
}

