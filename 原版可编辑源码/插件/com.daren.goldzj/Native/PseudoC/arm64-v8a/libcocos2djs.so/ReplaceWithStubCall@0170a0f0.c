
/* v8::internal::compiler::JSGenericLowering::ReplaceWithStubCall(v8::internal::compiler::Node*,
   v8::internal::Callable, v8::base::Flags<v8::internal::compiler::CallDescriptor::Flag, int>,
   v8::base::Flags<v8::internal::compiler::Operator::Property, unsigned char>) */

void __thiscall
v8::internal::compiler::JSGenericLowering::ReplaceWithStubCall
          (JSGenericLowering *this,Node *param_1,undefined8 *param_3,undefined4 param_4,
          undefined1 param_5)

{
  CallDescriptor *pCVar1;
  Node *pNVar2;
  Operator *pOVar3;
  undefined **local_40;
  int *local_38;
  
  local_40 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  local_38 = (int *)param_3[2];
  pCVar1 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_40,
                      local_38[2] - *local_38,param_4,param_5,0);
  pNVar2 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),*param_3);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar2);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar1);
  NodeProperties::ChangeOp(param_1,pOVar3);
  return;
}

