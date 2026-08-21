
/* v8::internal::compiler::JSCallReducer::ReducePromisePrototypeFinally(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReducePromisePrototypeFinally
          (JSCallReducer *this,Node *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  uint *puVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  Node *pNVar10;
  ulong uVar11;
  long *plVar12;
  Operator *pOVar13;
  Node *pNVar14;
  Node *pNVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  Node *pNVar18;
  long lVar19;
  SimplifiedOperatorBuilder *pSVar20;
  JSGraph *pJVar21;
  JSOperatorBuilder *pJVar22;
  undefined8 *puVar23;
  Use *pUVar24;
  Graph *pGVar25;
  int iVar26;
  undefined1 auVar27 [16];
  undefined8 local_130;
  undefined8 uStack_128;
  Node *local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  Node *local_f0;
  Node *pNStack_e8;
  undefined1 local_e0 [16];
  Node *local_d0;
  MapInference aMStack_a0 [48];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  puVar6 = (uint *)CallParametersOf(*(Operator **)param_1);
  uVar2 = *puVar6;
  iVar26 = (uVar2 & 0x7ffffff) - 2;
  pNVar7 = (Node *)NodeProperties::GetValueInput(param_1,1);
  if (iVar26 < 1) {
    pNVar8 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar8 = (Node *)NodeProperties::GetValueInput(param_1,2);
  }
  pNVar9 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  local_118 = pNVar9;
  pNVar10 = (Node *)NodeProperties::GetControlInput(param_1,0);
  if ((*(byte *)((long)puVar6 + 3) >> 4 & 1) != 0) {
    param_1 = (Node *)0x0;
    goto LAB_016f1810;
  }
  MapInference::MapInference(aMStack_a0,*(JSHeapBroker **)(this + 0x18),pNVar7,pNVar9);
  uVar11 = DoPromiseChecks(this,aMStack_a0);
  if ((uVar11 & 1) == 0) {
LAB_016f17fc:
    param_1 = (Node *)MapInference::NoChange(aMStack_a0);
  }
  else {
    plVar12 = (long *)MapInference::GetMaps(aMStack_a0);
    uVar11 = CompilationDependencies::DependOnPromiseHookProtector
                       (*(CompilationDependencies **)(this + 0x30));
    if ((((uVar11 & 1) == 0) ||
        (uVar11 = CompilationDependencies::DependOnPromiseThenProtector
                            (*(CompilationDependencies **)(this + 0x30)), (uVar11 & 1) == 0)) ||
       (uVar11 = CompilationDependencies::DependOnPromiseSpeciesProtector
                           (*(CompilationDependencies **)(this + 0x30)), (uVar11 & 1) == 0))
    goto LAB_016f17fc;
    MapInference::RelyOnMapsPreferStability
              (aMStack_a0,*(CompilationDependencies **)(this + 0x30),*(JSGraph **)(this + 0x10),
               &local_118,pNVar10,(FeedbackSource *)(puVar6 + 2));
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar13 = (Operator *)
              SimplifiedOperatorBuilder::ObjectIsCallable
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_e0._0_8_ = pNVar8;
    pNVar9 = (Node *)Graph::NewNode(pGVar25,pOVar13,1,(Node **)local_e0,false);
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar13 = (Operator *)
              CommonOperatorBuilder::Branch
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,1);
    local_e0._0_8_ = pNVar9;
    local_e0._8_8_ = pNVar10;
    pNVar10 = (Node *)Graph::NewNode(pGVar25,pOVar13,2,(Node **)local_e0,false);
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar13 = (Operator *)
              CommonOperatorBuilder::IfTrue
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_e0._0_8_ = pNVar10;
    pNVar14 = (Node *)Graph::NewNode(pGVar25,pOVar13,1,(Node **)local_e0,false);
    pNVar9 = local_118;
    lVar19 = *(long *)(this + 0x18);
    if (*(char *)(lVar19 + 0x18) != '\x01') {
LAB_016f19ac:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
    local_e0._8_8_ = *(undefined8 *)(lVar19 + 0x28);
    local_e0._0_8_ = *(undefined8 *)(lVar19 + 0x20);
    pNVar15 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)local_e0);
    lVar19 = *(long *)(this + 0x18);
    if (*(char *)(lVar19 + 0x18) != '\x01') goto LAB_016f19ac;
    local_100._8_8_ = *(undefined8 *)(lVar19 + 0x28);
    local_100._0_8_ = *(undefined8 *)(lVar19 + 0x20);
    pJVar21 = *(JSGraph **)(this + 0x10);
    local_e0 = NativeContextRef::promise_function((NativeContextRef *)local_100);
    uVar16 = JSGraph::Constant(pJVar21,(ObjectRef *)local_e0);
    lVar19 = *(long *)(this + 0x18);
    if (*(char *)(lVar19 + 0x18) != '\x01') goto LAB_016f19ac;
    local_110._8_8_ = *(undefined8 *)(lVar19 + 0x28);
    local_110._0_8_ = *(undefined8 *)(lVar19 + 0x20);
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pJVar22 = (JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e];
    local_100 = NativeContextRef::scope_info((NativeContextRef *)local_110);
    uVar17 = ScopeInfoRef::object((ScopeInfoRef *)local_100);
    pOVar13 = (Operator *)JSOperatorBuilder::CreateFunctionContext(pJVar22,uVar17,2,2);
    local_e0._8_8_ = pNVar9;
    local_e0._0_8_ = pNVar15;
    local_d0 = pNVar14;
    auVar27 = Graph::NewNode(pGVar25,pOVar13,3,(Node **)local_e0,false);
    pNVar9 = auVar27._0_8_;
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForContextSlot((AccessBuilder *)0x2,auVar27._8_8_);
    pOVar13 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar20,(FieldAccess *)local_e0);
    local_100._0_8_ = pNVar9;
    local_100._8_8_ = pNVar8;
    local_f0 = pNVar9;
    pNStack_e8 = pNVar14;
    auVar27 = Graph::NewNode(pGVar25,pOVar13,4,(Node **)local_100,false);
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pSVar20 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
    AccessBuilder::ForContextSlot((AccessBuilder *)0x3,auVar27._8_8_);
    pOVar13 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar20,(FieldAccess *)local_e0);
    local_100._0_8_ = pNVar9;
    local_100._8_8_ = uVar16;
    local_f0 = (Node *)auVar27._0_8_;
    pNStack_e8 = pNVar14;
    uVar16 = Graph::NewNode(pGVar25,pOVar13,4,(Node **)local_100,false);
    lVar19 = *(long *)(this + 0x18);
    if (*(char *)(lVar19 + 0x18) != '\x01') goto LAB_016f19ac;
    uStack_128 = *(undefined8 *)(lVar19 + 0x28);
    local_130 = *(undefined8 *)(lVar19 + 0x20);
    local_110 = NativeContextRef::promise_catch_finally_shared_fun((NativeContextRef *)&local_130);
    uVar17 = *(undefined8 *)(*(long *)(this + 0x10) + 0x168);
    uVar5 = SharedFunctionInfoRef::builtin_id((SharedFunctionInfoRef *)local_110);
    Builtins::CallableFor((Builtins *)local_100,uVar17,uVar5);
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pJVar22 = (JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e];
    uVar17 = SharedFunctionInfoRef::object((SharedFunctionInfoRef *)local_110);
    pOVar13 = (Operator *)
              JSOperatorBuilder::CreateClosure
                        (pJVar22,uVar17,*(long *)(*(long *)(this + 0x10) + 0x168) + 0xe90,
                         local_100._0_8_,0);
    local_e0._0_8_ = pNVar9;
    local_e0._8_8_ = uVar16;
    local_d0 = pNVar14;
    pNVar15 = (Node *)Graph::NewNode(pGVar25,pOVar13,3,(Node **)local_e0,false);
    lVar19 = *(long *)(this + 0x18);
    if (*(char *)(lVar19 + 0x18) != '\x01') goto LAB_016f19ac;
    uStack_128 = *(undefined8 *)(lVar19 + 0x28);
    local_130 = *(undefined8 *)(lVar19 + 0x20);
    auVar27 = NativeContextRef::promise_then_finally_shared_fun((NativeContextRef *)&local_130);
    uVar16 = *(undefined8 *)(*(long *)(this + 0x10) + 0x168);
    local_110 = auVar27;
    uVar5 = SharedFunctionInfoRef::builtin_id((SharedFunctionInfoRef *)local_110);
    Builtins::CallableFor((Builtins *)local_100,uVar16,uVar5);
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pJVar22 = (JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e];
    uVar16 = SharedFunctionInfoRef::object((SharedFunctionInfoRef *)local_110);
    pOVar13 = (Operator *)
              JSOperatorBuilder::CreateClosure
                        (pJVar22,uVar16,*(long *)(*(long *)(this + 0x10) + 0x168) + 0xe90,
                         local_100._0_8_,0);
    local_e0._0_8_ = pNVar9;
    local_e0._8_8_ = pNVar15;
    local_d0 = pNVar14;
    pNVar18 = (Node *)Graph::NewNode(pGVar25,pOVar13,3,(Node **)local_e0,false);
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar13 = (Operator *)
              CommonOperatorBuilder::IfFalse
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_e0._0_8_ = pNVar10;
    uVar16 = Graph::NewNode(pGVar25,pOVar13,1,(Node **)local_e0,false);
    pNVar9 = local_118;
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar13 = (Operator *)
              CommonOperatorBuilder::Merge
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_e0._0_8_ = pNVar14;
    local_e0._8_8_ = uVar16;
    pNVar10 = (Node *)Graph::NewNode(pGVar25,pOVar13,2,(Node **)local_e0,false);
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar13 = (Operator *)
              CommonOperatorBuilder::EffectPhi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_e0._8_8_ = pNVar9;
    local_e0._0_8_ = pNVar18;
    local_d0 = pNVar10;
    local_118 = (Node *)Graph::NewNode(pGVar25,pOVar13,3,(Node **)local_e0,false);
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar13 = (Operator *)
              CommonOperatorBuilder::Phi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
    local_e0._0_8_ = pNVar15;
    local_e0._8_8_ = pNVar8;
    local_d0 = pNVar10;
    pNVar9 = (Node *)Graph::NewNode(pGVar25,pOVar13,3,(Node **)local_e0,false);
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar13 = (Operator *)
              CommonOperatorBuilder::Phi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
    local_e0._0_8_ = pNVar18;
    local_e0._8_8_ = pNVar8;
    local_d0 = pNVar10;
    pNVar8 = (Node *)Graph::NewNode(pGVar25,pOVar13,3,(Node **)local_e0,false);
    local_100._0_8_ = (Node *)0x1;
    puVar1 = (undefined8 *)plVar12[1];
    for (puVar23 = (undefined8 *)*plVar12; puVar23 != puVar1; puVar23 = puVar23 + 1) {
      ZoneHandleSet<v8::internal::Map>::insert
                ((ZoneHandleSet<v8::internal::Map> *)local_100,*puVar23,
                 *(undefined8 *)**(undefined8 **)(this + 0x10));
    }
    pGVar25 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar13 = (Operator *)
              SimplifiedOperatorBuilder::MapGuard
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                         local_100._0_8_);
    local_e0._8_8_ = local_118;
    local_e0._0_8_ = pNVar7;
    local_d0 = pNVar10;
    local_118 = (Node *)Graph::NewNode(pGVar25,pOVar13,3,(Node **)local_e0,false);
    lVar19 = *(long *)(this + 0x18);
    if (*(char *)(lVar19 + 0x18) != '\x01') goto LAB_016f19ac;
    local_100._8_8_ = *(undefined8 *)(lVar19 + 0x28);
    local_100._0_8_ = *(undefined8 *)(lVar19 + 0x20);
    pJVar21 = *(JSGraph **)(this + 0x10);
    local_e0 = NativeContextRef::promise_then((NativeContextRef *)local_100);
    pNVar7 = (Node *)JSGraph::Constant(pJVar21,(ObjectRef *)local_e0);
    NodeProperties::ReplaceValueInput(param_1,pNVar7,0);
    NodeProperties::ReplaceEffectInput(param_1,local_118,0);
    NodeProperties::ReplaceControlInput(param_1,pNVar10,0);
    if (iVar26 < 3) {
      if (iVar26 != 2) {
        iVar26 = (uVar2 & 0x7ffffff) - 4;
        do {
          Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),2,pNVar8);
          bVar4 = iVar26 != -1;
          iVar26 = iVar26 + 1;
        } while (bVar4);
      }
    }
    else {
      do {
        Node::RemoveInput(param_1,2);
        iVar26 = iVar26 + -1;
      } while (2 < iVar26);
    }
    pNVar7 = param_1 + 0x20;
    pNVar10 = pNVar7;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar10 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    pNVar14 = *(Node **)(pNVar10 + 0x10);
    if (pNVar14 != pNVar8) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar24 = (Use *)(*(long *)pNVar7 + -0x48);
      }
      else {
        pUVar24 = (Use *)(param_1 + -0x48);
      }
      if (pNVar14 != (Node *)0x0) {
        Node::RemoveUse(pNVar14,pUVar24);
      }
      *(Node **)(pNVar10 + 0x10) = pNVar8;
      if (pNVar8 != (Node *)0x0) {
        Node::AppendUse(pNVar8,pUVar24);
      }
    }
    pNVar8 = pNVar7;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar8 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    pNVar10 = *(Node **)(pNVar8 + 0x18);
    if (pNVar10 != pNVar9) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar24 = (Use *)(*(long *)pNVar7 + -0x60);
      }
      else {
        pUVar24 = (Use *)(param_1 + -0x60);
      }
      if (pNVar10 != (Node *)0x0) {
        Node::RemoveUse(pNVar10,pUVar24);
      }
      *(Node **)(pNVar8 + 0x18) = pNVar9;
      if (pNVar9 != (Node *)0x0) {
        Node::AppendUse(pNVar9,pUVar24);
      }
    }
    pOVar13 = (Operator *)
              JSOperatorBuilder::Call
                        (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),4,puVar6 + 1,
                         (FeedbackSource *)(puVar6 + 2),1,*puVar6 >> 0x1c & 1,1);
    NodeProperties::ChangeOp(param_1,pOVar13);
    pNVar7 = (Node *)ReducePromisePrototypeThen(this,param_1);
    if (pNVar7 != (Node *)0x0) {
      param_1 = pNVar7;
    }
  }
  MapInference::~MapInference(aMStack_a0);
LAB_016f1810:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

