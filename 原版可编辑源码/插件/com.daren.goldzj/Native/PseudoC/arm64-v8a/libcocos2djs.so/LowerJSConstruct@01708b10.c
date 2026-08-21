
/* v8::internal::compiler::JSGenericLowering::LowerJSConstruct(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSConstruct(JSGenericLowering *this,Node *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  CallDescriptor *pCVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  Operator *pOVar9;
  Node *pNVar10;
  undefined **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  
  piVar3 = (int *)ConstructParametersOf(*(Operator **)param_1);
  iVar1 = *piVar3;
  uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  CodeFactory::Construct(*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  iVar2 = iVar1 + -1;
  local_78 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  uStack_70 = local_58;
  pCVar5 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_78,iVar2,uVar4 & 1,0,0);
  pNVar6 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_68);
  pNVar7 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),iVar1 + -2);
  pNVar8 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
  }
  pNVar10 = *(Node **)(pNVar8 + (long)iVar2 * 8);
  pNVar8 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  Node::RemoveInput(param_1,iVar2);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar6);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),2,pNVar10);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),3,pNVar7);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),4,pNVar8);
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar5);
  NodeProperties::ChangeOp(param_1,pOVar9);
  return;
}

