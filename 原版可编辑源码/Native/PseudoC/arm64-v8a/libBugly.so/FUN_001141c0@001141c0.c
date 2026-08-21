
undefined8 FUN_001141c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    *param_3 = *param_2;
    log2Console(3,"Bugly-libunwind","mem[%lx] -> %lx\n",param_2);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

