
void FUN_0116f1c8(long param_1)

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
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 0x88);
  fVar5 = *(float *)(param_1 + 0x8c);
  fVar6 = *(float *)(param_1 + 0x90);
  fVar7 = *(float *)(param_1 + 0x94);
  fVar10 = *(float *)(lVar1 + 0x44);
  fVar9 = ((-*(float *)(lVar1 + 0x34) - fVar4 * fVar10) + *(float *)(lVar2 + 0x34) +
          fVar6 * *(float *)(lVar2 + 0x44)) * *(float *)(param_1 + 0xa0) +
          *(float *)(param_1 + 0x9c) *
          (((*(float *)(lVar2 + 0x30) - *(float *)(lVar1 + 0x30)) + fVar5 * fVar10) -
          fVar7 * *(float *)(lVar2 + 0x44));
  fVar8 = (*(float *)(param_1 + 0x80) - fVar9) * *(float *)(param_1 + 0x84);
  fVar3 = fVar8 * *(float *)(param_1 + 0x98);
  *(float *)(param_1 + 0x80) = fVar8 + fVar9;
  *(float *)(param_1 + 0xa4) = fVar3 + *(float *)(param_1 + 0xa4);
  fVar8 = *(float *)(param_1 + 0x9c) * fVar3;
  fVar3 = *(float *)(param_1 + 0xa0) * fVar3;
  *(float *)(lVar1 + 0x30) = *(float *)(lVar1 + 0x30) - fVar8 * *(float *)(lVar1 + 0x14);
  *(float *)(lVar1 + 0x34) = *(float *)(lVar1 + 0x34) - fVar3 * *(float *)(lVar1 + 0x14);
  *(float *)(lVar1 + 0x44) = fVar10 + (fVar5 * fVar8 - fVar4 * fVar3) * *(float *)(lVar1 + 0x1c);
  *(float *)(lVar2 + 0x30) = *(float *)(lVar2 + 0x30) + fVar8 * *(float *)(lVar2 + 0x14);
  *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x34) + fVar3 * *(float *)(lVar2 + 0x14);
  *(float *)(lVar2 + 0x44) =
       *(float *)(lVar2 + 0x44) + (fVar6 * fVar3 - fVar7 * fVar8) * *(float *)(lVar2 + 0x1c);
  return;
}

