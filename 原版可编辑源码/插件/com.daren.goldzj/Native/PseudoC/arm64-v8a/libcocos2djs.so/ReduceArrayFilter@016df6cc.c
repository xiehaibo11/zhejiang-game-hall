
/* v8::internal::compiler::JSCallReducer::ReduceArrayFilter(v8::internal::compiler::Node*,
   v8::internal::compiler::SharedFunctionInfoRef const&) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayFilter
          (JSCallReducer *this,Node *param_1,SharedFunctionInfoRef *param_2)

{
  FeedbackSource *pFVar1;
  long lVar2;
  Node *pNVar3;
  Node *pNVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  Node *pNVar9;
  Node *pNVar10;
  Node *pNVar11;
  Node *pNVar12;
  Node *pNVar13;
  Node *pNVar14;
  ulong uVar15;
  undefined8 uVar16;
  Node *pNVar17;
  Operator *pOVar18;
  AccessBuilder *this_00;
  AccessBuilder *this_01;
  AccessBuilder *this_02;
  undefined8 uVar19;
  Node *pNVar20;
  Node *pNVar21;
  Node *pNVar22;
  Node *pNVar23;
  Node *pNVar24;
  Node *pNVar25;
  Node *pNVar26;
  Node *pNVar27;
  JSCallReducer *this_03;
  undefined8 uVar28;
  JSCallReducer *pJVar29;
  long lVar30;
  Node *pNVar31;
  byte bVar32;
  Graph *pGVar33;
  SimplifiedOperatorBuilder *pSVar34;
  uint uVar35;
  JSGraph *this_04;
  Node *local_178;
  AccessBuilder *local_170;
  AccessBuilder *local_168;
  AccessBuilder *local_160;
  Node *pNStack_158;
  Node *local_150;
  Node *pNStack_148;
  Node *local_140;
  Node *pNStack_138;
  Node *local_130;
  Node *pNStack_128;
  Node *local_120;
  undefined1 local_118 [16];
  byte local_104 [4];
  Node *local_100;
  Node *local_f8;
  MapInference aMStack_f0 [48];
  Node *local_c0;
  Node *pNStack_b8;
  Node *local_b0;
  Node *local_a8;
  Node *local_a0;
  Node *local_98;
  Node *local_90;
  Node *local_88;
  Node *local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if ((FLAG_turbo_inline_array_builtins == '\0') ||
     (puVar7 = (uint *)CallParametersOf(*(Operator **)param_1),
     (*(byte *)((long)puVar7 + 3) >> 4 & 1) != 0)) {
    pNVar9 = (Node *)0x0;
  }
  else {
    uVar8 = NodeProperties::GetFrameStateInput(param_1);
    pNVar9 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    local_f8 = pNVar9;
    pNVar10 = (Node *)NodeProperties::GetControlInput(param_1,0);
    local_100 = pNVar10;
    pNVar11 = (Node *)NodeProperties::GetContextInput(param_1);
    pNVar12 = (Node *)NodeProperties::GetValueInput(param_1,1);
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      pNVar13 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar13 = (Node *)NodeProperties::GetValueInput(param_1,2);
    }
    if (*(int *)(*(long *)param_1 + 0x14) < 4) {
      pNVar14 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      pNVar14 = (Node *)NodeProperties::GetValueInput(param_1,3);
    }
    MapInference::MapInference(aMStack_f0,*(JSHeapBroker **)(this + 0x18),pNVar12,pNVar9);
    uVar15 = MapInference::HaveMaps(aMStack_f0);
    if ((uVar15 & 1) == 0) {
      pNVar9 = (Node *)0x0;
    }
    else {
      uVar16 = MapInference::GetMaps(aMStack_f0);
      uVar15 = FUN_016e047c(*(undefined8 *)(this + 0x18),uVar16,local_104);
      if (((uVar15 & 1) == 0) ||
         (uVar15 = CompilationDependencies::DependOnArraySpeciesProtector
                             (*(CompilationDependencies **)(this + 0x30)), (uVar15 & 1) == 0)) {
        pNVar9 = (Node *)MapInference::NoChange(aMStack_f0);
      }
      else {
        if (((local_104[0] < 6) && ((local_104[0] & 1) != 0)) &&
           (uVar15 = CompilationDependencies::DependOnNoElementsProtector
                               (*(CompilationDependencies **)(this + 0x30)), (uVar15 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pJVar29 = this + 0x10;
        pFVar1 = (FeedbackSource *)(puVar7 + 2);
        uVar5 = MapInference::RelyOnMapsPreferStability
                          (aMStack_f0,*(CompilationDependencies **)(this + 0x30),
                           *(JSGraph **)pJVar29,&local_f8,pNVar10,pFVar1);
        if (local_104[0] == 1) {
          bVar32 = 0;
        }
        else if (local_104[0] == 3) {
          bVar32 = 2;
        }
        else {
          bVar32 = local_104[0];
          if (local_104[0] == 5) {
            bVar32 = 4;
          }
        }
        lVar30 = *(long *)(this + 0x18);
        if (*(char *)(lVar30 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","storage_.is_populated_");
        }
        pNStack_b8 = *(Node **)(lVar30 + 0x28);
        local_c0 = *(Node **)(lVar30 + 0x20);
        local_118 = NativeContextRef::GetInitialJSArrayMap((NativeContextRef *)&local_c0,bVar32);
        local_120 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)pJVar29);
        pNVar17 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)pJVar29);
        pNVar10 = local_f8;
        pNVar9 = local_100;
        this_04 = *(JSGraph **)pJVar29;
        iVar6 = MapRef::instance_size((MapRef *)local_118);
        pGVar33 = *(Graph **)this_04;
        pOVar18 = (Operator *)
                  CommonOperatorBuilder::BeginRegion(*(CommonOperatorBuilder **)(this_04 + 8),1);
        local_c0 = pNVar10;
        uVar16 = Graph::NewNode(pGVar33,pOVar18,1,&local_c0,false);
        pGVar33 = *(Graph **)this_04;
        pOVar18 = (Operator *)
                  SimplifiedOperatorBuilder::Allocate
                            (*(SimplifiedOperatorBuilder **)(this_04 + 0x178),0x4000001,0);
        local_c0 = (Node *)JSGraph::Constant(this_04,(double)iVar6);
        local_b0 = pNVar9;
        pNStack_b8 = (Node *)uVar16;
        this_00 = (AccessBuilder *)Graph::NewNode(pGVar33,pOVar18,3,&local_c0,false);
        AccessBuilder::ForMap(this_00);
        uVar16 = JSGraph::Constant(this_04,(ObjectRef *)local_118);
        pGVar33 = *(Graph **)this_04;
        pOVar18 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(this_04 + 0x178),
                             (FieldAccess *)&local_c0);
        pNStack_158 = pNVar9;
        local_170 = this_00;
        local_168 = (AccessBuilder *)uVar16;
        local_160 = this_00;
        uVar16 = Graph::NewNode(pGVar33,pOVar18,4,(Node **)&local_170,false);
        this_01 = (AccessBuilder *)JSGraph::EmptyFixedArrayConstant(*(JSGraph **)pJVar29);
        AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(this_01);
        pGVar33 = *(Graph **)this_04;
        pOVar18 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(this_04 + 0x178),
                             (FieldAccess *)&local_c0);
        pNStack_158 = pNVar9;
        local_170 = this_00;
        local_168 = this_01;
        local_160 = (AccessBuilder *)uVar16;
        this_02 = (AccessBuilder *)Graph::NewNode(pGVar33,pOVar18,4,(Node **)&local_170,false);
        AccessBuilder::ForJSObjectElements(this_02);
        pGVar33 = *(Graph **)this_04;
        pOVar18 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(this_04 + 0x178),
                             (FieldAccess *)&local_c0);
        pNStack_158 = pNVar9;
        local_170 = this_00;
        local_168 = this_01;
        local_160 = this_02;
        uVar16 = Graph::NewNode(pGVar33,pOVar18,4,(Node **)&local_170,false);
        AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_c0,bVar32);
        uVar19 = JSGraph::ZeroConstant(*(JSGraph **)pJVar29);
        pGVar33 = *(Graph **)this_04;
        pOVar18 = (Operator *)
                  SimplifiedOperatorBuilder::StoreField
                            (*(SimplifiedOperatorBuilder **)(this_04 + 0x178),
                             (FieldAccess *)&local_c0);
        uVar28 = 4;
        pNStack_158 = pNVar9;
        local_170 = this_00;
        local_168 = (AccessBuilder *)uVar19;
        local_160 = (AccessBuilder *)uVar16;
        uVar16 = Graph::NewNode(pGVar33,pOVar18,4,(Node **)&local_170,false);
        iVar6 = MapRef::GetInObjectProperties((MapRef *)local_118);
        if (0 < iVar6) {
          uVar35 = 0;
          do {
            AccessBuilder::ForJSObjectInObjectProperty
                      ((AccessBuilder *)local_118,(MapRef *)(ulong)uVar35,(int)uVar28);
            uVar19 = JSGraph::UndefinedConstant(*(JSGraph **)pJVar29);
            pGVar33 = *(Graph **)this_04;
            pOVar18 = (Operator *)
                      SimplifiedOperatorBuilder::StoreField
                                (*(SimplifiedOperatorBuilder **)(this_04 + 0x178),
                                 (FieldAccess *)&local_c0);
            uVar28 = 4;
            pNStack_158 = pNVar9;
            local_170 = this_00;
            local_168 = (AccessBuilder *)uVar19;
            local_160 = (AccessBuilder *)uVar16;
            uVar16 = Graph::NewNode(pGVar33,pOVar18,4,(Node **)&local_170,false);
            uVar35 = uVar35 + 1;
            iVar6 = MapRef::GetInObjectProperties((MapRef *)local_118);
          } while ((int)uVar35 < iVar6);
        }
        pGVar33 = *(Graph **)this_04;
        pOVar18 = (Operator *)
                  CommonOperatorBuilder::FinishRegion(*(CommonOperatorBuilder **)(this_04 + 8));
        local_c0 = (Node *)this_00;
        pNStack_b8 = (Node *)uVar16;
        pNVar9 = (Node *)Graph::NewNode(pGVar33,pOVar18,2,&local_c0,false);
        pGVar33 = (Graph *)**(undefined8 **)pJVar29;
        pSVar34 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar29)[0x2f];
        local_f8 = pNVar9;
        AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_c0,local_104[0]);
        pOVar18 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar34,(FieldAccess *)&local_c0)
        ;
        local_168 = (AccessBuilder *)local_f8;
        local_160 = (AccessBuilder *)local_100;
        local_170 = (AccessBuilder *)pNVar12;
        pNVar20 = (Node *)Graph::NewNode(pGVar33,pOVar18,3,(Node **)&local_170,false);
        pNVar3 = local_120;
        local_130 = (Node *)0x0;
        pNStack_128 = (Node *)0x0;
        local_a0 = local_120;
        pNVar31 = param_1 + 0x20;
        pNVar10 = pNVar31;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar10 = (Node *)(*(long *)pNVar31 + 0x10);
        }
        local_f8 = pNVar20;
        local_c0 = pNVar12;
        pNStack_b8 = pNVar13;
        local_b0 = pNVar14;
        local_a8 = pNVar9;
        local_98 = pNVar20;
        local_90 = pNVar17;
        local_88 = pNVar17;
        pNVar10 = (Node *)CreateJavaScriptBuiltinContinuationFrameState
                                    (*(undefined8 *)pJVar29,param_2,0x29c,*(undefined8 *)pNVar10,
                                     pNVar11,&local_c0,8,uVar8,1);
        WireInCallbackIsCallableCheck
                  (this,pNVar13,pNVar11,pNVar10,local_f8,&local_100,&pNStack_128,&local_130);
        pNVar21 = (Node *)WireInLoopStart(this,pNVar3,&local_100,&local_f8);
        pNVar4 = local_f8;
        pNVar3 = local_100;
        pGVar33 = (Graph *)**(undefined8 **)(this + 0x10);
        local_120 = pNVar21;
        pOVar18 = (Operator *)
                  CommonOperatorBuilder::Phi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],6,2);
        local_b0 = pNVar3;
        local_c0 = pNVar17;
        pNStack_b8 = pNVar17;
        pNVar17 = (Node *)Graph::NewNode(pGVar33,pOVar18,3,&local_c0,false);
        pGVar33 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar18 = (Operator *)
                  SimplifiedOperatorBuilder::NumberLessThan
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_c0 = pNVar21;
        pNStack_b8 = pNVar20;
        pNVar10 = (Node *)Graph::NewNode(pGVar33,pOVar18,2,&local_c0,false);
        pGVar33 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar18 = (Operator *)
                  CommonOperatorBuilder::Branch
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],0,1);
        pNStack_b8 = local_100;
        local_c0 = pNVar10;
        pNVar10 = (Node *)Graph::NewNode(pGVar33,pOVar18,2,&local_c0,false);
        pGVar33 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar18 = (Operator *)
                  CommonOperatorBuilder::IfTrue
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_c0 = pNVar10;
        pNVar22 = (Node *)Graph::NewNode(pGVar33,pOVar18,1,&local_c0,false);
        pGVar33 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar18 = (Operator *)
                  CommonOperatorBuilder::IfFalse
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_c0 = pNVar10;
        pNVar23 = (Node *)Graph::NewNode(pGVar33,pOVar18,1,&local_c0,false);
        pNVar10 = pNVar31;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar10 = (Node *)(*(long *)pNVar31 + 0x10);
        }
        local_100 = pNVar22;
        local_c0 = pNVar12;
        pNStack_b8 = pNVar13;
        local_b0 = pNVar14;
        local_a8 = pNVar9;
        local_a0 = pNVar21;
        local_98 = pNVar20;
        local_90 = pNVar17;
        pNVar10 = (Node *)CreateJavaScriptBuiltinContinuationFrameState
                                    (*(undefined8 *)(this + 0x10),param_2,0x29b,
                                     *(undefined8 *)pNVar10,pNVar11,&local_c0,7,uVar8,0);
        pGVar33 = (Graph *)**(undefined8 **)pJVar29;
        pOVar18 = (Operator *)
                  CommonOperatorBuilder::Checkpoint
                            ((CommonOperatorBuilder *)(*(undefined8 **)pJVar29)[1]);
        local_168 = (AccessBuilder *)local_f8;
        local_170 = (AccessBuilder *)pNVar10;
        local_160 = (AccessBuilder *)pNVar22;
        local_f8 = (Node *)Graph::NewNode(pGVar33,pOVar18,3,(Node **)&local_170,false);
        if ((uVar5 & 1) == 0) {
          MapInference::InsertMapChecks(aMStack_f0,*(JSGraph **)pJVar29,&local_f8,pNVar22,pFVar1);
        }
        pNVar24 = (Node *)SafeLoadElement(this,local_104[0],pNVar12,pNVar22,&local_f8,&local_120,
                                          pFVar1);
        pGVar33 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar18 = (Operator *)
                  SimplifiedOperatorBuilder::NumberAdd
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        pNVar10 = local_120;
        pNStack_b8 = (Node *)JSGraph::OneConstant(*(JSGraph **)(this + 0x10));
        local_c0 = pNVar10;
        pNVar25 = (Node *)Graph::NewNode(pGVar33,pOVar18,2,&local_c0,false);
        pNVar22 = local_f8;
        if (local_104[0] < 6) {
          if ((local_104[0] & 1) == 0) {
            pNVar26 = (Node *)0x0;
          }
          else {
            pGVar33 = (Graph *)**(undefined8 **)pJVar29;
            pSVar34 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar29)[0x2f];
            if ((local_104[0] & 0xfe) == 4) {
              pOVar18 = (Operator *)SimplifiedOperatorBuilder::NumberIsFloat64Hole(pSVar34);
              iVar6 = 1;
            }
            else {
              pOVar18 = (Operator *)SimplifiedOperatorBuilder::ReferenceEqual(pSVar34);
              pNStack_b8 = (Node *)JSGraph::TheHoleConstant(*(JSGraph **)pJVar29);
              iVar6 = 2;
            }
            local_c0 = pNVar24;
            pNVar26 = (Node *)Graph::NewNode(pGVar33,pOVar18,iVar6,&local_c0,false);
            pGVar33 = (Graph *)**(undefined8 **)pJVar29;
            pOVar18 = (Operator *)
                      CommonOperatorBuilder::Branch
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar29)[1],2,1);
            pNStack_b8 = local_100;
            local_c0 = pNVar26;
            pNVar27 = (Node *)Graph::NewNode(pGVar33,pOVar18,2,&local_c0,false);
            pGVar33 = (Graph *)**(undefined8 **)pJVar29;
            pOVar18 = (Operator *)
                      CommonOperatorBuilder::IfTrue
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar29)[1]);
            local_c0 = pNVar27;
            pNVar26 = (Node *)Graph::NewNode(pGVar33,pOVar18,1,&local_c0,false);
            pGVar33 = (Graph *)**(undefined8 **)pJVar29;
            pOVar18 = (Operator *)
                      CommonOperatorBuilder::IfFalse
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar29)[1]);
            local_c0 = pNVar27;
            local_100 = (Node *)Graph::NewNode(pGVar33,pOVar18,1,&local_c0,false);
            pGVar33 = (Graph *)**(undefined8 **)pJVar29;
            pOVar18 = (Operator *)
                      CommonOperatorBuilder::TypeGuard
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar29)[1],0xc7f7fff);
            pNStack_b8 = local_f8;
            local_b0 = local_100;
            local_c0 = pNVar24;
            pNVar24 = (Node *)Graph::NewNode(pGVar33,pOVar18,3,&local_c0,false);
            local_f8 = pNVar24;
          }
        }
        else {
          pNVar26 = (Node *)0x0;
        }
        local_150 = pNVar10;
        pNVar27 = pNVar31;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar27 = (Node *)(*(long *)pNVar31 + 0x10);
        }
        local_170 = (AccessBuilder *)pNVar12;
        local_168 = (AccessBuilder *)pNVar13;
        local_160 = (AccessBuilder *)pNVar14;
        pNStack_158 = pNVar9;
        pNStack_148 = pNVar20;
        local_140 = pNVar24;
        pNStack_138 = pNVar17;
        uVar16 = CreateJavaScriptBuiltinContinuationFrameState
                           (*(undefined8 *)pJVar29,param_2,0x29c,*(undefined8 *)pNVar27,pNVar11,
                            &local_170,8,uVar8,1,pNVar26,pNVar22);
        pGVar33 = (Graph *)**(undefined8 **)pJVar29;
        pOVar18 = (Operator *)
                  JSOperatorBuilder::Call
                            ((JSOperatorBuilder *)(*(undefined8 **)pJVar29)[0x2e],5,puVar7 + 1,
                             pFVar1,2,*puVar7 >> 0x1c & 1,1);
        local_88 = local_f8;
        local_80 = local_100;
        local_a8 = pNVar10;
        local_c0 = pNVar13;
        pNStack_b8 = pNVar14;
        local_b0 = pNVar24;
        local_a0 = pNVar12;
        local_98 = pNVar11;
        local_90 = (Node *)uVar16;
        pNVar27 = (Node *)Graph::NewNode(pGVar33,pOVar18,9,&local_c0,false);
        local_178 = (Node *)0x0;
        local_100 = pNVar27;
        local_f8 = pNVar27;
        uVar15 = NodeProperties::IsExceptionalCall(param_1,&local_178);
        if ((uVar15 & 1) != 0) {
          RewirePostCallbackExceptionEdges
                    (this,local_130,local_178,local_f8,&pNStack_128,&local_100);
        }
        local_a0 = pNVar10;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar31 = (Node *)(*(long *)pNVar31 + 0x10);
        }
        local_c0 = pNVar12;
        pNStack_b8 = pNVar13;
        local_b0 = pNVar14;
        local_a8 = pNVar9;
        local_98 = pNVar20;
        local_90 = pNVar24;
        local_88 = pNVar17;
        local_80 = pNVar27;
        pNVar10 = (Node *)CreateJavaScriptBuiltinContinuationFrameState
                                    (*(undefined8 *)pJVar29,param_2,0x29c,*(undefined8 *)pNVar31,
                                     pNVar11,&local_c0,9,uVar8,0);
        pGVar33 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar18 = (Operator *)
                  CommonOperatorBuilder::Checkpoint
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_168 = (AccessBuilder *)local_f8;
        local_160 = (AccessBuilder *)local_100;
        local_170 = (AccessBuilder *)pNVar10;
        local_f8 = (Node *)Graph::NewNode(pGVar33,pOVar18,3,(Node **)&local_170,false);
        this_03 = (JSCallReducer *)
                  DoFilterPostCallbackWork
                            (this,bVar32,&local_100,&local_f8,pNVar9,pNVar17,pNVar24,pNVar27);
        pNVar11 = local_f8;
        pNVar10 = local_100;
        if ((local_104[0] < 6) && ((local_104[0] & 1) != 0)) {
          pGVar33 = (Graph *)**(undefined8 **)pJVar29;
          local_100 = pNVar26;
          local_f8 = pNVar22;
          pOVar18 = (Operator *)
                    CommonOperatorBuilder::Merge
                              ((CommonOperatorBuilder *)(*(undefined8 **)pJVar29)[1],2);
          local_c0 = local_100;
          pNStack_b8 = pNVar10;
          pNVar10 = (Node *)Graph::NewNode(pGVar33,pOVar18,2,&local_c0,false);
          pGVar33 = (Graph *)**(undefined8 **)pJVar29;
          local_100 = pNVar10;
          pOVar18 = (Operator *)
                    CommonOperatorBuilder::EffectPhi
                              ((CommonOperatorBuilder *)(*(undefined8 **)pJVar29)[1],2);
          local_c0 = local_f8;
          pNStack_b8 = pNVar11;
          local_b0 = pNVar10;
          local_f8 = (Node *)Graph::NewNode(pGVar33,pOVar18,3,&local_c0,false);
          pGVar33 = (Graph *)**(undefined8 **)pJVar29;
          pOVar18 = (Operator *)
                    CommonOperatorBuilder::Phi
                              ((CommonOperatorBuilder *)(*(undefined8 **)pJVar29)[1],6,2);
          local_c0 = pNVar17;
          pNStack_b8 = (Node *)this_03;
          local_b0 = pNVar10;
          this_03 = (JSCallReducer *)Graph::NewNode(pGVar33,pOVar18,3,&local_c0,false);
        }
        WireInLoopEnd(this_03,pNVar3,pNVar4,pNVar21,pNVar25,pNVar10,local_f8);
        pNVar10 = pNVar17 + 0x20;
        pNVar11 = pNVar10;
        if ((*(uint *)(pNVar17 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar11 = (Node *)(*(long *)pNVar10 + 0x10);
        }
        pNVar12 = *(Node **)(pNVar11 + 8);
        if (pNVar12 != (Node *)this_03) {
          if ((*(uint *)(pNVar17 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar17 = *(Node **)pNVar10;
          }
          if (pNVar12 != (Node *)0x0) {
            Node::RemoveUse(pNVar12,(Use *)(pNVar17 + -0x30));
          }
          *(JSCallReducer **)(pNVar11 + 8) = this_03;
          if (this_03 != (JSCallReducer *)0x0) {
            Node::AppendUse((Node *)this_03,(Use *)(pNVar17 + -0x30));
          }
        }
        pGVar33 = (Graph *)**(undefined8 **)(this + 0x10);
        local_100 = pNVar23;
        local_f8 = pNVar4;
        pOVar18 = (Operator *)
                  CommonOperatorBuilder::Throw
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_c0 = local_130;
        pNStack_b8 = pNStack_128;
        pNVar10 = (Node *)Graph::NewNode(pGVar33,pOVar18,2,&local_c0,false);
        NodeProperties::MergeControlToEnd
                  ((Graph *)**(undefined8 **)(this + 0x10),
                   (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar10);
        (**(code **)(**(long **)(this + 8) + 0x20))
                  (*(long **)(this + 8),param_1,pNVar9,local_f8,pNVar23);
      }
    }
    MapInference::~MapInference(aMStack_f0);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pNVar9;
}

