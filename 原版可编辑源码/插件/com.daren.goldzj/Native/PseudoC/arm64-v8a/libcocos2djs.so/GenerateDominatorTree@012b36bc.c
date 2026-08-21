
/* v8::internal::compiler::Scheduler::GenerateDominatorTree() */

void __thiscall v8::internal::compiler::Scheduler::GenerateDominatorTree(Scheduler *this)

{
  long lVar1;
  
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("--- IMMEDIATE BLOCK DOMINATORS -----------------------------\n");
  }
  lVar1 = *(long *)(this + 0x10);
  *(undefined4 *)(*(long *)(lVar1 + 0x68) + 0xc) = 0;
  PropagateImmediateDominators(*(BasicBlock **)(*(long *)(lVar1 + 0x68) + 0x18));
  return;
}

