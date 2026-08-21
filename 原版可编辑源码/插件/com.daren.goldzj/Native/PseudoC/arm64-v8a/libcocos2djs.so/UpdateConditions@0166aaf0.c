
/* v8::internal::compiler::BranchElimination::UpdateConditions(v8::internal::compiler::Node*,
   v8::internal::compiler::BranchElimination::ControlPathConditions, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, bool) */

void __thiscall
v8::internal::compiler::BranchElimination::UpdateConditions
          (BranchElimination *this,long param_1,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,byte param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  if (uVar2 < (ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3)) {
    uVar1 = *(undefined8 *)(*(long *)(this + 0x18) + uVar2 * 8);
  }
  else {
    uVar1 = 0;
  }
  local_28 = param_6 & 1;
  local_40 = param_3;
  local_38 = param_4;
  uStack_30 = param_5;
  FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition>::PushFront
            ((FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition> *)&local_40
             ,&local_38,*(undefined8 *)(this + 0x58),uVar1);
  UpdateConditions(this,param_1,local_40);
  return;
}

