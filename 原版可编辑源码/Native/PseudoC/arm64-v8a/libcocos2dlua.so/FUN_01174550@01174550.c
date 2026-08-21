
void FUN_01174550(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar4 = *(float *)(param_1 + 0x80);
  fVar5 = *(float *)(param_1 + 0x84);
  if (fVar4 != 0.0 || fVar5 != 0.0) {
    lVar1 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    fVar6 = *(float *)(param_1 + 0x70);
    fVar7 = *(float *)(param_1 + 0x74);
    fVar8 = *(float *)(param_1 + 0x78);
    fVar9 = *(float *)(param_1 + 0x7c);
    fVar11 = *(float *)(lVar1 + 0x44);
    fVar10 = *(float *)(param_1 + 0x8c);
    fVar3 = (float)NEON_fminnm(fVar10 + *(float *)(param_1 + 0x88) *
                                        (*(float *)(param_1 + 0x90) +
                                        (((*(float *)(lVar1 + 0x30) - *(float *)(lVar2 + 0x30)) -
                                         fVar7 * fVar11) + fVar9 * *(float *)(lVar2 + 0x44)) * fVar4
                                        + fVar5 * (((*(float *)(lVar1 + 0x34) + fVar6 * fVar11) -
                                                   *(float *)(lVar2 + 0x34)) -
                                                  fVar8 * *(float *)(lVar2 + 0x44))),0);
    *(float *)(param_1 + 0x8c) = fVar3;
    fVar3 = fVar3 - fVar10;
    fVar4 = fVar3 * fVar4;
    fVar3 = fVar3 * fVar5;
    *(float *)(lVar1 + 0x30) = *(float *)(lVar1 + 0x30) - fVar4 * *(float *)(lVar1 + 0x14);
    *(float *)(lVar1 + 0x34) = *(float *)(lVar1 + 0x34) - fVar3 * *(float *)(lVar1 + 0x14);
    *(float *)(lVar1 + 0x44) = fVar11 + (fVar7 * fVar4 - fVar6 * fVar3) * *(float *)(lVar1 + 0x1c);
    *(float *)(lVar2 + 0x30) = *(float *)(lVar2 + 0x30) + fVar4 * *(float *)(lVar2 + 0x14);
    *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x34) + fVar3 * *(float *)(lVar2 + 0x14);
    *(float *)(lVar2 + 0x44) =
         *(float *)(lVar2 + 0x44) + (fVar3 * fVar8 - fVar4 * fVar9) * *(float *)(lVar2 + 0x1c);
  }
  return;
}

