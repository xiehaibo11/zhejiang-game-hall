
/* v8::internal::compiler::JSIntrinsicLowering::ReduceAsyncGeneratorReject(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSIntrinsicLowering::ReduceAsyncGeneratorReject
          (JSIntrinsicLowering *this,Node *param_1)

{
  CallDescriptor *pCVar1;
  Node *pNVar2;
  Operator *pOVar3;
  Zone *pZVar4;
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined **local_40;
  undefined8 uStack_38;
  
  Builtins::CallableFor((Builtins *)local_58,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x261);
  local_40 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  uStack_38 = local_48;
  pCVar1 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_40,0,1,
                      *(undefined1 *)(*(long *)param_1 + 0x12),0);
  pZVar4 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar2 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_58[0]);
  Node::InsertInput(param_1,pZVar4,0,pNVar2);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar1);
  NodeProperties::ChangeOp(param_1,pOVar3);
  return param_1;
}

