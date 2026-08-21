
/* v8::internal::compiler::TypedOptimization::ReduceNumberFloor(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::TypedOptimization::ReduceNumberFloor(TypedOptimization *this,Node *param_1)

{
  Node *pNVar1;
  ulong uVar2;
  long lVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  long local_48;
  long local_40;
  long local_38;
  
  pNVar1 = (Node *)NodeProperties::GetValueInput(param_1,0);
  local_38 = *(long *)(pNVar1 + 8);
  if ((local_38 != *(long *)(*(long *)(this + 0x38) + 0x160)) &&
     (uVar2 = Type::SlowIs((Type *)&local_38), (uVar2 & 1) == 0)) {
    if (((local_38 == 0x45f) || (uVar2 = Type::SlowIs((Type *)&local_38,0x45f), (uVar2 & 1) != 0))
       && ((*(short *)(*(long *)pNVar1 + 0x10) == 0x91 ||
           (*(short *)(*(long *)pNVar1 + 0x10) == 0x7f)))) {
      lVar3 = NodeProperties::GetValueInput(pNVar1,0);
      lVar6 = *(long *)(lVar3 + 8);
      local_40 = lVar6;
      lVar3 = NodeProperties::GetValueInput(pNVar1,1);
      local_48 = *(long *)(lVar3 + 8);
      if (((lVar6 == 0x407) || (uVar2 = Type::SlowIs((Type *)&local_40,0x407), (uVar2 & 1) != 0)) &&
         ((local_48 == 0x407 || (uVar2 = Type::SlowIs((Type *)&local_48,0x407), (uVar2 & 1) != 0))))
      {
        pOVar4 = (Operator *)
                 SimplifiedOperatorBuilder::NumberToUint32
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
        NodeProperties::ChangeOp(param_1,pOVar4);
        dVar7 = (double)Type::Max((Type *)&local_40);
        uVar5 = Type::Range(0.0,dVar7,*(Zone **)**(undefined8 **)(this + 0x18));
        *(undefined8 *)(param_1 + 8) = uVar5;
        return param_1;
      }
    }
    pNVar1 = (Node *)0x0;
  }
  return pNVar1;
}

