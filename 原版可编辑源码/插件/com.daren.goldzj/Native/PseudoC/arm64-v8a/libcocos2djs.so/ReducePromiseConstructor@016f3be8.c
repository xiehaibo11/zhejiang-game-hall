
/* v8::internal::compiler::JSCallReducer::ReducePromiseConstructor(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReducePromiseConstructor(JSCallReducer *this,Node *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  Node *pNVar6;
  long lVar7;
  Node *pNVar8;
  undefined8 uVar9;
  Node *pNVar10;
  ulong uVar11;
  Node *pNVar12;
  undefined8 *puVar13;
  Operator *pOVar14;
  undefined8 uVar15;
  Node *pNVar16;
  Node *pNVar17;
  undefined8 *puVar18;
  Graph *pGVar19;
  undefined8 uVar20;
  JSOperatorBuilder *pJVar21;
  SimplifiedOperatorBuilder *pSVar22;
  undefined1 auVar23 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  Node *local_108;
  Node *local_100;
  undefined1 local_f8 [16];
  Node *local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  Node *local_c0;
  Node *local_b8;
  Node *local_b0;
  undefined8 uStack_a8;
  Node *local_a0;
  Node *pNStack_98;
  undefined1 local_90 [16];
  Node *local_80;
  Node *pNStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  piVar4 = (int *)ConstructParametersOf(*(Operator **)param_1);
  iVar1 = *piVar4;
  if (0 < iVar1 + -2) {
    lVar5 = NodeProperties::GetValueInput(param_1,0);
    pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,1);
    lVar7 = NodeProperties::GetValueInput(param_1,iVar1 + -1);
    pNVar8 = (Node *)NodeProperties::GetContextInput(param_1);
    uVar9 = NodeProperties::GetFrameStateInput(param_1);
    pNVar10 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    local_e8 = (Node *)NodeProperties::GetControlInput(param_1,0);
    if (lVar5 == lVar7) {
      uVar11 = CompilationDependencies::DependOnPromiseHookProtector
                         (*(CompilationDependencies **)(this + 0x30));
      if ((uVar11 & 1) != 0) {
        lVar7 = *(long *)(this + 0x18);
        if (*(char *)(lVar7 + 0x18) != '\x01') {
LAB_016f43b0:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","storage_.is_populated_");
        }
        local_90._8_8_ = *(undefined8 *)(lVar7 + 0x28);
        local_90._0_8_ = *(undefined8 *)(lVar7 + 0x20);
        local_d0 = NativeContextRef::promise_function((NativeContextRef *)local_90);
        local_f8 = JSFunctionRef::shared((JSFunctionRef *)local_d0);
        uVar9 = CreateArtificialFrameState(this,param_1,uVar9,1,2,2,local_f8,pNVar8);
        pNVar12 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
        local_d0._0_8_ = pNVar12;
        local_d0._8_8_ = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
        local_c0 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
        local_b8 = (Node *)JSGraph::TheHoleConstant(*(JSGraph **)(this + 0x10));
        puVar13 = operator_new(0x20);
        puVar13[1] = local_d0._8_8_;
        *puVar13 = local_d0._0_8_;
        puVar13[3] = local_b8;
        puVar13[2] = local_c0;
        pNVar12 = (Node *)CreateJavaScriptBuiltinContinuationFrameState
                                    (*(undefined8 *)(this + 0x10),local_f8,0x1ce,lVar5,pNVar8,
                                     puVar13,4,uVar9,1);
        local_108 = (Node *)0x0;
        local_100 = (Node *)0x0;
        WireInCallbackIsCallableCheck
                  (this,pNVar6,pNVar8,pNVar12,pNVar10,&local_e8,&local_100,&local_108);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar14 = (Operator *)
                  JSOperatorBuilder::CreatePromise
                            ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e]);
        local_d0._0_8_ = pNVar8;
        local_d0._8_8_ = pNVar10;
        pNVar10 = (Node *)Graph::NewNode(pGVar19,pOVar14,2,(Node **)local_d0,false);
        lVar7 = *(long *)(this + 0x18);
        if (*(char *)(lVar7 + 0x18) != '\x01') goto LAB_016f43b0;
        local_e0._8_8_ = *(undefined8 *)(lVar7 + 0x28);
        local_e0._0_8_ = *(undefined8 *)(lVar7 + 0x20);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pJVar21 = (JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e];
        local_90 = NativeContextRef::scope_info((NativeContextRef *)local_e0);
        uVar15 = ScopeInfoRef::object((ScopeInfoRef *)local_90);
        pOVar14 = (Operator *)JSOperatorBuilder::CreateFunctionContext(pJVar21,uVar15,3,2);
        pNVar12 = local_e8;
        local_c0 = local_e8;
        local_d0._0_8_ = pNVar8;
        local_d0._8_8_ = pNVar10;
        auVar23 = Graph::NewNode(pGVar19,pOVar14,3,(Node **)local_d0,false);
        pNVar17 = auVar23._0_8_;
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pSVar22 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        AccessBuilder::ForContextSlot((AccessBuilder *)0x2,auVar23._8_8_);
        pOVar14 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar22,(FieldAccess *)local_d0)
        ;
        pNStack_78 = pNVar12;
        local_90._0_8_ = pNVar17;
        local_90._8_8_ = pNVar10;
        local_80 = pNVar17;
        auVar23 = Graph::NewNode(pGVar19,pOVar14,4,(Node **)local_90,false);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pSVar22 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        AccessBuilder::ForContextSlot((AccessBuilder *)0x3,auVar23._8_8_);
        pOVar14 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar22,(FieldAccess *)local_d0)
        ;
        local_90._8_8_ = JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
        pNStack_78 = pNVar12;
        local_90._0_8_ = pNVar17;
        local_80 = (Node *)auVar23._0_8_;
        auVar23 = Graph::NewNode(pGVar19,pOVar14,4,(Node **)local_90,false);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pSVar22 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        AccessBuilder::ForContextSlot((AccessBuilder *)&DAT_00000004,auVar23._8_8_);
        pOVar14 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar22,(FieldAccess *)local_d0)
        ;
        local_90._8_8_ = JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
        pNStack_78 = pNVar12;
        local_90._0_8_ = pNVar17;
        local_80 = (Node *)auVar23._0_8_;
        pNVar16 = (Node *)Graph::NewNode(pGVar19,pOVar14,4,(Node **)local_90,false);
        lVar7 = *(long *)(this + 0x18);
        if (*(char *)(lVar7 + 0x18) != '\x01') goto LAB_016f43b0;
        uStack_118 = *(undefined8 *)(lVar7 + 0x28);
        local_120 = *(undefined8 *)(lVar7 + 0x20);
        local_e0 = NativeContextRef::promise_capability_default_resolve_shared_fun
                             ((NativeContextRef *)&local_120);
        uVar15 = *(undefined8 *)(*(long *)(this + 0x10) + 0x168);
        uVar3 = SharedFunctionInfoRef::builtin_id((SharedFunctionInfoRef *)local_e0);
        Builtins::CallableFor((Builtins *)local_90,uVar15,uVar3);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pJVar21 = (JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e];
        uVar15 = SharedFunctionInfoRef::object((SharedFunctionInfoRef *)local_e0);
        pOVar14 = (Operator *)
                  JSOperatorBuilder::CreateClosure
                            (pJVar21,uVar15,*(long *)(*(long *)(this + 0x10) + 0x168) + 0xe90,
                             local_90._0_8_,0);
        local_c0 = pNVar12;
        local_d0._0_8_ = pNVar17;
        local_d0._8_8_ = pNVar16;
        uVar15 = Graph::NewNode(pGVar19,pOVar14,3,(Node **)local_d0,false);
        lVar7 = *(long *)(this + 0x18);
        if (*(char *)(lVar7 + 0x18) != '\x01') goto LAB_016f43b0;
        uStack_118 = *(undefined8 *)(lVar7 + 0x28);
        local_120 = *(undefined8 *)(lVar7 + 0x20);
        auVar23 = NativeContextRef::promise_capability_default_reject_shared_fun
                            ((NativeContextRef *)&local_120);
        uVar20 = *(undefined8 *)(*(long *)(this + 0x10) + 0x168);
        local_e0 = auVar23;
        uVar3 = SharedFunctionInfoRef::builtin_id((SharedFunctionInfoRef *)local_e0);
        Builtins::CallableFor((Builtins *)local_90,uVar20,uVar3);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pJVar21 = (JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e];
        uVar20 = SharedFunctionInfoRef::object((SharedFunctionInfoRef *)local_e0);
        pOVar14 = (Operator *)
                  JSOperatorBuilder::CreateClosure
                            (pJVar21,uVar20,*(long *)(*(long *)(this + 0x10) + 0x168) + 0xe90,
                             local_90._0_8_,0);
        local_c0 = pNVar12;
        local_d0._0_8_ = pNVar17;
        local_d0._8_8_ = uVar15;
        pNVar17 = (Node *)Graph::NewNode(pGVar19,pOVar14,3,(Node **)local_d0,false);
        local_d0._0_8_ = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
        local_d0._8_8_ = pNVar10;
        local_c0 = pNVar17;
        puVar18 = operator_new(0x18);
        puVar18[1] = local_d0._8_8_;
        *puVar18 = local_d0._0_8_;
        puVar18[2] = local_c0;
        uVar9 = CreateJavaScriptBuiltinContinuationFrameState
                          (*(undefined8 *)(this + 0x10),local_f8,0x1ce,lVar5,pNVar8,puVar18,3,uVar9,
                           2);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        local_90._0_8_ = (Node *)0x0;
        local_90._8_4_ = 0xffffffff;
        pOVar14 = (Operator *)
                  JSOperatorBuilder::Call
                            ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],4,piVar4 + 1
                             ,local_90,0,1,1);
        local_d0._8_8_ = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
        pNStack_98 = pNVar12;
        local_d0._0_8_ = pNVar6;
        local_c0 = (Node *)uVar15;
        local_b8 = pNVar17;
        local_b0 = pNVar8;
        uStack_a8 = uVar9;
        local_a0 = pNVar17;
        pNVar12 = (Node *)Graph::NewNode(pGVar19,pOVar14,8,(Node **)local_d0,false);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        local_e8 = pNVar12;
        pOVar14 = (Operator *)
                  CommonOperatorBuilder::IfException
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_d0._0_8_ = pNVar12;
        local_d0._8_8_ = pNVar12;
        uVar15 = Graph::NewNode(pGVar19,pOVar14,2,(Node **)local_d0,false);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        local_90._0_8_ = (Node *)0x0;
        local_90._8_4_ = 0xffffffff;
        pOVar14 = (Operator *)
                  JSOperatorBuilder::Call
                            ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],3,piVar4 + 1
                             ,local_90,0,1,1);
        local_d0._8_8_ = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
        local_d0._0_8_ = pNVar17;
        local_c0 = (Node *)uVar15;
        local_b8 = pNVar8;
        local_b0 = (Node *)uVar9;
        uStack_a8 = uVar15;
        local_a0 = (Node *)uVar15;
        pNVar17 = (Node *)Graph::NewNode(pGVar19,pOVar14,7,(Node **)local_d0,false);
        local_d0._0_8_ = (Node *)0x0;
        local_e0._0_8_ = pNVar17;
        uVar11 = NodeProperties::IsExceptionalCall(param_1,(Node **)local_d0);
        pNVar6 = local_108;
        pNVar8 = pNVar17;
        if ((uVar11 & 1) != 0) {
          RewirePostCallbackExceptionEdges
                    (this,local_108,(Node *)local_d0._0_8_,pNVar17,&local_100,(Node **)local_e0);
          pNVar8 = (Node *)local_e0._0_8_;
        }
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar14 = (Operator *)
                  CommonOperatorBuilder::IfSuccess
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_d0._0_8_ = pNVar12;
        pNVar16 = (Node *)Graph::NewNode(pGVar19,pOVar14,1,(Node **)local_d0,false);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar14 = (Operator *)
                  CommonOperatorBuilder::Merge
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
        local_d0._0_8_ = pNVar16;
        local_d0._8_8_ = pNVar8;
        pNVar8 = (Node *)Graph::NewNode(pGVar19,pOVar14,2,(Node **)local_d0,false);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        local_e8 = pNVar8;
        pOVar14 = (Operator *)
                  CommonOperatorBuilder::EffectPhi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
        local_d0._0_8_ = pNVar12;
        local_d0._8_8_ = pNVar17;
        local_c0 = pNVar8;
        uVar9 = Graph::NewNode(pGVar19,pOVar14,3,(Node **)local_d0,false);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar14 = (Operator *)
                  CommonOperatorBuilder::Throw
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_d0._0_8_ = pNVar6;
        local_d0._8_8_ = local_100;
        pNVar6 = (Node *)Graph::NewNode(pGVar19,pOVar14,2,(Node **)local_d0,false);
        NodeProperties::MergeControlToEnd
                  ((Graph *)**(undefined8 **)(this + 0x10),
                   (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar6);
        (**(code **)(**(long **)(this + 8) + 0x20))
                  (*(long **)(this + 8),param_1,pNVar10,uVar9,pNVar8);
        operator_delete(puVar18);
        operator_delete(puVar13);
        goto LAB_016f425c;
      }
    }
  }
  pNVar10 = (Node *)0x0;
LAB_016f425c:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pNVar10;
}

