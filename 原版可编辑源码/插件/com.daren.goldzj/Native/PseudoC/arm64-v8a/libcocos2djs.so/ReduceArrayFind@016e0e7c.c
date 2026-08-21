
/* v8::internal::compiler::JSCallReducer::ReduceArrayFind(v8::internal::compiler::Node*,
   v8::internal::compiler::JSCallReducer::ArrayFindVariant,
   v8::internal::compiler::SharedFunctionInfoRef const&) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayFind
          (JSCallReducer *this,Node *param_1,int param_3,undefined8 param_4)

{
  FeedbackSource *pFVar1;
  Node *pNVar2;
  long lVar3;
  Node *pNVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  Node *pNVar9;
  Node *pNVar10;
  Node *pNVar11;
  Node *pNVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  Node *pNVar16;
  Operator *pOVar17;
  Node *pNVar18;
  Node *pNVar19;
  Node *pNVar20;
  Node *pNVar21;
  Node *pNVar22;
  JSCallReducer *this_00;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  Graph *pGVar26;
  SimplifiedOperatorBuilder *this_01;
  Node *local_170;
  Node *pNStack_168;
  Node *local_160;
  Node *local_158;
  Node *local_150;
  Node *local_148;
  Node *local_140;
  Node *pNStack_138;
  Node *local_130;
  Node *pNStack_128;
  undefined8 local_120;
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
  Node *pNStack_98;
  Node *local_90;
  undefined8 uStack_88;
  Node *local_80;
  Node *pNStack_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if ((FLAG_turbo_inline_array_builtins == '\0') ||
     (puVar7 = (uint *)CallParametersOf(*(Operator **)param_1),
     (*(byte *)((long)puVar7 + 3) >> 4 & 1) != 0)) {
    uVar8 = 0;
  }
  else {
    bVar5 = param_3 != 0;
    uVar23 = 0x2a1;
    if (bVar5) {
      uVar23 = 0x2a6;
    }
    uVar24 = 0x2a0;
    if (bVar5) {
      uVar24 = 0x2a5;
    }
    uVar25 = 0x29f;
    if (bVar5) {
      uVar25 = 0x2a4;
    }
    uVar8 = NodeProperties::GetFrameStateInput(param_1);
    pNVar9 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    local_f0 = pNVar9;
    local_f8 = (Node *)NodeProperties::GetControlInput(param_1,0);
    pNVar10 = (Node *)NodeProperties::GetContextInput(param_1);
    pNVar11 = (Node *)NodeProperties::GetValueInput(param_1,1);
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      pNVar12 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar12 = (Node *)NodeProperties::GetValueInput(param_1,2);
    }
    if (*(int *)(*(long *)param_1 + 0x14) < 4) {
      uVar13 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      uVar13 = NodeProperties::GetValueInput(param_1,3);
    }
    MapInference::MapInference(aMStack_e8,*(JSHeapBroker **)(this + 0x18),pNVar11,pNVar9);
    uVar14 = MapInference::HaveMaps(aMStack_e8);
    if ((uVar14 & 1) == 0) {
      uVar8 = 0;
    }
    else {
      uVar15 = MapInference::GetMaps(aMStack_e8);
      uVar14 = FUN_016e047c(*(undefined8 *)(this + 0x18),uVar15,local_fc);
      if ((uVar14 & 1) == 0) {
        uVar8 = MapInference::NoChange(aMStack_e8);
      }
      else {
        uVar14 = CompilationDependencies::DependOnNoElementsProtector
                           (*(CompilationDependencies **)(this + 0x30));
        if ((uVar14 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pFVar1 = (FeedbackSource *)(puVar7 + 2);
        uVar6 = MapInference::RelyOnMapsPreferStability
                          (aMStack_e8,*(CompilationDependencies **)(this + 0x30),
                           *(JSGraph **)(this + 0x10),&local_f0,local_f8,pFVar1);
        pNVar16 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        local_108 = pNVar16;
        AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_b8,local_fc[0]);
        pOVar17 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_01,(FieldAccess *)&local_b8)
        ;
        pNStack_168 = local_f0;
        local_160 = local_f8;
        local_170 = pNVar11;
        pNVar18 = (Node *)Graph::NewNode(pGVar26,pOVar17,3,&local_170,false);
        local_140 = (Node *)0x0;
        pNStack_138 = (Node *)0x0;
        pNVar9 = param_1 + 0x20;
        pNVar19 = pNVar9;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar19 = (Node *)(*(long *)pNVar9 + 0x10);
        }
        local_130 = pNVar11;
        pNStack_128 = pNVar12;
        local_120 = uVar13;
        local_118 = pNVar16;
        local_110 = pNVar18;
        local_f0 = pNVar18;
        pNVar19 = (Node *)CreateJavaScriptBuiltinContinuationFrameState
                                    (*(undefined8 *)(this + 0x10),param_4,uVar24,
                                     *(undefined8 *)pNVar19,pNVar10,&local_130,5,uVar8,1);
        WireInCallbackIsCallableCheck
                  (this,pNVar12,pNVar10,pNVar19,local_f0,&local_f8,&pNStack_138,&local_140);
        pNVar20 = (Node *)WireInLoopStart(this,pNVar16,&local_f8,&local_f0);
        pNVar4 = local_f0;
        pNVar16 = local_f8;
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        local_118 = pNVar20;
        local_108 = pNVar20;
        pOVar17 = (Operator *)
                  SimplifiedOperatorBuilder::NumberLessThan
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_b8 = pNVar20;
        local_b0 = pNVar18;
        pNVar19 = (Node *)Graph::NewNode(pGVar26,pOVar17,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::Branch
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,1);
        local_b0 = local_f8;
        local_b8 = pNVar19;
        pNVar19 = (Node *)Graph::NewNode(pGVar26,pOVar17,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::IfTrue
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar19;
        local_f8 = (Node *)Graph::NewNode(pGVar26,pOVar17,1,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::IfFalse
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar19;
        uVar15 = Graph::NewNode(pGVar26,pOVar17,1,&local_b8,false);
        pNVar19 = pNVar9;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar19 = (Node *)(*(long *)pNVar9 + 0x10);
        }
        pNVar19 = (Node *)CreateJavaScriptBuiltinContinuationFrameState
                                    (*(undefined8 *)(this + 0x10),param_4,uVar25,
                                     *(undefined8 *)pNVar19,pNVar10,&local_130,5,uVar8,0);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::Checkpoint
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b0 = local_f0;
        local_a8 = local_f8;
        local_b8 = pNVar19;
        local_f0 = (Node *)Graph::NewNode(pGVar26,pOVar17,3,&local_b8,false);
        if ((uVar6 & 1) == 0) {
          MapInference::InsertMapChecks
                    (aMStack_e8,*(JSGraph **)(this + 0x10),&local_f0,local_f8,pFVar1);
        }
        pNVar21 = (Node *)SafeLoadElement(this,local_fc[0],pNVar11,local_f8,&local_f0,&local_108,
                                          pFVar1);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  SimplifiedOperatorBuilder::NumberAdd
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        pNVar19 = local_108;
        local_b0 = (Node *)JSGraph::OneConstant(*(JSGraph **)(this + 0x10));
        local_b8 = pNVar19;
        pNVar22 = (Node *)Graph::NewNode(pGVar26,pOVar17,2,&local_b8,false);
        local_118 = pNVar22;
        if (local_fc[0] == 5) {
          pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar17 = (Operator *)
                    SimplifiedOperatorBuilder::CheckFloat64Hole
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],1,
                               pFVar1);
          local_b0 = local_f0;
          local_a8 = local_f8;
          local_b8 = pNVar21;
          pNVar21 = (Node *)Graph::NewNode(pGVar26,pOVar17,3,&local_b8,false);
          local_f0 = pNVar21;
        }
        else if ((local_fc[0] < 6) && ((local_fc[0] & 1) != 0)) {
          pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar17 = (Operator *)
                    SimplifiedOperatorBuilder::ConvertTaggedHoleToUndefined
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
          local_b8 = pNVar21;
          pNVar21 = (Node *)Graph::NewNode(pGVar26,pOVar17,1,&local_b8,false);
        }
        pNVar2 = pNVar21;
        if (param_3 != 0) {
          pNVar2 = pNVar19;
        }
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
        }
        local_170 = pNVar11;
        pNStack_168 = pNVar12;
        local_160 = (Node *)uVar13;
        local_158 = pNVar22;
        local_150 = pNVar18;
        local_148 = pNVar2;
        uVar8 = CreateJavaScriptBuiltinContinuationFrameState
                          (*(undefined8 *)(this + 0x10),param_4,uVar23,*(undefined8 *)pNVar9,pNVar10
                           ,&local_170,6,uVar8,1);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  JSOperatorBuilder::Call
                            ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],5,puVar7 + 1
                             ,pFVar1,2,*puVar7 >> 0x1c & 1,1);
        local_80 = local_f0;
        pNStack_78 = local_f8;
        local_a0 = pNVar19;
        local_b8 = pNVar12;
        local_b0 = (Node *)uVar13;
        local_a8 = pNVar21;
        pNStack_98 = pNVar11;
        local_90 = pNVar10;
        uStack_88 = uVar8;
        pNVar9 = (Node *)Graph::NewNode(pGVar26,pOVar17,9,&local_b8,false);
        local_170 = (Node *)0x0;
        local_f8 = pNVar9;
        local_f0 = pNVar9;
        uVar14 = NodeProperties::IsExceptionalCall(param_1,&local_170);
        if ((uVar14 & 1) != 0) {
          RewirePostCallbackExceptionEdges(this,local_140,local_170,local_f0,&pNStack_138,&local_f8)
          ;
        }
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  SimplifiedOperatorBuilder::ToBoolean
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_b8 = pNVar9;
        pNVar10 = (Node *)Graph::NewNode(pGVar26,pOVar17,1,&local_b8,false);
        pNVar9 = local_f0;
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::Branch
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2,1);
        local_b0 = local_f8;
        local_b8 = pNVar10;
        pNVar10 = (Node *)Graph::NewNode(pGVar26,pOVar17,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::IfTrue
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar10;
        pNVar11 = (Node *)Graph::NewNode(pGVar26,pOVar17,1,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::IfFalse
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar10;
        this_00 = (JSCallReducer *)Graph::NewNode(pGVar26,pOVar17,1,&local_b8,false);
        WireInLoopEnd(this_00,pNVar16,pNVar4,pNVar20,pNVar22,(Node *)this_00,local_f0);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::Merge
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
        local_b8 = pNVar11;
        local_b0 = (Node *)uVar15;
        pNVar10 = (Node *)Graph::NewNode(pGVar26,pOVar17,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        local_f8 = pNVar10;
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::EffectPhi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
        local_b8 = pNVar9;
        local_b0 = pNVar4;
        local_a8 = pNVar10;
        local_f0 = (Node *)Graph::NewNode(pGVar26,pOVar17,3,&local_b8,false);
        if (param_3 == 0) {
          uVar8 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
        }
        else {
          uVar8 = JSGraph::MinusOneConstant(*(JSGraph **)(this + 0x10));
        }
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::Phi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
        local_b8 = pNVar2;
        local_b0 = (Node *)uVar8;
        local_a8 = pNVar10;
        pNVar9 = (Node *)Graph::NewNode(pGVar26,pOVar17,3,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::LoopExit
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b0 = pNVar16;
        local_b8 = pNVar10;
        pNVar10 = (Node *)Graph::NewNode(pGVar26,pOVar17,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        local_f8 = pNVar10;
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::LoopExitEffect
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = local_f0;
        local_b0 = pNVar10;
        local_f0 = (Node *)Graph::NewNode(pGVar26,pOVar17,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::LoopExitValue
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = pNVar9;
        local_b0 = pNVar10;
        uVar8 = Graph::NewNode(pGVar26,pOVar17,2,&local_b8,false);
        pGVar26 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar17 = (Operator *)
                  CommonOperatorBuilder::Throw
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b8 = local_140;
        local_b0 = pNStack_138;
        pNVar9 = (Node *)Graph::NewNode(pGVar26,pOVar17,2,&local_b8,false);
        NodeProperties::MergeControlToEnd
                  ((Graph *)**(undefined8 **)(this + 0x10),
                   (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar9);
        (**(code **)(**(long **)(this + 8) + 0x20))
                  (*(long **)(this + 8),param_1,uVar8,local_f0,pNVar10);
      }
    }
    MapInference::~MapInference(aMStack_e8);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

