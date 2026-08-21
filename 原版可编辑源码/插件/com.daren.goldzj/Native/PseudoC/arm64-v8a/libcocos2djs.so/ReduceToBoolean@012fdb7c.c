
/* v8::internal::compiler::TypedOptimization::ReduceToBoolean(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::TypedOptimization::ReduceToBoolean(TypedOptimization *this,Node *param_1)

{
  Node *pNVar1;
  ulong uVar2;
  Operator *pOVar3;
  Node *this_00;
  Node *this_01;
  int iVar4;
  Graph *this_02;
  Use *pUVar5;
  Node *pNVar6;
  long local_58;
  Node *local_50;
  undefined8 uStack_48;
  
  pNVar1 = param_1 + 0x20;
  pNVar6 = pNVar1;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar6 = *(Node **)pNVar6;
  local_58 = *(long *)(pNVar6 + 8);
  if (local_58 == 0x201) {
    return pNVar6;
  }
  uVar2 = Type::SlowIs((Type *)&local_58,0x201);
  if ((uVar2 & 1) != 0) {
    return pNVar6;
  }
  if ((local_58 == 0xc5f) || (uVar2 = Type::SlowIs((Type *)&local_58,0xc5f), (uVar2 & 1) != 0)) {
    this_02 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::NumberEqual
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
    uStack_48 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x18));
    goto LAB_012fdc24;
  }
  if ((local_58 == 0x1c5f) || (uVar2 = Type::SlowIs((Type *)&local_58,0x1c5f), (uVar2 & 1) != 0)) {
    Node::TrimInputCount(param_1,1);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::NumberToBoolean
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
    goto LAB_012fdcbc;
  }
  if ((local_58 == 0x47b0081) ||
     (uVar2 = Type::SlowIs((Type *)&local_58,0x47b0081), (uVar2 & 1) != 0)) {
    this_02 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::ReferenceEqual
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
    uStack_48 = JSGraph::NullConstant(*(JSGraph **)(this + 0x18));
LAB_012fdc24:
    iVar4 = 2;
  }
  else {
    if ((local_58 != 0x47f0181) &&
       (uVar2 = Type::SlowIs((Type *)&local_58,0x47f0181), (uVar2 & 1) == 0)) {
      if ((local_58 != 0x4021) && (uVar2 = Type::SlowIs((Type *)&local_58,0x4021), (uVar2 & 1) == 0)
         ) {
        return (Node *)0x0;
      }
      this_02 = (Graph *)**(undefined8 **)(this + 0x18);
      pOVar3 = (Operator *)
               SimplifiedOperatorBuilder::ReferenceEqual
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
      uStack_48 = JSGraph::EmptyStringConstant(*(JSGraph **)(this + 0x18));
      goto LAB_012fdc24;
    }
    this_02 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsUndetectable
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
    iVar4 = 1;
  }
  local_50 = pNVar6;
  this_00 = (Node *)Graph::NewNode(this_02,pOVar3,iVar4,&local_50,false);
  pNVar6 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_01 = *(Node **)pNVar6;
  if (this_01 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar5 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar5 = (Use *)(param_1 + -0x18);
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,pUVar5);
    }
    *(Node **)pNVar6 = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar5);
    }
  }
  Node::TrimInputCount(param_1,1);
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::BooleanNot
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
LAB_012fdcbc:
  NodeProperties::ChangeOp(param_1,pOVar3);
  return param_1;
}

