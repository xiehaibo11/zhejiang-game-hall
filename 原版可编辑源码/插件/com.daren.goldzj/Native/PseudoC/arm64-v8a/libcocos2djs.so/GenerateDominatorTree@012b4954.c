
/* v8::internal::compiler::Scheduler::GenerateDominatorTree(v8::internal::compiler::Schedule*) */

void v8::internal::compiler::Scheduler::GenerateDominatorTree(Schedule *param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x68) + 0xc) = 0;
  PropagateImmediateDominators(*(BasicBlock **)(*(long *)(param_1 + 0x68) + 0x18));
  return;
}

