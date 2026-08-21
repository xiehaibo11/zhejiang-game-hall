
void FUN_011671a4(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  fVar3 = *(float *)(lVar2 + 0x1c) + *(float *)(lVar1 + 0x1c);
  *(float *)(param_2 + 0x78) = 1.0 / fVar3;
  fVar3 = expf(-(fVar3 * param_1 * *(float *)(param_2 + 0x60)));
  *(undefined4 *)(param_2 + 0x70) = 0;
  *(float *)(param_2 + 0x74) = 1.0 - fVar3;
  fVar3 = (float)(**(code **)(param_2 + 0x68))
                           (*(float *)(lVar1 + 0x40) - *(float *)(lVar2 + 0x40),param_2);
  fVar3 = fVar3 * param_1;
  *(float *)(param_2 + 0x7c) = fVar3;
  *(float *)(lVar1 + 0x44) = *(float *)(lVar1 + 0x44) - fVar3 * *(float *)(lVar1 + 0x1c);
  *(float *)(lVar2 + 0x44) = *(float *)(lVar2 + 0x44) + fVar3 * *(float *)(lVar2 + 0x1c);
  return;
}

