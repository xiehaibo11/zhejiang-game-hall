
/* v8::internal::compiler::JSGenericLowering::LowerJSStoreInArrayLiteral(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSStoreInArrayLiteral
          (JSGenericLowering *this,Node *param_1)

{
  int iVar1;
  ulong uVar2;
  FeedbackSource *this_00;
  Node *pNVar3;
  CallDescriptor *pCVar4;
  Operator *pOVar5;
  JSGraph *this_01;
  Zone *pZVar6;
  undefined8 local_68 [2];
  int *local_58;
  undefined **local_50;
  int *piStack_48;
  
  Builtins::CallableFor((Builtins *)local_68,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x168);
  uVar2 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  this_00 = (FeedbackSource *)FeedbackParameterOf(*(Operator **)param_1);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
  this_01 = *(JSGraph **)(this + 0x10);
  pZVar6 = (Zone *)**(undefined8 **)this_01;
  iVar1 = FeedbackSource::index(this_00);
  pNVar3 = (Node *)JSGraph::Constant(this_01,(double)iVar1);
  Node::InsertInput(param_1,pZVar6,3,pNVar3);
  pZVar6 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar3 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),*(undefined8 *)this_00);
  Node::InsertInput(param_1,pZVar6,4,pNVar3);
  local_50 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_48 = local_58;
  pCVar4 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_50,
                      local_58[2] - *local_58,uVar2 & 1,*(undefined1 *)(*(long *)param_1 + 0x12),0);
  pNVar3 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_68[0]);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar3);
  pOVar5 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar4);
  NodeProperties::ChangeOp(param_1,pOVar5);
  return;
}

