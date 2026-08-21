
void FUN_00dcfeac(long param_1,char *param_2,undefined8 *param_3)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    fprintf((FILE *)__cxa_thread_atexit_impl,"%s: ",param_1);
  }
  fwrite("Warning, ",9,1,(FILE *)__cxa_thread_atexit_impl);
  uStack_38 = param_3[3];
  local_40 = param_3[2];
  uStack_48 = param_3[1];
  local_50 = *param_3;
  vfprintf((FILE *)__cxa_thread_atexit_impl,param_2,&local_50);
  fwrite(".\n",2,1,(FILE *)__cxa_thread_atexit_impl);
  return;
}

