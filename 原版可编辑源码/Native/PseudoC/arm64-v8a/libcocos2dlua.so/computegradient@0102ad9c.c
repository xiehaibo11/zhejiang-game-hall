
void computegradient(long param_1,ulong param_2,int param_3,long param_4,long param_5)

{
  long lVar1;
  double *pdVar2;
  long lVar3;
  double *pdVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  
  if (1 < (int)(param_3 - 1U)) {
    uVar9 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
    uVar5 = (int)param_2 - 1;
    lVar1 = uVar9 + 8;
    lVar8 = 0;
    param_5 = param_5 + lVar1;
    param_4 = param_4 + lVar1;
    uVar10 = 1;
    do {
      lVar6 = lVar8;
      lVar7 = (ulong)uVar5 - 1;
      if (1 < (int)uVar5) {
        do {
          dVar11 = *(double *)(param_1 + lVar1 + lVar6);
          if ((0.0 < dVar11) && (dVar11 < 1.0)) {
            pdVar2 = (double *)(param_1 + lVar6);
            lVar3 = param_1 + lVar1 + lVar6;
            pdVar4 = (double *)(param_1 + (long)(int)param_2 * 0x10 + 0x10 + lVar6);
            *(double *)(param_4 + lVar6) =
                 *pdVar4 + pdVar2[2] +
                           ((-*pdVar2 - *(double *)(lVar3 + -8) * 1.4142136) - pdVar4[-2]) +
                           *(double *)(lVar3 + 8) * 1.4142136;
            dVar12 = *pdVar4 + pdVar2[2] + ((-*pdVar2 - pdVar2[1] * 1.4142136) - pdVar4[-2]) +
                               pdVar4[-1] * 1.4142136;
            *(double *)(param_5 + lVar6) = dVar12;
            dVar11 = *(double *)(param_4 + lVar6);
            dVar12 = dVar11 * dVar11 + dVar12 * dVar12;
            if (0.0 < dVar12) {
              dVar12 = SQRT(dVar12);
              *(double *)(param_4 + lVar6) = dVar11 / dVar12;
              *(double *)(param_5 + lVar6) = *(double *)(param_5 + lVar6) / dVar12;
            }
          }
          lVar7 = lVar7 + -1;
          lVar6 = lVar6 + 8;
        } while (lVar7 != 0);
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + uVar9;
    } while (uVar10 != param_3 - 1U);
  }
  return;
}

