
void FUN_01173e34(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  param_1 = *(float *)(param_2 + 0x6c) * param_1;
  *(float *)(lVar1 + 0x44) = *(float *)(lVar1 + 0x44) - *(float *)(lVar1 + 0x1c) * param_1;
  *(float *)(lVar2 + 0x44) = *(float *)(lVar2 + 0x44) + param_1 * *(float *)(lVar2 + 0x1c);
  return;
}

