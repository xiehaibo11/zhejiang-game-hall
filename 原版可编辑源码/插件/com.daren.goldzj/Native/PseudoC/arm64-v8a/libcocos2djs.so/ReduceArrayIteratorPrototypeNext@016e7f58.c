
/* v8::internal::compiler::JSCallReducer::ReduceArrayIteratorPrototypeNext(v8::internal::compiler::Node*)
    */

AccessBuilder * __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayIteratorPrototypeNext
          (JSCallReducer *this,Node *param_1)

{
  FeedbackSource *pFVar1;
  undefined8 *puVar2;
  CommonOperatorBuilder *pCVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  Node *pNVar8;
  AccessBuilder *pAVar9;
  Node *pNVar10;
  int *piVar11;
  Node *pNVar12;
  Node *pNVar13;
  ulong uVar14;
  long *plVar15;
  AccessBuilder *pAVar16;
  Operator *pOVar17;
  Operator *pOVar18;
  long lVar19;
  AccessBuilder *pAVar20;
  AccessBuilder *pAVar21;
  AccessBuilder *pAVar22;
  undefined8 uVar23;
  AccessBuilder *pAVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined8 *puVar28;
  JSGraph *this_00;
  Graph *pGVar29;
  JSCallReducer *pJVar30;
  SimplifiedOperatorBuilder *pSVar31;
  Graph *this_01;
  double dVar32;
  undefined4 local_170;
  byte local_16c [4];
  AccessBuilder *local_168;
  Node *local_160;
  AccessBuilder *pAStack_158;
  AccessBuilder *local_150;
  Node *local_148;
  AccessBuilder *local_140;
  Node *local_138;
  AccessBuilder *local_130;
  AccessBuilder *local_128;
  AccessBuilder *pAStack_120;
  Node *local_110;
  AccessBuilder *pAStack_108;
  Node *local_100;
  Type aTStack_f8 [32];
  Node *local_d8;
  Node *pNStack_d0;
  Node *local_c8;
  undefined8 local_c0 [4];
  MapInference aMStack_a0 [48];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  lVar7 = CallParametersOf(*(Operator **)param_1);
  pNVar8 = (Node *)NodeProperties::GetValueInput(param_1,1);
  pAVar9 = (AccessBuilder *)NodeProperties::GetContextInput(param_1);
  local_168 = (AccessBuilder *)NodeProperties::GetEffectInput(param_1,0);
  pNVar10 = (Node *)NodeProperties::GetControlInput(param_1,0);
  if (((*(byte *)(lVar7 + 3) >> 4 & 1) != 0) || (*(short *)(*(Operator **)pNVar8 + 0x10) != 0x2d7))
  {
    pAVar9 = (AccessBuilder *)0x0;
    goto LAB_016e8ae0;
  }
  piVar11 = (int *)CreateArrayIteratorParametersOf(*(Operator **)pNVar8);
  iVar4 = *piVar11;
  pNVar12 = (Node *)NodeProperties::GetValueInput(pNVar8,0);
  pNVar13 = (Node *)NodeProperties::GetEffectInput(pNVar8,0);
  MapInference::MapInference(aMStack_a0,*(JSHeapBroker **)(this + 0x18),pNVar12,pNVar13);
  uVar14 = MapInference::HaveMaps(aMStack_a0);
  if ((uVar14 & 1) == 0) {
    pAVar9 = (AccessBuilder *)0x0;
  }
  else {
    plVar15 = (long *)MapInference::GetMaps(aMStack_a0);
    ObjectRef::ObjectRef
              ((ObjectRef *)&local_d8,*(undefined8 *)(this + 0x18),*(undefined8 *)*plVar15,0);
    uVar14 = ObjectRef::IsMap((ObjectRef *)&local_d8);
    if ((uVar14 & 1) == 0) {
LAB_016e8b18:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    local_16c[0] = MapRef::elements_kind((MapRef *)&local_d8);
    if ((byte)(local_16c[0] - 0x11) < 0xb) {
      if ((local_16c[0] & 0xfe) == 0x1a) {
LAB_016e83c8:
        pAVar9 = (AccessBuilder *)MapInference::NoChange(aMStack_a0);
        goto LAB_016e8ad8;
      }
      puVar28 = (undefined8 *)*plVar15;
      puVar2 = (undefined8 *)plVar15[1];
      if (puVar28 != puVar2) {
        do {
          ObjectRef::ObjectRef((ObjectRef *)&local_d8,*(undefined8 *)(this + 0x18),*puVar28,0);
          uVar14 = ObjectRef::IsMap((ObjectRef *)&local_d8);
          if ((uVar14 & 1) == 0) goto LAB_016e8b18;
          bVar6 = MapRef::elements_kind((MapRef *)&local_d8);
          if (local_16c[0] != bVar6) goto LAB_016e83c8;
          puVar28 = puVar28 + 1;
        } while (puVar2 != puVar28);
        goto LAB_016e810c;
      }
    }
    else {
      uVar14 = FUN_016e047c(*(undefined8 *)(this + 0x18),plVar15,local_16c);
      bVar6 = local_16c[0];
      if ((uVar14 & 1) == 0) goto LAB_016e83c8;
LAB_016e810c:
      if (((bVar6 < 6) && ((bVar6 & 1) != 0)) &&
         (uVar14 = CompilationDependencies::DependOnNoElementsProtector
                             (*(CompilationDependencies **)(this + 0x30)), (uVar14 & 1) == 0))
      goto switchD_016e8618_default;
    }
    pJVar30 = this + 0x10;
    pFVar1 = (FeedbackSource *)(lVar7 + 8);
    pAVar16 = (AccessBuilder *)
              MapInference::InsertMapChecks
                        (aMStack_a0,*(JSGraph **)pJVar30,(Node **)&local_168,pNVar10,pFVar1);
    if ((local_16c[0] - 0x11 < 0xb) &&
       (pAVar16 = (AccessBuilder *)
                  CompilationDependencies::DependOnArrayBufferDetachingProtector
                            (*(CompilationDependencies **)(this + 0x30)), ((ulong)pAVar16 & 1) == 0)
       ) {
      pGVar29 = (Graph *)**(undefined8 **)pJVar30;
      pSVar31 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f];
      AccessBuilder::ForJSArrayBufferViewBuffer(pAVar16);
      pOVar17 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar31,(FieldAccess *)&local_d8);
      pAStack_108 = local_168;
      local_110 = pNVar12;
      local_100 = pNVar10;
      pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,3,&local_110,false);
      pGVar29 = (Graph *)**(undefined8 **)pJVar30;
      pSVar31 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f];
      local_168 = pAVar16;
      AccessBuilder::ForJSArrayBufferBitField(pAVar16);
      pOVar17 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar31,(FieldAccess *)&local_d8);
      pAStack_108 = local_168;
      local_110 = (Node *)pAVar16;
      local_100 = pNVar10;
      pNVar13 = (Node *)Graph::NewNode(pGVar29,pOVar17,3,&local_110,false);
      pGVar29 = (Graph *)**(undefined8 **)pJVar30;
      local_168 = (AccessBuilder *)pNVar13;
      pOVar17 = (Operator *)
                SimplifiedOperatorBuilder::NumberEqual
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f]);
      this_01 = (Graph *)**(undefined8 **)pJVar30;
      pOVar18 = (Operator *)
                SimplifiedOperatorBuilder::NumberBitwiseAnd
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f]);
      pNStack_d0 = (Node *)JSGraph::Constant(*(JSGraph **)pJVar30,4.0);
      local_d8 = pNVar13;
      pNVar13 = (Node *)Graph::NewNode(this_01,pOVar18,2,&local_d8,false);
      pNStack_d0 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)pJVar30);
      local_d8 = pNVar13;
      pNVar13 = (Node *)Graph::NewNode(pGVar29,pOVar17,2,&local_d8,false);
      pGVar29 = (Graph *)**(undefined8 **)pJVar30;
      pOVar17 = (Operator *)
                SimplifiedOperatorBuilder::CheckIf
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f],0,pFVar1);
      pNStack_d0 = (Node *)local_168;
      local_d8 = pNVar13;
      local_c8 = pNVar10;
      pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,3,&local_d8,false);
      local_168 = pAVar16;
    }
    AccessBuilder::ForJSArrayIteratorNextIndex(pAVar16);
    uVar27 = (uint)local_16c[0];
    lVar19 = TypeCache::Get();
    lVar7 = 0x1e0;
    if (10 < uVar27 - 0x11) {
      lVar7 = 0x1c0;
    }
    local_c0[0] = *(undefined8 *)(lVar19 + lVar7);
    pGVar29 = (Graph *)**(undefined8 **)pJVar30;
    pOVar17 = (Operator *)
              SimplifiedOperatorBuilder::LoadField
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f],
                         (FieldAccess *)&local_d8);
    pAStack_108 = local_168;
    local_110 = pNVar8;
    local_100 = pNVar10;
    pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,3,&local_110,false);
    pGVar29 = (Graph *)**(undefined8 **)pJVar30;
    pSVar31 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f];
    local_168 = pAVar16;
    AccessBuilder::ForJSObjectElements(pAVar16);
    pOVar17 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar31,(FieldAccess *)&local_110);
    local_140 = local_168;
    local_148 = pNVar12;
    local_138 = pNVar10;
    pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,3,&local_148,false);
    local_168 = pAVar20;
    if (local_16c[0] - 0x11 < 0xb) {
      AccessBuilder::ForJSTypedArrayLength((AccessBuilder *)(ulong)local_16c[0]);
    }
    else {
      AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_110);
    }
    pGVar29 = (Graph *)**(undefined8 **)pJVar30;
    pOVar17 = (Operator *)
              SimplifiedOperatorBuilder::LoadField
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f],
                         (FieldAccess *)&local_110);
    local_140 = local_168;
    local_148 = pNVar12;
    local_138 = pNVar10;
    pAVar21 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,3,&local_148,false);
    pGVar29 = (Graph *)**(undefined8 **)pJVar30;
    local_168 = pAVar21;
    pOVar17 = (Operator *)
              SimplifiedOperatorBuilder::NumberLessThan
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f]);
    local_148 = (Node *)pAVar16;
    local_140 = pAVar21;
    pNVar13 = (Node *)Graph::NewNode(pGVar29,pOVar17,2,&local_148,false);
    pGVar29 = (Graph *)**(undefined8 **)pJVar30;
    pOVar17 = (Operator *)
              CommonOperatorBuilder::Branch
                        ((CommonOperatorBuilder *)(*(undefined8 **)pJVar30)[1],0,1);
    local_148 = pNVar13;
    local_140 = (AccessBuilder *)pNVar10;
    pNVar10 = (Node *)Graph::NewNode(pGVar29,pOVar17,2,&local_148,false);
    pAVar21 = local_168;
    pGVar29 = (Graph *)**(undefined8 **)pJVar30;
    pOVar17 = (Operator *)
              CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)pJVar30)[1]);
    local_148 = pNVar10;
    pAVar22 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,1,&local_148,false);
    pGVar29 = (Graph *)**(undefined8 **)pJVar30;
    pCVar3 = (CommonOperatorBuilder *)(*(undefined8 **)pJVar30)[1];
    dVar32 = (double)Type::Max(aTStack_f8);
    uVar23 = Type::Range(0.0,dVar32 + -1.0,*(Zone **)**(undefined8 **)pJVar30);
    pOVar17 = (Operator *)CommonOperatorBuilder::TypeGuard(pCVar3,uVar23);
    local_140 = pAVar21;
    local_148 = (Node *)pAVar16;
    local_138 = (Node *)pAVar22;
    pAVar24 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,3,&local_148,false);
    pNVar13 = (Node *)JSGraph::FalseConstant(*(JSGraph **)pJVar30);
    pAVar21 = pAVar24;
    pAVar16 = pAVar24;
    if (iVar4 != 0) {
      pGVar29 = (Graph *)**(undefined8 **)pJVar30;
      pSVar31 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f];
      if (local_16c[0] - 0x11 < 0xb) {
        AccessBuilder::ForJSTypedArrayBasePointer((AccessBuilder *)(ulong)local_16c[0]);
        pOVar17 = (Operator *)
                  SimplifiedOperatorBuilder::LoadField(pSVar31,(FieldAccess *)&local_148);
        local_160 = pNVar12;
        pAStack_158 = pAVar24;
        local_150 = pAVar22;
        pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,3,&local_160,false);
        pGVar29 = (Graph *)**(undefined8 **)pJVar30;
        pSVar31 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f];
        AccessBuilder::ForJSTypedArrayExternalPointer(pAVar16);
        pOVar17 = (Operator *)
                  SimplifiedOperatorBuilder::LoadField(pSVar31,(FieldAccess *)&local_148);
        local_160 = pNVar12;
        pAStack_158 = pAVar16;
        local_150 = pAVar22;
        pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,3,&local_160,false);
        local_170 = 1;
        switch(local_16c[0]) {
        case 0x11:
          local_170 = 2;
          break;
        case 0x12:
          local_170 = 1;
          break;
        case 0x13:
          local_170 = 4;
          break;
        case 0x14:
          local_170 = 3;
          break;
        case 0x15:
          local_170 = 6;
          break;
        case 0x16:
          local_170 = 5;
          break;
        case 0x17:
          local_170 = 7;
          break;
        case 0x18:
          local_170 = 8;
          break;
        case 0x19:
          local_170 = 9;
          break;
        case 0x1a:
          local_170 = 0xb;
          break;
        case 0x1b:
          local_170 = 10;
          break;
        default:
switchD_016e8618_default:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pGVar29 = (Graph *)**(undefined8 **)pJVar30;
        pSVar31 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f];
        AccessBuilder::ForJSArrayBufferViewBuffer(pAVar20);
        pOVar17 = (Operator *)
                  SimplifiedOperatorBuilder::LoadField(pSVar31,(FieldAccess *)&local_148);
        local_160 = pNVar12;
        pAStack_158 = pAVar20;
        local_150 = pAVar22;
        pAVar21 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,3,&local_160,false);
        pGVar29 = (Graph *)**(undefined8 **)pJVar30;
        pOVar17 = (Operator *)
                  SimplifiedOperatorBuilder::LoadTypedElement
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f],
                             (ExternalArrayType *)&local_170);
        local_148 = (Node *)pAVar21;
        local_140 = pAVar16;
        local_138 = (Node *)pAVar20;
        local_130 = pAVar24;
        local_128 = pAVar21;
        pAStack_120 = pAVar22;
        pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,6,&local_148,false);
        pAVar21 = pAVar16;
      }
      else {
        AccessBuilder::ForFixedArrayElement
                  ((AccessBuilder *)&local_160,(AccessBuilder *)(ulong)local_16c[0],1);
        pOVar17 = (Operator *)
                  SimplifiedOperatorBuilder::LoadElement(pSVar31,(ElementAccess *)&local_160);
        local_148 = (Node *)pAVar20;
        local_140 = pAVar24;
        local_138 = (Node *)pAVar24;
        local_130 = pAVar22;
        pAVar21 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,4,&local_148,false);
        if (local_16c[0] == 1) {
LAB_016e8688:
          pGVar29 = (Graph *)**(undefined8 **)pJVar30;
          pOVar17 = (Operator *)
                    SimplifiedOperatorBuilder::ConvertTaggedHoleToUndefined
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f]);
          local_148 = (Node *)pAVar21;
          pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,1,&local_148,false);
        }
        else if (local_16c[0] == 5) {
          pGVar29 = (Graph *)**(undefined8 **)pJVar30;
          pOVar17 = (Operator *)
                    SimplifiedOperatorBuilder::CheckFloat64Hole
                              ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f],1,pFVar1
                              );
          local_148 = (Node *)pAVar21;
          local_140 = pAVar21;
          local_138 = (Node *)pAVar22;
          pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,3,&local_148,false);
          pAVar21 = pAVar16;
        }
        else {
          pAVar16 = pAVar21;
          if (local_16c[0] == 3) goto LAB_016e8688;
        }
      }
      if (iVar4 == 2) {
        pGVar29 = (Graph *)**(undefined8 **)pJVar30;
        pOVar17 = (Operator *)
                  JSOperatorBuilder::CreateKeyValueArray
                            ((JSOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2e]);
        local_148 = (Node *)pAVar24;
        local_140 = pAVar16;
        local_138 = (Node *)pAVar9;
        local_130 = pAVar21;
        pAVar21 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,4,&local_148,false);
        pAVar16 = pAVar21;
      }
    }
    pGVar29 = (Graph *)**(undefined8 **)pJVar30;
    pOVar17 = (Operator *)
              SimplifiedOperatorBuilder::NumberAdd
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f]);
    local_140 = (AccessBuilder *)JSGraph::OneConstant(*(JSGraph **)pJVar30);
    local_148 = (Node *)pAVar24;
    uVar23 = Graph::NewNode(pGVar29,pOVar17,2,&local_148,false);
    pGVar29 = (Graph *)**(undefined8 **)pJVar30;
    pOVar17 = (Operator *)
              SimplifiedOperatorBuilder::StoreField
                        ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f],
                         (FieldAccess *)&local_d8);
    local_148 = pNVar8;
    local_140 = (AccessBuilder *)uVar23;
    local_138 = (Node *)pAVar21;
    local_130 = pAVar22;
    pNVar12 = (Node *)Graph::NewNode(pGVar29,pOVar17,4,&local_148,false);
    pAVar20 = local_168;
    pGVar29 = (Graph *)**(undefined8 **)pJVar30;
    pOVar17 = (Operator *)
              CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)pJVar30)[1]);
    local_148 = pNVar10;
    pAVar21 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,1,&local_148,false);
    uVar23 = JSGraph::TrueConstant(*(JSGraph **)pJVar30);
    uVar25 = JSGraph::UndefinedConstant(*(JSGraph **)pJVar30);
    if (10 < local_16c[0] - 0x11) {
      this_00 = *(JSGraph **)pJVar30;
      dVar32 = (double)Type::Max((Type *)local_c0);
      uVar26 = JSGraph::Constant(this_00,dVar32);
      pGVar29 = (Graph *)**(undefined8 **)pJVar30;
      pOVar17 = (Operator *)
                SimplifiedOperatorBuilder::StoreField
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar30)[0x2f],
                           (FieldAccess *)&local_d8);
      local_138 = (Node *)pAVar20;
      local_148 = pNVar8;
      local_140 = (AccessBuilder *)uVar26;
      local_130 = pAVar21;
      pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,4,&local_148,false);
    }
    pGVar29 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar17 = (Operator *)
              CommonOperatorBuilder::Merge
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_148 = (Node *)pAVar22;
    local_140 = pAVar21;
    uVar26 = Graph::NewNode(pGVar29,pOVar17,2,&local_148,false);
    pGVar29 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar17 = (Operator *)
              CommonOperatorBuilder::EffectPhi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
    local_148 = pNVar12;
    local_140 = pAVar20;
    local_138 = (Node *)uVar26;
    local_168 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,3,&local_148,false);
    pGVar29 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar17 = (Operator *)
              CommonOperatorBuilder::Phi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
    local_148 = (Node *)pAVar16;
    local_140 = (AccessBuilder *)uVar25;
    local_138 = (Node *)uVar26;
    pAVar16 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,3,&local_148,false);
    pGVar29 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar17 = (Operator *)
              CommonOperatorBuilder::Phi
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
    local_148 = pNVar13;
    local_140 = (AccessBuilder *)uVar23;
    local_138 = (Node *)uVar26;
    pAVar20 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,3,&local_148,false);
    pGVar29 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar17 = (Operator *)
              JSOperatorBuilder::CreateIterResultObject
                        ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e]);
    local_130 = local_168;
    local_148 = (Node *)pAVar16;
    local_140 = pAVar20;
    local_138 = (Node *)pAVar9;
    pAVar9 = (AccessBuilder *)Graph::NewNode(pGVar29,pOVar17,4,&local_148,false);
    local_168 = pAVar9;
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pAVar9,pAVar9,uVar26);
  }
LAB_016e8ad8:
  MapInference::~MapInference(aMStack_a0);
LAB_016e8ae0:
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pAVar9;
}

