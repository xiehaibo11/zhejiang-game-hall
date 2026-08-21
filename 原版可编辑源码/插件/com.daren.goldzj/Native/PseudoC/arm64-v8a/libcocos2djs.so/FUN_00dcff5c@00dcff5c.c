
void FUN_00dcff5c(long param_1,char *param_2,undefined8 *param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    fprintf((FILE *)__cxa_thread_atexit_impl,"%s: ",param_1);
  }
  uStack_28 = param_3[3];
  local_30 = param_3[2];
  uStack_38 = param_3[1];
  local_40 = *param_3;
  vfprintf((FILE *)__cxa_thread_atexit_impl,param_2,&local_40);
  fwrite(".\n",2,1,(FILE *)__cxa_thread_atexit_impl);
  return;
}

