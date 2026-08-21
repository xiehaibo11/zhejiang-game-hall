
uint FUN_00130860(long param_1,ulong param_2)

{
  short *psVar1;
  ulong uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  ushort uVar13;
  ushort uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  
  lVar15 = *(long *)(param_1 + 0x60);
  uVar11 = *(uint *)(param_1 + 0xac);
  uVar7 = *(uint *)(param_1 + 0xb4);
  uVar17 = (ulong)(int)*(uint *)(param_1 + 0xb8);
  psVar3 = (short *)(lVar15 + (ulong)uVar11);
  uVar9 = *(int *)(param_1 + 0x50) - 0x106;
  uVar6 = 0;
  if (uVar9 <= uVar11) {
    uVar6 = uVar11 - uVar9;
  }
  sVar8 = *psVar3;
  sVar12 = *(short *)((long)psVar3 + (uVar17 - 1));
  uVar11 = *(uint *)(param_1 + 0xbc);
  if (*(uint *)(param_1 + 0xcc) <= *(uint *)(param_1 + 0xb8)) {
    uVar11 = *(uint *)(param_1 + 0xbc) >> 2;
  }
  iVar10 = (int)psVar3;
  uVar9 = uVar7;
  if (*(uint *)(param_1 + 0xd0) <= uVar7) {
    uVar9 = *(uint *)(param_1 + 0xd0);
  }
  do {
    psVar1 = (short *)(lVar15 + (param_2 & 0xffffffff));
    if ((*(short *)((long)psVar1 + (long)(int)uVar17 + -1) == sVar12) && (*psVar1 == sVar8)) {
      lVar4 = lVar15 + 5 + (param_2 & 0xffffffff);
      lVar19 = 0;
      do {
        lVar5 = (long)psVar3 + lVar19;
        uVar13 = *(ushort *)(lVar5 + 3);
        uVar14 = *(ushort *)(lVar4 + lVar19 + -2);
        if (uVar13 != uVar14) {
          iVar18 = (int)lVar5 + 3;
          goto LAB_0013097c;
        }
        uVar13 = *(ushort *)(lVar5 + 5);
        uVar14 = *(ushort *)(lVar4 + lVar19);
        if (uVar13 != uVar14) {
          iVar18 = iVar10 + (int)lVar19 + 5;
          goto LAB_0013097c;
        }
        lVar5 = (long)psVar3 + lVar19;
        uVar13 = *(ushort *)(lVar5 + 7);
        uVar14 = *(ushort *)(lVar4 + lVar19 + 2);
        if (uVar13 != uVar14) {
          iVar18 = (int)lVar5 + 7;
          goto LAB_0013097c;
        }
        uVar13 = *(ushort *)(lVar5 + 9);
        uVar14 = *(ushort *)(lVar4 + lVar19 + 4);
        lVar5 = lVar19 + 8;
      } while ((uVar13 == uVar14) && (uVar2 = lVar19 + 1, lVar19 = lVar5, uVar2 < 0xf9));
      iVar18 = iVar10 + (int)lVar5 + 1;
LAB_0013097c:
      if ((uVar13 & 0xff) == (uVar14 & 0xff)) {
        iVar18 = iVar18 + 1;
      }
      uVar16 = (iVar18 - (iVar10 + 0x101)) + 0x101;
      if ((int)uVar17 < (int)uVar16) {
        *(int *)(param_1 + 0xb0) = (int)param_2;
        if ((int)uVar9 <= (int)uVar16) {
LAB_001309cc:
          if (uVar16 <= uVar7) {
            uVar7 = uVar16;
          }
          return uVar7;
        }
        sVar12 = *(short *)((long)psVar3 + (long)(int)uVar16 + -1);
        uVar17 = (ulong)uVar16;
      }
    }
    uVar16 = (uint)uVar17;
    uVar14 = *(ushort *)(*(long *)(param_1 + 0x70) + (param_2 & *(uint *)(param_1 + 0x58)) * 2);
    param_2 = (ulong)uVar14;
    if ((uVar14 <= uVar6) || (uVar11 = uVar11 - 1, uVar11 == 0)) goto LAB_001309cc;
  } while( true );
}

