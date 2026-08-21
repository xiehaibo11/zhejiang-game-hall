
undefined8 FUN_00114374(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  if (param_4 == 0) {
    *param_3 = *param_2;
    log2Console(3,"Bugly-libunwind","mem[%lx] -> %lx\n",param_2);
    return 0;
  }
  log2Console(3,"Bugly-libunwind","mem[%lx] <- %lx\n",param_2,*param_3);
  *param_2 = *param_3;
  return 0;
}

