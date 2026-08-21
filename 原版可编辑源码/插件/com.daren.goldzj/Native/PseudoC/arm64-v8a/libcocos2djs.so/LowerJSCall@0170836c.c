
/* v8::internal::compiler::JSGenericLowering::LowerJSCall(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSCall(JSGenericLowering *this,Node *param_1)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  CallDescriptor *pCVar4;
  Node *pNVar5;
  Node *pNVar6;
  Operator *pOVar7;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58 [2];
  undefined8 local_48;
  
  puVar2 = (uint *)CallParametersOf(*(Operator **)param_1);
  uVar1 = *puVar2 & 0x7ffffff;
  CodeFactory::Call(local_58,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),*puVar2 >> 0x1d & 3);
  uVar3 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  local_68 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  uStack_60 = local_48;
  pCVar4 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_68,uVar1 - 1,uVar3 & 1,0,
                      0);
  pNVar5 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_58[0]);
  pNVar6 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),uVar1 - 2);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar5);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),2,pNVar6);
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar4);
  NodeProperties::ChangeOp(param_1,pOVar7);
  return;
}

