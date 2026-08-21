
void FUN_0116da10(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 == 0) {
    FUN_0116da10(param_1[4],param_2);
    param_1 = (long *)param_1[5];
    lVar1 = *param_1;
  }
  FUN_0116d478(param_1,param_2);
  return;
}

