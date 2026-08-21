
undefined8 FUN_010a8328(long *param_1,long param_2,uint param_3,uint param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  char cVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  undefined8 local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  
  lVar27 = param_1[2];
  plVar26 = (long *)param_1[0x1a];
  lVar25 = *(long *)(*param_1 + 0x98);
  plVar24 = *(long **)(lVar25 + 0x128);
  uVar13 = FT_Load_Glyph(*param_1,param_3,param_4 | 0x2000);
  if ((int)uVar13 != 0) {
    return uVar13;
  }
  cVar7 = *(char *)((long)plVar24 + 0xc);
  *(char *)(param_1 + 0x1b) = cVar7;
  if (cVar7 != '\0') {
    uStack_98 = plVar24[5];
    local_a0 = plVar24[4];
    param_1[0x1f] = uStack_98;
    param_1[0x1e] = local_a0;
    uStack_a8 = plVar24[3];
    local_b0 = plVar24[2];
    param_1[0x1d] = uStack_a8;
    param_1[0x1c] = local_b0;
    lVar15 = plVar24[6];
    param_1[0x21] = plVar24[7];
    param_1[0x20] = lVar15;
    iVar12 = FT_Matrix_Invert(&local_b0);
    if (iVar12 == 0) {
      FT_Vector_Transform(param_1 + 0x20,&local_b0);
    }
  }
  if (*(int *)(lVar25 + 0x90) == 0x636f6d70) {
    uVar6 = *(uint *)(lVar25 + 0xf0);
    uVar18 = (ulong)uVar6;
    sVar9 = *(short *)(lVar27 + 0x1a);
    uVar13 = FT_GlyphLoader_CheckSubGlyphs(lVar27,uVar18);
    if ((int)uVar13 != 0) {
      return uVar13;
    }
    memcpy(*(void **)(lVar27 + 0xa0),*(void **)(lVar25 + 0xf8),uVar18 * 0x30);
    *(uint *)(lVar27 + 0x98) = uVar6;
    if (uVar6 != 0) {
      uVar6 = *(uint *)(lVar27 + 0x50);
      uVar22 = 0;
      do {
        lStack_68 = param_1[0x23];
        local_70 = param_1[0x22];
                    /* catch() { ... } // from try @ 010a8410 with catch @ 010a84e0 */
        lStack_78 = param_1[0x25];
        local_80 = param_1[0x24];
        sVar10 = *(short *)(lVar27 + 0x1a);
        uVar13 = FUN_010a8328(param_1,param_2,
                              *(undefined4 *)
                               (*(long *)(lVar27 + 0x58) + (ulong)uVar6 * 0x30 + uVar22 * 0x30),
                              param_4,param_5 + 1);
        if ((int)uVar13 != 0) {
          return uVar13;
        }
        lVar15 = *(long *)(lVar27 + 0x58) + (ulong)uVar6 * 0x30 + uVar22 * 0x30;
        uVar8 = *(ushort *)(lVar15 + 4);
        if ((uVar8 >> 9 & 1) == 0) {
          param_1[0x23] = lStack_68;
          param_1[0x22] = local_70;
          param_1[0x25] = lStack_78;
          param_1[0x24] = local_80;
          uVar8 = *(ushort *)(lVar15 + 4);
        }
        uVar21 = (uint)uVar8;
        uVar11 = (int)*(short *)(lVar27 + 0x1a) - (int)sVar10;
        if (((uVar8 & 200) != 0) && (uVar11 != 0)) {
          uVar16 = *(long *)(lVar27 + 0x20) + (ulong)(uint)(int)sVar10 * 0x10;
          uVar17 = uVar16 + (ulong)uVar11 * 0x10;
          do {
            FT_Vector_Transform(uVar16,lVar15 + 0x10);
            uVar16 = uVar16 + 0x10;
          } while (uVar16 < uVar17);
          uVar21 = (uint)*(ushort *)(lVar15 + 4);
        }
        iVar12 = *(int *)(lVar15 + 8);
        if ((uVar21 >> 1 & 1) == 0) {
          if ((uint)(int)sVar10 <= (uint)(iVar12 + sVar9)) {
            return 0x15;
          }
          if (uVar11 <= *(uint *)(lVar15 + 0xc)) {
            return 0x15;
          }
          lVar19 = *(long *)(lVar27 + 0x20) + (long)sVar9 * 0x10;
          plVar2 = (long *)(lVar19 + (long)iVar12 * 0x10);
          plVar1 = (long *)(lVar19 + (ulong)(*(uint *)(lVar15 + 0xc) + (int)sVar10) * 0x10);
          uVar16 = *plVar2 - *plVar1;
          uVar17 = plVar2[1] - plVar1[1];
        }
        else {
          lVar14 = FT_MulFix((long)iVar12,param_1[4]);
          lVar19 = param_1[5];
          lVar15 = FT_MulFix((long)*(int *)(lVar15 + 0xc),param_1[6]);
          uVar16 = lVar14 + lVar19 + 0x20U & 0xffffffffffffffc0;
          uVar17 = lVar15 + param_1[7] + 0x20U & 0xffffffffffffffc0;
        }
        local_90 = *(undefined8 *)(lVar27 + 0x38);
        uStack_98 = *(long *)(lVar27 + 0x30);
        local_a0 = *(long *)(lVar27 + 0x28);
        local_b0._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x18) >> 0x20);
        local_b0._0_4_ = CONCAT22((short)uVar11,(short)*(undefined8 *)(lVar27 + 0x18));
        uStack_a8 = *(long *)(lVar27 + 0x20) + ((long)sVar10 & 0xffffffffU) * 0x10;
        FT_Outline_Translate(&local_b0,uVar16,uVar17);
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar18);
    }
  }
  else {
    if (*(int *)(lVar25 + 0x90) != 0x6f75746c) {
      uVar13 = 7;
      goto joined_r0x010a8678;
    }
    if ((char)param_1[0x1b] != '\0') {
                    /* try { // try from 010a8410 to 011a8417 has its CatchHandler @ 010a84e0 */
      FT_Outline_Translate(lVar25 + 200,param_1[0x20],param_1[0x21]);
    }
                    /* try { // try from 010a8418 to 011a84f3 has its CatchHandler @ 010a82d0 */
    lVar15 = (long)(short)*(ushort *)(lVar25 + 0xca) + 4;
    if (((int)lVar15 == 0) ||
       ((ulong)(*(short *)(lVar27 + 0x1a) + lVar15 + (long)*(short *)(lVar27 + 0x62)) <=
        (ulong)*(uint *)(lVar27 + 8))) {
      sVar9 = *(short *)(lVar25 + 200);
      uVar18 = (ulong)*(ushort *)(lVar25 + 0xca);
      if (((long)sVar9 != 0) &&
         ((ulong)*(uint *)(lVar27 + 0xc) <
          (ulong)((long)*(short *)(lVar27 + 0x18) + (long)sVar9 + (long)*(short *)(lVar27 + 0x60))))
      goto LAB_010a86bc;
    }
    else {
      sVar9 = *(short *)(lVar25 + 200);
LAB_010a86bc:
      uVar13 = FT_GlyphLoader_CheckPoints(lVar27,lVar15,(int)sVar9);
      if ((int)uVar13 != 0) {
        return uVar13;
      }
      uVar18 = (ulong)*(ushort *)(lVar25 + 0xca);
    }
    memcpy(*(void **)(lVar27 + 0x68),*(void **)(lVar25 + 0xd0),
           -(uVar18 >> 0xf) & 0xfffffffffff00000 | uVar18 << 4);
    memcpy(*(void **)(lVar27 + 0x78),*(void **)(lVar25 + 0xe0),(long)*(short *)(lVar25 + 200) << 1);
    memcpy(*(void **)(lVar27 + 0x70),*(void **)(lVar25 + 0xd8),(long)*(short *)(lVar25 + 0xca));
    *(undefined2 *)(lVar27 + 0x62) = *(undefined2 *)(lVar25 + 0xca);
    *(short *)(lVar27 + 0x60) = *(short *)(lVar25 + 200);
    param_1[0x22] = param_1[5];
    param_1[0x23] = param_1[7];
    lVar15 = FT_MulFix(*(undefined8 *)(lVar25 + 0x50),param_1[4]);
    param_1[0x24] = param_1[5] + lVar15;
    param_1[0x25] = param_1[7];
    if (*(short *)(lVar25 + 0xca) == 0) goto joined_r0x010a8678;
    if (*(code **)(*(long *)(af_writing_system_classes + (ulong)*(uint *)(*plVar26 + 4) * 8) + 0x30)
        != (code *)0x0) {
      (**(code **)(*(long *)(af_writing_system_classes + (ulong)*(uint *)(*plVar26 + 4) * 8) + 0x30)
      )(param_1 + 3,lVar27 + 0x60,plVar26);
    }
    if (*(int *)(param_2 + 0x28) == 1) {
      lVar15 = param_1[0x22];
      lVar19 = param_1[0x24];
      lVar14 = lVar15 + param_1[0x18];
      lVar3 = lVar19 + param_1[0x19];
LAB_010a8850:
                    /* catch() { ... } // from try @ 010a87cc with catch @ 010a8794 */
      uVar22 = lVar14 + 0x20U & 0xffffffffffffffc0;
      uVar18 = lVar3 + 0x20U & 0xffffffffffffffc0;
      lVar15 = uVar22 - lVar15;
      param_1[0x22] = uVar22;
      param_1[0x24] = uVar18;
    }
    else {
      if (((int)param_1[0xe] < 2) || ((*(byte *)(param_1 + 0x16) >> 2 & 1) != 0)) {
        lVar15 = param_1[0x22];
                    /* try { // try from 010a8844 to 011a8903 has its CatchHandler @ 010a8844
                       catch() { ... } // from try @ 010a8844 with catch @ 010a8844
                       catch() { ... } // from try @ 010a8918 with catch @ 010a8844 */
        lVar19 = param_1[0x24];
        lVar14 = lVar15;
        lVar3 = lVar19;
        goto LAB_010a8850;
      }
      lVar19 = param_1[0xf];
      lVar15 = lVar19 + (long)(int)param_1[0xe] * 0x58;
                    /* try { // try from 010a87c4 to 011a87cb has its CatchHandler @ 010a8828 */
      lVar3 = *(long *)(lVar19 + 8);
      lVar4 = *(long *)(lVar19 + 0x10);
      lVar5 = *(long *)(lVar15 + -0x48);
                    /* try { // try from 010a87cc to 011a8843 has its CatchHandler @ 010a8794 */
      lVar19 = lVar4 - lVar3;
      lVar23 = param_1[0x24] - *(long *)(lVar15 + -0x50);
      lVar14 = lVar5 + lVar23;
      lVar15 = lVar19 + -8;
      if (0x17 < lVar3) {
        lVar15 = lVar19;
      }
      lVar19 = lVar14 + 8;
      if (0x17 < lVar23) {
        lVar19 = lVar14;
      }
      uVar22 = lVar15 + 0x20U & 0xffffffffffffffc0;
      uVar18 = lVar19 + 0x20U & 0xffffffffffffffc0;
      param_1[0x22] = uVar22;
      param_1[0x24] = uVar18;
      if ((0 < lVar3) && (lVar4 <= (long)uVar22)) {
        uVar22 = uVar22 - 0x40;
        param_1[0x22] = uVar22;
      }
                    /* catch() { ... } // from try @ 010a87c4 with catch @ 010a8828 */
      if ((0 < lVar23) && ((long)uVar18 <= lVar5)) {
        uVar18 = uVar18 + 0x40;
        param_1[0x24] = uVar18;
      }
      lVar15 = uVar22 - lVar15;
    }
    *(long *)(lVar25 + 0x110) = lVar15;
    *(ulong *)(lVar25 + 0x118) = uVar18 - lVar19;
    FT_GlyphLoader_Add(lVar27);
  }
