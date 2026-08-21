
/* v8::internal::PropertyCallbackArguments::BasicCallIndexedGetterCallback(void (*)(unsigned int,
   v8::PropertyCallbackInfo<v8::Value> const&), unsigned int,
   v8::internal::Handle<v8::internal::Object>) */

PropertyCallbackArguments * __thiscall
v8::internal::PropertyCallbackArguments::BasicCallIndexedGetterCallback
          (PropertyCallbackArguments *this,code *param_1,undefined4 param_2,undefined8 param_4)

{
  undefined4 uVar1;
  byte *pbVar2;
  PropertyCallbackArguments *pPVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long local_78;
  code *pcStack_70;
  undefined8 local_68;
  PropertyCallbackArguments *local_60;
  long *local_58;
  
  lVar6 = *(long *)(this + 0x28);
  if ((*(int *)(lVar6 + 0xb80c) == 0x20) &&
     (uVar4 = Debug::PerformSideEffectCheckForCallback(*(Debug **)(lVar6 + 0xb6c8),param_4,0,1),
     (uVar4 & 1) == 0)) {
    return (PropertyCallbackArguments *)0x0;
  }
  uVar1 = *(undefined4 *)(lVar6 + 0x2c60);
  *(undefined4 *)(lVar6 + 0x2c60) = 6;
  local_68 = *(undefined8 *)(lVar6 + 0x2c58);
  *(long **)(lVar6 + 0x2c58) = &local_78;
  local_78 = lVar6;
  pcStack_70 = param_1;
  if (ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
      trace_event_unique_atomic63 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
    trace_event_unique_atomic63 =
         (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar2 = ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
           trace_event_unique_atomic63;
  if ((*ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
        trace_event_unique_atomic63 & 5) != 0) {
    local_60 = (PropertyCallbackArguments *)0x0;
    local_58 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x18))
              (plVar5,0x42,pbVar2,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_60,0);
    plVar5 = local_58;
    local_58 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    pPVar3 = local_60;
    local_60 = (PropertyCallbackArguments *)0x0;
    if (pPVar3 != (PropertyCallbackArguments *)0x0) {
      (**(code **)(*(long *)pPVar3 + 8))();
    }
  }
  local_60 = this + 0x18;
  (*param_1)(param_2,&local_60);
  this = this + 0x38;
  if (((*(ulong *)this & 1) != 0) && ((int)*(ulong *)this == *(int *)(lVar6 + 0xa8))) {
    this = (PropertyCallbackArguments *)0x0;
  }
  *(undefined8 *)(local_78 + 0x2c58) = local_68;
  if (ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 =
         (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar2 = ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69;
  if ((*ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 & 5) != 0) {
    local_60 = (PropertyCallbackArguments *)0x0;
    local_58 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x18))
              (plVar5,0x45,pbVar2,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_60,0);
    plVar5 = local_58;
    local_58 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    pPVar3 = local_60;
    local_60 = (PropertyCallbackArguments *)0x0;
    if (pPVar3 != (PropertyCallbackArguments *)0x0) {
      (**(code **)(*(long *)pPVar3 + 8))();
    }
  }
  *(undefined4 *)(lVar6 + 0x2c60) = uVar1;
  return this;
}

