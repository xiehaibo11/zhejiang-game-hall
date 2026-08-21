
/* v8::internal::InvokeFunctionCallback(v8::FunctionCallbackInfo<v8::Value> const&, void
   (*)(v8::FunctionCallbackInfo<v8::Value> const&)) */

void v8::internal::InvokeFunctionCallback
               (FunctionCallbackInfo *param_1,_func_void_FunctionCallbackInfo_ptr *param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  long *plVar3;
  long lVar4;
  long local_98;
  _func_void_FunctionCallbackInfo_ptr *p_Stack_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  
  lVar4 = *(long *)(*(long *)param_1 + 8);
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(lVar4 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x82);
  }
  uVar1 = *(undefined4 *)(lVar4 + 0x2c60);
  *(undefined4 *)(lVar4 + 0x2c60) = 6;
  local_88 = *(undefined8 *)(lVar4 + 0x2c58);
  *(long **)(lVar4 + 0x2c58) = &local_98;
  local_98 = lVar4;
  p_Stack_90 = param_2;
  if (ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
      trace_event_unique_atomic63 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
    trace_event_unique_atomic63 =
         (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
           trace_event_unique_atomic63;
  if ((*ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
        trace_event_unique_atomic63 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x18))
              (plVar3,0x42,pbVar2,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  (*param_2)(param_1);
  *(undefined8 *)(local_98 + 0x2c58) = local_88;
  if (ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 =
         (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69;
  if ((*ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x18))
              (plVar3,0x45,pbVar2,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  *(undefined4 *)(lVar4 + 0x2c60) = uVar1;
  if (local_80 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return;
}