joined_r0x010a8678:
  uVar13 = 0;
joined_r0x010a8678:
  if (param_5 == 0) {
    lVar15 = *(long *)(lVar25 + 0x60);
    lVar19 = *(long *)(lVar25 + 0x48);
    local_70 = FT_MulFix(*(long *)(lVar25 + 0x58) - *(long *)(lVar25 + 0x40),plVar26[2]);
    lStack_68 = FT_MulFix(lVar15 - lVar19,plVar26[3]);
    if ((char)param_1[0x1b] != '\0') {
      FT_Outline_Transform(lVar27 + 0x18,param_1 + 0x1c);
      FT_Vector_Transform(&local_70,param_1 + 0x1c);
    }
    if (param_1[0x22] != 0) {
      FT_Outline_Translate(lVar27 + 0x18,-param_1[0x22],0);
    }
    FT_Outline_Get_CBox(lVar27 + 0x18,&local_b0);
                    /* try { // try from 010a8904 to 011a8917 has its CatchHandler @ 010a8970 */
    local_b0 = local_b0 & 0xffffffffffffffc0;
    uStack_a8 = uStack_a8 & 0xffffffffffffffc0;
    local_a0 = local_a0 + 0x3f & 0xffffffffffffffc0;
    uStack_98 = uStack_98 + 0x3f & 0xffffffffffffffc0;
                    /* try { // try from 010a8918 to 011a89a7 has its CatchHandler @ 010a8844 */
    *(ulong *)(lVar25 + 0x38) = uStack_98 - uStack_a8;
    *(ulong *)(lVar25 + 0x30) = local_a0 - local_b0;
    *(ulong *)(lVar25 + 0x48) = uStack_98;
    *(ulong *)(lVar25 + 0x40) = local_b0;
    *(ulong *)(lVar25 + 0x60) = lStack_68 + uStack_98 & 0xffffffffffffffc0;
    *(ulong *)(lVar25 + 0x58) = local_70 + local_b0 & 0xffffffffffffffc0;
                    /* catch() { ... } // from try @ 010a8904 with catch @ 010a8970 */
    if ((*(int *)(param_2 + 0x28) == 1) ||
       (((*(byte *)(*(long *)(lVar25 + 8) + 0x10) >> 2 & 1) == 0 &&
        (((*(ulong *)(param_1[1] + 8) <= (ulong)param_3 ||
          (-1 < *(char *)(*(long *)(param_1[1] + 0x10) + (ulong)param_3))) ||
         ((char)plVar26[7] == '\0')))))) {
      if (*(long *)(lVar25 + 0x50) != 0) {
        *(long *)(lVar25 + 0x50) = param_1[0x24] - param_1[0x22];
      }
    }
    else {
                    /* catch() { ... } // from try @ 010a89d8 with catch @ 010a89a8 */
      uVar13 = FT_MulFix(*(undefined8 *)(lVar25 + 0x50),plVar26[2]);
      *(undefined8 *)(lVar25 + 0x50) = uVar13;
      *(undefined8 *)(lVar25 + 0x110) = 0;
      *(undefined8 *)(lVar25 + 0x118) = 0;
    }
    lVar15 = FT_MulFix(*(undefined8 *)(lVar25 + 0x68),plVar26[3]);
                    /* try { // try from 010a89d0 to 011a89d7 has its CatchHandler @ 010a8a30 */
    *(ulong *)(lVar25 + 0x50) = *(ulong *)(lVar25 + 0x50) + 0x20 & 0xffffffffffffffc0;
                    /* try { // try from 010a89d8 to 011a8a4b has its CatchHandler @ 010a89a8 */
    *(ulong *)(lVar25 + 0x68) = lVar15 + 0x20U & 0xffffffffffffffc0;
    FT_GlyphLoader_Rewind(*plVar24);
    uVar13 = FT_GlyphLoader_CopyPoints(*plVar24,lVar27);
    if ((int)uVar13 == 0) {
      lVar27 = *plVar24;
      *(undefined2 *)(lVar25 + 200) = *(undefined2 *)(lVar27 + 0x18);
      *(undefined2 *)(lVar25 + 0xca) = *(undefined2 *)(lVar27 + 0x1a);
      uVar20 = *(undefined8 *)(lVar27 + 0x20);
      *(undefined8 *)(lVar25 + 0xd8) = *(undefined8 *)(lVar27 + 0x28);
      *(undefined8 *)(lVar25 + 0xd0) = uVar20;
      uVar20 = *(undefined8 *)(lVar27 + 0x30);
      *(undefined4 *)(lVar25 + 0x90) = 0x6f75746c;
      *(undefined8 *)(lVar25 + 0xe0) = uVar20;
    }
  }
  return uVar13;
}

