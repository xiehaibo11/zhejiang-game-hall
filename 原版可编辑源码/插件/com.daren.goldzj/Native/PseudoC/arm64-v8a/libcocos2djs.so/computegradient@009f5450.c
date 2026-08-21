
void computegradient(long param_1,ulong param_2,int param_3,long param_4,long param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  
  if (1 < (int)(param_3 - 1U)) {
    uVar6 = (int)param_2 - 1;
    uVar10 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
    lVar9 = 0;
    uVar11 = 1;
    do {
      lVar7 = lVar9;
      lVar8 = (ulong)uVar6 - 1;
      if (1 < (int)uVar6) {
        do {
          dVar12 = *(double *)(param_1 + uVar10 + lVar7 + 8);
          if ((0.0 < dVar12) && (dVar12 < 1.0)) {
            pdVar1 = (double *)(param_1 + lVar7);
            pdVar2 = (double *)(param_1 + uVar10 + lVar7);
            pdVar3 = (double *)(param_1 + (long)(int)param_2 * 0x10 + lVar7);
            lVar4 = param_4 + uVar10 + lVar7;
            *(double *)(lVar4 + 8) =
                 pdVar3[2] +
                 pdVar1[2] + ((-*pdVar1 - *pdVar2 * 1.4142136) - *pdVar3) + pdVar2[2] * 1.4142136;
            lVar5 = param_5 + uVar10 + lVar7;
            dVar13 = pdVar3[2] +
                     pdVar1[2] + ((-*pdVar1 - pdVar1[1] * 1.4142136) - *pdVar3) +
                     pdVar3[1] * 1.4142136;
            *(double *)(lVar5 + 8) = dVar13;
            dVar12 = *(double *)(lVar4 + 8);
            dVar13 = dVar12 * dVar12 + dVar13 * dVar13;
            if (0.0 < dVar13) {
              dVar13 = SQRT(dVar13);
              *(double *)(lVar4 + 8) = dVar12 / dVar13;
              *(double *)(lVar5 + 8) = *(double *)(lVar5 + 8) / dVar13;
            }
          }
          lVar8 = lVar8 + -1;
          lVar7 = lVar7 + 8;
        } while (lVar8 != 0);
      }
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + uVar10;
    } while (uVar11 != param_3 - 1U);
  }
  return;
}

