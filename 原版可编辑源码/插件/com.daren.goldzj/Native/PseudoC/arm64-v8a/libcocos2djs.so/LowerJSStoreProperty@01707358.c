
/* v8::internal::compiler::JSGenericLowering::LowerJSStoreProperty(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSStoreProperty
          (JSGenericLowering *this,Node *param_1)

{
  int iVar1;
  ulong uVar2;
  FeedbackSource *this_00;
  long lVar3;
  Node *pNVar4;
  CallDescriptor *pCVar5;
  Operator *pOVar6;
  JSGraph *this_01;
  Zone *pZVar7;
  long *plVar8;
  undefined8 local_78 [2];
  int *local_68;
  undefined **local_60;
  int *piStack_58;
  
  uVar2 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  this_00 = (FeedbackSource *)PropertyAccessOf(*(Operator **)param_1);
  lVar3 = NodeProperties::GetFrameStateInput(param_1);
  plVar8 = (long *)(lVar3 + 0x20);
  if ((~*(uint *)(lVar3 + 0x14) & 0xf000000) == 0) {
    plVar8 = (long *)(*plVar8 + 0x10);
  }
  this_01 = *(JSGraph **)(this + 0x10);
  plVar8 = (long *)plVar8[5];
  pZVar7 = (Zone *)**(undefined8 **)this_01;
  iVar1 = FeedbackSource::index(this_00);
  pNVar4 = (Node *)JSGraph::Constant(this_01,(double)iVar1);
  Node::InsertInput(param_1,pZVar7,3,pNVar4);
  if (*(short *)(*plVar8 + 0x10) == 0x29) {
    Builtins::CallableFor
              ((Builtins *)local_78,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x166);
    pNVar4 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),*(undefined8 *)this_00);
    Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),4,pNVar4);
  }
  else {
    Builtins::CallableFor
              ((Builtins *)local_78,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x167);
  }
  local_60 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_58 = local_68;
  pCVar5 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_60,
                      local_68[2] - *local_68,uVar2 & 1,*(undefined1 *)(*(long *)param_1 + 0x12),0);
  pNVar4 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_78[0]);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar4);
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar5);
  NodeProperties::ChangeOp(param_1,pOVar6);
  return;
}

