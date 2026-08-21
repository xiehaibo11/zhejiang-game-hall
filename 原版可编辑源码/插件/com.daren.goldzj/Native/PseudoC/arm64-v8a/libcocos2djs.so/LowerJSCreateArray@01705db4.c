
/* v8::internal::compiler::JSGenericLowering::LowerJSCreateArray(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSCreateArray(JSGenericLowering *this,Node *param_1)

{
  int iVar1;
  int *piVar2;
  CallDescriptor *pCVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  Node *pNVar7;
  Operator *pOVar8;
  undefined **local_60;
  undefined8 uStack_58;
  
  piVar2 = (int *)CreateArrayParametersOf(*(Operator **)param_1);
  iVar1 = *piVar2;
  uStack_58 = 0x1d2c328;
  local_60 = &PTR__CallInterfaceDescriptor_01ccda50;
  pCVar3 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_60,iVar1 + 1,1,
                      *(undefined1 *)(*(long *)param_1 + 0x12),0);
  pNVar4 = (Node *)JSGraph::ArrayConstructorStubConstant(*(JSGraph **)(this + 0x10));
  pNVar5 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),iVar1);
  if (*(long *)(piVar2 + 2) == 0) {
    pNVar6 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar6 = (Node *)JSGraph::HeapConstant();
  }
  pNVar7 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar4);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),3,pNVar5);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),4,pNVar6);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),5,pNVar7);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar3);
  NodeProperties::ChangeOp(param_1,pOVar8);
  return;
}

