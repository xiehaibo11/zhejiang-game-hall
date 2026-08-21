
/* v8::internal::PropertyCallbackArguments::CallNamedDeleter(v8::internal::Handle<v8::internal::InterceptorInfo>,
   v8::internal::Handle<v8::internal::Name>) */

PropertyCallbackArguments * __thiscall
v8::internal::PropertyCallbackArguments::CallNamedDeleter
          (PropertyCallbackArguments *this,ulong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  PropertyCallbackArguments *pPVar4;
  ulong uVar5;
  long *plVar6;
  PropertyCallbackArguments *pPVar7;
  Logger *this_00;
  long lVar8;
  code *pcVar9;
  long local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  PropertyCallbackArguments *local_60;
  long *local_58;
  
  lVar8 = *(long *)(this + 0x28);
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(lVar8 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x9d);
  }
  uVar2 = *(uint *)(*param_2 + 0x13);
  if (uVar2 == 0) {
    pcVar9 = (code *)0x0;
  }
  else {
    pcVar9 = *(code **)((*param_2 & 0xffffffff00000000 | (ulong)uVar2) + 3);
  }
  if (*(int *)(lVar8 + 0xb80c) == 0x20) {
    uVar5 = Debug::PerformSideEffectCheckForCallback(*(Debug **)(lVar8 + 0xb6c8),0,0,0);
    pPVar7 = (PropertyCallbackArguments *)0x0;
    if ((uVar5 & 1) == 0) goto LAB_010d7744;
  }
  uVar1 = *(undefined4 *)(lVar8 + 0x2c60);
  *(undefined4 *)(lVar8 + 0x2c60) = 6;
  local_98 = *(undefined8 *)(lVar8 + 0x2c58);
  *(long **)(lVar8 + 0x2c58) = &local_a8;
  local_a8 = lVar8;
  pcStack_a0 = pcVar9;
  if (ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
      trace_event_unique_atomic63 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
    trace_event_unique_atomic63 =
         (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar3 = ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
           trace_event_unique_atomic63;
  if ((*ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
        trace_event_unique_atomic63 & 5) != 0) {
    local_60 = (PropertyCallbackArguments *)0x0;
    local_58 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x18))
              (plVar6,0x42,pbVar3,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_60,0);
    plVar6 = local_58;
    local_58 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    pPVar7 = local_60;
    local_60 = (PropertyCallbackArguments *)0x0;
    if (pPVar7 != (PropertyCallbackArguments *)0x0) {
      (**(code **)(*(long *)pPVar7 + 8))();
    }
  }
  local_60 = this + 0x18;
  this_00 = *(Logger **)(lVar8 + 0x9558);
  uVar5 = Logger::is_logging(this_00);
  if ((uVar5 & 1) != 0) {
    Logger::ApiNamedPropertyAccess
              (this_00,"interceptor-named-deleter",*(undefined8 *)(this + 0x20),*param_3);
  }
  (*pcVar9)(param_3,&local_60);
  pPVar7 = this + 0x38;
  if (((*(ulong *)pPVar7 & 1) != 0) && ((int)*(ulong *)pPVar7 == *(int *)(lVar8 + 0xa8))) {
    pPVar7 = (PropertyCallbackArguments *)0x0;
  }
  *(undefined8 *)(local_a8 + 0x2c58) = local_98;
  if (ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 =
         (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar3 = ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69;
  if ((*ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 & 5) != 0) {
    local_60 = (PropertyCallbackArguments *)0x0;
    local_58 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x18))
              (plVar6,0x45,pbVar3,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_60,0);
    plVar6 = local_58;
    local_58 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    pPVar4 = local_60;
    local_60 = (PropertyCallbackArguments *)0x0;
    if (pPVar4 != (PropertyCallbackArguments *)0x0) {
      (**(code **)(*(long *)pPVar4 + 8))();
    }
  }
  *(undefined4 *)(lVar8 + 0x2c60) = uVar1;
LAB_010d7744:
  if (local_90 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return pPVar7;
}

