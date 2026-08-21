
/* v8::internal::GlobalHandles::InvokeSecondPassPhantomCallbacksFromTask() */

void __thiscall
v8::internal::GlobalHandles::InvokeSecondPassPhantomCallbacksFromTask(GlobalHandles *this)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  DevToolsTraceEventScope aDStack_90 [16];
  long *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> aPStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this[0xa0] = (GlobalHandles)0x0;
  Heap::DevToolsTraceEventScope::DevToolsTraceEventScope
            (aDStack_90,(Heap *)(*(long *)this + 0x8850),"MajorGC","invoke weak phantom callbacks");
  if (DAT_01d3f028 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f028 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,&DAT_019c38f7);
  }
  pbVar3 = DAT_01d3f028;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d3f028 & 5) != 0) {
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.GCPhantomHandleProcessingCallback",0,0,0,0,0,0,0,
                       &local_80,0);
    plVar4 = local_78;
    local_78 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_80;
    local_80 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.GCPhantomHandleProcessingCallback";
    local_a8 = pbVar3;
    local_98 = uVar5;
  }
  Heap::CallGCPrologueCallbacks((Heap *)(*(long *)this + 0x8850),8,0);
  if (this[0xa1] == (GlobalHandles)0x0) {
    this[0xa1] = (GlobalHandles)0x1;
    PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::PerIsolateAssertScope
              (aPStack_58,*(Isolate **)this);
    while (lVar1 = *(long *)(this + 0x90), *(long *)(this + 0x88) != lVar1) {
      pcVar6 = *(code **)(lVar1 + -0x20);
      local_80 = *(long **)this;
      local_78 = *(long **)(lVar1 + -0x18);
      uStack_68 = *(undefined8 *)(lVar1 + -0x10);
      local_60 = *(undefined8 *)(lVar1 + -8);
      *(undefined8 **)(this + 0x90) = (undefined8 *)(lVar1 + -0x20);
      local_70 = 0;
      (*pcVar6)(&local_80);
    }
    this[0xa1] = (GlobalHandles)0x0;
    PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::~PerIsolateAssertScope
              (aPStack_58);
  }
  Heap::CallGCEpilogueCallbacks((Heap *)(*(long *)this + 0x8850),8,0);
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
  }
  Heap::DevToolsTraceEventScope::~DevToolsTraceEventScope(aDStack_90);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

