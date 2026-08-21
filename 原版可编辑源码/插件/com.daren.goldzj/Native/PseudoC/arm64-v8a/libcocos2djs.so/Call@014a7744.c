
/* v8::internal::FunctionCallbackArguments::Call(v8::internal::CallHandlerInfo) */

FunctionCallbackArguments * __thiscall
v8::internal::FunctionCallbackArguments::Call(FunctionCallbackArguments *this,ulong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  FunctionCallbackArguments *pFVar5;
  ulong uVar6;
  ulong *puVar7;
  long *plVar8;
  Isolate *pIVar9;
  FunctionCallbackArguments *pFVar10;
  Logger *this_00;
  Debug *pDVar11;
  code *pcVar12;
  Isolate *local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  FunctionCallbackArguments *local_70;
  long *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pIVar9 = *(Isolate **)(this + 0x20);
  this_00 = *(Logger **)(pIVar9 + 0x9558);
  uVar6 = Logger::is_logging(this_00);
  if ((uVar6 & 1) != 0) {
    Logger::ApiObjectAccess(this_00,"call",*(undefined8 *)(this + 0x18));
  }
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (TracingFlags::runtime_stats == 0) {
    uVar2 = *(uint *)(param_2 + 3);
    if (uVar2 == 0) goto LAB_014a7804;
LAB_014a77cc:
    pcVar12 = *(code **)((param_2 & 0xffffffff00000000 | (ulong)uVar2) + 3);
  }
  else {
    local_a0 = (RuntimeCallStats *)(*(long *)(pIVar9 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x82);
    uVar2 = *(uint *)(param_2 + 3);
    if (uVar2 != 0) goto LAB_014a77cc;
LAB_014a7804:
    pcVar12 = (code *)0x0;
  }
  if (*(int *)(pIVar9 + 0xb80c) == 0x20) {
    pDVar11 = *(Debug **)(pIVar9 + 0xb6c8);
    if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar9 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar9);
      }
      *(ulong **)(pIVar9 + 0x95a0) = puVar7 + 1;
      *puVar7 = param_2;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),param_2);
    }
    uVar6 = Debug::PerformSideEffectCheckForCallback(pDVar11,puVar7,0,0);
    pFVar10 = (FunctionCallbackArguments *)0x0;
    if ((uVar6 & 1) == 0) goto LAB_014a7a40;
  }
  uVar1 = *(undefined4 *)(pIVar9 + 0x2c60);
  *(undefined4 *)(pIVar9 + 0x2c60) = 6;
  local_a8 = *(undefined8 *)(pIVar9 + 0x2c58);
  *(Isolate ***)(pIVar9 + 0x2c58) = &local_b8;
  local_b8 = pIVar9;
  pcStack_b0 = pcVar12;
  if (ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
      trace_event_unique_atomic63 == (byte *)0x0) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
    trace_event_unique_atomic63 =
         (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.runtime");
  }
  pbVar4 = ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
           trace_event_unique_atomic63;
  if ((*ExternalCallbackScope::ExternalCallbackScope(v8::internal::Isolate*,unsigned_long)::
        trace_event_unique_atomic63 & 5) != 0) {
    local_70 = (FunctionCallbackArguments *)0x0;
    local_68 = (long *)0x0;
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x18))
              (plVar8,0x42,pbVar4,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_70,0);
    plVar8 = local_68;
    local_68 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    pFVar10 = local_70;
    local_70 = (FunctionCallbackArguments *)0x0;
    if (pFVar10 != (FunctionCallbackArguments *)0x0) {
      (**(code **)(*(long *)pFVar10 + 8))();
    }
  }
  local_68 = *(long **)(this + 0x48);
  local_60 = *(undefined4 *)(this + 0x50);
  local_70 = this + 0x18;
  (*pcVar12)(&local_70);
  pFVar10 = this + 0x30;
  if (((*(ulong *)pFVar10 & 1) != 0) && ((int)*(ulong *)pFVar10 == *(int *)(pIVar9 + 0xa8))) {
    pFVar10 = (FunctionCallbackArguments *)0x0;
  }
  *(undefined8 *)(local_b8 + 0x2c58) = local_a8;
  if (ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 == (byte *)0x0) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 =
         (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.runtime");
  }
  pbVar4 = ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69;
  if ((*ExternalCallbackScope::~ExternalCallbackScope()::trace_event_unique_atomic69 & 5) != 0) {
    local_70 = (FunctionCallbackArguments *)0x0;
    local_68 = (long *)0x0;
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x18))
              (plVar8,0x45,pbVar4,"V8.ExternalCallback",0,0,0,0,0,0,0,&local_70,0);
    plVar8 = local_68;
    local_68 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    pFVar5 = local_70;
    local_70 = (FunctionCallbackArguments *)0x0;
    if (pFVar5 != (FunctionCallbackArguments *)0x0) {
      (**(code **)(*(long *)pFVar5 + 8))();
    }
  }
  *(undefined4 *)(pIVar9 + 0x2c60) = uVar1;
LAB_014a7a40:
  if (local_a0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pFVar10;
}

