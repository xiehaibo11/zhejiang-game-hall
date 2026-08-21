
/* v8::internal::Runtime_Abort(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Runtime_Abort(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  
  if (TracingFlags::runtime_stats == 0) {
    if ((*param_2 & 1) == 0) {
      uVar1 = GetAbortReason(*param_2 >> 1 & 0x7fffffff);
      base::OS::PrintError("abort: %s\n",uVar1);
      Isolate::PrintStack(param_3,__cxa_thread_atexit_impl,1);
                    /* WARNING: Subroutine does not return */
      base::OS::Abort();
    }
  }
  else {
    FUN_015a3198(param_1,param_2,param_3);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsSmi()");
}

