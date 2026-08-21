
/* v8::internal::Heap::DevToolsTraceEventScope::~DevToolsTraceEventScope() */

void __thiscall
v8::internal::Heap::DevToolsTraceEventScope::~DevToolsTraceEventScope(DevToolsTraceEventScope *this)

{
  long lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_58;
  undefined1 local_4c [4];
  char *local_48;
  long *local_40;
  long *local_38;
  
  if (DAT_01d3f068 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f068 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"devtools.timeline,v8");
  }
  pbVar3 = DAT_01d3f068;
  if ((*DAT_01d3f068 & 5) != 0) {
    lVar1 = *(long *)this;
    uVar2 = *(undefined8 *)(this + 8);
    lVar5 = (**(code **)(**(long **)(lVar1 + 0x130) + 0x50))();
    lVar6 = (**(code **)(**(long **)(lVar1 + 0x138) + 0x50))(*(long **)(lVar1 + 0x138));
    lVar7 = (**(code **)(**(long **)(lVar1 + 0x140) + 0x50))(*(long **)(lVar1 + 0x140));
    lVar8 = (**(code **)(**(long **)(lVar1 + 0x148) + 0x50))(*(long **)(lVar1 + 0x148));
    lVar9 = (**(code **)(**(long **)(lVar1 + 0x150) + 0x50))(*(long **)(lVar1 + 0x150));
    lVar10 = (**(code **)(**(long **)(lVar1 + 0x158) + 0x50))(*(long **)(lVar1 + 0x158));
    local_58 = (**(code **)(**(long **)(lVar1 + 0x160) + 0x50))(*(long **)(lVar1 + 0x160));
    local_58 = lVar6 + lVar5 + lVar7 + lVar8 + lVar9 + lVar10 + local_58;
    local_48 = "usedHeapSizeAfter";
    local_40 = (long *)0x0;
    local_4c[0] = 2;
    local_38 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x18))
              (plVar4,0x45,pbVar3,uVar2,0,0,0,1,&local_48,local_4c,&local_58,&local_40,0);
    plVar4 = local_38;
    local_38 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_40;
    local_40 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return;
}

