
void WebPCopyPlane(void *param_1,int param_2,void *param_3,int param_4,int param_5,int param_6)

{
  if (0 < param_6) {
    param_6 = param_6 + 1;
    do {
      memcpy(param_3,param_1,(long)param_5);
      param_6 = param_6 + -1;
      param_1 = (void *)((long)param_1 + (long)param_2);
      param_3 = (void *)((long)param_3 + (long)param_4);
    } while (1 < param_6);
  }
  return;
}

