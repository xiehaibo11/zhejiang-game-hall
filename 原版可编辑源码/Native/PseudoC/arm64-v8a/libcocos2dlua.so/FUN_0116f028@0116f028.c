
void FUN_0116f028(float param_1,long param_2)

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
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  fVar3 = *(float *)(param_2 + 0x58) - *(float *)(lVar1 + 0x20);
  fVar5 = *(float *)(param_2 + 0x5c) - *(float *)(lVar1 + 0x24);
  fVar4 = (float)*(undefined8 *)(lVar1 + 0x4c) * fVar3 +
          (float)*(undefined8 *)(lVar1 + 0x54) * fVar5;
  fVar5 = (float)((ulong)*(undefined8 *)(lVar1 + 0x4c) >> 0x20) * fVar3 +
          (float)((ulong)*(undefined8 *)(lVar1 + 0x54) >> 0x20) * fVar5;
  *(ulong *)(param_2 + 0x88) = CONCAT44(fVar5,fVar4);
  fVar3 = *(float *)(param_2 + 0x60) - *(float *)(lVar2 + 0x20);
  fVar7 = *(float *)(param_2 + 100) - *(float *)(lVar2 + 0x24);
  fVar6 = (float)*(undefined8 *)(lVar2 + 0x4c) * fVar3 +
          (float)*(undefined8 *)(lVar2 + 0x54) * fVar7;
  fVar7 = (float)((ulong)*(undefined8 *)(lVar2 + 0x4c) >> 0x20) * fVar3 +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x54) >> 0x20) * fVar7;
  *(ulong *)(param_2 + 0x90) = CONCAT44(fVar7,fVar6);
  fVar8 = ((fVar6 + (float)*(undefined8 *)(lVar2 + 0x28)) - (float)*(undefined8 *)(lVar1 + 0x28)) -
          fVar4;
  fVar9 = ((fVar7 + (float)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20)) -
          (float)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20)) - fVar5;
  fVar10 = SQRT(fVar8 * fVar8 + fVar9 * fVar9);
  fVar3 = 1.0 / fVar10;
  if (fVar10 == 0.0) {
    fVar3 = fVar10;
  }
  fVar8 = fVar3 * fVar8;
  fVar3 = fVar3 * fVar9;
  *(float *)(param_2 + 0x9c) = fVar8;
  *(float *)(param_2 + 0xa0) = fVar3;
  fVar4 = fVar3 * fVar4 - fVar8 * fVar5;
  fVar3 = fVar3 * fVar6 - fVar8 * fVar7;
  fVar3 = *(float *)(lVar2 + 0x14) + *(float *)(lVar1 + 0x14) +
          fVar4 * *(float *)(lVar1 + 0x1c) * fVar4 + fVar3 * *(float *)(lVar2 + 0x1c) * fVar3;
  *(undefined4 *)(param_2 + 0x80) = 0;
  *(float *)(param_2 + 0x98) = 1.0 / fVar3;
  fVar3 = expf(-(fVar3 * param_1 * *(float *)(param_2 + 0x70)));
  *(float *)(param_2 + 0x84) = 1.0 - fVar3;
  fVar3 = (float)(**(code **)(param_2 + 0x78))(fVar10,param_2);
  fVar3 = fVar3 * param_1;
  fVar6 = *(float *)(param_2 + 0x88);
  fVar7 = *(float *)(param_2 + 0x8c);
  *(float *)(param_2 + 0xa4) = fVar3;
  fVar4 = *(float *)(param_2 + 0x9c) * fVar3;
  fVar3 = *(float *)(param_2 + 0xa0) * fVar3;
  fVar5 = *(float *)(param_2 + 0x90);
  fVar8 = *(float *)(param_2 + 0x94);
  *(float *)(lVar1 + 0x30) = *(float *)(lVar1 + 0x30) - fVar4 * *(float *)(lVar1 + 0x14);
  *(float *)(lVar1 + 0x34) = *(float *)(lVar1 + 0x34) - fVar3 * *(float *)(lVar1 + 0x14);
  *(float *)(lVar1 + 0x44) =
       *(float *)(lVar1 + 0x44) + (fVar7 * fVar4 - fVar6 * fVar3) * *(float *)(lVar1 + 0x1c);
  *(float *)(lVar2 + 0x30) = *(float *)(lVar2 + 0x30) + fVar4 * *(float *)(lVar2 + 0x14);
  *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x34) + fVar3 * *(float *)(lVar2 + 0x14);
  *(float *)(lVar2 + 0x44) =
       *(float *)(lVar2 + 0x44) + (fVar5 * fVar3 - fVar8 * fVar4) * *(float *)(lVar2 + 0x1c);
  return;
}

