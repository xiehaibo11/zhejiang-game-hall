
undefined8 FUN_00a2ae88(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  int local_14;
  
  if ((param_2 == -1) ||
     (local_14 = param_2, lVar1 = FUN_00a4b04c(param_1 + 0x88,&local_14,4), lVar1 == 0)) {
    uVar2 = 5;
  }
  else {
    uVar2 = 0;
    *(undefined8 *)(lVar1 + 0x10) = param_3;
  }
  return uVar2;
}

