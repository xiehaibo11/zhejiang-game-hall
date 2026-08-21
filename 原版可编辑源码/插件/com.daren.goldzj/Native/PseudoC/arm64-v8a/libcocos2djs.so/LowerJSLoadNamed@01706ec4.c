
/* v8::internal::compiler::JSGenericLowering::LowerJSLoadNamed(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSLoadNamed(JSGenericLowering *this,Node *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  Node *pNVar5;
  ProcessedFeedback *pPVar6;
  ElementAccessFeedback *pEVar7;
  CallDescriptor *pCVar8;
  Operator *pOVar9;
  undefined8 uVar10;
  Zone *pZVar11;
  FeedbackSource *this_00;
  JSGraph *this_01;
  undefined8 uVar12;
  long *plVar13;
  undefined8 local_78 [2];
  int *local_68;
  undefined **local_60;
  int *piStack_58;
  
  uVar2 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  puVar3 = (undefined8 *)NamedAccessOf(*(Operator **)param_1);
  lVar4 = NodeProperties::GetFrameStateInput(param_1);
  plVar13 = (long *)(lVar4 + 0x20);
  if ((~*(uint *)(lVar4 + 0x14) & 0xf000000) == 0) {
    plVar13 = (long *)(*plVar13 + 0x10);
  }
  plVar13 = (long *)plVar13[5];
  pZVar11 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar5 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),*puVar3);
  Node::InsertInput(param_1,pZVar11,1,pNVar5);
  this_00 = (FeedbackSource *)(puVar3 + 1);
  if ((*(long *)this_00 == 0) || (*(int *)(puVar3 + 2) == -1)) {
    uVar10 = 0x284;
    uVar12 = *(undefined8 *)(*(long *)(this + 0x10) + 0x168);
  }
  else {
    this_01 = *(JSGraph **)(this + 0x10);
    pZVar11 = (Zone *)**(undefined8 **)this_01;
    iVar1 = FeedbackSource::index(this_00);
    pNVar5 = (Node *)JSGraph::Constant(this_01,(double)iVar1);
    Node::InsertInput(param_1,pZVar11,2,pNVar5);
    if (*(short *)(*plVar13 + 0x10) == 0x29) {
      uVar12 = *(undefined8 *)(*(long *)(this + 0x10) + 0x168);
      pPVar6 = (ProcessedFeedback *)
               JSHeapBroker::GetFeedback(*(JSHeapBroker **)(this + 0x18),this_00);
      iVar1 = *(int *)pPVar6;
      if (iVar1 == 0) {
LAB_01706ff0:
        uVar10 = 0x159;
      }
      else {
        if (iVar1 == 9) {
          lVar4 = ProcessedFeedback::AsNamedAccess(pPVar6);
          if (*(long *)(lVar4 + 0x18) != *(long *)(lVar4 + 0x20)) goto LAB_01706ff0;
        }
        else {
          if (iVar1 != 4) goto LAB_0170716c;
          pEVar7 = (ElementAccessFeedback *)ProcessedFeedback::AsElementAccess(pPVar6);
          plVar13 = (long *)ElementAccessFeedback::transition_groups(pEVar7);
          if (*plVar13 != plVar13[1]) goto LAB_01706ff0;
        }
        uVar10 = 0x15a;
      }
      Builtins::CallableFor((Builtins *)local_78,uVar12,uVar10);
      pNVar5 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),*(undefined8 *)this_00);
      Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),3,pNVar5);
      goto LAB_017070bc;
    }
    uVar12 = *(undefined8 *)(*(long *)(this + 0x10) + 0x168);
    pPVar6 = (ProcessedFeedback *)JSHeapBroker::GetFeedback(*(JSHeapBroker **)(this + 0x18),this_00)
    ;
    iVar1 = *(int *)pPVar6;
    if (iVar1 == 0) {
LAB_01707048:
      uVar10 = 0x15c;
    }
    else {
      if (iVar1 == 9) {
        lVar4 = ProcessedFeedback::AsNamedAccess(pPVar6);
        if (*(long *)(lVar4 + 0x18) != *(long *)(lVar4 + 0x20)) goto LAB_01707048;
      }
      else {
        if (iVar1 != 4) {
LAB_0170716c:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pEVar7 = (ElementAccessFeedback *)ProcessedFeedback::AsElementAccess(pPVar6);
        plVar13 = (long *)ElementAccessFeedback::transition_groups(pEVar7);
        if (*plVar13 != plVar13[1]) goto LAB_01707048;
      }
      uVar10 = 0x15d;
    }
  }
  Builtins::CallableFor((Builtins *)local_78,uVar12,uVar10);
LAB_017070bc:
  local_60 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_58 = local_68;
  pCVar8 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_60,
                      local_68[2] - *local_68,uVar2 & 1,*(undefined1 *)(*(long *)param_1 + 0x12),0);
  pNVar5 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_78[0]);
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar5);
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar8);
  NodeProperties::ChangeOp(param_1,pOVar9);
  return;
}

