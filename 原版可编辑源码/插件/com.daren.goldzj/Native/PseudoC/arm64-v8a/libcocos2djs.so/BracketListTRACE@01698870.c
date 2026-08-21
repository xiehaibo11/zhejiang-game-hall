
/* v8::internal::compiler::ControlEquivalence::BracketListTRACE(v8::internal::ZoneLinkedList<v8::internal::compiler::ControlEquivalence::Bracket>&)
    */

ControlEquivalence * __thiscall
v8::internal::compiler::ControlEquivalence::BracketListTRACE
          (ControlEquivalence *this,ZoneLinkedList *param_1)

{
  ControlEquivalence *pCVar1;
  ZoneLinkedList *pZVar2;
  
  if (FLAG_trace_turbo_ceq != '\0') {
    this = (ControlEquivalence *)PrintF("  BList: ");
    for (pZVar2 = *(ZoneLinkedList **)(param_1 + 8); param_1 != pZVar2;
        pZVar2 = *(ZoneLinkedList **)(pZVar2 + 8)) {
      if (FLAG_trace_turbo_ceq != '\0') {
        this = (ControlEquivalence *)
               PrintF("{%d->%d} ",(ulong)(*(uint *)(*(long *)(pZVar2 + 0x28) + 0x14) & 0xffffff),
                      (ulong)(*(uint *)(*(long *)(pZVar2 + 0x30) + 0x14) & 0xffffff));
      }
    }
    if (FLAG_trace_turbo_ceq != '\0') {
      pCVar1 = (ControlEquivalence *)PrintF("\n");
      return pCVar1;
    }
  }
  return this;
}

