
/* v8::internal::PropertyCallbackArguments::CallAccessorSetter(v8::internal::Handle<v8::internal::AccessorInfo>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::Object>) */

PropertyCallbackArguments * __thiscall
v8::internal::PropertyCallbackArguments::CallAccessorSetter
          (PropertyCallbackArguments *this,ulong *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  PropertyCallbackArguments *pPVar4;
  ulong *puVar5;
  long *plVar6;
  Isolate *pIVar7;
  Logger *this_00;
  Debug *pDVar8;
  ulong uVar9;
  code *pcVar10;
  Isolate *local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  PropertyCallbackArguments *local_70;
  long *local_68;
  
  pIVar7 = *(Isolate **)(this + 0x28);
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(pIVar7 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x6f);
  }
  uVar2 = *(uint *)(*param_2 + 0xf);
  if (uVar2 == 0) {
    pcVar10 = (code *)0x0;
  }
  else {
    pcVar10 = *(code **)((*param_2 & 0xffffffff00000000 | (ulong)uVar2) + 3);
  }
  if (*(int *)(pIVar7 + 0xb80c) == 0x20) {
    pDVar8 = *(Debug **)(pIVar7 + 0xb6c8);
    uVar9 = *(ulong *)(this + 0x48);
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar7 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar9;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar9);
    }
    uVar9 = Debug::PerformSideEffectCheckForCallback(pDVar8,param_2,puVar5,2);
    if ((uVar9 & 1) == 0) {
      this = (PropertyCallbackArguments *)0x0;
      goto joined_r0x011091d8;
    }
  }
  uVar1 = *(undefined4 *)(pIVar7 + 0x2c60);
  *(undefined4 *)(pIVar7 + 0x2c60) = 6;
  local_a8 = *(undefined8 *)(pIVar7 + 0x2c58);
  *(Isolate ***)(pIVar7 + 0x2c58) = &local_b8;
  local_b8 = pIVar7;
  pcStack_b0 = pcVar10;
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
    local_70 = (PropertyCallbackArguments *)0x0;
    local_68 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x18))
              (plVar6,0x42,pbVar3,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_70,0);
    plVar6 = local_68;
    local_68 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    pPVar4 = local_70;
    local_70 = (PropertyCallbackArguments *)0x0;
    if (pPVar4 != (PropertyCallbackArguments *)0x0) {
      (**(code **)(*(long *)pPVar4 + 8))();
    }
  }
  local_70 = this + 0x18;
  this_00 = *(Logger **)(pIVar7 + 0x9558);
  uVar9 = Logger::is_logging(this_00);
  if ((uVar9 & 1) != 0) {
    Logger::ApiNamedPropertyAccess(this_00,"accessor-setter",*(undefined8 *)(this + 0x20),*param_3);
  }
  (*pcVar10)(param_3,param_4,&local_70);
  this = this + 0x38;
  if (((*(ulong *)this & 1) != 0) && ((int)*(ulong *)this == *(int *)(pIVar7 + 0xa8))) {
    this = (PropertyCallbackArguments *)0x0;
  }
  *(undefined8 *)(local_b8 + 0x2c58) = local_a8;
  if (ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 =
         (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar3 = ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69;
  if ((*ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 & 5) != 0) {
    local_70 = (PropertyCallbackArguments *)0x0;
    local_68 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x18))
              (plVar6,0x45,pbVar3,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_70,0);
    plVar6 = local_68;
    local_68 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    pPVar4 = local_70;
    local_70 = (PropertyCallbackArguments *)0x0;
    if (pPVar4 != (PropertyCallbackArguments *)0x0) {
      (**(code **)(*(long *)pPVar4 + 8))();
    }
  }
  *(undefined4 *)(pIVar7 + 0x2c60) = uVar1;
joined_r0x011091d8:
  if (local_a0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return this;
}

