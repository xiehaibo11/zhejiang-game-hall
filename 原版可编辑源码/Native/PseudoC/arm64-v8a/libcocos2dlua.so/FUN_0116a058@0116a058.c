
void FUN_0116a058(float param_1,long param_2)

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
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x6c);
  fVar5 = *(float *)(param_2 + 0x70);
  fVar6 = *(float *)(param_2 + 0x74);
  fVar7 = *(float *)(param_2 + 0x78);
  fVar8 = *(float *)(lVar1 + 0x44);
  fVar9 = *(float *)(param_2 + 0x88);
  fVar3 = (float)NEON_fminnm(fVar9 + *(float *)(param_2 + 0x84) *
                                     (*(float *)(param_2 + 0x8c) +
                                     (((*(float *)(lVar1 + 0x30) - *(float *)(lVar2 + 0x30)) -
                                      fVar5 * fVar8) + fVar7 * *(float *)(lVar2 + 0x44)) *
                                     *(float *)(param_2 + 0x7c) +
                                     *(float *)(param_2 + 0x80) *
                                     (((*(float *)(lVar1 + 0x34) + fVar4 * fVar8) -
                                      *(float *)(lVar2 + 0x34)) - fVar6 * *(float *)(lVar2 + 0x44)))
                             ,*(float *)(param_2 + 0x30) * param_1);
  *(float *)(param_2 + 0x88) = fVar3;
  fVar3 = fVar3 - fVar9;
  fVar9 = fVar3 * *(float *)(param_2 + 0x7c);
  fVar3 = fVar3 * *(float *)(param_2 + 0x80);
  *(float *)(lVar1 + 0x30) = *(float *)(lVar1 + 0x30) - fVar9 * *(float *)(lVar1 + 0x14);
  *(float *)(lVar1 + 0x34) = *(float *)(lVar1 + 0x34) - fVar3 * *(float *)(lVar1 + 0x14);
  *(float *)(lVar1 + 0x44) = fVar8 + (fVar5 * fVar9 - fVar4 * fVar3) * *(float *)(lVar1 + 0x1c);
  *(float *)(lVar2 + 0x30) = *(float *)(lVar2 + 0x30) + fVar9 * *(float *)(lVar2 + 0x14);
  *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x34) + fVar3 * *(float *)(lVar2 + 0x14);
  *(float *)(lVar2 + 0x44) =
       *(float *)(lVar2 + 0x44) + (fVar3 * fVar6 - fVar9 * fVar7) * *(float *)(lVar2 + 0x1c);
  return;
}

