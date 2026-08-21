
/* v8::internal::compiler::JSGenericLowering::LowerJSConstructWithArrayLike(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSConstructWithArrayLike
          (JSGenericLowering *this,Node *param_1)

{
  Node *pNVar1;
  Node *this_00;
  Node *this_01;
  ulong uVar2;
  CallDescriptor *pCVar3;
  Node *pNVar4;
  Node *pNVar5;
  Operator *pOVar6;
  Node *pNVar7;
  Use *pUVar8;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  
  Builtins::CallableFor((Builtins *)local_78,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x1a);
  uVar2 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  local_88 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  uStack_80 = local_68;
  pCVar3 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_88,1,uVar2 & 1,0,0);
  pNVar4 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_78[0]);
  pNVar5 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  pNVar1 = param_1 + 0x20;
  pNVar7 = pNVar1;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_00 = *(Node **)(pNVar7 + 8);
  this_01 = *(Node **)(pNVar7 + 0x10);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar4);
  pNVar7 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar4 = *(Node **)(pNVar7 + 0x10);
  if (pNVar4 != this_01) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar8 = (Use *)(*(long *)pNVar1 + -0x48);
    }
    else {
      pUVar8 = (Use *)(param_1 + -0x48);
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,pUVar8);
    }
    *(Node **)(pNVar7 + 0x10) = this_01;
    if (this_01 != (Node *)0x0) {
      Node::AppendUse(this_01,pUVar8);
    }
  }
  pNVar7 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar4 = *(Node **)(pNVar7 + 0x18);
  if (pNVar4 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar8 = (Use *)(*(long *)pNVar1 + -0x60);
    }
    else {
      pUVar8 = (Use *)(param_1 + -0x60);
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,pUVar8);
    }
    *(Node **)(pNVar7 + 0x18) = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar8);
    }
  }
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),4,pNVar5);
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar3);
  NodeProperties::ChangeOp(param_1,pOVar6);
  return;
}

