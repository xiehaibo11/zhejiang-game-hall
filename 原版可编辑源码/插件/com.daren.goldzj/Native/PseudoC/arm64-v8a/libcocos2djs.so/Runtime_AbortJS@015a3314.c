
/* v8::internal::Runtime_AbortJS(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_AbortJS(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong local_40;
  void *local_38;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_015a347c(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_40 = *param_2;
  if (((local_40 & 1) != 0) &&
     (*(ushort *)((local_40 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_40 - 1)) < 0x40)) {
    if (FLAG_disable_abortjs != '\0') {
      String::ToCString(&local_38,&local_40,1,1,0);
      base::OS::PrintError("[disabled] abort: %s\n",local_38);
      pvVar2 = local_38;
      local_38 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
      }
      *(undefined8 *)(param_3 + 0x95a0) = uVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
      return 0;
    }
    String::ToCString(&local_38,&local_40,1,1,0);
    base::OS::PrintError("abort: %s\n",local_38);
    FUN_00f4f284(&local_38);
    Isolate::PrintStack(param_3,__cxa_thread_atexit_impl,1);
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

