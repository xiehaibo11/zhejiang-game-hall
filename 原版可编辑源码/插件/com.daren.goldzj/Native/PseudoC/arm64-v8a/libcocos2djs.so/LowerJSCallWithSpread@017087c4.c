
/* v8::internal::compiler::JSGenericLowering::LowerJSCallWithSpread(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSCallWithSpread
          (JSGenericLowering *this,Node *param_1)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  CallDescriptor *pCVar4;
  Node *pNVar5;
  Node *pNVar6;
  Operator *pOVar7;
  int iVar8;
  undefined **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  
  puVar2 = (uint *)CallParametersOf(*(Operator **)param_1);
  uVar1 = *puVar2;
  iVar8 = (int)((ulong)uVar1 & 0x7ffffff);
  uVar3 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  CodeFactory::CallWithSpread(*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  local_78 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  uStack_70 = local_58;
  pCVar4 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_78,iVar8 + -2,uVar3 & 1,0
                      ,0);
  pNVar5 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_68);
  pNVar6 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),iVar8 + -3);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar5);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),2,pNVar6);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),3,
                    *(Node **)(pNVar5 + (((ulong)uVar1 & 0x7ffffff) + 1) * 8));
  Node::RemoveInput(param_1,iVar8 + 2);
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar4);
  NodeProperties::ChangeOp(param_1,pOVar7);
  return;
}

