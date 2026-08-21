
/* v8::internal::compiler::JSGenericLowering::LowerJSCreateLiteralRegExp(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSCreateLiteralRegExp
          (JSGenericLowering *this,Node *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  Node *pNVar4;
  CallDescriptor *pCVar5;
  Operator *pOVar6;
  Zone *pZVar7;
  JSGraph *this_00;
  undefined8 local_78 [2];
  int *local_68;
  undefined **local_60;
  int *piStack_58;
  
  puVar2 = (undefined8 *)CreateLiteralParametersOf(*(Operator **)param_1);
  uVar3 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  Builtins::CallableFor((Builtins *)local_78,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x23);
  pZVar7 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar4 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),puVar2[1]);
  Node::InsertInput(param_1,pZVar7,0,pNVar4);
  this_00 = *(JSGraph **)(this + 0x10);
  pZVar7 = (Zone *)**(undefined8 **)this_00;
  iVar1 = FeedbackSource::index((FeedbackSource *)(puVar2 + 1));
  pNVar4 = (Node *)JSGraph::Constant(this_00,(double)iVar1);
  Node::InsertInput(param_1,pZVar7,1,pNVar4);
  pZVar7 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar4 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),*puVar2);
  Node::InsertInput(param_1,pZVar7,2,pNVar4);
  pZVar7 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar4 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),
                                     (double)(long)*(int *)((long)puVar2 + 0x1c));
  Node::InsertInput(param_1,pZVar7,3,pNVar4);
  local_60 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_58 = local_68;
  pCVar5 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_60,
                      local_68[2] - *local_68,uVar3 & 1,*(undefined1 *)(*(long *)param_1 + 0x12),0);
  pNVar4 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_78[0]);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar4);
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar5);
  NodeProperties::ChangeOp(param_1,pOVar6);
  return;
}

