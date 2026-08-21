
/* v8::internal::compiler::ControlFlowOptimizer::VisitBranch(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ControlFlowOptimizer::VisitBranch(ControlFlowOptimizer *this,Node *param_1)

{
  ulong uVar1;
  
  uVar1 = TryBuildSwitch(this,param_1);
  if ((uVar1 & 1) != 0) {
    return;
  }
  VisitNode(this,param_1);
  return;
}

