
/* v8::internal::PropertyCallbackArguments::CallPropertyEnumerator(v8::internal::Handle<v8::internal::InterceptorInfo>)
    */

PropertyCallbackArguments * __thiscall
v8::internal::PropertyCallbackArguments::CallPropertyEnumerator
          (PropertyCallbackArguments *this,ulong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  PropertyCallbackArguments *pPVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  long local_68;
  code *pcStack_60;
  undefined8 local_58;
  PropertyCallbackArguments *local_50;
  long *local_48;
  
  uVar2 = *(uint *)(*param_2 + 0x17);
  if (uVar2 == 0) {
    pcVar8 = (code *)0x0;
  }
  else {
    pcVar8 = *(code **)((*param_2 & 0xffffffff00000000 | (ulong)uVar2) + 3);
  }
  lVar7 = *(long *)(this + 0x28);
  if ((*(int *)(lVar7 + 0xb80c) == 0x20) &&
     (uVar5 = Debug::PerformSideEffectCheckForCallback(*(Debug **)(lVar7 + 0xb6c8),param_2,0,0),
     (uVar5 & 1) == 0)) {
    return (PropertyCallbackArguments *)0x0;
  }
  uVar1 = *(undefined4 *)(lVar7 + 0x2c60);
  *(undefined4 *)(lVar7 + 0x2c60) = 6;
  local_58 = *(undefined8 *)(lVar7 + 0x2c58);
  *(long **)(lVar7 + 0x2c58) = &local_68;
  local_68 = lVar7;
  pcStack_60 = pcVar8;
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
    local_50 = (PropertyCallbackArguments *)0x0;
    local_48 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x18))
              (plVar6,0x42,pbVar3,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_50,0);
    plVar6 = local_48;
    local_48 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    pPVar4 = local_50;
    local_50 = (PropertyCallbackArguments *)0x0;
    if (pPVar4 != (PropertyCallbackArguments *)0x0) {
      (**(code **)(*(long *)pPVar4 + 8))();
    }
  }
  local_50 = this + 0x18;
  (*pcVar8)(&local_50);
  this = this + 0x38;
  if (((*(ulong *)this & 1) != 0) && ((int)*(ulong *)this == *(int *)(lVar7 + 0xa8))) {
    this = (PropertyCallbackArguments *)0x0;
  }
  *(undefined8 *)(local_68 + 0x2c58) = local_58;
  if (ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 =
         (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar3 = ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69;
  if ((*ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 & 5) != 0) {
    local_50 = (PropertyCallbackArguments *)0x0;
    local_48 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x18))
              (plVar6,0x45,pbVar3,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_50,0);
    plVar6 = local_48;
    local_48 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    pPVar4 = local_50;
    local_50 = (PropertyCallbackArguments *)0x0;
    if (pPVar4 != (PropertyCallbackArguments *)0x0) {
      (**(code **)(*(long *)pPVar4 + 8))();
    }
  }
  *(undefined4 *)(lVar7 + 0x2c60) = uVar1;
  return this;
}

