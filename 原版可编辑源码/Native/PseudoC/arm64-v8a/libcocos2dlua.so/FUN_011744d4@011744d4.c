
void FUN_011744d4(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *(float *)(param_2 + 0x70);
  fVar5 = *(float *)(param_2 + 0x74);
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  param_1 = *(float *)(param_2 + 0x8c) * param_1;
  fVar3 = *(float *)(param_2 + 0x80) * param_1;
  param_1 = *(float *)(param_2 + 0x84) * param_1;
  fVar6 = *(float *)(param_2 + 0x78);
  fVar7 = *(float *)(param_2 + 0x7c);
  *(float *)(lVar1 + 0x30) = *(float *)(lVar1 + 0x30) - fVar3 * *(float *)(lVar1 + 0x14);
  *(float *)(lVar1 + 0x34) = *(float *)(lVar1 + 0x34) - param_1 * *(float *)(lVar1 + 0x14);
  *(float *)(lVar1 + 0x44) =
       *(float *)(lVar1 + 0x44) + (fVar5 * fVar3 - fVar4 * param_1) * *(float *)(lVar1 + 0x1c);
  *(float *)(lVar2 + 0x30) = *(float *)(lVar2 + 0x30) + fVar3 * *(float *)(lVar2 + 0x14);
  *(float *)(lVar2 + 0x34) = *(float *)(lVar2 + 0x34) + param_1 * *(float *)(lVar2 + 0x14);
  *(float *)(lVar2 + 0x44) =
       *(float *)(lVar2 + 0x44) + (fVar6 * param_1 - fVar7 * fVar3) * *(float *)(lVar2 + 0x1c);
  return;
}

