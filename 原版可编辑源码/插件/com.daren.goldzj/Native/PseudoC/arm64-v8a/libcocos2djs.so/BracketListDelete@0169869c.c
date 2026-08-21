
/* v8::internal::compiler::ControlEquivalence::BracketListDelete(v8::internal::ZoneLinkedList<v8::internal::compiler::ControlEquivalence::Bracket>&,
   v8::internal::compiler::Node*, v8::internal::compiler::ControlEquivalence::DFSDirection) */

void __thiscall
v8::internal::compiler::ControlEquivalence::BracketListDelete
          (undefined8 param_1_00,long *param_1,long param_2,int param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[1];
  do {
    if (param_1 == plVar2) {
      return;
    }
    while ((plVar2[6] != param_2 || ((int)plVar2[2] == param_4))) {
      plVar2 = (long *)plVar2[1];
      if (param_1 == plVar2) {
        return;
      }
    }
    if (FLAG_trace_turbo_ceq != '\0') {
      PrintF("  BList erased: {%d->%d}\n",(ulong)(*(uint *)(plVar2[5] + 0x14) & 0xffffff),
             (ulong)(*(uint *)(param_2 + 0x14) & 0xffffff));
    }
    plVar1 = (long *)plVar2[1];
    *(long **)(*plVar2 + 8) = plVar1;
    *(long *)plVar2[1] = *plVar2;
    param_1[2] = param_1[2] + -1;
    plVar2 = plVar1;
  } while( true );
}

