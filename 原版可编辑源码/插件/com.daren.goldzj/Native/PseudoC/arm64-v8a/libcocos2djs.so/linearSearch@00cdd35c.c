
/* spine::Animation::linearSearch(spine::Vector<float>&, float, int) */

long spine::Animation::linearSearch(Vector *param_1,float param_2,int param_3)

{
  long lVar1;
  
  if (-1 < *(int *)(param_1 + 8) - param_3) {
    lVar1 = 0;
    do {
      if (param_2 < *(float *)(*(long *)(param_1 + 0x18) + lVar1 * 4)) {
        return lVar1;
      }
      lVar1 = lVar1 + param_3;
    } while (lVar1 <= *(int *)(param_1 + 8) - param_3);
  }
  return 0xffffffff;
}

