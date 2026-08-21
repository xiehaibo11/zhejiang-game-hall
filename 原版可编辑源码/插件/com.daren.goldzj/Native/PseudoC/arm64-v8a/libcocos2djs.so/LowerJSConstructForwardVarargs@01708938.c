
/* v8::internal::compiler::JSGenericLowering::LowerJSConstructForwardVarargs(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSConstructForwardVarargs
          (JSGenericLowering *this,Node *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  CallDescriptor *pCVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  Node *pNVar10;
  Operator *pOVar11;
  Node *pNVar12;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  
  puVar4 = (uint *)ConstructForwardVarargsParametersOf(*(Operator **)param_1);
  uVar2 = *puVar4;
  uVar1 = uVar2 & 0xffff;
  uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  CodeFactory::ConstructForwardVarargs(*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  iVar3 = uVar1 - 1;
  local_88 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  uStack_80 = local_68;
  pCVar6 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_88,iVar3,uVar5 & 1,0,0);
  pNVar7 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_78);
  pNVar8 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),uVar1 - 2);
  pNVar9 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),uVar2 >> 0x10);
  pNVar10 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
  }
  pNVar12 = *(Node **)(pNVar10 + (long)iVar3 * 8);
  pNVar10 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  Node::RemoveInput(param_1,iVar3);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar7);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),2,pNVar12);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),3,pNVar8);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),4,pNVar9);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),5,pNVar10);
  pOVar11 = (Operator *)
            CommonOperatorBuilder::Call
                      (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar6);
  NodeProperties::ChangeOp(param_1,pOVar11);
  return;
}

