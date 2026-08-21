
/* v8::internal::compiler::JSCallReducer::ReduceCollectionIteratorPrototypeNext(v8::internal::compiler::Node*,
   int, v8::internal::Handle<v8::internal::HeapObject>, v8::internal::InstanceType,
   v8::internal::InstanceType) */

AccessBuilder * __thiscall
v8::internal::compiler::JSCallReducer::ReduceCollectionIteratorPrototypeNext
          (JSCallReducer *this,Node *param_1,int param_2,undefined8 param_4,ushort param_5,
          ushort param_6)

{
  uint uVar1;
  CommonOperatorBuilder *pCVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  Node *pNVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  Operator *pOVar14;
  AccessBuilder *pAVar15;
  Node *pNVar16;
  Node *pNVar17;
  Node *pNVar18;
  AccessBuilder *pAVar19;
  CallDescriptor *pCVar20;
  Node *pNVar21;
  long lVar22;
  AccessBuilder *pAVar23;
  AccessBuilder *pAVar24;
  undefined8 uVar25;
  Operator *pOVar26;
  Operator *pOVar27;
  Node *pNVar28;
  Node *pNVar29;
  int *piVar30;
  JSCallReducer *pJVar31;
  long *plVar32;
  Graph *pGVar33;
  Graph *pGVar34;
  SimplifiedOperatorBuilder *pSVar35;
  Graph *this_00;
  AccessBuilder *local_f8;
  Node *local_f0;
  Node *local_e8;
  undefined8 local_e0;
  int *local_d8;
  Node *local_d0;
  Node *local_c8;
  Node *pNStack_c0;
  AccessBuilder *local_b8;
  AccessBuilder *pAStack_b0;
  Node *local_a8;
  Node *local_a0;
  Node *local_98;
  Node *local_90;
  Node *pNStack_88;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar6 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar6 + 3) >> 4 & 1) != 0) {
    pAVar15 = (AccessBuilder *)0x0;
    goto LAB_016f3358;
  }
  pNVar7 = (Node *)NodeProperties::GetValueInput(param_1,1);
  pNVar8 = (Node *)NodeProperties::GetContextInput(param_1);
  pNVar9 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  local_d0 = pNVar9;
  pNVar10 = (Node *)NodeProperties::GetControlInput(param_1,0);
  MapInference::MapInference
            ((MapInference *)&local_a8,*(JSHeapBroker **)(this + 0x18),pNVar7,pNVar9);
  uVar11 = MapInference::HaveMaps((MapInference *)&local_a8);
  if ((uVar11 & 1) == 0) {
    pAVar15 = (AccessBuilder *)0x0;
LAB_016f3350:
    MapInference::~MapInference((MapInference *)&local_a8);
    goto LAB_016f3358;
  }
  plVar12 = (long *)MapInference::GetMaps((MapInference *)&local_a8);
  ObjectRef::ObjectRef
            ((ObjectRef *)&local_c8,*(undefined8 *)(this + 0x18),*(undefined8 *)*plVar12,0);
  uVar11 = ObjectRef::IsMap((ObjectRef *)&local_c8);
  if ((uVar11 & 1) == 0) {
LAB_016f36dc:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsMap()");
  }
  uVar4 = MapRef::instance_type((MapRef *)&local_c8);
  lVar22 = *plVar12;
  if (1 < (ulong)(plVar12[1] - lVar22 >> 3)) {
    uVar11 = 1;
    do {
      ObjectRef::ObjectRef
                ((ObjectRef *)&local_c8,*(undefined8 *)(this + 0x18),
                 *(undefined8 *)(lVar22 + uVar11 * 8),0);
      uVar13 = ObjectRef::IsMap((ObjectRef *)&local_c8);
      if ((uVar13 & 1) == 0) goto LAB_016f36dc;
      uVar5 = MapRef::instance_type((MapRef *)&local_c8);
      if (uVar5 != uVar4) goto LAB_016f3344;
      lVar22 = *plVar12;
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)(plVar12[1] - lVar22 >> 3));
  }
  if ((uVar4 < param_5) || (param_6 < uVar4)) {
LAB_016f3344:
    pAVar15 = (AccessBuilder *)MapInference::NoChange((MapInference *)&local_a8);
    goto LAB_016f3350;
  }
  pJVar31 = this + 0x10;
  MapInference::RelyOnMapsPreferStability
            ((MapInference *)&local_a8,*(CompilationDependencies **)(this + 0x30),
             *(JSGraph **)pJVar31,&local_d0,pNVar10,(FeedbackSource *)(lVar6 + 8));
  MapInference::~MapInference((MapInference *)&local_a8);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::Loop((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1],2);
  local_a8 = pNVar10;
  local_a0 = pNVar10;
  lVar6 = Graph::NewNode(pGVar34,pOVar14,2,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::EffectPhi
                      ((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1],2);
  local_a8 = local_d0;
  local_a0 = local_d0;
  local_98 = (Node *)lVar6;
  pNVar10 = (Node *)Graph::NewNode(pGVar34,pOVar14,3,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  local_d0 = pNVar10;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::Terminate((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1]);
  local_a8 = pNVar10;
  local_a0 = (Node *)lVar6;
  pNVar9 = (Node *)Graph::NewNode(pGVar34,pOVar14,2,&local_a8,false);
  pAVar15 = (AccessBuilder *)
            NodeProperties::MergeControlToEnd
                      ((Graph *)**(undefined8 **)pJVar31,
                       (CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1],pNVar9);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  AccessBuilder::ForJSCollectionIteratorTable(pAVar15);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar35,(FieldAccess *)&local_a8);
  pNStack_c0 = local_d0;
  local_c8 = pNVar7;
  local_b8 = (AccessBuilder *)lVar6;
  pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar34,pOVar14,3,&local_c8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  local_d0 = (Node *)pAVar15;
  AccessBuilder::ForOrderedHashMapOrSetNextTable(pAVar15);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar35,(FieldAccess *)&local_a8);
  pNStack_c0 = local_d0;
  local_c8 = (Node *)pAVar15;
  local_b8 = (AccessBuilder *)lVar6;
  pNVar16 = (Node *)Graph::NewNode(pGVar34,pOVar14,3,&local_c8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  local_d0 = pNVar16;
  pOVar14 = (Operator *)
            SimplifiedOperatorBuilder::ObjectIsSmi
                      ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f]);
  local_a8 = pNVar16;
  pNVar9 = (Node *)Graph::NewNode(pGVar34,pOVar14,1,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1],1,1)
  ;
  local_a8 = pNVar9;
  local_a0 = (Node *)lVar6;
  pNVar17 = (Node *)Graph::NewNode(pGVar34,pOVar14,2,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1]);
  local_a8 = pNVar17;
  pNVar18 = (Node *)Graph::NewNode(pGVar34,pOVar14,1,&local_a8,false);
  pNVar9 = local_d0;
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1]);
  local_a8 = pNVar17;
  pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar34,pOVar14,1,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  AccessBuilder::ForJSCollectionIteratorIndex(pAVar19);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar35,(FieldAccess *)&local_a8);
  pNStack_c0 = local_d0;
  local_c8 = pNVar7;
  local_b8 = pAVar19;
  pNVar17 = (Node *)Graph::NewNode(pGVar34,pOVar14,3,&local_c8,false);
  local_d0 = pNVar17;
  Builtins::CallableFor((Builtins *)&local_e8,*(undefined8 *)(*(long *)pJVar31 + 0x168),0x37);
  local_a8 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
  local_a0 = (Node *)local_d8;
  pCVar20 = (CallDescriptor *)
            Linkage::GetStubCallDescriptor
                      (*(undefined8 *)**(undefined8 **)pJVar31,&local_a8,local_d8[2] - *local_d8,0,
                       0x70,0);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::Call
                      ((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1],pCVar20);
  pNVar21 = (Node *)JSGraph::HeapConstant(*(JSGraph **)pJVar31,local_e8);
  local_90 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)pJVar31);
  pNStack_88 = local_d0;
  local_a8 = pNVar21;
  local_a0 = (Node *)pAVar15;
  local_98 = pNVar17;
  pNVar17 = (Node *)Graph::NewNode(pGVar34,pOVar14,5,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pCVar2 = (CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1];
  local_d0 = pNVar17;
  lVar22 = TypeCache::Get();
  pOVar14 = (Operator *)CommonOperatorBuilder::TypeGuard(pCVar2,*(undefined8 *)(lVar22 + 0x1b0));
  local_a0 = local_d0;
  local_a8 = pNVar17;
  local_98 = (Node *)pAVar19;
  pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar34,pOVar14,3,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  local_d0 = (Node *)pAVar15;
  AccessBuilder::ForJSCollectionIteratorIndex(pAVar15);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar35,(FieldAccess *)&local_a8);
  local_b8 = (AccessBuilder *)local_d0;
  local_c8 = pNVar7;
  pNStack_c0 = (Node *)pAVar15;
  pAStack_b0 = pAVar19;
  local_d0 = (Node *)Graph::NewNode(pGVar34,pOVar14,4,&local_c8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  AccessBuilder::ForJSCollectionIteratorTable((AccessBuilder *)local_d0);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar35,(FieldAccess *)&local_a8);
  local_b8 = (AccessBuilder *)local_d0;
  local_c8 = pNVar7;
  pNStack_c0 = pNVar16;
  pAStack_b0 = pAVar19;
  local_d0 = (Node *)Graph::NewNode(pGVar34,pOVar14,4,&local_c8,false);
  plVar12 = (long *)(lVar6 + 0x20);
  uVar1 = *(uint *)(lVar6 + 0x14) & 0xf000000;
  plVar32 = plVar12;
  if (uVar1 == 0xf000000) {
    plVar32 = (long *)(*plVar12 + 0x10);
  }
  pNVar16 = (Node *)plVar32[1];
  if (pNVar16 != (Node *)pAVar19) {
    if (uVar1 == 0xf000000) {
      lVar6 = *plVar12;
    }
    if (pNVar16 != (Node *)0x0) {
      Node::RemoveUse(pNVar16,(Use *)(lVar6 + -0x30));
    }
    plVar32[1] = (long)pAVar19;
    if (pAVar19 != (AccessBuilder *)0x0) {
      Node::AppendUse((Node *)pAVar19,(Use *)(lVar6 + -0x30));
    }
  }
  pNVar21 = local_d0;
  pNVar16 = pNVar10 + 0x20;
  pNVar17 = pNVar16;
  if ((*(uint *)(pNVar10 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar17 = (Node *)(*(long *)pNVar16 + 0x10);
  }
  pAVar15 = *(AccessBuilder **)(pNVar17 + 8);
  if (pAVar15 != (AccessBuilder *)local_d0) {
    if ((*(uint *)(pNVar10 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar10 = *(Node **)pNVar16;
    }
    if (pAVar15 != (AccessBuilder *)0x0) {
      pAVar15 = (AccessBuilder *)Node::RemoveUse((Node *)pAVar15,(Use *)(pNVar10 + -0x30));
    }
    *(Node **)(pNVar17 + 8) = pNVar21;
    if (pNVar21 != (Node *)0x0) {
      pAVar15 = (AccessBuilder *)Node::AppendUse(pNVar21,(Use *)(pNVar10 + -0x30));
    }
  }
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  local_d0 = pNVar9;
  AccessBuilder::ForJSCollectionIteratorIndex(pAVar15);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar35,(FieldAccess *)&local_a8);
  pNStack_c0 = local_d0;
  local_c8 = pNVar7;
  local_b8 = (AccessBuilder *)pNVar18;
  pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar34,pOVar14,3,&local_c8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  local_d0 = (Node *)pAVar19;
  AccessBuilder::ForJSCollectionIteratorTable(pAVar19);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar35,(FieldAccess *)&local_a8);
  pNStack_c0 = local_d0;
  local_c8 = pNVar7;
  local_b8 = (AccessBuilder *)pNVar18;
  pNVar10 = (Node *)Graph::NewNode(pGVar34,pOVar14,3,&local_c8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  local_d0 = pNVar10;
  pOVar14 = (Operator *)
            JSOperatorBuilder::CreateIterResultObject
                      ((JSOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2e]);
  pNVar9 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)pJVar31);
  local_a0 = (Node *)JSGraph::TrueConstant(*(JSGraph **)pJVar31);
  local_90 = local_d0;
  local_a8 = pNVar9;
  local_98 = pNVar8;
  pAVar15 = (AccessBuilder *)Graph::NewNode(pGVar34,pOVar14,4,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  local_d0 = (Node *)pAVar15;
  AccessBuilder::ForOrderedHashMapOrSetNumberOfBuckets(pAVar15);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar35,(FieldAccess *)&local_a8);
  pNStack_c0 = local_d0;
  local_c8 = pNVar10;
  local_b8 = (AccessBuilder *)pNVar18;
  pAVar23 = (AccessBuilder *)Graph::NewNode(pGVar34,pOVar14,3,&local_c8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  local_d0 = (Node *)pAVar23;
  AccessBuilder::ForOrderedHashMapOrSetNumberOfElements(pAVar23);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar35,(FieldAccess *)&local_a8);
  pNStack_c0 = local_d0;
  local_c8 = pNVar10;
  local_b8 = (AccessBuilder *)pNVar18;
  pAVar24 = (AccessBuilder *)Graph::NewNode(pGVar34,pOVar14,3,&local_c8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  local_d0 = (Node *)pAVar24;
  AccessBuilder::ForOrderedHashMapOrSetNumberOfDeletedElements(pAVar24);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar35,(FieldAccess *)&local_a8);
  pNStack_c0 = local_d0;
  local_c8 = pNVar10;
  local_b8 = (AccessBuilder *)pNVar18;
  pNVar9 = (Node *)Graph::NewNode(pGVar34,pOVar14,3,&local_c8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  local_d0 = pNVar9;
  pOVar14 = (Operator *)
            SimplifiedOperatorBuilder::NumberAdd
                      ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f]);
  local_a8 = (Node *)pAVar24;
  local_a0 = pNVar9;
  uVar25 = Graph::NewNode(pGVar34,pOVar14,2,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::Loop((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1],2);
  local_a8 = pNVar18;
  local_a0 = pNVar18;
  lVar6 = Graph::NewNode(pGVar34,pOVar14,2,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::EffectPhi
                      ((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1],2);
  local_a8 = local_d0;
  local_a0 = local_d0;
  local_98 = (Node *)lVar6;
  pNVar16 = (Node *)Graph::NewNode(pGVar34,pOVar14,3,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::Terminate((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1]);
  local_a8 = pNVar16;
  local_a0 = (Node *)lVar6;
  pNVar9 = (Node *)Graph::NewNode(pGVar34,pOVar14,2,&local_a8,false);
  NodeProperties::MergeControlToEnd
            ((Graph *)**(undefined8 **)pJVar31,(CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1]
             ,pNVar9);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::Phi((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1],8,2);
  local_a8 = (Node *)pAVar19;
  local_a0 = (Node *)pAVar19;
  local_98 = (Node *)lVar6;
  pNVar17 = (Node *)Graph::NewNode(pGVar34,pOVar14,3,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pCVar2 = (CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1];
  lVar22 = TypeCache::Get();
  pOVar14 = (Operator *)CommonOperatorBuilder::TypeGuard(pCVar2,*(undefined8 *)(lVar22 + 0x1b0));
  local_a8 = pNVar17;
  local_a0 = pNVar16;
  local_98 = pNVar18;
  pNVar18 = (Node *)Graph::NewNode(pGVar34,pOVar14,3,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  local_d0 = pNVar18;
  pOVar14 = (Operator *)
            SimplifiedOperatorBuilder::NumberLessThan
                      ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f]);
  local_a8 = pNVar18;
  local_a0 = (Node *)uVar25;
  pNVar9 = (Node *)Graph::NewNode(pGVar34,pOVar14,2,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1],1,1)
  ;
  local_a8 = pNVar9;
  local_a0 = (Node *)lVar6;
  pNVar21 = (Node *)Graph::NewNode(pGVar34,pOVar14,2,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1]);
  local_a8 = pNVar21;
  pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar34,pOVar14,1,&local_a8,false);
  pNVar9 = local_d0;
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  AccessBuilder::ForJSCollectionIteratorTable(pAVar19);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar35,(FieldAccess *)&local_a8);
  pNStack_c0 = (Node *)JSGraph::HeapConstant(*(JSGraph **)pJVar31,param_4);
  local_b8 = (AccessBuilder *)pNVar9;
  local_c8 = pNVar7;
  pAStack_b0 = pAVar19;
  local_e8 = (Node *)Graph::NewNode(pGVar34,pOVar14,4,&local_c8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  local_f8 = pAVar19;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1]);
  local_a8 = pNVar21;
  pNVar21 = (Node *)Graph::NewNode(pGVar34,pOVar14,1,&local_a8,false);
  pNVar9 = local_d0;
  this_00 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            SimplifiedOperatorBuilder::NumberAdd
                      ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f]);
  pGVar33 = (Graph *)**(undefined8 **)pJVar31;
  pOVar26 = (Operator *)
            SimplifiedOperatorBuilder::NumberAdd
                      ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f]);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar27 = (Operator *)
            SimplifiedOperatorBuilder::NumberMultiply
                      ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f]);
  local_a0 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar31,(double)param_2);
  local_a8 = pNVar18;
  local_a8 = (Node *)Graph::NewNode(pGVar34,pOVar27,2,&local_a8,false);
  local_a0 = (Node *)pAVar23;
  pNVar28 = (Node *)Graph::NewNode(pGVar33,pOVar26,2,&local_a8,false);
  local_a0 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar31,3.0);
  local_a8 = pNVar28;
  pAVar19 = (AccessBuilder *)Graph::NewNode(this_00,pOVar14,2,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  AccessBuilder::ForFixedArrayElement(pAVar19);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::LoadElement(pSVar35,(ElementAccess *)&local_c8);
  local_98 = pNVar9;
  local_a8 = pNVar10;
  local_a0 = (Node *)pAVar19;
  local_90 = pNVar21;
  pNVar28 = (Node *)Graph::NewNode(pGVar34,pOVar14,4,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            SimplifiedOperatorBuilder::NumberAdd
                      ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f]);
  local_a0 = (Node *)JSGraph::OneConstant(*(JSGraph **)pJVar31);
  local_a8 = pNVar18;
  pNVar18 = (Node *)Graph::NewNode(pGVar34,pOVar14,2,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            SimplifiedOperatorBuilder::ReferenceEqual
                      ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f]);
  local_a0 = (Node *)JSGraph::TheHoleConstant(*(JSGraph **)pJVar31);
  local_a8 = pNVar28;
  pNVar9 = (Node *)Graph::NewNode(pGVar34,pOVar14,2,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1],2,1)
  ;
  local_a8 = pNVar9;
  local_a0 = pNVar21;
  pNVar21 = (Node *)Graph::NewNode(pGVar34,pOVar14,2,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1]);
  local_a8 = pNVar21;
  pNVar29 = (Node *)Graph::NewNode(pGVar34,pOVar14,1,&local_a8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::TypeGuard
                      ((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1],0xc7f7fff);
  local_a8 = pNVar28;
  local_a0 = pNVar28;
  local_98 = pNVar29;
  pNVar9 = (Node *)Graph::NewNode(pGVar34,pOVar14,3,&local_a8,false);
  pAVar23 = (AccessBuilder *)JSGraph::FalseConstant(*(JSGraph **)pJVar31);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  AccessBuilder::ForJSCollectionIteratorIndex(pAVar23);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar35,(FieldAccess *)&local_a8);
  local_c8 = pNVar7;
  pNStack_c0 = pNVar18;
  local_b8 = (AccessBuilder *)pNVar9;
  pAStack_b0 = (AccessBuilder *)pNVar29;
  pAVar24 = (AccessBuilder *)Graph::NewNode(pGVar34,pOVar14,4,&local_c8,false);
  switch(uVar4) {
  case 0x412:
  case 0x416:
    goto switchD_016f327c_caseD_412;
  case 0x413:
    pGVar33 = (Graph *)**(undefined8 **)pJVar31;
    pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
    AccessBuilder::ForFixedArrayElement(pAVar24);
    pOVar14 = (Operator *)SimplifiedOperatorBuilder::LoadElement(pSVar35,(ElementAccess *)&local_c8)
    ;
    pGVar34 = (Graph *)**(undefined8 **)pJVar31;
    pOVar26 = (Operator *)
              SimplifiedOperatorBuilder::NumberAdd
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f]);
    local_a0 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar31,1.0);
    local_a8 = (Node *)pAVar19;
    local_a0 = (Node *)Graph::NewNode(pGVar34,pOVar26,2,&local_a8,false);
    local_a8 = pNVar10;
    local_98 = (Node *)pAVar24;
    local_90 = pNVar29;
    pNVar7 = (Node *)Graph::NewNode(pGVar33,pOVar14,4,&local_a8,false);
    pGVar34 = (Graph *)**(undefined8 **)pJVar31;
    pOVar14 = (Operator *)
              JSOperatorBuilder::CreateKeyValueArray
                        ((JSOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2e]);
    local_a8 = pNVar28;
    local_a0 = pNVar7;
    local_98 = pNVar8;
    local_90 = pNVar7;
    break;
  case 0x414:
    pGVar34 = (Graph *)**(undefined8 **)pJVar31;
    pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
    AccessBuilder::ForFixedArrayElement(pAVar24);
    pOVar14 = (Operator *)SimplifiedOperatorBuilder::LoadElement(pSVar35,(ElementAccess *)&local_c8)
    ;
    pGVar33 = (Graph *)**(undefined8 **)pJVar31;
    pOVar26 = (Operator *)
              SimplifiedOperatorBuilder::NumberAdd
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f]);
    local_a0 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar31,1.0);
    local_a8 = (Node *)pAVar19;
    local_a0 = (Node *)Graph::NewNode(pGVar33,pOVar26,2,&local_a8,false);
    local_a8 = pNVar10;
    local_98 = (Node *)pAVar24;
    local_90 = pNVar29;
    break;
  case 0x415:
    pGVar34 = (Graph *)**(undefined8 **)pJVar31;
    pOVar14 = (Operator *)
              JSOperatorBuilder::CreateKeyValueArray
                        ((JSOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2e]);
    local_a8 = pNVar9;
    local_a0 = pNVar9;
    local_98 = pNVar8;
    local_90 = (Node *)pAVar24;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pAVar24 = (AccessBuilder *)Graph::NewNode(pGVar34,pOVar14,4,&local_a8,false);
  pNVar9 = (Node *)pAVar24;
