
long _book_maptype1_quantvals(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar4;
  
  lVar7 = *(long *)(param_1 + 0x60);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)LZCOUNT((int)lVar7) ^ 0x1f;
  if ((int)lVar7 == 0) {
    uVar2 = 0xffffffff;
  }
  uVar10 = 0;
  if (uVar8 != 0) {
    uVar10 = (long)((uVar8 - 1) * (long)(int)uVar2) / (long)uVar8;
  }
  uVar9 = uVar8 & 0xfffffffffffffffc;
  uVar10 = lVar7 >> (uVar10 & 0x3f);
  if (0 < (long)uVar8) goto LAB_00ebd5e0;
  do {
    lVar13 = 1;
    lVar14 = 1;
    if (0 < lVar7) goto LAB_00ebd714;
    while( true ) {
      iVar1 = 1;
      if (lVar7 < lVar13) {
        iVar1 = -1;
      }
      uVar10 = (ulong)(uint)(iVar1 + (int)uVar10);
      if ((long)uVar8 < 1) break;
LAB_00ebd5e0:
      lVar11 = (long)(int)uVar10;
      lVar12 = (long)((int)uVar10 + 1);
      if (uVar8 < 4) {
        lVar14 = 1;
        lVar13 = 1;
        uVar4 = 0;
LAB_00ebd6f8:
        lVar3 = uVar8 - uVar4;
        do {
          lVar13 = lVar13 * lVar11;
          lVar3 = lVar3 + -1;
          lVar14 = lVar14 * lVar12;
        } while (lVar3 != 0);
      }
      else {
        lVar16 = 1;
        lVar17 = 1;
        lVar3 = 1;
        lVar6 = 1;
        lVar15 = 1;
        lVar13 = 1;
        lVar14 = 1;
        lVar5 = 1;
        uVar4 = uVar9;
        do {
          lVar13 = lVar13 * lVar11;
          lVar5 = lVar5 * lVar11;
          lVar16 = lVar16 * lVar12;
          lVar6 = lVar6 * lVar12;
          lVar15 = lVar15 * lVar11;
          lVar14 = lVar14 * lVar11;
          lVar17 = lVar17 * lVar12;
          lVar3 = lVar3 * lVar12;
          uVar4 = uVar4 - 4;
        } while (uVar4 != 0);
        lVar13 = lVar5 * lVar13 * lVar14 * lVar15;
        lVar14 = lVar6 * lVar16 * lVar3 * lVar17;
        uVar4 = uVar9;
        if (uVar8 != uVar9) goto LAB_00ebd6f8;
      }
      if (lVar13 <= lVar7) {
LAB_00ebd714:
        if (lVar7 < lVar14) {
          return (long)(int)uVar10;
        }
      }
    }
  } while( true );
}

