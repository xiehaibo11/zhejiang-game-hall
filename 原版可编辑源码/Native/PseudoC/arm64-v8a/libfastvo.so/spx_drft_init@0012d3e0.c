
void spx_drft_init(int *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  double __x;
  float fVar18;
  
  *param_1 = param_2;
  pvVar4 = calloc((long)(param_2 * 0xc),1);
  *(void **)(param_1 + 2) = pvVar4;
  piVar5 = calloc(0x80,1);
  *(int **)(param_1 + 4) = piVar5;
  if (param_2 == 1) {
    return;
  }
  iVar8 = 0;
  uVar7 = 0;
  lVar11 = -1;
  iVar15 = param_2;
  do {
    lVar13 = lVar11 + 1;
    if (lVar11 < 3) {
      iVar8 = (&DAT_001371e0)[lVar13];
    }
    else {
      iVar8 = iVar8 + 2;
    }
    uVar9 = (uint)uVar7;
    piVar10 = piVar5 + (long)(int)uVar9 + 2;
    uVar14 = (long)(int)uVar9;
    while( true ) {
      uVar7 = uVar14;
      uVar9 = uVar9 + 1;
      iVar3 = 0;
      if (iVar8 != 0) {
        iVar3 = iVar15 / iVar8;
      }
      lVar11 = lVar13;
      if (iVar15 != iVar3 * iVar8) break;
      piVar5[uVar7 + 2] = iVar8;
      if ((iVar8 == 2) && (uVar7 != 0)) {
        if (0 < (long)uVar7) {
          lVar11 = (ulong)uVar9 - 1;
          piVar6 = piVar10;
          do {
            lVar11 = lVar11 + -1;
            *piVar6 = piVar6[-1];
            piVar6 = piVar6 + -1;
          } while (lVar11 != 0);
        }
        piVar5[2] = 2;
      }
      piVar10 = piVar10 + 1;
      uVar14 = uVar7 + 1;
      iVar15 = iVar3;
      if (iVar3 == 1) {
        *piVar5 = param_2;
        piVar5[1] = (int)(uVar7 + 1);
        if ((int)uVar7 < 1) {
          return;
        }
        uVar14 = 0;
        iVar8 = 0;
        iVar15 = 1;
        do {
          iVar3 = piVar5[uVar14 + 2];
          iVar2 = iVar3 * iVar15;
          if (1 < iVar3) {
            iVar16 = 0;
            uVar9 = 0;
            if (iVar2 != 0) {
              uVar9 = param_2 / iVar2;
            }
            iVar12 = 0;
            lVar11 = (long)pvVar4 + (long)iVar8 * 4 + (long)param_2 * 4;
            do {
              iVar12 = iVar12 + iVar15;
              if (2 < (int)uVar9) {
                lVar13 = 0;
                fVar18 = 0.0;
                do {
                  fVar18 = fVar18 + 1.0;
                  __x = (double)((6.2831855 / (float)param_2) * (float)iVar12 * fVar18);
                  dVar17 = cos(__x);
                  pfVar1 = (float *)(lVar11 + lVar13 * 4);
                  *pfVar1 = (float)dVar17;
                  dVar17 = sin(__x);
                  lVar13 = lVar13 + 2;
                  pfVar1[1] = (float)dVar17;
                } while ((int)lVar13 + 2 < (int)uVar9);
              }
              iVar16 = iVar16 + 1;
              lVar11 = lVar11 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2);
            } while (iVar16 != iVar3 + -1);
            iVar8 = iVar8 + uVar9 * (iVar3 + -1);
          }
          uVar14 = uVar14 + 1;
          iVar15 = iVar2;
        } while (uVar14 != (uVar7 & 0xffffffff));
        return;
      }
    }
  } while( true );
}

