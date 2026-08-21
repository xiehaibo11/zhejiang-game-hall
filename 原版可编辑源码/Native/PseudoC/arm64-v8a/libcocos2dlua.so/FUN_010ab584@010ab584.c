
int FUN_010ab584(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  short *psVar9;
  int *piVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  short sVar17;
  short sVar18;
  undefined8 uVar19;
  int local_34;
  
                    /* catch() { ... } // from try @ 010ab55c with catch @ 010ab59c */
  puVar6 = (undefined8 *)ft_mem_alloc(param_1,0xf70,&local_34);
                    /* catch() { ... } // from try @ 010ab5fc with catch @ 010ab5b4 */
  if (local_34 != 0) goto LAB_010ab86c;
  *puVar6 = param_1;
  *(uint *)(puVar6 + 0x35) = (uint)*(ushort *)(param_2 + 0x80);
  bVar5 = *(byte *)(param_2 + 0x84);
  uVar8 = (uint)bVar5;
  if (bVar5 != 0) {
    uVar11 = (ulong)(bVar5 - 1) + 1;
    psVar9 = (short *)(param_2 + 0x88);
    piVar10 = (int *)(puVar6 + 0x38);
    uVar12 = uVar8;
    if (3 < uVar11) {
      lVar14 = uVar11 - (uVar8 & 3);
      if (lVar14 != 0) {
                    /* try { // try from 010ab5f4 to 011ab5fb has its CatchHandler @ 010ab634 */
        lVar7 = lVar14 * 2;
        iVar13 = (int)lVar14;
                    /* try { // try from 010ab5fc to 011ab64b has its CatchHandler @ 010ab5b4 */
        piVar15 = piVar10 + lVar14 * 6;
        puVar16 = (undefined8 *)(param_2 + 0x88);
        do {
          uVar19 = *puVar16;
          piVar1 = piVar10 + 6;
          piVar2 = piVar10 + 0xc;
          piVar3 = piVar10 + 0x12;
          lVar14 = lVar14 + -4;
          *piVar10 = (int)(short)uVar19;
          piVar10 = piVar10 + 0x18;
          *piVar1 = (int)(short)((ulong)uVar19 >> 0x10);
          *piVar2 = (int)(short)((ulong)uVar19 >> 0x20);
                    /* catch() { ... } // from try @ 010ab5f4 with catch @ 010ab634 */
          *piVar3 = (int)(short)((ulong)uVar19 >> 0x30);
          puVar16 = puVar16 + 1;
        } while (lVar14 != 0);
        psVar9 = (short *)(param_2 + lVar7 + 0x88);
        piVar10 = piVar15;
        uVar12 = uVar8 - iVar13;
        if ((bVar5 & 3) == 0) goto LAB_010ab65c;
      }
    }
    do {
      uVar12 = uVar12 - 1;
      *piVar10 = (int)*psVar9;
      psVar9 = psVar9 + 1;
      piVar10 = piVar10 + 6;
    } while (uVar12 != 0);
  }
LAB_010ab65c:
  *(uint *)(puVar6 + 0x34) = uVar8 + 1;
  *(uint *)(puVar6 + 2) = (uint)*(ushort *)(param_2 + 0x82);
  bVar5 = *(byte *)(param_2 + 0x85);
  if (bVar5 != 0) {
    uVar11 = (ulong)(bVar5 - 1) + 1;
    psVar9 = (short *)(param_2 + 0xa2);
    piVar10 = (int *)(puVar6 + 5);
    uVar8 = (uint)bVar5;
    if (3 < uVar11) {
      lVar14 = uVar11 - (bVar5 & 3);
      uVar8 = (uint)bVar5;
      if (lVar14 != 0) {
        iVar13 = (int)lVar14;
        piVar15 = (int *)(puVar6 + 8);
        piVar10 = piVar10 + lVar14 * 6;
        psVar9 = (short *)(param_2 + lVar14 * 2 + 0xa2);
        puVar16 = (undefined8 *)(param_2 + 0xa2);
        do {
          uVar19 = *puVar16;
          piVar1 = piVar15 + 6;
          piVar2 = piVar15 + 0xc;
          lVar14 = lVar14 + -4;
          piVar15[-6] = (int)(short)uVar19;
          *piVar15 = (int)(short)((ulong)uVar19 >> 0x10);
          piVar15 = piVar15 + 0x18;
          *piVar1 = (int)(short)((ulong)uVar19 >> 0x20);
          *piVar2 = (int)(short)((ulong)uVar19 >> 0x30);
          puVar16 = puVar16 + 1;
        } while (lVar14 != 0);
        uVar8 = (uint)bVar5 - iVar13;
        if ((bVar5 & 3) == 0) goto LAB_010ab708;
      }
    }
    do {
      uVar8 = uVar8 - 1;
      *piVar10 = (int)*psVar9;
      piVar10 = piVar10 + 6;
      psVar9 = psVar9 + 1;
    } while (uVar8 != 0);
  }
LAB_010ab708:
  *(uint *)(puVar6 + 1) = bVar5 + 1;
  FUN_010ab8b8(puVar6 + 0x67,*(undefined1 *)(param_2 + 8),param_2 + 0xc,*(undefined1 *)(param_2 + 9)
               ,param_2 + 0x28,*(undefined4 *)(param_2 + 0x7c),0);
  sVar18 = 1;
  FUN_010ab8b8(puVar6 + 0x67,*(undefined1 *)(param_2 + 10),param_2 + 0x3c,
               *(undefined1 *)(param_2 + 0xb),param_2 + 0x58,*(undefined4 *)(param_2 + 0x7c),1);
  if ((ulong)*(byte *)(param_2 + 8) != 0) {
    uVar11 = 0;
    sVar17 = 1;
    do {
      lVar14 = param_2 + uVar11 * 2;
      uVar11 = uVar11 + 2;
      sVar18 = *(short *)(lVar14 + 0xe) - *(short *)(lVar14 + 0xc);
      if (sVar18 <= sVar17) {
        sVar18 = sVar17;
      }
      sVar17 = sVar18;
    } while (uVar11 < *(byte *)(param_2 + 8));
  }
  if ((ulong)*(byte *)(param_2 + 9) != 0) {
    uVar11 = 0;
    do {
      lVar14 = param_2 + uVar11 * 2;
      uVar11 = uVar11 + 2;
      sVar17 = *(short *)(lVar14 + 0x2a) - *(short *)(lVar14 + 0x28);
                    /* try { // try from 010ab7b0 to 011ab7b7 has its CatchHandler @ 010ab7f0 */
      if (sVar17 <= sVar18) {
        sVar17 = sVar18;
      }
      sVar18 = sVar17;
    } while (uVar11 < *(byte *)(param_2 + 9));
  }
  if ((ulong)*(byte *)(param_2 + 10) != 0) {
    uVar11 = 0;
    do {
      lVar14 = param_2 + uVar11 * 2;
      uVar11 = uVar11 + 2;
      sVar17 = *(short *)(lVar14 + 0x3e) - *(short *)(lVar14 + 0x3c);
      if (sVar17 <= sVar18) {
        sVar17 = sVar18;
      }
      sVar18 = sVar17;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010ab7b0 with catch @ 010ab7f0
                        */
    } while (uVar11 < *(byte *)(param_2 + 10));
  }
  if ((ulong)*(byte *)(param_2 + 0xb) != 0) {
    uVar11 = 0;
    do {
      lVar14 = param_2 + uVar11 * 2;
      uVar11 = uVar11 + 2;
      sVar17 = *(short *)(lVar14 + 0x5a) - *(short *)(lVar14 + 0x58);
      if (sVar17 <= sVar18) {
        sVar17 = sVar18;
      }
      sVar18 = sVar17;
    } while (uVar11 < *(byte *)(param_2 + 0xb));
  }
  lVar7 = FT_DivFix(1000,(long)sVar18);
  lVar14 = *(long *)(param_2 + 0x70);
  if (lVar7 <= *(long *)(param_2 + 0x70)) {
    lVar14 = lVar7;
  }
  puVar6[0x1eb] = lVar14;
  *(undefined4 *)(puVar6 + 0x1ec) = *(undefined4 *)(param_2 + 0x78);
  uVar4 = *(undefined4 *)(param_2 + 0x7c);
  puVar6[0x33] = 0;
  puVar6[0x32] = 0;
  *(undefined4 *)(puVar6 + 0x1ed) = uVar4;
  puVar6[0x66] = 0;
  puVar6[0x65] = 0;
LAB_010ab86c:
  *param_3 = puVar6;
  return local_34;
}

