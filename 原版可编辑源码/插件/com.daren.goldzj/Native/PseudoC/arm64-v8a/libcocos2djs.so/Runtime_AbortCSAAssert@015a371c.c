
/* v8::internal::Runtime_AbortCSAAssert(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Runtime_AbortCSAAssert(int param_1,ulong *param_2,Isolate *param_3)

{
  ulong local_28;
  undefined8 local_8;
  
  if (TracingFlags::runtime_stats == 0) {
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    local_28 = *param_2;
    if (((local_28 & 1) != 0) &&
       (*(ushort *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) < 0x40)) {
      String::ToCString(&local_8,&local_28,1,1,0);
      base::OS::PrintError("abort: CSA_ASSERT failed: %s\n",local_8);
      FUN_00f4f284(&local_8);
      Isolate::PrintStack(param_3,__cxa_thread_atexit_impl,1);
                    /* WARNING: Subroutine does not return */
      base::OS::Abort();
    }
  }
  else {
    FUN_015a37dc(param_1,param_2,param_3);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

