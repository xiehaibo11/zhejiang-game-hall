
/* v8::internal::compiler::JSGenericLowering::LowerJSLoadProperty(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSLoadProperty
          (JSGenericLowering *this,Node *param_1)

{
  int iVar1;
  ulong uVar2;
  FeedbackSource *this_00;
  long lVar3;
  Node *pNVar4;
  ProcessedFeedback *pPVar5;
  ElementAccessFeedback *pEVar6;
  CallDescriptor *pCVar7;
  Operator *pOVar8;
  undefined8 uVar9;
  JSGraph *this_01;
  undefined8 uVar10;
  Zone *pZVar11;
  long *plVar12;
  undefined8 local_78 [2];
  int *local_68;
  undefined **local_60;
  int *piStack_58;
  
  uVar2 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  this_00 = (FeedbackSource *)PropertyAccessOf(*(Operator **)param_1);
  lVar3 = NodeProperties::GetFrameStateInput(param_1);
  plVar12 = (long *)(lVar3 + 0x20);
  if ((~*(uint *)(lVar3 + 0x14) & 0xf000000) == 0) {
    plVar12 = (long *)(*plVar12 + 0x10);
  }
  this_01 = *(JSGraph **)(this + 0x10);
  plVar12 = (long *)plVar12[5];
  pZVar11 = (Zone *)**(undefined8 **)this_01;
  iVar1 = FeedbackSource::index(this_00);
  pNVar4 = (Node *)JSGraph::Constant(this_01,(double)iVar1);
  Node::InsertInput(param_1,pZVar11,2,pNVar4);
  if (*(short *)(*plVar12 + 0x10) != 0x29) {
    uVar10 = *(undefined8 *)(*(long *)(this + 0x10) + 0x168);
    pPVar5 = (ProcessedFeedback *)JSHeapBroker::GetFeedback(*(JSHeapBroker **)(this + 0x18),this_00)
    ;
    iVar1 = *(int *)pPVar5;
    if (iVar1 == 0) {
LAB_01706df8:
      uVar9 = 0x160;
    }
    else {
      if (iVar1 == 9) {
        lVar3 = ProcessedFeedback::AsNamedAccess(pPVar5);
        if (*(long *)(lVar3 + 0x18) != *(long *)(lVar3 + 0x20)) goto LAB_01706df8;
      }
      else {
        if (iVar1 != 4) goto LAB_01706eb8;
        pEVar6 = (ElementAccessFeedback *)ProcessedFeedback::AsElementAccess(pPVar5);
        plVar12 = (long *)ElementAccessFeedback::transition_groups(pEVar6);
        if (*plVar12 != plVar12[1]) goto LAB_01706df8;
      }
      uVar9 = 0x161;
    }
    Builtins::CallableFor((Builtins *)local_78,uVar10,uVar9);
    goto LAB_01706e08;
  }
  uVar10 = *(undefined8 *)(*(long *)(this + 0x10) + 0x168);
  pPVar5 = (ProcessedFeedback *)JSHeapBroker::GetFeedback(*(JSHeapBroker **)(this + 0x18),this_00);
  iVar1 = *(int *)pPVar5;
  if (iVar1 == 0) {
LAB_01706dac:
    uVar9 = 0x15e;
  }
  else {
    if (iVar1 == 9) {
      lVar3 = ProcessedFeedback::AsNamedAccess(pPVar5);
      if (*(long *)(lVar3 + 0x18) != *(long *)(lVar3 + 0x20)) goto LAB_01706dac;
    }
    else {
      if (iVar1 != 4) {
LAB_01706eb8:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pEVar6 = (ElementAccessFeedback *)ProcessedFeedback::AsElementAccess(pPVar5);
      plVar12 = (long *)ElementAccessFeedback::transition_groups(pEVar6);
      if (*plVar12 != plVar12[1]) goto LAB_01706dac;
    }
    uVar9 = 0x15f;
  }
  Builtins::CallableFor((Builtins *)local_78,uVar10,uVar9);
  pNVar4 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),*(undefined8 *)this_00);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),3,pNVar4);
LAB_01706e08:
  local_60 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_58 = local_68;
  pCVar7 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_60,
                      local_68[2] - *local_68,uVar2 & 1,*(undefined1 *)(*(long *)param_1 + 0x12),0);
  pNVar4 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_78[0]);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar4);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar7);
  NodeProperties::ChangeOp(param_1,pOVar8);
  return;
}

