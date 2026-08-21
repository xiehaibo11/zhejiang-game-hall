
/* v8::internal::compiler::BranchElimination::ReduceOtherControl(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::BranchElimination::ReduceOtherControl(BranchElimination *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = NodeProperties::GetControlInput(param_1,0);
  uVar3 = (ulong)*(uint *)(lVar1 + 0x14) & 0xffffff;
  if ((uVar3 < *(ulong *)(this + 0x40)) &&
     ((*(ulong *)(*(long *)(this + 0x38) + (uVar3 >> 3 & 0x1ffff8)) >>
       ((ulong)*(uint *)(lVar1 + 0x14) & 0x3f) & 1) != 0)) {
    if (uVar3 < (ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3)) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x18) + uVar3 * 8);
    }
    else {
      uVar2 = 0;
    }
    uVar2 = UpdateConditions(this,param_1,uVar2);
    return uVar2;
  }
  return 0;
}

