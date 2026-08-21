
/* v8::internal::compiler::BranchElimination::Reduce(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::BranchElimination::Reduce(BranchElimination *this,Node *param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  switch(*(undefined2 *)(*(long *)param_1 + 0x10)) {
  case 0:
    uVar3 = 0;
    goto LAB_01669fb4;
  case 2:
    uVar3 = ReduceBranch(this,param_1);
    return uVar3;
  default:
    if (*(int *)(*(long *)param_1 + 0x28) < 1) {
      return 0;
    }
  case 1:
    lVar1 = NodeProperties::GetControlInput(param_1,0);
    uVar4 = (ulong)*(uint *)(lVar1 + 0x14) & 0xffffff;
    if ((*(ulong *)(this + 0x40) <= uVar4) ||
       ((*(ulong *)(*(long *)(this + 0x38) + (uVar4 >> 3 & 0x1ffff8)) >>
         ((ulong)*(uint *)(lVar1 + 0x14) & 0x3f) & 1) == 0)) {
switchD_01669ec4_caseD_3d:
      return 0;
    }
    if (uVar4 < (ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3)) {
      uVar3 = *(undefined8 *)(*(long *)(this + 0x18) + uVar4 * 8);
    }
    else {
      uVar3 = 0;
    }
LAB_01669fb4:
    uVar3 = UpdateConditions(this,param_1,uVar3);
    return uVar3;
  case 4:
    bVar2 = true;
    break;
  case 5:
    bVar2 = false;
    break;
  case 10:
    uVar3 = ReduceMerge(this,param_1);
    return uVar3;
  case 0xc:
  case 0xd:
    uVar3 = ReduceDeoptimizeConditional(this,param_1);
    return uVar3;
  case 0x3d:
    goto switchD_01669ec4_caseD_3d;
  }
  uVar3 = ReduceIf(this,param_1,bVar2);
  return uVar3;
}

