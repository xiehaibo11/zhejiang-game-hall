
/* v8::internal::compiler::TypedOptimization::ReduceSelect(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::TypedOptimization::ReduceSelect(TypedOptimization *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *pNVar3;
  ulong uVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  pNVar1 = (Node *)NodeProperties::GetValueInput(param_1,0);
  lVar9 = *(long *)(pNVar1 + 8);
  local_58 = lVar9;
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,1);
  lVar8 = *(long *)(pNVar2 + 8);
  local_60 = lVar8;
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,2);
  lVar7 = *(long *)(pNVar3 + 8);
  if (((((lVar9 != *(long *)(this + 0x28)) &&
        (local_68 = lVar7, uVar4 = Type::SlowIs((Type *)&local_58), (uVar4 & 1) == 0)) &&
       (pNVar2 = pNVar3, local_58 != *(long *)(this + 0x30))) &&
      (uVar4 = Type::SlowIs((Type *)&local_58), (uVar4 & 1) == 0)) &&
     (((lVar8 != *(long *)(this + 0x28) &&
       (uVar4 = Type::SlowIs((Type *)&local_60), lVar7 = local_68, (uVar4 & 1) == 0)) ||
      ((pNVar2 = pNVar1, lVar7 != *(long *)(this + 0x30) &&
       (uVar4 = Type::SlowIs((Type *)&local_68), (uVar4 & 1) == 0)))))) {
    pNVar2 = param_1;
    if (((local_60 == *(long *)(this + 0x30)) ||
        (uVar4 = Type::SlowIs((Type *)&local_60), (uVar4 & 1) != 0)) &&
       ((local_68 == *(long *)(this + 0x28) ||
        (uVar4 = Type::SlowIs((Type *)&local_68), (uVar4 & 1) != 0)))) {
      Node::TrimInputCount(param_1,1);
      pOVar5 = (Operator *)
               SimplifiedOperatorBuilder::BooleanNot
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
      NodeProperties::ChangeOp(param_1,pOVar5);
    }
    else {
      lVar7 = Type::Union(local_60,local_68,*(undefined8 *)**(undefined8 **)(this + 0x18));
      local_70 = *(long *)(param_1 + 8);
      if ((local_70 == lVar7) || (uVar4 = Type::SlowIs((Type *)&local_70,lVar7), (uVar4 & 1) != 0))
      {
        pNVar2 = (Node *)0x0;
      }
      else {
        uVar6 = Type::Intersect(local_70,lVar7,*(undefined8 *)**(undefined8 **)(this + 0x18));
        *(undefined8 *)(param_1 + 8) = uVar6;
      }
    }
  }
  return pNVar2;
}

