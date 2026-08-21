
/* v8::internal::compiler::Scheduler::MovePlannedNodes(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::Scheduler::MovePlannedNodes
          (Scheduler *this,BasicBlock *param_1,BasicBlock *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  *pvVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("Move planned nodes from id:%d to id:%d\n",(ulong)*(uint *)(param_1 + 0xa0),
           (ulong)*(uint *)(param_2 + 0xa0));
  }
  plVar6 = *(long **)(*(long *)(this + 0x20) + *(long *)(param_1 + 0xa0) * 8);
  if (plVar6 != (long *)0x0) {
    puVar1 = (undefined8 *)plVar6[1];
    pvVar5 = *(vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
               **)(*(long *)(this + 0x20) + *(long *)(param_2 + 0xa0) * 8);
    for (puVar7 = (undefined8 *)*plVar6; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      Schedule::SetBlockForNode(*(Schedule **)(this + 0x10),param_2,(Node *)*puVar7);
    }
    if (pvVar5 == (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                   *)0x0) {
      lVar2 = *(long *)(param_2 + 0xa0);
      lVar3 = *(long *)(this + 0x20);
      uVar4 = *(undefined8 *)(lVar3 + *(long *)(param_1 + 0xa0) * 8);
      *(undefined8 *)(lVar3 + *(long *)(param_1 + 0xa0) * 8) = *(undefined8 *)(lVar3 + lVar2 * 8);
      *(undefined8 *)(lVar3 + lVar2 * 8) = uVar4;
    }
    else {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::insert<std::__ndk1::__wrap_iter<v8::internal::compiler::Node**>>
                (pvVar5,*(undefined8 *)(pvVar5 + 8),*plVar6,plVar6[1]);
      plVar6[1] = *plVar6;
    }
  }
  return;
}

