
/* v8::internal::compiler::ControlEquivalence::VisitBackedge(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::ControlEquivalence::DFSDirection) */

void __thiscall
v8::internal::compiler::ControlEquivalence::VisitBackedge
          (ControlEquivalence *this,long *param_1,long *param_2,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  Zone *this_00;
  long lVar3;
  ulong uVar4;
  vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
  *this_01;
  ulong uVar5;
  
  if (FLAG_trace_turbo_ceq != '\0') {
    PrintF("CEQ: Backedge from #%d:%s to #%d:%s\n",
           (ulong)(*(uint *)((long)param_1 + 0x14) & 0xffffff),*(undefined8 *)(*param_1 + 8),
           (ulong)(*(uint *)((long)param_2 + 0x14) & 0xffffff),*(undefined8 *)(*param_2 + 8));
  }
  this_01 = (vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
             *)(this + 0x18);
  lVar2 = *(long *)this_01;
  uVar5 = (ulong)*(uint *)((long)param_1 + 0x14) & 0xffffff;
  uVar4 = *(long *)(this + 0x20) - lVar2 >> 3;
  if (uVar4 <= uVar5) {
    std::__ndk1::
    vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
    ::__append(this_01,(uVar5 - uVar4) + 1);
    lVar2 = *(long *)this_01;
  }
  lVar2 = *(long *)(lVar2 + uVar5 * 8);
  this_00 = *(Zone **)(lVar2 + 0x20);
  plVar1 = *(long **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar1) < 0x38) {
    plVar1 = (long *)Zone::NewExpand(this_00,0x38);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar1 + 7;
  }
  *(undefined4 *)(plVar1 + 2) = param_4;
  plVar1[5] = (long)param_1;
  plVar1[6] = (long)param_2;
  *plVar1 = 0;
  plVar1[1] = lVar2 + 8;
  plVar1[4] = 0;
  plVar1[3] = -1;
  lVar3 = *(long *)(lVar2 + 8);
  *plVar1 = lVar3;
  *(long **)(lVar3 + 8) = plVar1;
  *(long **)(lVar2 + 8) = plVar1;
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
  return;
}

