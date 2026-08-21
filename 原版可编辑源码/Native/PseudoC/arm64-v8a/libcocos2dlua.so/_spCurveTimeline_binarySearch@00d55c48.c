
int _spCurveTimeline_binarySearch(float param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_4 != 0) {
    iVar4 = param_3 / param_4;
  }
  iVar4 = iVar4 + -2;
  if (iVar4 != 0) {
    iVar2 = 0;
    iVar3 = iVar4;
    do {
      iVar1 = iVar4 >> 1;
                    /* try { // try from 00d55c60 to 00e55c67 has its CatchHandler @ 00d55d20 */
      if (*(float *)(param_2 + (long)((iVar1 + 1) * param_4) * 4) <= param_1) {
        iVar2 = iVar1 + 1;
        iVar1 = iVar3;
      }
      iVar4 = iVar2 + iVar1;
      iVar3 = iVar1;
    } while (iVar2 != iVar1);
    param_4 = (iVar2 + 1) * param_4;
  }
  return param_4;
}

