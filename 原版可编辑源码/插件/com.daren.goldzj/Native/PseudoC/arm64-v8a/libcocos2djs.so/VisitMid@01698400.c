
/* v8::internal::compiler::ControlEquivalence::VisitMid(v8::internal::compiler::Node*,
   v8::internal::compiler::ControlEquivalence::DFSDirection) */

void __thiscall
v8::internal::compiler::ControlEquivalence::VisitMid
          (ControlEquivalence *this,long *param_1,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
  *this_00;
  ulong uVar6;
  long *plVar7;
  
  if (FLAG_trace_turbo_ceq != '\0') {
    PrintF("CEQ: Mid-visit of #%d:%s\n",(ulong)(*(uint *)((long)param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*param_1 + 8));
  }
  this_00 = (vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
             *)(this + 0x18);
  lVar3 = *(long *)this_00;
  uVar6 = (ulong)*(uint *)((long)param_1 + 0x14) & 0xffffff;
  uVar5 = *(long *)(this + 0x20) - lVar3 >> 3;
  if (uVar5 <= uVar6) {
    std::__ndk1::
    vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
    ::__append(this_00,(uVar6 - uVar5) + 1);
    lVar3 = *(long *)this_00;
  }
  lVar3 = *(long *)(lVar3 + uVar6 * 8);
  plVar1 = (long *)(lVar3 + 8);
  for (plVar7 = *(long **)(lVar3 + 0x10); plVar1 != plVar7; plVar7 = (long *)plVar7[1]) {
    while (((long *)plVar7[6] == param_1 && ((int)plVar7[2] != param_3))) {
      if (FLAG_trace_turbo_ceq != '\0') {
        PrintF("  BList erased: {%d->%d}\n",(ulong)(*(uint *)(plVar7[5] + 0x14) & 0xffffff),
               (ulong)(*(uint *)((long)param_1 + 0x14) & 0xffffff));
      }
      plVar2 = (long *)plVar7[1];
      *(long **)(*plVar7 + 8) = plVar2;
      *(long *)plVar7[1] = *plVar7;
      *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -1;
      plVar7 = plVar2;
      if (plVar1 == plVar2) goto LAB_0169851c;
    }
  }
LAB_0169851c:
  if (*(long *)(lVar3 + 0x18) == 0) {
    VisitBackedge(this,param_1,*(undefined8 *)(*(long *)(this + 8) + 0x10),0);
  }
  if (FLAG_trace_turbo_ceq != '\0') {
    PrintF("  BList: ");
    for (plVar7 = *(long **)(lVar3 + 0x10); plVar1 != plVar7; plVar7 = (long *)plVar7[1]) {
      if (FLAG_trace_turbo_ceq != '\0') {
        PrintF("{%d->%d} ",(ulong)(*(uint *)(plVar7[5] + 0x14) & 0xffffff),
               (ulong)(*(uint *)(plVar7[6] + 0x14) & 0xffffff));
      }
    }
    if (FLAG_trace_turbo_ceq != '\0') {
      PrintF("\n");
    }
  }
  lVar4 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar4 + 0x20) == *(long *)(lVar3 + 0x18)) {
    lVar3 = *(long *)(lVar4 + 0x18);
  }
  else {
    *(long *)(lVar4 + 0x20) = *(long *)(lVar3 + 0x18);
    lVar3 = (long)*(int *)(this + 0x14);
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
    *(long *)(lVar4 + 0x18) = lVar3;
  }
  lVar4 = *(long *)(this + 0x18);
  uVar6 = (ulong)*(uint *)((long)param_1 + 0x14) & 0xffffff;
  uVar5 = *(long *)(this + 0x20) - lVar4 >> 3;
  if (uVar5 <= uVar6) {
    std::__ndk1::
    vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
    ::__append(this_00,(uVar6 - uVar5) + 1);
    lVar4 = *(long *)this_00;
  }
  **(long **)(lVar4 + uVar6 * 8) = lVar3;
  if (FLAG_trace_turbo_ceq == '\0') {
    return;
  }
  lVar3 = *(long *)(this + 0x18);
  uVar6 = (ulong)*(uint *)((long)param_1 + 0x14) & 0xffffff;
  uVar5 = *(long *)(this + 0x20) - lVar3 >> 3;
  if (uVar5 <= uVar6) {
    std::__ndk1::
    vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
    ::__append(this_00,(uVar6 - uVar5) + 1);
    lVar3 = *(long *)this_00;
  }
  PrintF("  Assigned class number is %zu\n",**(undefined8 **)(lVar3 + uVar6 * 8));
  return;
}

