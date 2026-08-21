
void luaL_where(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int local_4;
  
  lVar2 = FUN_00bfc824(param_1,param_2,&local_4);
  lVar1 = 0;
  if (local_4 != 0) {
    lVar1 = lVar2 + (long)local_4 * 8;
  }
  FUN_00bfcf20(param_1,"",lVar2,lVar1);
  return;
}

