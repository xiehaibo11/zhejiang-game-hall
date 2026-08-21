
void pvmp3_polyphase_filter_window(long param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int *piVar39;
  int iVar40;
  long lVar41;
  long lVar42;
  int *piVar43;
  
  lVar42 = 0;
  lVar41 = 0;
  iVar40 = 1;
  piVar39 = &DAT_014361a0;
  do {
    piVar43 = piVar39;
    iVar6 = piVar43[-0xc];
    iVar13 = piVar43[-0xb];
    iVar7 = piVar43[-10];
    iVar14 = piVar43[-9];
    lVar3 = param_1 + lVar41;
    lVar4 = param_1 + lVar42;
    iVar8 = piVar43[-8];
    iVar15 = piVar43[-7];
    iVar20 = *(int *)(lVar3 + 0x44);
    iVar21 = *(int *)(lVar4 + 0x7bc);
    iVar22 = *(int *)(lVar4 + 0xbc);
    iVar36 = piVar43[-6];
    iVar23 = *(int *)(lVar3 + 0x744);
    iVar24 = *(int *)(lVar4 + 0x6bc);
    iVar25 = *(int *)(lVar3 + 0x144);
    iVar37 = piVar43[-5];
    iVar9 = piVar43[-4];
    iVar16 = piVar43[-3];
    iVar26 = *(int *)(lVar3 + 0x644);
    iVar27 = *(int *)(lVar4 + 0x1bc);
    iVar28 = *(int *)(lVar4 + 0x5bc);
    iVar29 = *(int *)(lVar3 + 0x244);
    iVar10 = piVar43[-2];
    iVar17 = piVar43[-1];
    iVar30 = *(int *)(lVar3 + 0x544);
    iVar31 = *(int *)(lVar4 + 700);
    iVar32 = *(int *)(lVar4 + 0x4bc);
    iVar11 = *piVar43;
    iVar18 = piVar43[1];
    iVar33 = *(int *)(lVar3 + 0x344);
    iVar34 = *(int *)(lVar4 + 0x3bc);
    iVar35 = *(int *)(lVar3 + 0x444);
    iVar12 = piVar43[2];
    iVar19 = piVar43[3];
    lVar41 = lVar41 + 4;
    uVar1 = ((((((((int)((ulong)((long)iVar6 * (long)iVar20) >> 0x20) -
                  (int)((ulong)((long)iVar13 * (long)iVar21) >> 0x20)) +
                  (int)((ulong)((long)iVar7 * (long)iVar22) >> 0x20) +
                  (int)((ulong)((long)iVar14 * (long)iVar23) >> 0x20) +
                 (int)((ulong)((long)iVar8 * (long)iVar25) >> 0x20)) -
                (int)((ulong)((long)iVar15 * (long)iVar24) >> 0x20)) +
                (int)((ulong)((long)iVar36 * (long)iVar27) >> 0x20) +
                (int)((ulong)((long)iVar37 * (long)iVar26) >> 0x20) +
               (int)((ulong)((long)iVar9 * (long)iVar29) >> 0x20)) -
              (int)((ulong)((long)iVar16 * (long)iVar28) >> 0x20)) +
              (int)((ulong)((long)iVar10 * (long)iVar31) >> 0x20) +
              (int)((ulong)((long)iVar17 * (long)iVar30) >> 0x20) +
             (int)((ulong)((long)iVar11 * (long)iVar33) >> 0x20)) -
            (int)((ulong)((long)iVar18 * (long)iVar32) >> 0x20)) +
            (int)((ulong)((long)iVar12 * (long)iVar34) >> 0x20) +
            (int)((ulong)((long)iVar19 * (long)iVar35) >> 0x20) + 0x20;
    iVar38 = iVar40 << (ulong)(param_3 - 1U & 0x1f);
    uVar5 = (ushort)(uVar1 >> 6);
    if ((int)uVar1 >> 0x1f != (int)uVar1 >> 0x15) {
      uVar5 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7fff;
    }
    param_2[iVar38] = uVar5;
    uVar1 = (((((((((int)((ulong)((long)iVar6 * (long)iVar21) >> 0x20) +
                   (int)((ulong)((long)iVar13 * (long)iVar20) >> 0x20)) -
                  (int)((ulong)((long)iVar7 * (long)iVar23) >> 0x20)) +
                  (int)((ulong)((long)iVar14 * (long)iVar22) >> 0x20) +
                  (int)((ulong)((long)iVar8 * (long)iVar24) >> 0x20) +
                 (int)((ulong)((long)iVar15 * (long)iVar25) >> 0x20)) -
                (int)((ulong)((long)iVar36 * (long)iVar26) >> 0x20)) +
                (int)((ulong)((long)iVar37 * (long)iVar27) >> 0x20) +
                (int)((ulong)((long)iVar9 * (long)iVar28) >> 0x20) +
               (int)((ulong)((long)iVar16 * (long)iVar29) >> 0x20)) -
              (int)((ulong)((long)iVar10 * (long)iVar30) >> 0x20)) +
              (int)((ulong)((long)iVar17 * (long)iVar31) >> 0x20) +
              (int)((ulong)((long)iVar11 * (long)iVar32) >> 0x20) +
             (int)((ulong)((long)iVar18 * (long)iVar33) >> 0x20)) -
            (int)((ulong)((long)iVar12 * (long)iVar35) >> 0x20)) +
            (int)((ulong)((long)iVar19 * (long)iVar34) >> 0x20) + 0x20;
    iVar40 = iVar40 + 1;
    uVar5 = (ushort)(uVar1 >> 6);
    if ((int)uVar1 >> 0x1f != (int)uVar1 >> 0x15) {
      uVar5 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7fff;
    }
    lVar42 = lVar42 + -4;
    param_2[param_3 * 0x20 - iVar38] = uVar5;
    piVar39 = piVar43 + 0x10;
  } while (lVar41 != 0x3c);
  uVar1 = (int)((ulong)((long)piVar43[4] * (long)*(int *)(param_1 + 0x40)) >> 0x20) +
          (int)((ulong)((long)piVar43[5] * (long)*(int *)(param_1 + 0xc0)) >> 0x20) +
          (int)((ulong)((long)piVar43[7] * (long)*(int *)(param_1 + 0x140)) >> 0x20) +
          (int)((ulong)((long)piVar43[8] * (long)*(int *)(param_1 + 0x1c0)) >> 0x20) +
          (int)((ulong)((long)piVar43[10] * (long)*(int *)(param_1 + 0x240)) >> 0x20) +
          (int)((ulong)((long)piVar43[0xb] * (long)*(int *)(param_1 + 0x2c0)) >> 0x20) +
          (int)((ulong)((long)piVar43[0xd] * (long)*(int *)(param_1 + 0x340)) >> 0x20) +
          (int)((ulong)((long)piVar43[0xe] * (long)*(int *)(param_1 + 0x3c0)) >> 0x20) +
          (int)((ulong)((long)piVar43[0x10] * (long)*(int *)(param_1 + 0x440)) >> 0x20) +
          (int)((ulong)((long)piVar43[0x11] * (long)*(int *)(param_1 + 0x4c0)) >> 0x20) +
          (int)((ulong)((long)piVar43[0x13] * (long)*(int *)(param_1 + 0x540)) >> 0x20) +
          (int)((ulong)((long)piVar43[0x14] * (long)*(int *)(param_1 + 0x5c0)) >> 0x20) +
          (int)((ulong)((long)piVar43[0x16] * (long)*(int *)(param_1 + 0x640)) >> 0x20) +
          (int)((ulong)((long)piVar43[0x17] * (long)*(int *)(param_1 + 0x6c0)) >> 0x20) +
          (int)((ulong)((long)piVar43[0x19] * (long)*(int *)(param_1 + 0x740)) >> 0x20) +
          (int)((ulong)((long)piVar43[0x1a] * (long)*(int *)(param_1 + 0x7c0)) >> 0x20) + 0x20;
  uVar2 = (int)((ulong)((long)piVar43[6] * (long)*(int *)(param_1 + 0x80)) >> 0x20) +
          (int)((ulong)((long)piVar43[9] * (long)*(int *)(param_1 + 0x180)) >> 0x20) +
          (int)((ulong)((long)piVar43[0xc] * (long)*(int *)(param_1 + 0x280)) >> 0x20) +
          (int)((ulong)((long)piVar43[0xf] * (long)*(int *)(param_1 + 0x380)) >> 0x20) +
          (int)((ulong)((long)piVar43[0x12] * (long)*(int *)(param_1 + 0x480)) >> 0x20) +
          (int)((ulong)((long)piVar43[0x15] * (long)*(int *)(param_1 + 0x580)) >> 0x20) +
          (int)((ulong)((long)piVar43[0x18] * (long)*(int *)(param_1 + 0x680)) >> 0x20) +
          (int)((ulong)((long)piVar43[0x1b] * (long)*(int *)(param_1 + 0x780)) >> 0x20) + 0x20;
  uVar5 = (ushort)(uVar1 >> 6);
  if ((int)uVar1 >> 0x1f != (int)uVar1 >> 0x15) {
    uVar5 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7fff;
  }
  *param_2 = uVar5;
  uVar5 = (ushort)(uVar2 >> 6);
  if ((int)uVar2 >> 0x1f != (int)uVar2 >> 0x15) {
    uVar5 = (ushort)((int)uVar2 >> 0x1f) ^ 0x7fff;
  }
  param_2[0x10 << (ulong)(param_3 - 1U & 0x1f)] = uVar5;
  return;
}

