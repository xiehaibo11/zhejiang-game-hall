
/* v8::internal::compiler::JSGenericLowering::LowerJSModulus(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSModulus(JSGenericLowering *this,Node *param_1)

{
  ulong uVar1;
  CallDescriptor *pCVar2;
  Node *pNVar3;
  Operator *pOVar4;
  undefined8 local_58 [2];
  int *local_48;
  undefined **local_40;
  int *piStack_38;
  
  uVar1 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  Builtins::CallableFor((Builtins *)local_58,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x196);
  local_40 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_38 = local_48;
  pCVar2 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_40,
                      local_48[2] - *local_48,uVar1 & 1,*(undefined1 *)(*(long *)param_1 + 0x12),0);
  pNVar3 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_58[0]);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar3);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar2);
  NodeProperties::ChangeOp(param_1,pOVar4);
  return;
}

