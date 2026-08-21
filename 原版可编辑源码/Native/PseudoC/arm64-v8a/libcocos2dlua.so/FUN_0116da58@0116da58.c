
void FUN_0116da58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,undefined8 param_6,code *UNRECOVERED_JUMPTABLE,undefined8 param_8)

{
  float fVar1;
  
  fVar1 = *(float *)(param_5 + 1);
  while ((((fVar1 <= (float)param_3 && ((float)param_2 <= *(float *)((long)param_5 + 0x14))) &&
          ((float)param_1 <= *(float *)(param_5 + 2))) &&
         (*(float *)((long)param_5 + 0xc) <= (float)param_4))) {
    if (*param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0116db38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_6,*param_5,0,param_8);
      return;
    }
    FUN_0116da58(param_1,param_2,param_3,param_4,param_5[4],param_6,UNRECOVERED_JUMPTABLE,param_8);
    param_5 = (long *)param_5[5];
    fVar1 = *(float *)(param_5 + 1);
  }
  return;
}

