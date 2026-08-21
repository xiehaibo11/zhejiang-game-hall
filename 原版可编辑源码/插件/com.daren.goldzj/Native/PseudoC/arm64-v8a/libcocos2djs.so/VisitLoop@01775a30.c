
/* v8::internal::compiler::LoopVariableOptimizer::VisitLoop(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::LoopVariableOptimizer::VisitLoop(LoopVariableOptimizer *this,Node *param_1)

{
  DetectInductionVariables(this,param_1);
  TakeConditionsFromFirstControl(this,param_1);
  return;
}

