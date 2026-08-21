
/* spine::Animation::binarySearch(spine::Vector<float>&, float, int) */

int spine::Animation::binarySearch(Vector *param_1,float param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 8) / param_3;
  }
  uVar3 = iVar2 - 2;
  if (uVar3 != 0) {
    uVar5 = 0;
    uVar4 = uVar3;
    do {
      uVar1 = uVar3 >> 1;
      if (*(float *)(*(long *)(param_1 + 0x18) + (long)(int)((uVar1 + 1) * param_3) * 4) <= param_2)
      {
        uVar5 = uVar1 + 1;
        uVar1 = uVar4;
      }
      uVar3 = uVar5 + uVar1;
      uVar4 = uVar1;
    } while (uVar5 != uVar1);
    param_3 = (uVar5 + 1) * param_3;
  }
  return param_3;
}

