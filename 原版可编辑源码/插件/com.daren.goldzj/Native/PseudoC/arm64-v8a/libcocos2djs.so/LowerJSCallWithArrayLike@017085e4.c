
/* v8::internal::compiler::JSGenericLowering::LowerJSCallWithArrayLike(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSCallWithArrayLike
          (JSGenericLowering *this,Node *param_1)

{
  Node *pNVar1;
  Node *this_00;
  Node *this_01;
  ulong uVar2;
  CallDescriptor *pCVar3;
  Node *pNVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Use *pUVar7;
  undefined **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  
  CodeFactory::CallWithArrayLike(*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  uVar2 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  local_78 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  uStack_70 = local_58;
  pCVar3 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_78,1,uVar2 & 1,0,0);
  pNVar4 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_68);
  pNVar1 = param_1 + 0x20;
  pNVar6 = pNVar1;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_00 = *(Node **)(pNVar6 + 8);
  this_01 = *(Node **)(pNVar6 + 0x10);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar4);
  pNVar6 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar4 = *(Node **)(pNVar6 + 0x18);
  if (pNVar4 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar7 = (Use *)(*(long *)pNVar1 + -0x60);
    }
    else {
      pUVar7 = (Use *)(param_1 + -0x60);
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,pUVar7);
    }
    *(Node **)(pNVar6 + 0x18) = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar7);
    }
  }
  pNVar6 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar4 = *(Node **)(pNVar6 + 0x10);
  if (pNVar4 != this_01) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar7 = (Use *)(*(long *)pNVar1 + -0x48);
    }
    else {
      pUVar7 = (Use *)(param_1 + -0x48);
    }
    if (pNVar4 != (Node *)0x0) {
      Node::RemoveUse(pNVar4,pUVar7);
    }
    *(Node **)(pNVar6 + 0x10) = this_01;
    if (this_01 != (Node *)0x0) {
      Node::AppendUse(this_01,pUVar7);
    }
  }
  pOVar5 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar3);
  NodeProperties::ChangeOp(param_1,pOVar5);
  return;
}

