
void SSL3_BUFFER_set_data(undefined8 *param_1,void *param_2,int param_3)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abb324 with catch @ 00abb2cc
                        */
  if (param_2 != (void *)0x0) {
    memcpy((void *)*param_1,param_2,(long)param_3);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  *(int *)((long)param_1 + 0x1c) = param_3;
  return;
}

