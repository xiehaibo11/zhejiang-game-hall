
/* v8::internal::compiler::JSGenericLowering::ReplaceWithStubCall(v8::internal::compiler::Node*,
   v8::internal::Callable, v8::base::Flags<v8::internal::compiler::CallDescriptor::Flag, int>) */

void __thiscall
v8::internal::compiler::JSGenericLowering::ReplaceWithStubCall
          (JSGenericLowering *this,Node *param_1,undefined8 *param_3,undefined4 param_4)

{
  CallDescriptor *pCVar1;
  Node *pNVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  undefined **local_40;
  int *piStack_38;
  
  uVar4 = *param_3;
  piStack_38 = (int *)param_3[2];
  local_40 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  pCVar1 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_40,
                      piStack_38[2] - *piStack_38,param_4,*(undefined1 *)(*(long *)param_1 + 0x12),0
                     );
  pNVar2 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),uVar4);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar2);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar1);
  NodeProperties::ChangeOp(param_1,pOVar3);
  return;
}

