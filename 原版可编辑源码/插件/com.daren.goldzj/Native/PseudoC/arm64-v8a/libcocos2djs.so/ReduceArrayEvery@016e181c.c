
/* v8::internal::compiler::JSCallReducer::ReduceArrayEvery(v8::internal::compiler::Node*,
   v8::internal::compiler::SharedFunctionInfoRef const&) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayEvery
          (JSCallReducer *this,Node *param_1,SharedFunctionInfoRef *param_2)

{
  FeedbackSource *pFVar1;
  long lVar2;
  Node *pNVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  Node *pNVar10;
  Node *pNVar11;
  Node *pNVar12;
  ulong uVar13;
  undefined8 uVar14;
  Node *pNVar15;
  Operator *pOVar16;
  Node *pNVar17;
  Node *pNVar18;
  Node *pNVar19;
  Node *pNVar20;
  Node *pNVar21;
  Node *pNVar22;
  Node *pNVar23;
  Node *pNVar24;
  JSCallReducer *this_00;
  int iVar25;
  SimplifiedOperatorBuilder *pSVar26;
  Graph *pGVar27;
  Node *local_140;
  Node *pNStack_138;
  Node *local_130;
  Node *local_128;
  Node *local_120;
  Node *local_118;
  Node *pNStack_110;
  Node *local_108;
  byte local_fc [4];
  Node *local_f8;
  Node *local_f0;
  MapInference aMStack_e8 [48];
  Node *local_b8;
  Node *local_b0;
  Node *local_a8;
  Node *local_a0;
  Node *local_98;
  Node *pNStack_90;
  undefined8 local_88;
  Node *pNStack_80;
  Node *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if ((FLAG_turbo_inline_array_builtins == '\0') ||
     (puVar5 = (uint *)CallParametersOf(*(Operator **)param_1),
     (*(byte *)((long)puVar5 + 3) >> 4 & 1) != 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = NodeProperties::GetFrameStateInput(param_1);
    pNVar7 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    local_f0 = pNVar7;
    pNVar8 = (Node *)NodeProperties::GetControlInput(param_1,0);
    local_f8 = pNVar8;
    pNVar9 = (Node *)NodeProperties::GetContextInput(param_1);
    pNVar10 = (Node *)NodeProperties::GetValueInput(param_1,1);
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      pNVar11 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar11 = (Node *)NodeProperties::GetValueInput(param_1,2);
    }
    if (*(int *)(*(long *)param_1 + 0x14) < 4) {
      pNVar12 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar12 = (Node *)NodeProperties::GetValueInput(param_1,3);
    }
    MapInference::MapInference(aMStack_e8,*(JSHeapBroker **)(this + 0x18),pNVar10,pNVar7);
    uVar13 = MapInference::HaveMaps(aMStack_e8);
    if ((uVar13 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar14 = MapInference::GetMaps(aMStack_e8);
      uVar13 = FUN_016e047c(*(undefined8 *)(this + 0x18),uVar14,local_fc);
      if (((uVar13 & 1) == 0) ||
         (uVar13 = CompilationDependencies::DependOnArraySpeciesProtector
                             (*(CompilationDependencies **)(this + 0x30)), (uVar13 & 1) == 0)) {
        uVar6 = MapInference::NoChange(aMStack_e8);
      }
      else {
        if (((local_fc[0] < 6) && ((local_fc[0] & 1) != 0)) &&
           (uVar13 = CompilationDependencies::DependOnNoElementsProtector
                               (*(CompilationDependencies **)(this + 0x30)), (uVar13 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pFVar1 = (FeedbackSource *)(puVar5 + 2);
        uVar4 = MapInference::RelyOnMapsPreferStability
                          (aMStack_e8,*(CompilationDependencies **)(this + 0x30),
                           *(JSGraph **)(this + 0x10),&local_f0,pNVar8,pFVar1);
        pNVar15 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pSVar26 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        local_108 = pNVar15;
        AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_b8,local_fc[0]);
        pOVar16 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar26,(FieldAccess *)&local_b8)
        ;
        pNStack_138 = local_f0;
        local_130 = local_f8;
        local_140 = pNVar10;
        pNVar17 = (Node *)Graph::NewNode(pGVar27,pOVar16,3,&local_140,false);
        local_118 = (Node *)0x0;
        pNStack_110 = (Node *)0x0;
        pNVar7 = param_1 + 0x20;
        pNVar8 = pNVar7;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar8 = (Node *)(*(long *)pNVar7 + 0x10);
        }
        local_f0 = pNVar17;
        local_b8 = pNVar10;
        local_b0 = pNVar11;
        local_a8 = pNVar12;
        local_a0 = pNVar15;
        local_98 = pNVar17;
        pNVar8 = (Node *)CreateJavaScriptBuiltinContinuationFrameState
                                   (*(undefined8 *)(this + 0x10),param_2,0x298,*(undefined8 *)pNVar8
                                    ,pNVar9,&local_b8,5,uVar6,1);
        WireInCallbackIsCallableCheck
                  (this,pNVar11,pNVar9,pNVar8,local_f0,&local_f8,&pNStack_110,&local_118);
        pNVar18 = (Node *)WireInLoopStart(this,pNVar15,&local_f8,&local_f0);
        pNVar3 = local_f0;
        pNVar15 = local_f8;
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        local_108 = pNVar18;
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::NumberLessThan
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_b8 = pNVar18;
        local_b0 = pNVar17;
        pNVar8 = (Node *)Graph::NewNode(pGVar27,pOVar16,2,&local_b8,false);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::Branch
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,1);
        local_b0 = local_f8;
        local_b8 = pNVar8;
        pNVar8 = (Node *)Graph::NewNode(pGVar27,pOVar16,2,&local_b8,false);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::IfTrue
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar8;
        pNVar19 = (Node *)Graph::NewNode(pGVar27,pOVar16,1,&local_b8,false);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::IfFalse
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar8;
        pNVar20 = (Node *)Graph::NewNode(pGVar27,pOVar16,1,&local_b8,false);
        pNVar8 = pNVar7;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar8 = (Node *)(*(long *)pNVar7 + 0x10);
        }
        local_f8 = pNVar19;
        local_b8 = pNVar10;
        local_b0 = pNVar11;
        local_a8 = pNVar12;
        local_a0 = pNVar18;
        local_98 = pNVar17;
        pNVar8 = (Node *)CreateJavaScriptBuiltinContinuationFrameState
                                   (*(undefined8 *)(this + 0x10),param_2,0x297,*(undefined8 *)pNVar8
                                    ,pNVar9,&local_b8,5,uVar6,0);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::Checkpoint
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        pNStack_138 = local_f0;
        local_140 = pNVar8;
        local_130 = pNVar19;
        local_f0 = (Node *)Graph::NewNode(pGVar27,pOVar16,3,&local_140,false);
        if ((uVar4 & 1) == 0) {
          MapInference::InsertMapChecks
                    (aMStack_e8,*(JSGraph **)(this + 0x10),&local_f0,pNVar19,pFVar1);
        }
        pNVar21 = (Node *)SafeLoadElement(this,local_fc[0],pNVar10,pNVar19,&local_f0,&local_108,
                                          pFVar1);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::NumberAdd
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        pNVar8 = local_108;
        local_b0 = (Node *)JSGraph::OneConstant(*(JSGraph **)(this + 0x10));
        local_b8 = pNVar8;
        pNVar22 = (Node *)Graph::NewNode(pGVar27,pOVar16,2,&local_b8,false);
        pNVar19 = local_f0;
        if (local_fc[0] < 6) {
          if ((local_fc[0] & 1) == 0) {
            pNVar23 = (Node *)0x0;
          }
          else {
            pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
            pSVar26 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
            if ((local_fc[0] & 0xfe) == 4) {
              pOVar16 = (Operator *)SimplifiedOperatorBuilder::NumberIsFloat64Hole(pSVar26);
              iVar25 = 1;
            }
            else {
              pOVar16 = (Operator *)SimplifiedOperatorBuilder::ReferenceEqual(pSVar26);
              local_b0 = (Node *)JSGraph::TheHoleConstant(*(JSGraph **)(this + 0x10));
              iVar25 = 2;
            }
            local_b8 = pNVar21;
            pNVar23 = (Node *)Graph::NewNode(pGVar27,pOVar16,iVar25,&local_b8,false);
            pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar16 = (Operator *)
                      CommonOperatorBuilder::Branch
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2,1);
            local_b0 = local_f8;
            local_b8 = pNVar23;
            pNVar24 = (Node *)Graph::NewNode(pGVar27,pOVar16,2,&local_b8,false);
            pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar16 = (Operator *)
                      CommonOperatorBuilder::IfTrue
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
            local_b8 = pNVar24;
            pNVar23 = (Node *)Graph::NewNode(pGVar27,pOVar16,1,&local_b8,false);
            pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar16 = (Operator *)
                      CommonOperatorBuilder::IfFalse
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
            local_b8 = pNVar24;
            local_f8 = (Node *)Graph::NewNode(pGVar27,pOVar16,1,&local_b8,false);
            pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar16 = (Operator *)
                      CommonOperatorBuilder::TypeGuard
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                                 0xc7f7fff);
            local_b0 = local_f0;
            local_a8 = local_f8;
            local_b8 = pNVar21;
            pNVar21 = (Node *)Graph::NewNode(pGVar27,pOVar16,3,&local_b8,false);
            local_f0 = pNVar21;
          }
        }
        else {
          pNVar23 = (Node *)0x0;
        }
        local_128 = pNVar8;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
        }
        local_140 = pNVar10;
        pNStack_138 = pNVar11;
        local_130 = pNVar12;
        local_120 = pNVar17;
        uVar6 = CreateJavaScriptBuiltinContinuationFrameState
                          (*(undefined8 *)(this + 0x10),param_2,0x298,*(undefined8 *)pNVar7,pNVar9,
                           &local_140,5,uVar6,1,pNVar23,pNVar19);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  JSOperatorBuilder::Call
                            ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],5,puVar5 + 1
                             ,pFVar1,2,*puVar5 >> 0x1c & 1,1);
        local_a0 = pNVar8;
        pNStack_80 = local_f0;
        local_78 = local_f8;
        local_b8 = pNVar11;
        local_b0 = pNVar12;
        local_a8 = pNVar21;
        local_98 = pNVar10;
        pNStack_90 = pNVar9;
        local_88 = uVar6;
        pNVar7 = (Node *)Graph::NewNode(pGVar27,pOVar16,9,&local_b8,false);
        local_140 = (Node *)0x0;
        local_f8 = pNVar7;
        local_f0 = pNVar7;
        uVar13 = NodeProperties::IsExceptionalCall(param_1,&local_140);
        if ((uVar13 & 1) != 0) {
          RewirePostCallbackExceptionEdges(this,local_118,local_140,local_f0,&pNStack_110,&local_f8)
          ;
        }
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  SimplifiedOperatorBuilder::ToBoolean
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_b8 = pNVar7;
        pNVar7 = (Node *)Graph::NewNode(pGVar27,pOVar16,1,&local_b8,false);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::Branch
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,1);
        local_b0 = local_f8;
        local_b8 = pNVar7;
        pNVar8 = (Node *)Graph::NewNode(pGVar27,pOVar16,2,&local_b8,false);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::IfFalse
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar8;
        uVar6 = Graph::NewNode(pGVar27,pOVar16,1,&local_b8,false);
        pNVar7 = local_f0;
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::IfTrue
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar8;
        this_00 = (JSCallReducer *)Graph::NewNode(pGVar27,pOVar16,1,&local_b8,false);
        pNVar8 = local_f0;
        pNVar9 = (Node *)this_00;
        local_f8 = (Node *)this_00;
        if ((local_fc[0] < 6) && ((local_fc[0] & 1) != 0)) {
          pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
          local_f8 = pNVar23;
          local_f0 = pNVar19;
          pOVar16 = (Operator *)
                    CommonOperatorBuilder::Merge
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
          local_b8 = local_f8;
          local_b0 = (Node *)this_00;
          pNVar9 = (Node *)Graph::NewNode(pGVar27,pOVar16,2,&local_b8,false);
          pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
          local_f8 = pNVar9;
          pOVar16 = (Operator *)
                    CommonOperatorBuilder::EffectPhi
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
          local_b8 = local_f0;
          local_b0 = pNVar8;
          local_a8 = pNVar9;
          this_00 = (JSCallReducer *)Graph::NewNode(pGVar27,pOVar16,3,&local_b8,false);
          local_f0 = (Node *)this_00;
        }
        WireInLoopEnd(this_00,pNVar15,pNVar3,pNVar18,pNVar22,pNVar9,local_f0);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::Merge
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
        local_b8 = pNVar20;
        local_b0 = (Node *)uVar6;
        local_f8 = (Node *)Graph::NewNode(pGVar27,pOVar16,2,&local_b8,false);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::EffectPhi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
        local_b8 = pNVar3;
        local_b0 = pNVar7;
        local_a8 = local_f8;
        local_f0 = (Node *)Graph::NewNode(pGVar27,pOVar16,3,&local_b8,false);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::Phi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
        pNVar7 = (Node *)JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
        local_b0 = (Node *)JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
        local_a8 = local_f8;
        local_b8 = pNVar7;
        pNVar7 = (Node *)Graph::NewNode(pGVar27,pOVar16,3,&local_b8,false);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::LoopExit
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = local_f8;
        local_b0 = pNVar15;
        pNVar8 = (Node *)Graph::NewNode(pGVar27,pOVar16,2,&local_b8,false);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        local_f8 = pNVar8;
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::LoopExitEffect
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = local_f0;
        local_b0 = pNVar8;
        local_f0 = (Node *)Graph::NewNode(pGVar27,pOVar16,2,&local_b8,false);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::LoopExitValue
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar7;
        local_b0 = pNVar8;
        uVar6 = Graph::NewNode(pGVar27,pOVar16,2,&local_b8,false);
        pGVar27 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar16 = (Operator *)
                  CommonOperatorBuilder::Throw
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = local_118;
        local_b0 = pNStack_110;
        pNVar7 = (Node *)Graph::NewNode(pGVar27,pOVar16,2,&local_b8,false);
        NodeProperties::MergeControlToEnd
                  ((Graph *)**(undefined8 **)(this + 0x10),
                   (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar7);
        (**(code **)(**(long **)(this + 8) + 0x20))
                  (*(long **)(this + 8),param_1,uVar6,local_f0,pNVar8);
      }
    }
    MapInference::~MapInference(aMStack_e8);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

