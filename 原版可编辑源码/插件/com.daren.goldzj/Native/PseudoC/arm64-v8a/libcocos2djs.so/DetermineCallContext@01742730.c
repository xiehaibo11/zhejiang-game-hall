
/* v8::internal::compiler::JSInliner::DetermineCallContext(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::JSInliner::DetermineCallContext
          (JSInliner *this,Node *param_1,Node **param_2)

{
  Operator *pOVar1;
  ulong uVar2;
  long lVar3;
  short sVar4;
  JSGraph *this_00;
  Node *pNVar5;
  undefined8 uVar6;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  pOVar1 = *(Operator **)pNVar5;
  sVar4 = *(short *)(pOVar1 + 0x10);
  if (sVar4 != 0x1e) {
LAB_01742828:
    if (sVar4 != 0x2da) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar3 = CreateClosureParametersOf(pOVar1);
    ObjectRef::ObjectRef
              ((ObjectRef *)local_40,*(undefined8 *)(this + 0x28),*(undefined8 *)(lVar3 + 8),0);
    uVar2 = ObjectRef::IsFeedbackCell((ObjectRef *)local_40);
    if ((uVar2 & 1) != 0) {
      pNVar5 = (Node *)NodeProperties::GetContextInput(pNVar5);
      *param_2 = pNVar5;
      local_50 = FeedbackCellRef::value((FeedbackCellRef *)local_40);
      ObjectRef::AsFeedbackVector((ObjectRef *)local_50);
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsFeedbackCell()");
  }
  uVar6 = *(undefined8 *)(pOVar1 + 0x30);
  ObjectRef::ObjectRef((ObjectRef *)local_40,*(undefined8 *)(this + 0x28),uVar6,0);
  uVar2 = ObjectRef::IsHeapObject((ObjectRef *)local_40);
  if ((uVar2 & 1) != 0) {
    uVar2 = ObjectRef::IsJSFunction((ObjectRef *)local_40);
    if ((uVar2 & 1) == 0) {
      pOVar1 = *(Operator **)pNVar5;
      sVar4 = *(short *)(pOVar1 + 0x10);
      goto LAB_01742828;
    }
    ObjectRef::ObjectRef((ObjectRef *)local_40,*(undefined8 *)(this + 0x28),uVar6,0);
    uVar2 = ObjectRef::IsHeapObject((ObjectRef *)local_40);
    if ((uVar2 & 1) != 0) {
      local_50._0_8_ = local_40._0_8_;
      local_50._8_8_ = local_40._8_8_;
      local_40 = ObjectRef::AsJSFunction((ObjectRef *)local_50);
      uVar2 = JSFunctionRef::has_feedback_vector((JSFunctionRef *)local_40);
      if ((uVar2 & 1) != 0) {
        this_00 = *(JSGraph **)(this + 0x20);
        local_50 = JSFunctionRef::context((JSFunctionRef *)local_40);
        pNVar5 = (Node *)JSGraph::Constant(this_00,(ObjectRef *)local_50);
        *param_2 = pNVar5;
        JSFunctionRef::feedback_vector((JSFunctionRef *)local_40);
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","function.has_feedback_vector()");
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsHeapObject()");
}

