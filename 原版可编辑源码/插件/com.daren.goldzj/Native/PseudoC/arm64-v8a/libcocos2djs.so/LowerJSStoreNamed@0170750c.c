
/* v8::internal::compiler::JSGenericLowering::LowerJSStoreNamed(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSStoreNamed(JSGenericLowering *this,Node *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  Node *pNVar5;
  CallDescriptor *pCVar6;
  Operator *pOVar7;
  Zone *pZVar8;
  FeedbackSource *this_00;
  JSGraph *this_01;
  long *plVar9;
  undefined8 local_78 [2];
  int *local_68;
  undefined **local_60;
  int *piStack_58;
  
  uVar2 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  puVar3 = (undefined8 *)NamedAccessOf(*(Operator **)param_1);
  lVar4 = NodeProperties::GetFrameStateInput(param_1);
  plVar9 = (long *)(lVar4 + 0x20);
  if ((~*(uint *)(lVar4 + 0x14) & 0xf000000) == 0) {
    plVar9 = (long *)(*plVar9 + 0x10);
  }
  plVar9 = (long *)plVar9[5];
  pZVar8 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar5 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),*puVar3);
  Node::InsertInput(param_1,pZVar8,1,pNVar5);
  this_00 = (FeedbackSource *)(puVar3 + 1);
  if ((*(long *)this_00 != 0) && (*(int *)(puVar3 + 2) != -1)) {
    this_01 = *(JSGraph **)(this + 0x10);
    pZVar8 = (Zone *)**(undefined8 **)this_01;
    iVar1 = FeedbackSource::index(this_00);
    pNVar5 = (Node *)JSGraph::Constant(this_01,(double)iVar1);
    Node::InsertInput(param_1,pZVar8,3,pNVar5);
    if (*(short *)(*plVar9 + 0x10) == 0x29) {
      Builtins::CallableFor
                ((Builtins *)local_78,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x164);
      pNVar5 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),*(undefined8 *)this_00);
      Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),4,pNVar5);
    }
    else {
      Builtins::CallableFor
                ((Builtins *)local_78,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x165);
    }
    local_60 = &PTR__CallInterfaceDescriptor_01ca0fc8;
    piStack_58 = local_68;
    pCVar6 = (CallDescriptor *)
             Linkage::GetStubCallDescriptor
                       (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_60,
                        local_68[2] - *local_68,uVar2 & 1,*(undefined1 *)(*(long *)param_1 + 0x12),0
                       );
    pNVar5 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_78[0]);
    Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar5);
    pOVar7 = (Operator *)
             CommonOperatorBuilder::Call
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar6);
    NodeProperties::ChangeOp(param_1,pOVar7);
    return;
  }
  ReplaceWithRuntimeCall(this,param_1,0xfd,0xffffffff);
  return;
}

