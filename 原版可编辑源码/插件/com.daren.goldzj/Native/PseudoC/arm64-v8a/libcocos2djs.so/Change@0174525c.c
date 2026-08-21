
/* v8::internal::compiler::JSIntrinsicLowering::Change(v8::internal::compiler::Node*,
   v8::internal::Callable const&, int, v8::internal::compiler::JSIntrinsicLowering::FrameStateFlag)
    */

Node * __thiscall
v8::internal::compiler::JSIntrinsicLowering::Change
          (JSIntrinsicLowering *this,Node *param_1,undefined8 *param_2,undefined4 param_3,
          int param_5)

{
  CallDescriptor *pCVar1;
  Node *pNVar2;
  Operator *pOVar3;
  Zone *pZVar4;
  undefined **local_40;
  undefined8 uStack_38;
  
  uStack_38 = param_2[2];
  local_40 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  pCVar1 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_40,param_3,param_5 == 0,
                      *(undefined1 *)(*(long *)param_1 + 0x12),0);
  pZVar4 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar2 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),*param_2);
  Node::InsertInput(param_1,pZVar4,0,pNVar2);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar1);
  NodeProperties::ChangeOp(param_1,pOVar3);
  return param_1;
}

