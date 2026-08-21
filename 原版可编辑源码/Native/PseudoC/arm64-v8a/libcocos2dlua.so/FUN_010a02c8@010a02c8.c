
int FUN_010a02c8(long *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  int iVar13;
  ushort *puVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  long lVar20;
  bool bVar21;
  undefined1 uVar22;
  ushort uVar23;
  undefined2 uVar24;
  ulong uVar25;
  undefined1 *puVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  byte *pbVar30;
  code *pcVar31;
  byte *local_58;
  
  lVar20 = param_1[8];
  if (lVar20 == 0) {
    return 6;
  }
  pbVar30 = (byte *)param_1[10];
  lVar29 = param_1[9] + param_1[7];
  puVar18 = (undefined1 *)(lVar29 + 3);
  while ((uVar19 = (uint)CONCAT11(puVar18[-3],puVar18[-2]), param_2 < uVar19 ||
         (CONCAT11(puVar18[-1],*puVar18) < param_2))) {
    lVar20 = lVar20 + -1;
    puVar18 = puVar18 + 8;
    if (lVar20 == 0) {
      return 6;
    }
  }
                    /* try { // try from 010a0360 to 011a03df has its CatchHandler @ 010a01c8 */
  uVar28 = (ulong)(byte)puVar18[1] << 0x18 | (ulong)(byte)puVar18[2] << 0x10 |
           (ulong)(byte)puVar18[3] << 8 | (ulong)(byte)puVar18[4];
  if ((ulong)((long)pbVar30 - lVar29) < uVar28) {
    return 8;
  }
  puVar18 = (undefined1 *)(lVar29 + uVar28);
  pbVar1 = puVar18 + 8;
  if (pbVar30 < pbVar1) {
    return 6;
  }
  if (0x12 < CONCAT11(*puVar18,puVar18[1]) - 1) {
    return 6;
  }
  uVar22 = puVar18[2];
  bVar3 = puVar18[3];
  bVar4 = puVar18[4];
  bVar5 = puVar18[5];
                    /* try { // try from 010a03e0 to 011a03e7 has its CatchHandler @ 010a057c */
  bVar6 = puVar18[6];
  bVar7 = puVar18[7];
  switch((uint)CONCAT11(*puVar18,puVar18[1])) {
  case 1:
                    /* try { // try from 010a04f4 to 011a0537 has its CatchHandler @ 010a01c8 */
    pbVar1 = pbVar1 + (param_2 - uVar19) * 4;
    if (pbVar30 < pbVar1 + 8) {
      return 6;
    }
                    /* try { // try from 010a0538 to 011a053f has its CatchHandler @ 010a0560 */
                    /* catch() { ... } // from try @ 010a04a8 with catch @ 010a0540
                       try { // try from 010a0540 to 011a05c7 has its CatchHandler @ 010a01c8 */
    uVar25 = (ulong)*pbVar1 << 0x18 | (ulong)pbVar1[1] << 0x10 | (ulong)pbVar1[2] << 8 |
             (ulong)pbVar1[3];
    uVar27 = (ulong)pbVar1[4] << 0x18 | (ulong)pbVar1[5] << 0x10 | (ulong)pbVar1[6] << 8 |
             (ulong)pbVar1[7];
    if (uVar25 == uVar27) {
      return 6;
    }
    break;
  case 2:
                    /* catch() { ... } // from try @ 010a0358 with catch @ 010a0560
                       catch() { ... } // from try @ 010a0538 with catch @ 010a0560 */
    if (pbVar30 < puVar18 + 0x14) {
      return 6;
    }
    if (pbVar30 < puVar18 + 0x11) {
      return 6;
    }
    puVar14 = (ushort *)param_1[3];
                    /* catch() { ... } // from try @ 010a04e8 with catch @ 010a0578 */
                    /* catch() { ... } // from try @ 010a03e0 with catch @ 010a057c */
    bVar8 = *pbVar1;
    bVar9 = puVar18[9];
    bVar10 = puVar18[10];
    bVar11 = puVar18[0xb];
                    /* catch() { ... } // from try @ 010a040c with catch @ 010a058c */
    *puVar14 = (ushort)(byte)puVar18[0xc];
    puVar14[1] = (ushort)(byte)puVar18[0xd];
    puVar14[2] = (short)(char)puVar18[0xe];
    puVar14[3] = (short)(char)puVar18[0xf];
    puVar14[4] = (ushort)(byte)puVar18[0x10];
    if (pbVar30 < puVar18 + 0x14) {
      return 6;
    }
                    /* catch() { ... } // from try @ 010a0738 with catch @ 010a05c8 */
    puVar14[5] = (short)(char)puVar18[0x11];
    uVar27 = (ulong)bVar8 << 0x18 | (ulong)bVar9 << 0x10 | (ulong)bVar10 << 8 | (ulong)bVar11;
    puVar14[6] = (short)(char)puVar18[0x12];
    uVar25 = uVar27 * (param_2 - uVar19);
    puVar14[7] = (ushort)(byte)puVar18[0x13];
    *(undefined1 *)(param_1 + 4) = 1;
    uVar27 = uVar25 + uVar27;
    lVar20 = uVar27 - uVar25;
    if (uVar27 < uVar25) {
      return 6;
    }
    goto LAB_010a06dc;
  case 3:
    pbVar1 = pbVar1 + (param_2 - uVar19) * 2;
    if (pbVar30 < pbVar1 + 4) {
      return 6;
    }
    uVar25 = (ulong)CONCAT11(*pbVar1,pbVar1[1]);
                    /* try { // try from 010a0630 to 011a0707 has its CatchHandler @ 010a0748 */
    uVar27 = (ulong)CONCAT11(pbVar1[2],pbVar1[3]);
    if (uVar25 == uVar27) {
      return 6;
    }
    break;
  case 4:
    if (pbVar30 < puVar18 + 0xc) {
      return 6;
    }
    if (pbVar30 < puVar18 + 0x10) {
      return 6;
    }
    uVar15 = (ulong)*pbVar1 << 0x18 | (ulong)(byte)puVar18[9] << 0x10 |
             (ulong)(byte)puVar18[10] << 8 | (ulong)(byte)puVar18[0xb];
    if (((long)pbVar30 - (long)(puVar18 + 0xc) >> 2) - 1U < uVar15) {
      return 6;
    }
    if (uVar15 == 0) {
      return 6;
    }
    uVar25 = 0;
    puVar18 = (undefined1 *)(param_1[9] + param_1[7] + uVar28 + 0x13);
    while (CONCAT11(puVar18[-7],puVar18[-6]) != param_2) {
      uVar25 = uVar25 + 1;
      puVar18 = puVar18 + 4;
      if (uVar15 <= uVar25) {
        return 6;
      }
    }
    uVar25 = (ulong)CONCAT11(puVar18[-5],puVar18[-4]);
    uVar27 = (ulong)CONCAT11(puVar18[-1],*puVar18);
    lVar20 = uVar27 - uVar25;
    if (uVar27 < uVar25) {
      return 6;
    }
    goto LAB_010a06dc;
  case 5:
  case 0x13:
    if (pbVar30 < puVar18 + 0x18) {
      return 6;
    }
    if (pbVar30 < puVar18 + 0x11) {
      return 6;
    }
                    /* try { // try from 010a040c to 011a0417 has its CatchHandler @ 010a058c */
    puVar14 = (ushort *)param_1[3];
    bVar8 = *pbVar1;
                    /* try { // try from 010a0418 to 011a04a7 has its CatchHandler @ 010a01c8 */
    bVar9 = puVar18[9];
    bVar10 = puVar18[10];
    bVar11 = puVar18[0xb];
    *puVar14 = (ushort)(byte)puVar18[0xc];
    puVar14[1] = (ushort)(byte)puVar18[0xd];
    puVar14[2] = (short)(char)puVar18[0xe];
    puVar14[3] = (short)(char)puVar18[0xf];
    puVar14[4] = (ushort)(byte)puVar18[0x10];
    if (pbVar30 < puVar18 + 0x14) {
      return 6;
    }
    puVar14[5] = (short)(char)puVar18[0x11];
    puVar14[6] = (short)(char)puVar18[0x12];
    puVar14[7] = (ushort)(byte)puVar18[0x13];
    *(undefined1 *)(param_1 + 4) = 1;
    puVar26 = puVar18 + 0x18;
    uVar28 = (ulong)(byte)puVar18[0x14] << 0x18 | (ulong)(byte)puVar18[0x15] << 0x10 |
             (ulong)(byte)puVar18[0x16] << 8 | (ulong)(byte)puVar18[0x17];
    if ((ulong)((long)pbVar30 - (long)puVar26 >> 1) < uVar28) {
      return 6;
    }
                    /* try { // try from 010a04a8 to 011a04b3 has its CatchHandler @ 010a0540 */
    if (uVar28 == 0) {
      return 6;
    }
                    /* try { // try from 010a04b4 to 011a04e7 has its CatchHandler @ 010a01c8 */
    uVar25 = 0;
    uVar15 = 0;
    uVar27 = (ulong)bVar8 << 0x18 | (ulong)bVar9 << 0x10 | (ulong)bVar10 << 8 | (ulong)bVar11;
    while (CONCAT11(*puVar26,puVar26[1]) != param_2) {
      uVar15 = uVar15 + 1;
      uVar25 = uVar25 + uVar27;
      puVar26 = puVar26 + 2;
                    /* try { // try from 010a04e8 to 011a04f3 has its CatchHandler @ 010a0578 */
      if (uVar28 <= uVar15) {
        return 6;
      }
    }
    uVar27 = uVar27 + uVar25;
    break;
  default:
    return 6;
  }
  lVar20 = uVar27 - uVar25;
  if (uVar27 < uVar25) {
    return 6;
  }
LAB_010a06dc:
  uVar28 = (ulong)bVar4 << 0x18 | (ulong)bVar5 << 0x10 | (ulong)bVar6 << 8 | (ulong)bVar7;
  if ((ulong)param_1[6] < uVar27 + uVar28) {
    return 6;
  }
  lVar29 = param_1[1];
  iVar13 = FT_Stream_Seek(lVar29,uVar25 + uVar28 + param_1[5]);
  if (iVar13 != 0) {
    return iVar13;
  }
  iVar13 = FT_Stream_ExtractFrame(lVar29,lVar20,&local_58);
                    /* try { // try from 010a0730 to 011a0737 has its CatchHandler @ 010a0744 */
  if (iVar13 != 0) {
    return iVar13;
  }
                    /* try { // try from 010a0738 to 011a0763 has its CatchHandler @ 010a05c8 */
  uVar19 = (uint)CONCAT11(uVar22,bVar3);
  pbVar30 = local_58;
  if (0x12 < uVar19) {
LAB_010a0824:
    if (0x12 < uVar19 - 1) {
switchD_010a0850_caseD_3:
      iVar13 = 8;
      goto switchD_010a0850_caseD_11;
    }
                    /* try { // try from 010a0838 to 011a0843 has its CatchHandler @ 010a0a1c */
    pbVar1 = local_58 + lVar20;
                    /* try { // try from 010a0844 to 011a0a37 has its CatchHandler @ 010a07e8 */
    iVar13 = 7;
    pcVar31 = FUN_010a09e0;
    switch(uVar19) {
    case 1:
    case 6:
      goto switchD_010a0850_caseD_1;
    case 2:
    case 7:
      uVar16 = (uint)*(ushort *)param_1[3];
      uVar17 = (uint)((ushort *)param_1[3])[1];
      uVar19 = (uVar17 + 7 >> 3) * uVar16;
      if ((uVar19 <= uVar16 * uVar17 + 7 >> 3) || (uVar19 != (int)pbVar1 - (int)pbVar30))
      goto switchD_010a0850_caseD_5;
      pcVar31 = FUN_010a09e0;
      if (*(char *)((long)param_1 + 0x21) == '\0') goto LAB_010a090c;
      break;
    default:
      goto switchD_010a0850_caseD_3;
    case 5:
switchD_010a0850_caseD_5:
      pcVar31 = FUN_010a0d94;
      cVar12 = *(char *)((long)param_1 + 0x21);
      goto joined_r0x010a08ac;
    case 8:
      pbVar30 = pbVar30 + 1;
      if (pbVar1 < pbVar30) {
        iVar13 = 0;
        goto switchD_010a0850_caseD_11;
      }
    case 9:
      pcVar31 = FUN_010a1150;
      goto switchD_010a0850_caseD_1;
    case 0x11:
    case 0x12:
    case 0x13:
      goto switchD_010a0850_caseD_11;
    }
    goto LAB_010a08e0;
  }
                    /* catch() { ... } // from try @ 010a0730 with catch @ 010a0744 */
  bVar21 = true;
                    /* catch() { ... } // from try @ 010a0630 with catch @ 010a0748 */
  if ((1 << (ulong)(bVar3 & 0x1f) & 0x20106U) == 0) {
    if ((1 << (ulong)(bVar3 & 0x1f) & 0x402c0U) == 0) goto LAB_010a0824;
  }
  else {
    bVar21 = false;
  }
  if (4 < lVar20) {
    puVar14 = (ushort *)param_1[3];
    *puVar14 = (ushort)*local_58;
    puVar14[1] = (ushort)local_58[1];
    puVar14[2] = (short)(char)local_58[2];
    puVar14[3] = (short)(char)local_58[3];
    puVar14[4] = (ushort)local_58[4];
    if (bVar21) {
                    /* try { // try from 010a07e8 to 011a0837 has its CatchHandler @ 010a07e8
                       catch() { ... } // from try @ 010a07e8 with catch @ 010a07e8
                       catch() { ... } // from try @ 010a0844 with catch @ 010a07e8 */
      if (lVar20 < 8) goto LAB_010a07ec;
      pbVar30 = local_58 + 8;
      puVar14[5] = (short)(char)local_58[5];
      puVar14[6] = (short)(char)local_58[6];
      uVar23 = (ushort)local_58[7];
    }
    else {
      pbVar30 = local_58 + 5;
      puVar14[5] = 0;
      puVar14[6] = 0;
      uVar23 = 0;
    }
    puVar14[7] = uVar23;
    *(undefined1 *)(param_1 + 4) = 1;
    goto LAB_010a0824;
  }
LAB_010a07ec:
  iVar13 = 6;
  goto switchD_010a0850_caseD_11;
switchD_010a0850_caseD_1:
  cVar12 = *(char *)((long)param_1 + 0x21);
joined_r0x010a08ac:
  if (cVar12 != '\0') goto LAB_010a08e0;
LAB_010a090c:
  if ((char)param_1[4] == '\0') goto LAB_010a07ec;
  puVar2 = (uint *)param_1[2];
  iVar13 = 3;
  uVar23 = ((ushort *)param_1[3])[1];
  uVar19 = (uint)uVar23;
  uVar16 = (uint)*(ushort *)param_1[3];
  *puVar2 = uVar16;
  puVar2[1] = (uint)uVar23;
  if (0x1f < *(byte *)((long)param_1 + 0x22) - 1) goto switchD_010a0850_caseD_11;
  uVar17 = (uint)uVar23;
  switch((uint)*(byte *)((long)param_1 + 0x22)) {
  case 1:
    *(undefined1 *)((long)puVar2 + 0x1a) = 1;
    uVar19 = uVar17 + 7 >> 3;
    uVar24 = 2;
    break;
  case 2:
    *(undefined1 *)((long)puVar2 + 0x1a) = 3;
    uVar19 = uVar17 + 3 >> 2;
    uVar24 = 4;
    break;
  default:
    goto switchD_010a0850_caseD_11;
  case 4:
    *(undefined1 *)((long)puVar2 + 0x1a) = 4;
    uVar19 = uVar17 + 1 >> 1;
    uVar24 = 0x10;
    break;
  case 8:
    uVar22 = 2;
    goto LAB_010a09a4;
  case 0x20:
    uVar22 = 7;
    uVar19 = (uint)uVar23 << 2;
LAB_010a09a4:
    *(undefined1 *)((long)puVar2 + 0x1a) = uVar22;
    uVar24 = 0x100;
  }
  iVar13 = uVar19 * uVar16;
  puVar2[2] = uVar19;
  *(undefined2 *)(puVar2 + 6) = uVar24;
  if (iVar13 != 0) {
    iVar13 = ft_glyphslot_alloc_bitmap(*(undefined8 *)(*param_1 + 0x98),iVar13);
    if (iVar13 != 0) goto switchD_010a0850_caseD_11;
    *(undefined1 *)((long)param_1 + 0x21) = 1;
  }
LAB_010a08e0:
  iVar13 = (*pcVar31)(param_1,pbVar30,pbVar1,param_3,param_4);
switchD_010a0850_caseD_11:
  FT_Stream_ReleaseFrame(lVar29,&local_58);
                    /* try { // try from 010a0358 to 011a035f has its CatchHandler @ 010a0560 */
  return iVar13;
}

