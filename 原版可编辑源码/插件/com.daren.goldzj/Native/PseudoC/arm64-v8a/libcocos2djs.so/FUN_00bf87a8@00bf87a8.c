
void FUN_00bf87a8(short param_1,short *param_2,void *param_3,size_t param_4)

{
  if (param_1 == 10) {
    memcpy(param_2 + 4,param_3,param_4);
    *param_2 = 10;
    return;
  }
  if (param_1 != 0x11) {
    if (param_1 != 2) {
      memcpy(param_2 + 1,param_3,param_4);
      *param_2 = param_1;
      return;
    }
    memcpy(param_2 + 2,param_3,param_4);
    *param_2 = 2;
    return;
  }
  memcpy(param_2 + 6,param_3,param_4);
  *param_2 = 0x11;
  *(char *)((long)param_2 + 0xb) = (char)param_4;
  return;
}

