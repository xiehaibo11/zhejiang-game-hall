
void jpeg_idct_5x10(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long *plVar1;
  int iVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int local_128 [5];
  undefined4 local_114 [5];
  int local_100 [5];
  undefined4 local_ec [5];
  undefined4 local_d8 [5];
  undefined4 local_c4 [5];
  undefined4 local_b0 [5];
  int local_9c [5];
  undefined4 local_88 [5];
  undefined4 local_74 [5];
  
  lVar17 = *(long *)(param_1 + 0x1b8);
  lVar20 = *(long *)(param_2 + 0x58);
  lVar19 = 0;
  do {
    psVar3 = (short *)(param_3 + lVar19 * 2);
    piVar21 = (int *)(lVar20 + lVar19 * 4);
    lVar16 = (long)piVar21[0x20] * (long)psVar3[0x20];
    lVar24 = (long)piVar21[8] * (long)psVar3[8];
    lVar4 = (long)piVar21[0x38] * (long)psVar3[0x38] + (long)piVar21[0x18] * (long)psVar3[0x18];
    lVar23 = (long)piVar21[0x18] * (long)psVar3[0x18] - (long)piVar21[0x38] * (long)psVar3[0x38];
    uVar8 = (long)(*piVar21 * (int)*psVar3) << 0xd | 0x400;
    lVar18 = ((long)piVar21[0x30] * (long)psVar3[0x30] + (long)piVar21[0x10] * (long)psVar3[0x10]) *
             0x1a9a;
    lVar25 = (long)piVar21[0x28] * (long)psVar3[0x28] * 0x2000;
    lVar26 = uVar8 + lVar16 * 0x249d;
    lVar27 = uVar8 + lVar16 * -0xdfc;
    lVar22 = lVar18 + (long)piVar21[0x10] * (long)psVar3[0x10] * 0x1071;
    lVar18 = lVar18 + (long)piVar21[0x30] * (long)psVar3[0x30] * -0x45a4;
    lVar5 = lVar23 * 0x9e3 + lVar25;
    lVar25 = lVar25 + lVar23 * -0x19e3;
    lVar6 = lVar22 + lVar26;
    lVar26 = lVar26 - lVar22;
    lVar22 = lVar18 + lVar27;
    lVar27 = lVar27 - lVar18;
    iVar13 = ((int)lVar24 - (int)((long)piVar21[0x28] * (long)psVar3[0x28])) - (int)lVar23;
    lVar18 = lVar4 * 0x1e6f + lVar24 * 0x2cb3 + lVar5;
    lVar5 = lVar4 * -0x1e6f + lVar24 * 0x714 + lVar5;
    lVar23 = (lVar4 * -0x12cf + lVar24 * 0x2853) - lVar25;
    lVar25 = lVar25 + lVar4 * -0x12cf + lVar24 * 0x148c;
    iVar15 = (int)(uVar8 + lVar16 * -0x2d42 >> 0xb);
    local_9c[lVar19] = iVar15 + iVar13 * -4;
    local_128[lVar19] = (int)((ulong)(lVar18 + lVar6) >> 0xb);
    local_74[lVar19] = (int)((ulong)(lVar6 - lVar18) >> 0xb);
    local_b0[lVar19] = (int)((ulong)(lVar27 - lVar25) >> 0xb);
    lVar4 = lVar19 + 1;
    local_114[lVar19] = (int)((ulong)(lVar23 + lVar22) >> 0xb);
    local_d8[lVar19] = (int)((ulong)(lVar5 + lVar26) >> 0xb);
    local_100[lVar19] = iVar13 * 4 + iVar15;
    local_88[lVar19] = (int)((ulong)(lVar22 - lVar23) >> 0xb);
    local_ec[lVar19] = (int)((ulong)(lVar25 + lVar27) >> 0xb);
    local_c4[lVar19] = (int)((ulong)(lVar26 - lVar5) >> 0xb);
    lVar19 = lVar4;
  } while ((int)lVar4 != 5);
  lVar19 = 0;
  piVar21 = local_128;
  lVar17 = lVar17 + -0x180;
  do {
    iVar9 = piVar21[3];
    plVar1 = (long *)(param_4 + lVar19);
    lVar19 = lVar19 + 8;
    iVar13 = *piVar21 * 0x2000 + 0x8020000;
    iVar15 = piVar21[4] + piVar21[2];
    iVar14 = piVar21[2] - piVar21[4];
    iVar10 = iVar13 + iVar14 * 0xb50;
    iVar12 = (iVar9 + piVar21[1]) * 0x1a9a;
    iVar2 = iVar10 + iVar15 * 0x194c;
    iVar11 = iVar12 + piVar21[1] * 0x1071;
    puVar7 = (undefined1 *)(*plVar1 + (ulong)param_5);
    *puVar7 = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar11 + iVar2) >> 0x12) & 0x3ff));
    iVar10 = iVar10 + iVar15 * -0x194c;
    iVar12 = iVar12 + iVar9 * -0x45a4;
    puVar7[4] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar2 - iVar11) >> 0x12) & 0x3ff));
    puVar7[1] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar12 + iVar10) >> 0x12) & 0x3ff));
    piVar21 = piVar21 + 5;
    puVar7[3] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar10 - iVar12) >> 0x12) & 0x3ff));
    puVar7[2] = *(undefined1 *)
                 (lVar17 + ((ulong)((uint)(iVar13 + iVar14 * -0x2d40) >> 0x12) & 0x3ff));
  } while (lVar19 != 0x50);
                    /* try { // try from 0110e4d0 to 0120e55f has its CatchHandler @ 0110e4d0
                       catch() { ... } // from try @ 0110e4d0 with catch @ 0110e4d0
                       catch() { ... } // from try @ 0110e6e0 with catch @ 0110e4d0 */
  return;
}

