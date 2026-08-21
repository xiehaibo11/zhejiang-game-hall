
/* v8::internal::compiler::JSGenericLowering::LowerJSStrictEqual(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSStrictEqual(JSGenericLowering *this,Node *param_1)

{
  Node *pNVar1;
  CallDescriptor *pCVar2;
  Operator *pOVar3;
  undefined8 local_58 [2];
  int *local_48;
  undefined **local_40;
  int *piStack_38;
  
  pNVar1 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
  NodeProperties::ReplaceContextInput(param_1,pNVar1);
  Builtins::CallableFor((Builtins *)local_58,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x1a5);
  Node::RemoveInput(param_1,4);
  local_40 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_38 = local_48;
  pCVar2 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_40,
                      local_48[2] - *local_48,0,0x70,0);
  pNVar1 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_58[0]);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar1);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar2);
  NodeProperties::ChangeOp(param_1,pOVar3);
  return;
}

