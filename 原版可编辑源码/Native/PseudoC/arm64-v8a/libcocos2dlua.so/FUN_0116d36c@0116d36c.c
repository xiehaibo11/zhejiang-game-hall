
void FUN_0116d36c(long *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  
  if (*(float *)(param_2 + 1) <= *(float *)(param_1 + 2)) {
    do {
      if (*(float *)((long)param_2 + 0x14) < *(float *)((long)param_1 + 0xc)) {
        return;
      }
      if (*(float *)(param_2 + 2) < *(float *)(param_1 + 1)) {
        return;
      }
      if (*(float *)((long)param_1 + 0x14) < *(float *)((long)param_2 + 0xc)) {
        return;
      }
      lVar1 = *param_1;
      if (lVar1 != 0) {
        if ((param_3 & 0xff) == 0) {
          if (*(uint *)(param_1 + 4) < *(uint *)(param_2 + 4)) {
            FUN_0116d58c(param_1,param_2,*param_4);
            lVar1 = *param_1;
          }
                    /* WARNING: Could not recover jumptable at 0x0116d46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)param_4[2])(*param_2,lVar1,0,param_4[3]);
          return;
        }
        FUN_0116d58c(param_2,param_1,*param_4);
        return;
      }
      FUN_0116d36c(param_1[4],param_2,param_3,param_4);
      param_1 = (long *)param_1[5];
    } while (*(float *)(param_2 + 1) <= *(float *)(param_1 + 2));
  }
  return;
}

