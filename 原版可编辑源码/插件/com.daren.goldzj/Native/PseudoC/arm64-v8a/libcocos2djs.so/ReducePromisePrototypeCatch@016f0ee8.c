
/* v8::internal::compiler::JSCallReducer::ReducePromisePrototypeCatch(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReducePromisePrototypeCatch
          (JSCallReducer *this,Node *param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint *puVar4;
  Node *pNVar5;
  Node *pNVar6;
  Node *pNVar7;
  ulong uVar8;
  Operator *pOVar9;
  long lVar10;
  JSGraph *pJVar11;
  Zone *pZVar12;
  int iVar13;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  Node *local_90;
  MapInference aMStack_88 [48];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar4 = (uint *)CallParametersOf(*(Operator **)param_1);
  uVar1 = *puVar4;
  if ((uVar1 >> 0x1c & 1) == 0) {
    pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,1);
    pNVar6 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    local_90 = pNVar6;
    pNVar7 = (Node *)NodeProperties::GetControlInput(param_1,0);
    MapInference::MapInference(aMStack_88,*(JSHeapBroker **)(this + 0x18),pNVar5,pNVar6);
    uVar8 = DoPromiseChecks(this,aMStack_88);
    if (((uVar8 & 1) == 0) ||
       (uVar8 = CompilationDependencies::DependOnPromiseThenProtector
                          (*(CompilationDependencies **)(this + 0x30)), (uVar8 & 1) == 0)) {
      param_1 = (Node *)MapInference::NoChange(aMStack_88);
    }
    else {
      MapInference::RelyOnMapsPreferStability
                (aMStack_88,*(CompilationDependencies **)(this + 0x30),*(JSGraph **)(this + 0x10),
                 &local_90,pNVar7,(FeedbackSource *)(puVar4 + 2));
      lVar10 = *(long *)(this + 0x18);
      if (*(char *)(lVar10 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","storage_.is_populated_");
      }
      uStack_a8 = *(undefined8 *)(lVar10 + 0x28);
      local_b0 = *(undefined8 *)(lVar10 + 0x20);
      pJVar11 = *(JSGraph **)(this + 0x10);
      iVar13 = (uVar1 & 0x7ffffff) - 2;
      local_a0 = NativeContextRef::promise_then((NativeContextRef *)&local_b0);
      pNVar5 = (Node *)JSGraph::Constant(pJVar11,(ObjectRef *)local_a0);
      NodeProperties::ReplaceValueInput(param_1,pNVar5,0);
      NodeProperties::ReplaceEffectInput(param_1,local_90,0);
      if (1 < iVar13) {
        do {
          Node::RemoveInput(param_1,3);
          iVar13 = iVar13 + -1;
        } while (1 < iVar13);
        iVar13 = 1;
      }
      pJVar11 = *(JSGraph **)(this + 0x10);
      iVar13 = iVar13 + -2;
      do {
        pZVar12 = (Zone *)**(undefined8 **)pJVar11;
        pNVar5 = (Node *)JSGraph::UndefinedConstant(pJVar11);
        Node::InsertInput(param_1,pZVar12,2,pNVar5);
        pJVar11 = *(JSGraph **)(this + 0x10);
        bVar3 = iVar13 != -1;
        iVar13 = iVar13 + 1;
      } while (bVar3);
      pOVar9 = (Operator *)
               JSOperatorBuilder::Call
                         (*(JSOperatorBuilder **)(pJVar11 + 0x170),4,puVar4 + 1,
                          (FeedbackSource *)(puVar4 + 2),1,*puVar4 >> 0x1c & 1,1);
      NodeProperties::ChangeOp(param_1,pOVar9);
      pNVar5 = (Node *)ReducePromisePrototypeThen(this,param_1);
      if (pNVar5 != (Node *)0x0) {
        param_1 = pNVar5;
      }
    }
    MapInference::~MapInference(aMStack_88);
  }
  else {
    param_1 = (Node *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

