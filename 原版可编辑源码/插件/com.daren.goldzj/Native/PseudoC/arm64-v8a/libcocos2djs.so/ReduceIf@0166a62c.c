
/* v8::internal::compiler::BranchElimination::ReduceIf(v8::internal::compiler::Node*, bool) */

undefined8 __thiscall
v8::internal::compiler::BranchElimination::ReduceIf
          (BranchElimination *this,Node *param_1,bool param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long local_48;
  long lStack_40;
  undefined1 local_38;
  undefined8 local_18;
  
  lStack_40 = NodeProperties::GetControlInput(param_1,0);
  lVar1 = *(long *)(this + 0x18);
  uVar2 = *(uint *)(lStack_40 + 0x14);
  uVar6 = (ulong)uVar2 & 0xffffff;
  uVar4 = *(long *)(this + 0x20) - lVar1 >> 3;
  if (uVar6 < uVar4) {
    local_18 = *(undefined8 *)(lVar1 + uVar6 * 8);
  }
  else {
    local_18 = 0;
  }
  if ((uVar6 < *(ulong *)(this + 0x40)) &&
     ((*(ulong *)(*(long *)(this + 0x38) + (uVar6 >> 3 & 0x1ffff8)) >> ((ulong)uVar2 & 0x3f) & 1) !=
      0)) {
    plVar5 = (long *)(lStack_40 + 0x20);
    if ((~uVar2 & 0xf000000) == 0) {
      plVar5 = (long *)(*plVar5 + 0x10);
    }
    local_48 = *plVar5;
    if (((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) < uVar4) {
      uVar3 = *(undefined8 *)(lVar1 + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 8);
    }
    else {
      uVar3 = 0;
    }
    local_38 = param_2;
    FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition>::PushFront
              ((FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition> *)
               &local_18,&local_48,*(undefined8 *)(this + 0x58),uVar3);
    uVar3 = UpdateConditions(this,param_1,local_18);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

