
/* v8::internal::GlobalHandles::InvokeOrScheduleSecondPassPhantomCallbacks(bool) */

void __thiscall
v8::internal::GlobalHandles::InvokeOrScheduleSecondPassPhantomCallbacks
          (GlobalHandles *this,bool param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  __shared_weak_count *this_00;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long *local_c0;
  DevToolsTraceEventScope aDStack_b8 [16];
  undefined8 *local_a8;
  __shared_weak_count *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined **local_80;
  GlobalHandles *pGStack_78;
  undefined ***local_60;
  long *local_48 [2];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x88) == *(long *)(this + 0x90)) goto LAB_00f67fe8;
  if ((FLAG_predictable != '\0' || FLAG_optimize_for_size != '\0') || (param_1)) {
    Heap::DevToolsTraceEventScope::DevToolsTraceEventScope
              (aDStack_b8,(Heap *)(*(long *)this + 0x8850),"MajorGC","invoke weak phantom callbacks"
              );
    Heap::CallGCPrologueCallbacks((Heap *)(*(long *)this + 0x8850),8,0);
    if (this[0xa1] == (GlobalHandles)0x0) {
      this[0xa1] = (GlobalHandles)0x1;
      PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::PerIsolateAssertScope
                ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> *)local_48,
                 *(Isolate **)this);
      while (lVar8 = *(long *)(this + 0x90), *(long *)(this + 0x88) != lVar8) {
        pcVar7 = *(code **)(lVar8 + -0x20);
        local_a8 = *(undefined8 **)this;
        local_a0 = *(__shared_weak_count **)(lVar8 + -0x18);
        uStack_90 = *(undefined8 *)(lVar8 + -0x10);
        local_88 = *(undefined8 *)(lVar8 + -8);
        *(undefined8 **)(this + 0x90) = (undefined8 *)(lVar8 + -0x20);
        local_98 = 0;
        (*pcVar7)(&local_a8);
      }
      this[0xa1] = (GlobalHandles)0x0;
      PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::~PerIsolateAssertScope
                ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> *)local_48);
    }
    Heap::CallGCEpilogueCallbacks((Heap *)(*(long *)this + 0x8850),8,0);
    Heap::DevToolsTraceEventScope::~DevToolsTraceEventScope(aDStack_b8);
    goto LAB_00f67fe8;
  }
  if (this[0xa0] != (GlobalHandles)0x0) goto LAB_00f67fe8;
  this[0xa0] = (GlobalHandles)0x1;
  plVar6 = (long *)V8::GetCurrentPlatform();
  (**(code **)(*plVar6 + 0x30))(&local_a8,plVar6,*(undefined8 *)this);
  puVar5 = local_a8;
  local_80 = &PTR_FUN_01ca7008;
  local_60 = &local_80;
  pGStack_78 = this;
  MakeCancelableTask((internal *)local_48,*(undefined8 *)this,&local_80);
  plVar6 = local_48[0];
  local_48[0] = (long *)0x0;
  local_c0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    local_c0 = (long *)((long)plVar6 + 0x20);
  }
  (**(code **)*puVar5)(puVar5,&local_c0);
  plVar6 = local_c0;
  local_c0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = local_48[0];
  local_48[0] = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (&local_80 == local_60) {
    pcVar7 = (code *)(*local_60)[4];
LAB_00f68014:
    (*pcVar7)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar7 = (code *)(*local_60)[5];
    goto LAB_00f68014;
  }
  this_00 = local_a0;
  if (local_a0 != (__shared_weak_count *)0x0) {
    p_Var1 = local_a0 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)local_a0 + 0x10))(local_a0);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
LAB_00f67fe8:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