switchD_016f327c_caseD_412:
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  AccessBuilder::ForJSIteratorResultValue(pAVar24);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar35,(FieldAccess *)&local_a8);
  local_c8 = (Node *)pAVar15;
  pNStack_c0 = pNVar9;
  local_b8 = pAVar24;
  pAStack_b0 = (AccessBuilder *)pNVar29;
  pAVar19 = (AccessBuilder *)Graph::NewNode(pGVar34,pOVar14,4,&local_c8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  pSVar35 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar31)[0x2f];
  AccessBuilder::ForJSIteratorResultDone(pAVar19);
  pOVar14 = (Operator *)SimplifiedOperatorBuilder::StoreField(pSVar35,(FieldAccess *)&local_a8);
  local_c8 = (Node *)pAVar15;
  pNStack_c0 = (Node *)pAVar23;
  local_b8 = pAVar19;
  pAStack_b0 = (AccessBuilder *)pNVar29;
  local_e0 = Graph::NewNode(pGVar34,pOVar14,4,&local_c8,false);
  pGVar34 = (Graph *)**(undefined8 **)pJVar31;
  local_f0 = pNVar29;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar31)[1]);
  local_a8 = pNVar21;
  pNVar7 = (Node *)Graph::NewNode(pGVar34,pOVar14,1,&local_a8,false);
  plVar12 = (long *)(lVar6 + 0x20);
  uVar1 = *(uint *)(lVar6 + 0x14) & 0xf000000;
  plVar32 = plVar12;
  if (uVar1 == 0xf000000) {
    plVar32 = (long *)(*plVar12 + 0x10);
  }
  pNVar8 = (Node *)plVar32[1];
  if (pNVar8 != pNVar7) {
    if (uVar1 == 0xf000000) {
      lVar6 = *plVar12;
    }
    if (pNVar8 != (Node *)0x0) {
      Node::RemoveUse(pNVar8,(Use *)(lVar6 + -0x30));
    }
    plVar32[1] = (long)pNVar7;
    if (pNVar7 != (Node *)0x0) {
      Node::AppendUse(pNVar7,(Use *)(lVar6 + -0x30));
    }
  }
  pNVar7 = pNVar16 + 0x20;
  pNVar8 = pNVar7;
  if ((*(uint *)(pNVar16 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar8 = (Node *)(*(long *)pNVar7 + 0x10);
  }
  pNVar9 = *(Node **)(pNVar8 + 8);
  if (pNVar9 != pNVar28) {
    if ((*(uint *)(pNVar16 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar16 = *(Node **)pNVar7;
    }
    if (pNVar9 != (Node *)0x0) {
      Node::RemoveUse(pNVar9,(Use *)(pNVar16 + -0x30));
    }
    *(Node **)(pNVar8 + 8) = pNVar28;
    if (pNVar28 != (Node *)0x0) {
      Node::AppendUse(pNVar28,(Use *)(pNVar16 + -0x30));
    }
  }
  pNVar7 = pNVar17 + 0x20;
  pNVar8 = pNVar7;
  if ((*(uint *)(pNVar17 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar8 = (Node *)(*(long *)pNVar7 + 0x10);
  }
  pNVar9 = *(Node **)(pNVar8 + 8);
  if (pNVar9 != pNVar18) {
    if ((*(uint *)(pNVar17 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar17 = *(Node **)pNVar7;
    }
    if (pNVar9 != (Node *)0x0) {
      Node::RemoveUse(pNVar9,(Use *)(pNVar17 + -0x30));
    }
    *(Node **)(pNVar8 + 8) = pNVar18;
    if (pNVar18 != (Node *)0x0) {
      Node::AppendUse(pNVar18,(Use *)(pNVar17 + -0x30));
    }
  }
  pGVar34 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar14 = (Operator *)
            CommonOperatorBuilder::Merge
                      ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
  piVar30 = (int *)Graph::NewNode(pGVar34,pOVar14,2,(Node **)&local_f8,false);
  pGVar34 = (Graph *)**(undefined8 **)(this + 0x10);
  local_d8 = piVar30;
  pOVar14 = (Operator *)
            CommonOperatorBuilder::EffectPhi
                      ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
  local_d0 = (Node *)Graph::NewNode(pGVar34,pOVar14,3,&local_e8,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pAVar15,local_d0,piVar30)
  ;
LAB_016f3358:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pAVar15;
}

