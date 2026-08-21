
undefined8 FUN_0155e334(undefined8 param_1,undefined8 param_2,Isolate *param_3)

{
  long lVar1;
  Deoptimizer DVar2;
  long lVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  Deoptimizer *this;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  void *extraout_x1;
  ulong uVar11;
  byte **local_680;
  byte *local_678;
  char *local_670;
  undefined8 local_668;
  RuntimeCallStats *local_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 local_640;
  byte **local_630;
  byte *local_628;
  char *local_620;
  undefined8 local_618;
  Isolate *local_610;
  long *local_608;
  long *local_600;
  long *local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_640 = 0;
  uStack_658 = 0;
  local_660 = (RuntimeCallStats *)0x0;
  uStack_648 = 0;
  uStack_650 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_660 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_660,(ulong)&local_660 | 8,0xf5);
  }
  if (DAT_01d46e40 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46e40 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46e40;
  local_680 = (byte **)0x0;
  if ((*DAT_01d46e40 & 5) != 0) {
    local_608 = (long *)0x0;
    local_600 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_NotifyDeoptimized",0,0,0,0,0,0,0,
                       &local_608,0);
    plVar5 = local_600;
    local_600 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_608;
    local_608 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_680 = &local_678;
    local_670 = "V8.Runtime_Runtime_NotifyDeoptimized";
    local_678 = pbVar4;
    local_668 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  this = (Deoptimizer *)v8::internal::Deoptimizer::Grab(param_3);
  local_610 = param_3;
  v8::internal::TimerEventScope<v8::internal::TimerEventDeoptimizeCode>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventDeoptimizeCode> *)&local_610,0);
  if (DAT_01d46e48 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46e48 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,&DAT_019c38f7);
  }
  pbVar4 = DAT_01d46e48;
  local_630 = (byte **)0x0;
  if ((*DAT_01d46e48 & 5) != 0) {
    local_608 = (long *)0x0;
    local_600 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.DeoptimizeCode",0,0,0,0,0,0,0,&local_608,0);
    plVar5 = local_600;
    local_600 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_608;
    local_608 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_630 = &local_628;
    local_620 = "V8.DeoptimizeCode";
    local_628 = pbVar4;
    local_618 = uVar7;
  }
  puVar8 = (undefined8 *)v8::internal::Deoptimizer::function(this);
  puVar9 = (undefined8 *)v8::internal::Deoptimizer::compiled_code(this);
  DVar2 = this[0x1c];
  puVar10 = (ulong *)v8::internal::Deoptimizer::function(this);
  uVar11 = *puVar10 & 0xffffffff00000000;
  *(ulong *)(param_3 + 0x2bc8) =
       uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*puVar10 + 0xf)) - 1)) + 0x13);
  v8::internal::Deoptimizer::MaterializeHeapObjects(this);
  if (this != (Deoptimizer *)0x0) {
    v8::internal::Deoptimizer::~Deoptimizer(this);
    v8::internal::Malloced::operator_delete((Malloced *)this,extraout_x1);
  }
  v8::internal::StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_608,param_3);
  v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_608);
  uVar7 = (**(code **)(*local_80 + 0x60))();
  *(undefined8 *)(param_3 + 0x2bc8) = uVar7;
  if (DVar2 != (Deoptimizer)0x2) {
    v8::internal::Deoptimizer::DeoptimizeFunction(*puVar8,*puVar9);
  }
  uVar7 = *(undefined8 *)(param_3 + 0xa0);
  if ((local_630 != (byte **)0x0) && (*local_628 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_628,local_620,local_618);
  }
  v8::internal::TimerEventScope<v8::internal::TimerEventDeoptimizeCode>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventDeoptimizeCode> *)&local_610,1);
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_680 != (byte **)0x0) && (*local_678 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_678,local_670,local_668);
  }
  if (local_660 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_660,(RuntimeCallTimer *)((ulong)&local_660 | 8));
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

