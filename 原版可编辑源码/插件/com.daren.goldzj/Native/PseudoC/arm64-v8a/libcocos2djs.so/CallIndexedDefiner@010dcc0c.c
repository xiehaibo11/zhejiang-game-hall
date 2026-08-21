
/* v8::internal::PropertyCallbackArguments::CallIndexedDefiner(v8::internal::Handle<v8::internal::InterceptorInfo>,
   unsigned int, v8::PropertyDescriptor const&) */

PropertyCallbackArguments * __thiscall
v8::internal::PropertyCallbackArguments::CallIndexedDefiner
          (PropertyCallbackArguments *this,ulong *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  PropertyCallbackArguments *pPVar4;
  long *plVar5;
  ulong uVar6;
  Logger *this_00;
  long lVar7;
  code *pcVar8;
  long local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  PropertyCallbackArguments *local_70;
  long *local_68;
  
  lVar7 = *(long *)(this + 0x28);
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(lVar7 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x8d);
  }
  uVar2 = *(uint *)(*param_2 + 0x1b);
  if (uVar2 == 0) {
    pcVar8 = (code *)0x0;
  }
  else {
    pcVar8 = *(code **)((*param_2 & 0xffffffff00000000 | (ulong)uVar2) + 3);
  }
  if (*(int *)(lVar7 + 0xb80c) == 0x20) {
    this = (PropertyCallbackArguments *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar7 + 0x2c60);
    *(undefined4 *)(lVar7 + 0x2c60) = 6;
    local_a8 = *(undefined8 *)(lVar7 + 0x2c58);
    *(long **)(lVar7 + 0x2c58) = &local_b8;
    local_b8 = lVar7;
    pcStack_b0 = pcVar8;
    if (ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
        trace_event_unique_atomic63 == (byte *)0x0) {
      plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
      ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
      trace_event_unique_atomic63 =
           (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
    }
    pbVar3 = ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
             trace_event_unique_atomic63;
    if ((*ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
          trace_event_unique_atomic63 & 5) != 0) {
      local_70 = (PropertyCallbackArguments *)0x0;
      local_68 = (long *)0x0;
      plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar5 + 0x18))
                (plVar5,0x42,pbVar3,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_70,0);
      plVar5 = local_68;
      local_68 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      pPVar4 = local_70;
      local_70 = (PropertyCallbackArguments *)0x0;
      if (pPVar4 != (PropertyCallbackArguments *)0x0) {
        (**(code **)(*(long *)pPVar4 + 8))();
      }
    }
    local_70 = this + 0x18;
    this_00 = *(Logger **)(lVar7 + 0x9558);
    uVar6 = Logger::is_logging(this_00);
    if ((uVar6 & 1) != 0) {
      Logger::ApiIndexedPropertyAccess
                (this_00,"interceptor-indexed-define",*(undefined8 *)(this + 0x20),param_3);
    }
    (*pcVar8)(param_3,param_4,&local_70);
    this = this + 0x38;
    if (((*(ulong *)this & 1) != 0) && ((int)*(ulong *)this == *(int *)(lVar7 + 0xa8))) {
      this = (PropertyCallbackArguments *)0x0;
    }
    *(undefined8 *)(local_b8 + 0x2c58) = local_a8;
    if (ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 == (byte *)0x0)
    {
      plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
      ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 =
           (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
    }
    pbVar3 = ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69;
    if ((*ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 & 5) != 0) {
      local_70 = (PropertyCallbackArguments *)0x0;
      local_68 = (long *)0x0;
      plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar5 + 0x18))
                (plVar5,0x45,pbVar3,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_70,0);
      plVar5 = local_68;
      local_68 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      pPVar4 = local_70;
      local_70 = (PropertyCallbackArguments *)0x0;
      if (pPVar4 != (PropertyCallbackArguments *)0x0) {
        (**(code **)(*(long *)pPVar4 + 8))();
      }
    }
    *(undefined4 *)(lVar7 + 0x2c60) = uVar1;
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return this;
}

