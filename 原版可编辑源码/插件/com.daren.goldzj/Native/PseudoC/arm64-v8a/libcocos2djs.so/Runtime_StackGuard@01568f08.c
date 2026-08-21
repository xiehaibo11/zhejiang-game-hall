
/* v8::internal::Runtime_StackGuard(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_StackGuard(int param_1,ulong *param_2,Isolate *param_3)

{
  byte *pbVar1;
  Isolate *pIVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte **local_60;
  byte *local_58;
  char *local_50;
  undefined8 local_48;
  Isolate *local_40;
  long *local_38;
  
  if (TracingFlags::runtime_stats == 0) {
    if (DAT_01d47008 == (byte *)0x0) {
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d47008 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"v8.execute");
    }
    pbVar1 = DAT_01d47008;
    local_60 = (byte **)0x0;
    if ((*DAT_01d47008 & 5) != 0) {
      local_40 = (Isolate *)0x0;
      local_38 = (long *)0x0;
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar4 = (**(code **)(*plVar3 + 0x18))
                        (plVar3,0x58,pbVar1,"V8.StackGuard",0,0,0,0,0,0,0,&local_40,0);
      plVar3 = local_38;
      local_38 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      pIVar2 = local_40;
      local_40 = (Isolate *)0x0;
      if (pIVar2 != (Isolate *)0x0) {
        (**(code **)(*(long *)pIVar2 + 8))();
      }
      local_60 = &local_58;
      local_50 = "V8.StackGuard";
      local_58 = pbVar1;
      local_48 = uVar4;
    }
    local_40 = param_3;
    uVar5 = StackLimitCheck::JsHasOverflowed((StackLimitCheck *)&local_40,0);
    if ((uVar5 & 1) == 0) {
      uVar4 = StackGuard::HandleInterrupts((StackGuard *)(param_3 + 0x48));
    }
    else {
      uVar4 = Isolate::StackOverflow(param_3);
    }
    if ((local_60 != (byte **)0x0) && (*local_58 != 0)) {
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar3 + 0x28))(plVar3,local_58,local_50,local_48);
    }
    return uVar4;
  }
  uVar4 = FUN_01569088(param_1,param_2,param_3);
  return uVar4;
}

