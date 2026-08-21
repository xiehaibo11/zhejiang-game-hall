
/* spine::Animation::binarySearch(spine::Vector<float>&, float) */

int spine::Animation::binarySearch(Vector *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(int *)(param_1 + 8) - 2;
  if (uVar2 == 0) {
    return 1;
  }
  uVar4 = 0;
  uVar3 = uVar2;
  do {
    uVar1 = uVar2 >> 1;
    if (*(float *)(*(long *)(param_1 + 0x18) + (ulong)(uVar1 + 1) * 4) <= param_2) {
      uVar4 = uVar1 + 1;
      uVar1 = uVar3;
    }
    uVar2 = uVar4 + uVar1;
    uVar3 = uVar1;
  } while (uVar4 != uVar1);
  return uVar4 + 1;
}

