
/* v8::internal::compiler::ControlEquivalence::VisitPost(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::ControlEquivalence::DFSDirection) */

void __thiscall
v8::internal::compiler::ControlEquivalence::VisitPost
          (ControlEquivalence *this,long *param_1,long param_2,int param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
  *this_00;
  ulong uVar6;
  long *plVar7;
  
  if (FLAG_trace_turbo_ceq != '\0') {
    PrintF("CEQ: Post-visit of #%d:%s\n",(ulong)(*(uint *)((long)param_1 + 0x14) & 0xffffff),
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
  plVar7 = *(long **)(lVar3 + 0x10);
  while ((long *)(lVar3 + 8) != plVar7) {
    while (((long *)plVar7[6] != param_1 || ((int)plVar7[2] == param_4))) {
      plVar7 = (long *)plVar7[1];
      if ((long *)(lVar3 + 8) == plVar7) goto LAB_01698a40;
    }
    if (FLAG_trace_turbo_ceq != '\0') {
      PrintF("  BList erased: {%d->%d}\n",(ulong)(*(uint *)(plVar7[5] + 0x14) & 0xffffff),
             (ulong)(*(uint *)((long)param_1 + 0x14) & 0xffffff));
    }
    plVar2 = (long *)plVar7[1];
    *(long **)(*plVar7 + 8) = plVar2;
    *(long *)plVar7[1] = *plVar7;
    *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -1;
    plVar7 = plVar2;
  }
LAB_01698a40:
  if (param_2 != 0) {
    lVar4 = *(long *)(this + 0x18);
    uVar6 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    uVar5 = *(long *)(this + 0x20) - lVar4 >> 3;
    if (uVar5 <= uVar6) {
      std::__ndk1::
      vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
      ::__append(this_00,(uVar6 - uVar5) + 1);
      lVar4 = *(long *)this_00;
    }
    if (*(long *)(lVar3 + 0x18) != 0) {
      lVar1 = *(long *)(lVar3 + 8);
      plVar7 = *(long **)(lVar3 + 0x10);
      lVar4 = *(long *)(lVar4 + uVar6 * 8);
      *(undefined8 *)(*plVar7 + 8) = *(undefined8 *)(lVar1 + 8);
      **(long **)(lVar1 + 8) = *plVar7;
      *(long **)(*(long *)(lVar4 + 8) + 8) = plVar7;
      *plVar7 = *(long *)(lVar4 + 8);
      *(long *)(lVar4 + 8) = lVar1;
      *(long *)(lVar1 + 8) = lVar4 + 8;
      *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + *(long *)(lVar3 + 0x18);
      *(undefined8 *)(lVar3 + 0x18) = 0;
    }
  }
  return;
}

