
/* v8::internal::compiler::ControlEquivalence::VisitPre(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ControlEquivalence::VisitPre(ControlEquivalence *this,Node *param_1)

{
  if (FLAG_trace_turbo_ceq != '\0') {
    PrintF("CEQ: Pre-visit of #%d:%s\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_1 + 8));
    return;
  }
  return;
}

