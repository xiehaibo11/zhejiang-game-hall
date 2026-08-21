
/* v8::internal::Heap::DevToolsTraceEventScope::DevToolsTraceEventScope(v8::internal::Heap*, char
   const*, char const*) */

void __thiscall
v8::internal::Heap::DevToolsTraceEventScope::DevToolsTraceEventScope
          (DevToolsTraceEventScope *this,Heap *param_1,char *param_2,char *param_3)

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
  long local_70;
  char *pcStack_68;
  char *local_60;
  char *pcStack_58;
  long *local_50;
  long *local_48;
  undefined2 local_24 [2];
  
  *(Heap **)this = param_1;
  *(char **)(this + 8) = param_2;
  if (DAT_01d3f060 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f060 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"devtools.timeline,v8");
  }
  pbVar3 = DAT_01d3f060;
  if ((*DAT_01d3f060 & 5) != 0) {
    lVar1 = *(long *)this;
    uVar2 = *(undefined8 *)(this + 8);
    lVar5 = (**(code **)(**(long **)(lVar1 + 0x130) + 0x50))();
    lVar6 = (**(code **)(**(long **)(lVar1 + 0x138) + 0x50))(*(long **)(lVar1 + 0x138));
    lVar7 = (**(code **)(**(long **)(lVar1 + 0x140) + 0x50))(*(long **)(lVar1 + 0x140));
    lVar8 = (**(code **)(**(long **)(lVar1 + 0x148) + 0x50))(*(long **)(lVar1 + 0x148));
    lVar9 = (**(code **)(**(long **)(lVar1 + 0x150) + 0x50))(*(long **)(lVar1 + 0x150));
    lVar10 = (**(code **)(**(long **)(lVar1 + 0x158) + 0x50))(*(long **)(lVar1 + 0x158));
    local_70 = (**(code **)(**(long **)(lVar1 + 0x160) + 0x50))(*(long **)(lVar1 + 0x160));
    local_70 = lVar6 + lVar5 + lVar7 + lVar8 + lVar9 + lVar10 + local_70;
    local_60 = "usedHeapSizeBefore";
    pcStack_58 = "type";
    local_24[0] = 0x602;
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    pcStack_68 = param_3;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x18))
              (plVar4,0x42,pbVar3,uVar2,0,0,0,2,&local_60,local_24,&local_70,&local_50,0);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_50;
    local_50 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return;
}

