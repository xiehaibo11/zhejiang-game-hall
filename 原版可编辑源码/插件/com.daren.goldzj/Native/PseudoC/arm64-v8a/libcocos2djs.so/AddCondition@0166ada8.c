
/* v8::internal::compiler::BranchElimination::ControlPathConditions::AddCondition(v8::internal::Zone*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, bool,
   v8::internal::compiler::BranchElimination::ControlPathConditions) */

void __thiscall
v8::internal::compiler::BranchElimination::ControlPathConditions::AddCondition
          (ControlPathConditions *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          byte param_4,undefined8 param_6)

{
  undefined8 local_28;
  undefined8 uStack_20;
  byte local_18;
  
  local_18 = param_4 & 1;
  local_28 = param_2;
  uStack_20 = param_3;
  FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition>::PushFront
            ((FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition> *)this,
             &local_28,param_1,param_6);
  return;
}

