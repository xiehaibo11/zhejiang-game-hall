
bool bn_copy_words(void *param_1,undefined8 *param_2,ulong param_3)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_2 + 1) <= (int)param_3;
  if (bVar1) {
    memset(param_1,0,-(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3);
    memcpy(param_1,(void *)*param_2,(long)*(int *)(param_2 + 1) << 3);
  }
  return bVar1;
}

