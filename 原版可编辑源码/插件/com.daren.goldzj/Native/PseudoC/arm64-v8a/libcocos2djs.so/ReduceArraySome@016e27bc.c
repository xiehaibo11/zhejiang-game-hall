
/* v8::internal::compiler::JSCallReducer::ReduceArraySome(v8::internal::compiler::Node*,
   v8::internal::compiler::SharedFunctionInfoRef const&) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceArraySome
          (JSCallReducer *this,Node *param_1,SharedFunctionInfoRef *param_2)

{
  FeedbackSource *pFVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  Node *pNVar10;
  Node *pNVar11;
  ulong uVar12;
  undefined8 uVar13;
  Node *pNVar14;
  Operator *pOVar15;
  Node *pNVar16;
  Node *pNVar17;
  Node *pNVar18;
  Node *pNVar19;
  Node *pNVar20;
  Node *pNVar21;
  Node *this_00;
  Node *pNVar22;
  int iVar23;
  SimplifiedOperatorBuilder *pSVar24;
  Use *pUVar25;
  Graph *pGVar26;
  Node *local_1c0;
  Node *local_140;
  Node *pNStack_138;
  Node *local_130;
  Node *local_128;
  Node *pNStack_120;
  Node *local_118;
  Node *local_110;
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
  Node *local_90;
  undefined8 uStack_88;
  Node *local_80;
  Node *pNStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if ((FLAG_turbo_inline_array_builtins == '\0') ||
     (puVar4 = (uint *)CallParametersOf(*(Operator **)param_1),
     (*(byte *)((long)puVar4 + 3) >> 4 & 1) != 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = NodeProperties::GetFrameStateInput(param_1);
    pNVar6 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    local_f0 = pNVar6;
    pNVar7 = (Node *)NodeProperties::GetControlInput(param_1,0);
    local_f8 = pNVar7;
    pNVar8 = (Node *)NodeProperties::GetContextInput(param_1);
    pNVar9 = (Node *)NodeProperties::GetValueInput(param_1,1);
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      pNVar10 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar10 = (Node *)NodeProperties::GetValueInput(param_1,2);
    }
    if (*(int *)(*(long *)param_1 + 0x14) < 4) {
      pNVar11 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar11 = (Node *)NodeProperties::GetValueInput(param_1,3);
    }
    MapInference::MapInference(aMStack_e8,*(JSHeapBroker **)(this + 0x18),pNVar9,pNVar6);
    uVar12 = MapInference::HaveMaps(aMStack_e8);
    if ((uVar12 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar13 = MapInference::GetMaps(aMStack_e8);
      uVar12 = FUN_016e047c(*(undefined8 *)(this + 0x18),uVar13,local_fc);
      if (((uVar12 & 1) == 0) ||
         (uVar12 = CompilationDependencies::DependOnArraySpeciesProtector
                             (*(CompilationDependencies **)(this + 0x30)), (uVar12 & 1) == 0)) {
        uVar5 = MapInference::NoChange(aMStack_e8);
      }
      else {
        if (((local_fc[0] < 6) && ((local_fc[0] & 1) != 0)) &&
           (uVar12 = CompilationDependencies::DependOnNoElementsProtector
                               (*(CompilationDependencies **)(this + 0x30)), (uVar12 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pFVar1 = (FeedbackSource *)(puVar4 + 2);
        uVar3 = MapInference::RelyOnMapsPreferStability
                          (aMStack_e8,*(CompilationDependencies **)(this + 0x30),
                           *(JSGraph **)(this + 0x10),&local_f0,pNVar7,pFVar1);
        pNVar14 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pSVar24 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        local_108 = pNVar14;
        AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_b8,local_fc[0]);
        pOVar15 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar24,(FieldAccess *)&local_b8)
        ;
        pNStack_138 = local_f0;
        local_130 = local_f8;
        local_140 = pNVar9;
        pNVar16 = (Node *)Graph::NewNode(pGVar26,pOVar15,3,&local_140,false);
        local_110 = (Node *)0x0;
        local_118 = (Node *)0x0;
        pNVar6 = param_1 + 0x20;
        pNVar7 = pNVar6;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar7 = (Node *)(*(long *)pNVar6 + 0x10);
        }
        local_f0 = pNVar16;
        local_b8 = pNVar9;
        local_b0 = pNVar10;
        local_a8 = pNVar11;
        local_a0 = pNVar14;
        local_98 = pNVar16;
        pNVar7 = (Node *)CreateJavaScriptBuiltinContinuationFrameState
                                   (*(undefined8 *)(this + 0x10),param_2,0x2cd,*(undefined8 *)pNVar7
                                    ,pNVar8,&local_b8,5,uVar5,1);
        WireInCallbackIsCallableCheck
                  (this,pNVar10,pNVar8,pNVar7,local_f0,&local_f8,&local_110,&local_118);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::Loop
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
        local_b8 = local_f8;
        local_b0 = local_f8;
        pNVar17 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        local_f8 = pNVar17;
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::EffectPhi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
        local_b8 = local_f0;
        local_b0 = local_f0;
        local_a8 = pNVar17;
        pNVar18 = (Node *)Graph::NewNode(pGVar26,pOVar15,3,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        local_f0 = pNVar18;
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::Terminate
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar18;
        local_b0 = pNVar17;
        pNVar7 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,&local_b8,false);
        NodeProperties::MergeControlToEnd
                  ((Graph *)**(undefined8 **)(this + 0x10),
                   (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar7);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::Phi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
        local_b8 = pNVar14;
        local_b0 = pNVar14;
        local_a8 = pNVar17;
        pNVar14 = (Node *)Graph::NewNode(pGVar26,pOVar15,3,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        local_108 = pNVar14;
        pOVar15 = (Operator *)
                  SimplifiedOperatorBuilder::NumberLessThan
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_b8 = pNVar14;
        local_b0 = pNVar16;
        pNVar7 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::Branch
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,1);
        local_b0 = local_f8;
        local_b8 = pNVar7;
        pNVar7 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::IfTrue
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar7;
        pNVar19 = (Node *)Graph::NewNode(pGVar26,pOVar15,1,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::IfFalse
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar7;
        pNVar20 = (Node *)Graph::NewNode(pGVar26,pOVar15,1,&local_b8,false);
        pNVar7 = pNVar6;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar7 = (Node *)(*(long *)pNVar6 + 0x10);
        }
        local_f8 = pNVar19;
        local_b8 = pNVar9;
        local_b0 = pNVar10;
        local_a8 = pNVar11;
        local_a0 = pNVar14;
        local_98 = pNVar16;
        pNVar7 = (Node *)CreateJavaScriptBuiltinContinuationFrameState
                                   (*(undefined8 *)(this + 0x10),param_2,0x2cc,*(undefined8 *)pNVar7
                                    ,pNVar8,&local_b8,5,uVar5,0);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::Checkpoint
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        pNStack_138 = local_f0;
        local_140 = pNVar7;
        local_130 = pNVar19;
        local_f0 = (Node *)Graph::NewNode(pGVar26,pOVar15,3,&local_140,false);
        if ((uVar3 & 1) == 0) {
          MapInference::InsertMapChecks
                    (aMStack_e8,*(JSGraph **)(this + 0x10),&local_f0,pNVar19,pFVar1);
        }
        pNVar21 = (Node *)SafeLoadElement(this,local_fc[0],pNVar9,pNVar19,&local_f0,&local_108,
                                          pFVar1);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  SimplifiedOperatorBuilder::NumberAdd
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        pNVar7 = local_108;
        local_b0 = (Node *)JSGraph::OneConstant(*(JSGraph **)(this + 0x10));
        local_b8 = pNVar7;
        this_00 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,&local_b8,false);
        pNVar19 = local_f0;
        if (local_fc[0] < 6) {
          if ((local_fc[0] & 1) == 0) {
            local_1c0 = (Node *)0x0;
          }
          else {
            pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
            pSVar24 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
            if ((local_fc[0] & 0xfe) == 4) {
              pOVar15 = (Operator *)SimplifiedOperatorBuilder::NumberIsFloat64Hole(pSVar24);
              iVar23 = 1;
            }
            else {
              pOVar15 = (Operator *)SimplifiedOperatorBuilder::ReferenceEqual(pSVar24);
              local_b0 = (Node *)JSGraph::TheHoleConstant(*(JSGraph **)(this + 0x10));
              iVar23 = 2;
            }
            local_b8 = pNVar21;
            pNVar22 = (Node *)Graph::NewNode(pGVar26,pOVar15,iVar23,&local_b8,false);
            pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar15 = (Operator *)
                      CommonOperatorBuilder::Branch
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2,1);
            local_b0 = local_f8;
            local_b8 = pNVar22;
            pNVar22 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,&local_b8,false);
            pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar15 = (Operator *)
                      CommonOperatorBuilder::IfTrue
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
            local_b8 = pNVar22;
            local_1c0 = (Node *)Graph::NewNode(pGVar26,pOVar15,1,&local_b8,false);
            pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar15 = (Operator *)
                      CommonOperatorBuilder::IfFalse
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
            local_b8 = pNVar22;
            local_f8 = (Node *)Graph::NewNode(pGVar26,pOVar15,1,&local_b8,false);
            pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar15 = (Operator *)
                      CommonOperatorBuilder::TypeGuard
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                                 0xc7f7fff);
            local_b0 = local_f0;
            local_a8 = local_f8;
            local_b8 = pNVar21;
            pNVar21 = (Node *)Graph::NewNode(pGVar26,pOVar15,3,&local_b8,false);
            local_f0 = pNVar21;
          }
        }
        else {
          local_1c0 = (Node *)0x0;
        }
        local_128 = pNVar7;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
        }
        local_140 = pNVar9;
        pNStack_138 = pNVar10;
        local_130 = pNVar11;
        pNStack_120 = pNVar16;
        uVar5 = CreateJavaScriptBuiltinContinuationFrameState
                          (*(undefined8 *)(this + 0x10),param_2,0x2cd,*(undefined8 *)pNVar6,pNVar8,
                           &local_140,5,uVar5,1);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  JSOperatorBuilder::Call
                            ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],5,puVar4 + 1
                             ,pFVar1,2,*puVar4 >> 0x1c & 1,1);
        local_a0 = pNVar7;
        local_80 = local_f0;
        pNStack_78 = local_f8;
        local_b8 = pNVar10;
        local_b0 = pNVar11;
        local_a8 = pNVar21;
        local_98 = pNVar9;
        local_90 = pNVar8;
        uStack_88 = uVar5;
        pNVar6 = (Node *)Graph::NewNode(pGVar26,pOVar15,9,&local_b8,false);
        local_140 = (Node *)0x0;
        local_f8 = pNVar6;
        local_f0 = pNVar6;
        uVar12 = NodeProperties::IsExceptionalCall(param_1,&local_140);
        if ((uVar12 & 1) != 0) {
          RewirePostCallbackExceptionEdges(this,local_118,local_140,local_f0,&local_110,&local_f8);
        }
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  SimplifiedOperatorBuilder::ToBoolean
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_b8 = pNVar6;
        pNVar6 = (Node *)Graph::NewNode(pGVar26,pOVar15,1,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::Branch
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2,1);
        local_b0 = local_f8;
        local_b8 = pNVar6;
        pNVar7 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::IfTrue
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar7;
        uVar5 = Graph::NewNode(pGVar26,pOVar15,1,&local_b8,false);
        pNVar6 = local_f0;
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::IfFalse
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar7;
        pNVar8 = (Node *)Graph::NewNode(pGVar26,pOVar15,1,&local_b8,false);
        pNVar7 = local_f0;
        local_f8 = pNVar8;
        if ((local_fc[0] < 6) && ((local_fc[0] & 1) != 0)) {
          local_f8 = local_1c0;
          pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
          local_f0 = pNVar19;
          pOVar15 = (Operator *)
                    CommonOperatorBuilder::Merge
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
          local_b8 = local_f8;
          local_b0 = pNVar8;
          pNVar8 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,&local_b8,false);
          pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
          local_f8 = pNVar8;
          pOVar15 = (Operator *)
                    CommonOperatorBuilder::EffectPhi
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
          local_b8 = local_f0;
          local_b0 = pNVar7;
          local_a8 = pNVar8;
          local_f0 = (Node *)Graph::NewNode(pGVar26,pOVar15,3,&local_b8,false);
        }
        pNVar7 = pNVar17 + 0x20;
        pNVar9 = pNVar7;
        if ((*(uint *)(pNVar17 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar9 = (Node *)(*(long *)pNVar7 + 0x10);
        }
        pNVar10 = *(Node **)(pNVar9 + 8);
        if (pNVar10 != pNVar8) {
          if ((*(uint *)(pNVar17 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar25 = (Use *)(*(long *)pNVar7 + -0x30);
          }
          else {
            pUVar25 = (Use *)(pNVar17 + -0x30);
          }
          if (pNVar10 != (Node *)0x0) {
            Node::RemoveUse(pNVar10,pUVar25);
          }
          *(Node **)(pNVar9 + 8) = pNVar8;
          if (pNVar8 != (Node *)0x0) {
            Node::AppendUse(pNVar8,pUVar25);
          }
        }
        pNVar7 = pNVar14 + 0x20;
        pNVar8 = pNVar7;
        if ((*(uint *)(pNVar14 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar8 = (Node *)(*(long *)pNVar7 + 0x10);
        }
        pNVar9 = *(Node **)(pNVar8 + 8);
        if (pNVar9 != this_00) {
          if ((*(uint *)(pNVar14 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar14 = *(Node **)pNVar7;
          }
          if (pNVar9 != (Node *)0x0) {
            Node::RemoveUse(pNVar9,(Use *)(pNVar14 + -0x30));
          }
          *(Node **)(pNVar8 + 8) = this_00;
          if (this_00 != (Node *)0x0) {
            Node::AppendUse(this_00,(Use *)(pNVar14 + -0x30));
          }
        }
        pNVar9 = local_f0;
        pNVar7 = pNVar18 + 0x20;
        pNVar8 = pNVar7;
        if ((*(uint *)(pNVar18 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar8 = (Node *)(*(long *)pNVar7 + 0x10);
        }
        pNVar10 = *(Node **)(pNVar8 + 8);
        if (pNVar10 != local_f0) {
          if ((*(uint *)(pNVar18 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar25 = (Use *)(*(long *)pNVar7 + -0x30);
          }
          else {
            pUVar25 = (Use *)(pNVar18 + -0x30);
          }
          if (pNVar10 != (Node *)0x0) {
            Node::RemoveUse(pNVar10,pUVar25);
          }
          *(Node **)(pNVar8 + 8) = pNVar9;
          if (pNVar9 != (Node *)0x0) {
            Node::AppendUse(pNVar9,pUVar25);
          }
        }
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::Merge
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
        local_b8 = pNVar20;
        local_b0 = (Node *)uVar5;
        local_f8 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::EffectPhi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
        local_b0 = pNVar6;
        local_a8 = local_f8;
        local_b8 = pNVar18;
        local_f0 = (Node *)Graph::NewNode(pGVar26,pOVar15,3,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::Phi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
        pNVar6 = (Node *)JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
        local_b0 = (Node *)JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
        local_a8 = local_f8;
        local_b8 = pNVar6;
        pNVar6 = (Node *)Graph::NewNode(pGVar26,pOVar15,3,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::LoopExit
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = local_f8;
        local_b0 = pNVar17;
        pNVar7 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        local_f8 = pNVar7;
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::LoopExitEffect
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = local_f0;
        local_b0 = pNVar7;
        local_f0 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::LoopExitValue
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar6;
        local_b0 = pNVar7;
        uVar5 = Graph::NewNode(pGVar26,pOVar15,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar15 = (Operator *)
                  CommonOperatorBuilder::Throw
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = local_118;
        local_b0 = local_110;
        pNVar6 = (Node *)Graph::NewNode(pGVar26,pOVar15,2,&local_b8,false);
        NodeProperties::MergeControlToEnd
                  ((Graph *)**(undefined8 **)(this + 0x10),
                   (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar6);
        (**(code **)(**(long **)(this + 8) + 0x20))
                  (*(long **)(this + 8),param_1,uVar5,local_f0,pNVar7);
      }
    }
    MapInference::~MapInference(aMStack_e8);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

