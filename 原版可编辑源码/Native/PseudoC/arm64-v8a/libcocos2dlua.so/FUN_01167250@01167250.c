
void FUN_01167250(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  fVar3 = *(float *)(lVar1 + 0x44);
  fVar4 = fVar3 - *(float *)(lVar2 + 0x44);
  fVar5 = (*(float *)(param_1 + 0x70) - fVar4) * *(float *)(param_1 + 0x74);
  *(float *)(param_1 + 0x70) = fVar5 + fVar4;
  fVar5 = *(float *)(param_1 + 0x78) * fVar5;
  *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x7c) + fVar5;
  *(float *)(lVar1 + 0x44) = fVar3 + fVar5 * *(float *)(lVar1 + 0x1c);
  *(float *)(lVar2 + 0x44) = *(float *)(lVar2 + 0x44) - fVar5 * *(float *)(lVar2 + 0x1c);
  return;
}

