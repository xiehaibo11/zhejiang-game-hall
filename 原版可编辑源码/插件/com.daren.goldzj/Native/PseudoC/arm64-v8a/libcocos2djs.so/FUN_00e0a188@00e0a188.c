
uint FUN_00e0a188(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  
  lVar19 = *(long *)(param_1 + 0x50);
  uVar22 = *(uint *)(param_1 + 0x9c);
  uVar21 = (ulong)(int)*(uint *)(param_1 + 0xa8);
  uVar6 = *(uint *)(param_1 + 0xa4);
  pcVar3 = (char *)(lVar19 + (ulong)uVar22);
  uVar8 = *(int *)(param_1 + 0x44) - 0x106;
  uVar9 = uVar22 - uVar8;
  cVar12 = (pcVar3 + uVar21)[-1];
  cVar13 = pcVar3[uVar21];
  if (uVar22 < uVar8 || uVar9 == 0) {
    uVar9 = 0;
  }
  uVar22 = *(uint *)(param_1 + 0xac);
  if (*(uint *)(param_1 + 0xbc) <= *(uint *)(param_1 + 0xa8)) {
    uVar22 = *(uint *)(param_1 + 0xac) >> 2;
  }
  iVar10 = (int)pcVar3;
  uVar8 = uVar6;
  if (*(uint *)(param_1 + 0xc0) <= uVar6) {
    uVar8 = *(uint *)(param_1 + 0xc0);
  }
  do {
    pcVar4 = (char *)(lVar19 + (ulong)param_2);
    iVar20 = (int)uVar21;
    if ((((pcVar4[iVar20] == cVar13) && (pcVar4[(long)iVar20 + -1] == cVar12)) &&
        (*pcVar4 == *pcVar3)) && (pcVar4[1] == pcVar3[1])) {
      lVar1 = lVar19 + (ulong)param_2 + 5;
      iVar18 = 2;
      lVar17 = 0;
      do {
        iVar14 = iVar10 + iVar18;
        if (pcVar3[lVar17 + 3] != *(char *)(lVar1 + lVar17 + -2)) {
          iVar14 = iVar14 + 1;
          goto LAB_00e0a340;
        }
        if (pcVar3[lVar17 + 4] != *(char *)(lVar1 + lVar17 + -1)) {
          iVar14 = iVar14 + 2;
          goto LAB_00e0a340;
        }
        if (pcVar3[lVar17 + 5] != *(char *)(lVar1 + lVar17)) {
          iVar14 = iVar14 + 3;
          goto LAB_00e0a340;
        }
        if (pcVar3[lVar17 + 6] != *(char *)(lVar1 + lVar17 + 1)) {
          iVar14 = iVar14 + 4;
          goto LAB_00e0a340;
        }
        if (pcVar3[lVar17 + 7] != *(char *)(lVar1 + lVar17 + 2)) {
          iVar14 = iVar14 + 5;
          goto LAB_00e0a340;
        }
        if (pcVar3[lVar17 + 8] != *(char *)(lVar1 + lVar17 + 3)) {
          iVar14 = iVar14 + 6;
          goto LAB_00e0a340;
        }
        if (pcVar3[lVar17 + 9] != *(char *)(lVar1 + lVar17 + 4)) {
          iVar14 = iVar14 + 7;
          goto LAB_00e0a340;
        }
        lVar2 = lVar17 + 8;
      } while ((lVar17 + 2 < 0xfa) &&
              (lVar5 = lVar1 + lVar17, lVar11 = lVar17 + 10, iVar18 = iVar18 + 8, lVar17 = lVar2,
              pcVar3[lVar11] == *(char *)(lVar5 + 5)));
      iVar14 = iVar10 + (int)lVar2 + 2;
LAB_00e0a340:
      uVar16 = 0x102 - (long)((iVar10 + 0x102) - iVar14);
      uVar15 = (uint)uVar16;
      if (iVar20 < (int)uVar15) {
        *(uint *)(param_1 + 0xa0) = param_2;
        if ((int)uVar8 <= (int)uVar15) {
LAB_00e0a384:
          if (uVar15 <= uVar6) {
            uVar6 = uVar15;
          }
          return uVar6;
        }
        cVar12 = pcVar3[(long)(int)uVar15 + -1];
        cVar13 = pcVar3[uVar16];
        uVar21 = uVar16 & 0xffffffff;
      }
    }
    uVar15 = (uint)uVar21;
    uVar7 = *(ushort *)
             (*(long *)(param_1 + 0x60) + (ulong)(param_2 & *(uint *)(param_1 + 0x4c)) * 2);
    param_2 = (uint)uVar7;
    if ((uVar7 <= uVar9) || (uVar22 = uVar22 - 1, uVar22 == 0)) goto LAB_00e0a384;
  } while( true );
}

