
/* v8::internal::Runtime_NotifyDeoptimized(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_NotifyDeoptimized(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Deoptimizer DVar3;
  long lVar4;
  byte *pbVar5;
  Deoptimizer *this;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  void *extraout_x1;
  ulong uVar11;
  byte **local_630;
  byte *local_628;
  char *local_620;
  undefined8 local_618;
  Isolate *local_610;
  long *local_608;
  long *local_600;
  long *local_80;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (TracingFlags::runtime_stats == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    this = (Deoptimizer *)Deoptimizer::Grab(param_3);
    local_610 = param_3;
    TimerEventScope<v8::internal::TimerEventDeoptimizeCode>::LogTimerEvent
              ((TimerEventScope<v8::internal::TimerEventDeoptimizeCode> *)&local_610,0);
    if (DAT_01d46e48 == (byte *)0x0) {
      plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d46e48 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,&DAT_019c38f7);
    }
    pbVar5 = DAT_01d46e48;
    local_630 = (byte **)0x0;
    if ((*DAT_01d46e48 & 5) != 0) {
      local_608 = (long *)0x0;
      local_600 = (long *)0x0;
      plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar7 = (**(code **)(*plVar6 + 0x18))
                        (plVar6,0x58,pbVar5,"V8.DeoptimizeCode",0,0,0,0,0,0,0,&local_608,0);
      plVar6 = local_600;
      local_600 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = local_608;
      local_608 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      local_630 = &local_628;
      local_620 = "V8.DeoptimizeCode";
      local_628 = pbVar5;
      local_618 = uVar7;
    }
    puVar8 = (undefined8 *)Deoptimizer::function(this);
    puVar9 = (undefined8 *)Deoptimizer::compiled_code(this);
    DVar3 = this[0x1c];
    puVar10 = (ulong *)Deoptimizer::function(this);
    uVar11 = *puVar10 & 0xffffffff00000000;
    *(ulong *)(param_3 + 0x2bc8) =
         uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*puVar10 + 0xf)) - 1)) + 0x13);
    Deoptimizer::MaterializeHeapObjects(this);
    if (this != (Deoptimizer *)0x0) {
      Deoptimizer::~Deoptimizer(this);
      Malloced::operator_delete((Malloced *)this,extraout_x1);
    }
    StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_608,param_3);
    JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_608);
    uVar7 = (**(code **)(*local_80 + 0x60))();
    *(undefined8 *)(param_3 + 0x2bc8) = uVar7;
    if (DVar3 != (Deoptimizer)0x2) {
      Deoptimizer::DeoptimizeFunction(*puVar8,*puVar9);
    }
    uVar7 = *(undefined8 *)(param_3 + 0xa0);
    if ((local_630 != (byte **)0x0) && (*local_628 != 0)) {
      plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar6 + 0x28))(plVar6,local_628,local_620,local_618);
    }
    TimerEventScope<v8::internal::TimerEventDeoptimizeCode>::LogTimerEvent
              ((TimerEventScope<v8::internal::TimerEventDeoptimizeCode> *)&local_610,1);
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    if (*(long *)(lVar4 + 0x28) != local_68) {
LAB_0155e330:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar7 = FUN_0155e334(param_1,param_2,param_3);
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0155e330;
  }
  return uVar7;
}

