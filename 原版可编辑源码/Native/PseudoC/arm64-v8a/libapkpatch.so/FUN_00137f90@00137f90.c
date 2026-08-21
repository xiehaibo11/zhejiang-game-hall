
void FUN_00137f90(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_00138020();
  while( true ) {
    uVar1 = *param_1;
    FUN_00137154(uVar1);
    lVar2 = param_1[10];
    FUN_001372b0(uVar1);
    if (lVar2 == 0) break;
    sched_yield();
  }
  FUN_00136fe8(*param_1);
  FUN_00137590(param_1[2]);
  FUN_00137590(param_1[1]);
  FUN_0013842c(param_1 + 3);
  return;
}

