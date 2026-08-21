
/* spine::SkeletonClipping::makeClockwise(spine::Vector<float>&) */

void spine::SkeletonClipping::makeClockwise(Vector *param_1)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = *(ulong *)(param_1 + 8);
  pfVar2 = *(float **)(param_1 + 0x18);
  fVar8 = pfVar2[uVar3 - 2] * pfVar2[1] - *pfVar2 * pfVar2[uVar3 - 1];
  if (uVar3 != 3) {
    uVar4 = 0;
    fVar9 = *pfVar2;
    do {
      lVar5 = uVar4 + 2;
      lVar6 = uVar4 + 3;
      lVar7 = uVar4 + 1;
      uVar4 = uVar4 + 2;
      fVar8 = fVar8 + (fVar9 * pfVar2[lVar6] - pfVar2[lVar7] * pfVar2[lVar5]);
      fVar9 = pfVar2[lVar5];
    } while (uVar4 < uVar3 - 3);
  }
  if ((0.0 <= fVar8) && (uVar3 >> 1 != 0)) {
    lVar6 = uVar3 << 0x20;
    uVar4 = 0;
    lVar5 = lVar6 + -0x100000000;
    do {
      lVar6 = lVar6 + -0x200000000;
      pfVar1 = pfVar2 + uVar4;
      lVar7 = lVar5 >> 0x1e;
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      *pfVar1 = *(float *)((long)pfVar2 + (lVar6 >> 0x1e));
      uVar4 = uVar4 + 2;
      lVar5 = lVar5 + -0x200000000;
      pfVar1[1] = *(float *)((long)pfVar2 + lVar7);
      *(float *)((long)pfVar2 + (lVar6 >> 0x1e)) = fVar8;
      *(float *)((long)pfVar2 + lVar7) = fVar9;
    } while (uVar4 < uVar3 >> 1);
  }
  return;
}

