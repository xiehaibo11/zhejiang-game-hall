
/* v8::internal::compiler::JSCallReducer::ReduceArrayPrototypeShift(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayPrototypeShift(JSCallReducer *this,Node *param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  Node *pNVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Node *pNVar11;
  ulong uVar12;
  undefined8 uVar13;
  Operator *pOVar14;
  Node *pNVar15;
  Node *pNVar16;
  Node *pNVar17;
  Node *pNVar18;
  Node *pNVar19;
  undefined8 uVar20;
  Node *pNVar21;
  Node *pNVar22;
  AccessBuilder *this_00;
  Node *pNVar23;
  Node *pNVar24;
  Node *pNVar25;
  Node *pNVar26;
  Node *pNVar27;
  Operator *pOVar28;
  Node *pNVar29;
  Node *pNVar30;
  Node *pNVar31;
  undefined8 uVar32;
  CallDescriptor *pCVar33;
  undefined8 uVar34;
  ulong uVar35;
  Graph *pGVar36;
  SimplifiedOperatorBuilder *pSVar37;
  long *plVar38;
  undefined8 uVar39;
  Use *pUVar40;
  MachineGraph *pMVar41;
  Graph *this_01;
  ulong uVar42;
  JSCallReducer *pJVar43;
  Node *local_1b0;
  Node *local_1a8;
  Node **local_1a0;
  Node **local_198;
  Node **ppNStack_190;
  Node **local_188;
  Node **local_180;
  Node **local_178;
  Node **local_170;
  Node **local_168;
  Node **ppNStack_160;
  void *local_158;
  void *local_150;
  undefined8 uStack_148;
  Node *local_140;
  Node *local_138;
  Node *local_130;
  Node *pNStack_128;
  Node *local_120;
  Node *pNStack_118;
  MapInference aMStack_110 [48];
  Node *local_e0;
  Node *pNStack_d8;
  Node *local_d0;
  AccessBuilder *pAStack_c8;
  Node *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  Node *local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  lVar6 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar6 + 3) >> 4 & 1) == 0) {
    uVar7 = NodeProperties::GetValueInput(param_1,0);
    pNVar8 = (Node *)NodeProperties::GetValueInput(param_1,1);
    uVar9 = NodeProperties::GetContextInput(param_1);
    uVar10 = NodeProperties::GetFrameStateInput(param_1);
    pNVar11 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    local_138 = pNVar11;
    local_140 = (Node *)NodeProperties::GetControlInput(param_1,0);
    MapInference::MapInference(aMStack_110,*(JSHeapBroker **)(this + 0x18),pNVar8,pNVar11);
    uVar12 = MapInference::HaveMaps(aMStack_110);
    if ((uVar12 & 1) == 0) {
      pNVar8 = (Node *)0x0;
    }
    else {
      uVar13 = MapInference::GetMaps(aMStack_110);
      local_150 = (void *)0x0;
      uStack_148 = 0;
      local_158 = (void *)0x0;
      uVar12 = FUN_016f4a24(*(undefined8 *)(this + 0x18),uVar13,&local_158,0);
      if ((uVar12 & 1) == 0) {
        pNVar8 = (Node *)MapInference::NoChange(aMStack_110);
      }
      else {
        uVar12 = CompilationDependencies::DependOnNoElementsProtector
                           (*(CompilationDependencies **)(this + 0x30));
        if ((uVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pJVar43 = this + 0x10;
        MapInference::RelyOnMapsPreferStability
                  (aMStack_110,*(CompilationDependencies **)(this + 0x30),*(JSGraph **)pJVar43,
                   &local_138,local_140,(FeedbackSource *)(lVar6 + 8));
        local_168 = (Node **)0x0;
        ppNStack_160 = (Node **)0x0;
        local_178 = (Node **)0x0;
        local_170 = (Node **)0x0;
        local_188 = (Node **)0x0;
        local_180 = (Node **)0x0;
        local_198 = (Node **)0x0;
        ppNStack_190 = (Node **)0x0;
        local_1a0 = (Node **)0x0;
        local_1a8 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)pJVar43);
        uVar13 = LoadReceiverElementsKind(this,pNVar8,&local_138,&local_140);
        pNVar11 = local_138;
        uVar12 = (long)local_150 - (long)local_158;
        local_1b0 = local_140;
        if (uVar12 != 0) {
          uVar35 = 0;
          do {
            bVar3 = *(byte *)((long)local_158 + uVar35);
            uVar42 = (ulong)bVar3;
            local_140 = local_1b0;
            local_138 = pNVar11;
            if (uVar35 != uVar12 - 1) {
              CheckIfElementsKind(this,uVar13,uVar42,local_1b0,&local_140,&local_1b0);
            }
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pSVar37 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f];
            AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_e0,uVar42);
            pOVar14 = (Operator *)
                      SimplifiedOperatorBuilder::LoadField(pSVar37,(FieldAccess *)&local_e0);
            pNStack_128 = local_138;
            local_120 = local_140;
            local_130 = pNVar8;
            pNVar15 = (Node *)Graph::NewNode(pGVar36,pOVar14,3,&local_130,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            local_138 = pNVar15;
            pOVar14 = (Operator *)
                      SimplifiedOperatorBuilder::NumberEqual
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f]);
            pNStack_d8 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)pJVar43);
            local_e0 = pNVar15;
            pNVar16 = (Node *)Graph::NewNode(pGVar36,pOVar14,2,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::Branch
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],2,1);
            pNStack_d8 = local_140;
            local_e0 = pNVar16;
            pNVar17 = (Node *)Graph::NewNode(pGVar36,pOVar14,2,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::IfTrue
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1]);
            local_e0 = pNVar17;
            pNVar18 = (Node *)Graph::NewNode(pGVar36,pOVar14,1,&local_e0,false);
            pNVar16 = local_138;
            pNVar19 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)pJVar43);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::IfFalse
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1]);
            local_e0 = pNVar17;
            uVar20 = Graph::NewNode(pGVar36,pOVar14,1,&local_e0,false);
            pNVar17 = local_138;
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      SimplifiedOperatorBuilder::NumberLessThanOrEqual
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f]);
            pNStack_d8 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar43,100.0);
            local_e0 = pNVar15;
            pNVar21 = (Node *)Graph::NewNode(pGVar36,pOVar14,2,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::Branch
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],1,1);
            local_e0 = pNVar21;
            pNStack_d8 = (Node *)uVar20;
            pNVar22 = (Node *)Graph::NewNode(pGVar36,pOVar14,2,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::IfTrue
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1]);
            local_e0 = pNVar22;
            this_00 = (AccessBuilder *)Graph::NewNode(pGVar36,pOVar14,1,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pSVar37 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f];
            AccessBuilder::ForJSObjectElements(this_00);
            pOVar14 = (Operator *)
                      SimplifiedOperatorBuilder::LoadField(pSVar37,(FieldAccess *)&local_e0);
            pNStack_128 = pNVar17;
            local_130 = pNVar8;
            local_120 = (Node *)this_00;
            pNVar23 = (Node *)Graph::NewNode(pGVar36,pOVar14,3,&local_130,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pSVar37 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f];
            AccessBuilder::ForFixedArrayElement((AccessBuilder *)&local_130,uVar42,1);
            pOVar14 = (Operator *)
                      SimplifiedOperatorBuilder::LoadElement(pSVar37,(ElementAccess *)&local_130);
            pNStack_d8 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)pJVar43);
            local_e0 = pNVar23;
            local_d0 = pNVar23;
            pAStack_c8 = this_00;
            pNVar24 = (Node *)Graph::NewNode(pGVar36,pOVar14,4,&local_e0,false);
            pNVar21 = pNVar24;
            if (bVar3 < 4) {
              pGVar36 = (Graph *)**(undefined8 **)pJVar43;
              pOVar14 = (Operator *)
                        SimplifiedOperatorBuilder::EnsureWritableFastElements
                                  ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f]);
              local_e0 = pNVar8;
              pNStack_d8 = pNVar23;
              local_d0 = pNVar24;
              pAStack_c8 = this_00;
              pNVar23 = (Node *)Graph::NewNode(pGVar36,pOVar14,4,&local_e0,false);
              pNVar21 = pNVar23;
            }
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::Loop
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],2);
            local_e0 = (Node *)this_00;
            pNStack_d8 = (Node *)this_00;
            lVar6 = Graph::NewNode(pGVar36,pOVar14,2,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::EffectPhi
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],2);
            local_e0 = pNVar21;
            pNStack_d8 = pNVar21;
            local_d0 = (Node *)lVar6;
            pNVar21 = (Node *)Graph::NewNode(pGVar36,pOVar14,3,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::Terminate
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1]);
            local_e0 = pNVar21;
            pNStack_d8 = (Node *)lVar6;
            pNVar25 = (Node *)Graph::NewNode(pGVar36,pOVar14,2,&local_e0,false);
            NodeProperties::MergeControlToEnd
                      ((Graph *)**(undefined8 **)pJVar43,
                       (CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],pNVar25);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::Phi
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],8,2);
            pNVar25 = (Node *)JSGraph::OneConstant(*(JSGraph **)pJVar43);
            pNStack_d8 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar43,99.0);
            local_e0 = pNVar25;
            local_d0 = (Node *)lVar6;
            pNVar25 = (Node *)Graph::NewNode(pGVar36,pOVar14,3,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      SimplifiedOperatorBuilder::NumberLessThan
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f]);
            local_e0 = pNVar25;
            pNStack_d8 = pNVar15;
            pNVar26 = (Node *)Graph::NewNode(pGVar36,pOVar14,2,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::Branch
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],0,1);
            local_e0 = pNVar26;
            pNStack_d8 = (Node *)lVar6;
            pNVar26 = (Node *)Graph::NewNode(pGVar36,pOVar14,2,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::IfFalse
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1]);
            local_e0 = pNVar26;
            pNVar27 = (Node *)Graph::NewNode(pGVar36,pOVar14,1,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::IfTrue
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1]);
            local_e0 = pNVar26;
            pNVar26 = (Node *)Graph::NewNode(pGVar36,pOVar14,1,&local_e0,false);
            AccessBuilder::ForFixedArrayElement((AccessBuilder *)&local_130,uVar42,1);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      SimplifiedOperatorBuilder::LoadElement
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f],
                                 (ElementAccess *)&local_130);
            local_e0 = pNVar23;
            pNStack_d8 = pNVar25;
            local_d0 = pNVar21;
            pAStack_c8 = (AccessBuilder *)pNVar26;
            uVar20 = Graph::NewNode(pGVar36,pOVar14,4,&local_e0,false);
            this_01 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      SimplifiedOperatorBuilder::StoreElement
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f],
                                 (ElementAccess *)&local_130);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar28 = (Operator *)
                      SimplifiedOperatorBuilder::NumberSubtract
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f]);
            pNStack_d8 = (Node *)JSGraph::OneConstant(*(JSGraph **)pJVar43);
            local_e0 = pNVar25;
            pNStack_d8 = (Node *)Graph::NewNode(pGVar36,pOVar28,2,&local_e0,false);
            local_e0 = pNVar23;
            local_d0 = (Node *)uVar20;
            pAStack_c8 = (AccessBuilder *)uVar20;
            local_c0 = pNVar26;
            pNVar29 = (Node *)Graph::NewNode(this_01,pOVar14,5,&local_e0,false);
            uVar2 = *(uint *)(lVar6 + 0x14) & 0xf000000;
            plVar1 = (long *)(lVar6 + 0x20);
            plVar38 = plVar1;
            if (uVar2 == 0xf000000) {
              plVar38 = (long *)(*plVar1 + 0x10);
            }
            pNVar30 = (Node *)plVar38[1];
            if (pNVar30 != pNVar26) {
              if (uVar2 == 0xf000000) {
                lVar6 = *plVar1;
              }
              if (pNVar30 != (Node *)0x0) {
                Node::RemoveUse(pNVar30,(Use *)(lVar6 + -0x30));
              }
              plVar38[1] = (long)pNVar26;
              if (pNVar26 != (Node *)0x0) {
                Node::AppendUse(pNVar26,(Use *)(lVar6 + -0x30));
              }
            }
            pNVar26 = pNVar21 + 0x20;
            pNVar30 = pNVar26;
            if ((*(uint *)(pNVar21 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar30 = (Node *)(*(long *)pNVar26 + 0x10);
            }
            pNVar31 = *(Node **)(pNVar30 + 8);
            if (pNVar31 != pNVar29) {
              if ((*(uint *)(pNVar21 + 0x14) & 0xf000000) == 0xf000000) {
                pUVar40 = (Use *)(*(long *)pNVar26 + -0x30);
              }
              else {
                pUVar40 = (Use *)(pNVar21 + -0x30);
              }
              if (pNVar31 != (Node *)0x0) {
                Node::RemoveUse(pNVar31,pUVar40);
              }
              *(Node **)(pNVar30 + 8) = pNVar29;
              if (pNVar29 != (Node *)0x0) {
                Node::AppendUse(pNVar29,pUVar40);
              }
            }
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      SimplifiedOperatorBuilder::NumberAdd
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f]);
            pNStack_d8 = (Node *)JSGraph::OneConstant(*(JSGraph **)pJVar43);
            local_e0 = pNVar25;
            pNVar30 = (Node *)Graph::NewNode(pGVar36,pOVar14,2,&local_e0,false);
            pNVar26 = pNVar25 + 0x20;
            pNVar29 = pNVar26;
            if ((*(uint *)(pNVar25 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar29 = (Node *)(*(long *)pNVar26 + 0x10);
            }
            pNVar31 = *(Node **)(pNVar29 + 8);
            if (pNVar31 != pNVar30) {
              if ((*(uint *)(pNVar25 + 0x14) & 0xf000000) == 0xf000000) {
                pNVar25 = *(Node **)pNVar26;
              }
              if (pNVar31 != (Node *)0x0) {
                Node::RemoveUse(pNVar31,(Use *)(pNVar25 + -0x30));
              }
              *(Node **)(pNVar29 + 8) = pNVar30;
              if (pNVar30 != (Node *)0x0) {
                Node::AppendUse(pNVar30,(Use *)(pNVar25 + -0x30));
              }
            }
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      SimplifiedOperatorBuilder::NumberSubtract
                                ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f]);
            pNStack_d8 = (Node *)JSGraph::OneConstant(*(JSGraph **)pJVar43);
            local_e0 = pNVar15;
            uVar20 = Graph::NewNode(pGVar36,pOVar14,2,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pSVar37 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f];
            AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_e0,uVar42);
            pOVar14 = (Operator *)
                      SimplifiedOperatorBuilder::StoreField(pSVar37,(FieldAccess *)&local_e0);
            local_130 = pNVar8;
            pNStack_128 = (Node *)uVar20;
            local_120 = pNVar21;
            pNStack_118 = pNVar27;
            uVar32 = Graph::NewNode(pGVar36,pOVar14,4,&local_130,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pSVar37 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f];
            if ((bVar3 < 7) && ((0x55U >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
              uVar42 = 0x7010501030101 >> ((uVar42 & 7) << 3);
            }
            AccessBuilder::ForFixedArrayElement((AccessBuilder *)&local_130,uVar42,1);
            pOVar14 = (Operator *)
                      SimplifiedOperatorBuilder::StoreElement(pSVar37,(ElementAccess *)&local_130);
            local_d0 = (Node *)JSGraph::TheHoleConstant(*(JSGraph **)pJVar43);
            local_e0 = pNVar23;
            pNStack_d8 = (Node *)uVar20;
            pAStack_c8 = (AccessBuilder *)uVar32;
            local_c0 = pNVar27;
            pNVar21 = (Node *)Graph::NewNode(pGVar36,pOVar14,5,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::IfFalse
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1]);
            local_e0 = pNVar22;
            uVar20 = Graph::NewNode(pGVar36,pOVar14,1,&local_e0,false);
            uVar39 = *(undefined8 *)**(undefined8 **)pJVar43;
            uVar32 = Builtins::name(0xbd);
            pCVar33 = (CallDescriptor *)
                      Linkage::GetCEntryStubCallDescriptor
                                (uVar39,1,5,uVar32,*(undefined1 *)(*(long *)param_1 + 0x12),1);
            pNVar15 = (Node *)JSGraph::CEntryStubConstant(*(JSGraph **)pJVar43,1,0,0,1);
            uVar12 = Builtins::CppEntryOf(0xbd);
            pMVar41 = *(MachineGraph **)pJVar43;
            uVar32 = ExternalReference::Create(uVar12);
            uVar32 = MachineGraph::ExternalConstant(pMVar41,uVar32);
            uVar39 = JSGraph::Constant(*(JSGraph **)pJVar43,5.0);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::Call
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],pCVar33);
            uVar34 = JSGraph::TheHoleConstant(*(JSGraph **)pJVar43);
            uStack_b8 = JSGraph::UndefinedConstant(*(JSGraph **)pJVar43);
            local_90 = pNVar17;
            local_e0 = pNVar15;
            pNStack_d8 = pNVar8;
            local_d0 = (Node *)uVar34;
            pAStack_c8 = (AccessBuilder *)uVar39;
            local_c0 = (Node *)uVar7;
            local_b0 = uVar32;
            uStack_a8 = uVar39;
            local_a0 = uVar9;
            local_98 = uVar10;
            uStack_88 = uVar20;
            uVar20 = Graph::NewNode(pGVar36,pOVar14,0xc,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::Merge
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],2);
            local_e0 = pNVar27;
            pNStack_d8 = (Node *)uVar20;
            uVar32 = Graph::NewNode(pGVar36,pOVar14,2,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::EffectPhi
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],2);
            local_e0 = pNVar21;
            pNStack_d8 = (Node *)uVar20;
            local_d0 = (Node *)uVar32;
            uVar39 = Graph::NewNode(pGVar36,pOVar14,3,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::Phi
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],8,2);
            local_e0 = pNVar24;
            pNStack_d8 = (Node *)uVar20;
            local_d0 = (Node *)uVar32;
            uVar20 = Graph::NewNode(pGVar36,pOVar14,3,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::Merge
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],2);
            local_e0 = pNVar18;
            pNStack_d8 = (Node *)uVar32;
            local_140 = (Node *)Graph::NewNode(pGVar36,pOVar14,2,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::EffectPhi
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],2);
            local_e0 = pNVar16;
            local_d0 = local_140;
            pNStack_d8 = (Node *)uVar39;
            local_138 = (Node *)Graph::NewNode(pGVar36,pOVar14,3,&local_e0,false);
            pGVar36 = (Graph *)**(undefined8 **)pJVar43;
            pOVar14 = (Operator *)
                      CommonOperatorBuilder::Phi
                                ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],8,2);
            local_d0 = local_140;
            local_e0 = pNVar19;
            pNStack_d8 = (Node *)uVar20;
            local_1a8 = (Node *)Graph::NewNode(pGVar36,pOVar14,3,&local_e0,false);
            if ((bVar3 < 6) && ((bVar3 & 1) != 0)) {
              pGVar36 = (Graph *)**(undefined8 **)pJVar43;
              pOVar14 = (Operator *)
                        SimplifiedOperatorBuilder::ConvertTaggedHoleToUndefined
                                  ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar43)[0x2f]);
              local_e0 = local_1a8;
              local_1a8 = (Node *)Graph::NewNode(pGVar36,pOVar14,1,&local_e0,false);
            }
            if (local_168 == ppNStack_160) {
              std::__ndk1::
              vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
              ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                        ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                          *)&local_170,&local_140);
            }
            else {
              *local_168 = local_140;
              local_168 = local_168 + 1;
            }
            if (local_180 == local_178) {
              std::__ndk1::
              vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
              ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                        ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                          *)&local_188,&local_138);
            }
            else {
              *local_180 = local_138;
              local_180 = local_180 + 1;
            }
            if (local_198 == ppNStack_190) {
              std::__ndk1::
              vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
              ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                        ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                          *)&local_1a0,&local_1a8);
            }
            else {
              *local_198 = local_1a8;
              local_198 = local_198 + 1;
            }
            uVar35 = uVar35 + 1;
            uVar12 = (long)local_150 - (long)local_158;
          } while (uVar35 < uVar12);
        }
        if (1 < (ulong)((long)local_168 - (long)local_170 >> 3)) {
          uVar12 = (ulong)((long)local_168 - (long)local_170) >> 3;
          iVar5 = (int)uVar12;
          pGVar36 = (Graph *)**(undefined8 **)pJVar43;
          pOVar14 = (Operator *)
                    CommonOperatorBuilder::Merge
                              ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],iVar5);
          local_140 = (Node *)Graph::NewNode(pGVar36,pOVar14,iVar5,local_170,false);
          if (local_180 == local_178) {
            std::__ndk1::
            vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
            ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                      ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                        *)&local_188,&local_140);
          }
          else {
            *local_180 = local_140;
            local_180 = local_180 + 1;
          }
          pGVar36 = (Graph *)**(undefined8 **)pJVar43;
          pOVar14 = (Operator *)
                    CommonOperatorBuilder::EffectPhi
                              ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],iVar5);
          local_138 = (Node *)Graph::NewNode(pGVar36,pOVar14,iVar5 + 1,local_188,false);
          if (local_198 == ppNStack_190) {
            std::__ndk1::
            vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
            ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                      ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                        *)&local_1a0,&local_140);
          }
          else {
            *local_198 = local_140;
            local_198 = local_198 + 1;
          }
          pGVar36 = (Graph *)**(undefined8 **)pJVar43;
          pOVar14 = (Operator *)
                    CommonOperatorBuilder::Phi
                              ((CommonOperatorBuilder *)(*(undefined8 **)pJVar43)[1],8,
                               uVar12 & 0xffffffff);
          local_1a8 = (Node *)Graph::NewNode(pGVar36,pOVar14,iVar5 + 1,local_1a0,false);
        }
        (**(code **)(**(long **)(this + 8) + 0x20))
                  (*(long **)(this + 8),param_1,local_1a8,local_138,local_140);
        pNVar8 = local_1a8;
        if (local_1a0 != (Node **)0x0) {
          local_198 = local_1a0;
          operator_delete(local_1a0);
        }
        if (local_188 != (Node **)0x0) {
          local_180 = local_188;
          operator_delete(local_188);
        }
        if (local_170 != (Node **)0x0) {
          local_168 = local_170;
          operator_delete(local_170);
        }
      }
      if (local_158 != (void *)0x0) {
        local_150 = local_158;
        operator_delete(local_158);
      }
    }
    MapInference::~MapInference(aMStack_110);
  }
  else {
    pNVar8 = (Node *)0x0;
  }
  if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pNVar8;
}

