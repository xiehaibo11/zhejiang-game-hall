
/* v8::internal::compiler::JSGenericLowering::LowerJSCallForwardVarargs(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSCallForwardVarargs
          (JSGenericLowering *this,Node *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  CallDescriptor *pCVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  Operator *pOVar9;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  
  puVar3 = (uint *)CallForwardVarargsParametersOf(*(Operator **)param_1);
  uVar2 = *puVar3;
  uVar1 = uVar2 & 0x7fff;
  uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  CodeFactory::CallForwardVarargs(*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  local_68 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  uStack_60 = local_48;
  pCVar5 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_68,uVar1 - 1,uVar4 & 1,0,
                      0);
  pNVar6 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_58);
  pNVar7 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),uVar1 - 2);
  pNVar8 = (Node *)MachineGraph::Int32Constant
                             (*(MachineGraph **)(this + 0x10),uVar2 >> 0xf & 0x7fff);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar6);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),2,pNVar7);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),3,pNVar8);
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar5);
  NodeProperties::ChangeOp(param_1,pOVar9);
  return;
}

