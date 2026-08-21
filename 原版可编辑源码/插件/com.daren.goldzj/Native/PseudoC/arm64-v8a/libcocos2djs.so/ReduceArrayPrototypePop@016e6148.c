
/* v8::internal::compiler::JSCallReducer::ReduceArrayPrototypePop(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayPrototypePop(JSCallReducer *this,Node *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  Node *pNVar5;
  Node *pNVar6;
  ulong uVar7;
  undefined8 uVar8;
  Operator *pOVar9;
  Node *pNVar10;
  Node *pNVar11;
  Node *pNVar12;
  Node *pNVar13;
  Node *pNVar14;
  AccessBuilder *this_00;
  undefined8 uVar15;
  undefined8 uVar16;
  AccessBuilder *pAVar17;
  Graph *pGVar18;
  SimplifiedOperatorBuilder *pSVar19;
  JSCallReducer *pJVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  Node *local_178;
  Node *local_170;
  Node **local_168;
  Node **local_160;
  Node **ppNStack_158;
  Node **local_150;
  Node **local_148;
  Node **local_140;
  Node **local_138;
  Node **local_130;
  Node **ppNStack_128;
  void *local_120;
  void *local_118;
  undefined8 uStack_110;
  Node *local_108;
  Node *local_100;
  Node *local_f8;
  Node *pNStack_f0;
  Node *local_e8;
  AccessBuilder *pAStack_e0;
  Node *local_d8;
  Node *pNStack_d0;
  Node *local_c8;
  AccessBuilder *pAStack_c0;
  AccessBuilder *local_b8;
  MapInference aMStack_a0 [48];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar4 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar4 + 3) >> 4 & 1) == 0) {
    pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,1);
    pNVar6 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    local_100 = pNVar6;
    local_108 = (Node *)NodeProperties::GetControlInput(param_1,0);
    MapInference::MapInference(aMStack_a0,*(JSHeapBroker **)(this + 0x18),pNVar5,pNVar6);
    uVar7 = MapInference::HaveMaps(aMStack_a0);
    if ((uVar7 & 1) == 0) {
      pNVar5 = (Node *)0x0;
    }
    else {
      uVar8 = MapInference::GetMaps(aMStack_a0);
      local_118 = (void *)0x0;
      uStack_110 = 0;
      local_120 = (void *)0x0;
      uVar7 = FUN_016f4a24(*(undefined8 *)(this + 0x18),uVar8,&local_120,0);
      if ((uVar7 & 1) == 0) {
        pNVar5 = (Node *)MapInference::NoChange(aMStack_a0);
      }
      else {
        uVar7 = CompilationDependencies::DependOnNoElementsProtector
                          (*(CompilationDependencies **)(this + 0x30));
        if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pJVar20 = this + 0x10;
        MapInference::RelyOnMapsPreferStability
                  (aMStack_a0,*(CompilationDependencies **)(this + 0x30),*(JSGraph **)pJVar20,
                   &local_100,local_108,(FeedbackSource *)(lVar4 + 8));
        local_130 = (Node **)0x0;
        ppNStack_128 = (Node **)0x0;
        local_140 = (Node **)0x0;
        local_138 = (Node **)0x0;
        local_150 = (Node **)0x0;
        local_148 = (Node **)0x0;
        local_160 = (Node **)0x0;
        ppNStack_158 = (Node **)0x0;
        local_168 = (Node **)0x0;
        local_170 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)pJVar20);
        uVar8 = LoadReceiverElementsKind(this,pNVar5,&local_100,&local_108);
        pNVar6 = local_100;
        uVar7 = (long)local_118 - (long)local_120;
        local_178 = local_108;
        if (uVar7 != 0) {
          uVar23 = 0;
          do {
            bVar1 = *(byte *)((long)local_120 + uVar23);
            uVar22 = (ulong)bVar1;
            local_108 = local_178;
            local_100 = pNVar6;
            if (uVar23 != uVar7 - 1) {
              CheckIfElementsKind(this,uVar8,uVar22,local_178,&local_108,&local_178);
            }
            pGVar18 = (Graph *)**(undefined8 **)pJVar20;
            pSVar19 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar20)[0x2f];
            AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_d8,uVar22);
            pOVar9 = (Operator *)
                     SimplifiedOperatorBuilder::LoadField(pSVar19,(FieldAccess *)&local_d8);
            pNStack_f0 = local_100;
            local_e8 = local_108;
            local_f8 = pNVar5;
            pNVar10 = (Node *)Graph::NewNode(pGVar18,pOVar9,3,&local_f8,false);
            pGVar18 = (Graph *)**(undefined8 **)pJVar20;
            local_100 = pNVar10;
            pOVar9 = (Operator *)
                     SimplifiedOperatorBuilder::NumberEqual
                               ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar20)[0x2f]);
            pNStack_d0 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)pJVar20);
            local_d8 = pNVar10;
            pNVar11 = (Node *)Graph::NewNode(pGVar18,pOVar9,2,&local_d8,false);
            pGVar18 = (Graph *)**(undefined8 **)pJVar20;
            pOVar9 = (Operator *)
                     CommonOperatorBuilder::Branch
                               ((CommonOperatorBuilder *)(*(undefined8 **)pJVar20)[1],2,1);
            pNStack_d0 = local_108;
            local_d8 = pNVar11;
            pNVar12 = (Node *)Graph::NewNode(pGVar18,pOVar9,2,&local_d8,false);
            pGVar18 = (Graph *)**(undefined8 **)pJVar20;
            pOVar9 = (Operator *)
                     CommonOperatorBuilder::IfTrue
                               ((CommonOperatorBuilder *)(*(undefined8 **)pJVar20)[1]);
            local_d8 = pNVar12;
            pNVar13 = (Node *)Graph::NewNode(pGVar18,pOVar9,1,&local_d8,false);
            pNVar11 = local_100;
            pNVar14 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)pJVar20);
            pGVar18 = (Graph *)**(undefined8 **)pJVar20;
            pOVar9 = (Operator *)
                     CommonOperatorBuilder::IfFalse
                               ((CommonOperatorBuilder *)(*(undefined8 **)pJVar20)[1]);
            local_d8 = pNVar12;
            this_00 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar9,1,&local_d8,false);
            pNVar12 = local_100;
            pGVar18 = (Graph *)**(undefined8 **)pJVar20;
            pSVar19 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar20)[0x2f];
            AccessBuilder::ForJSObjectElements(this_00);
            pOVar9 = (Operator *)
                     SimplifiedOperatorBuilder::LoadField(pSVar19,(FieldAccess *)&local_d8);
            pNStack_f0 = pNVar12;
            local_f8 = pNVar5;
            local_e8 = (Node *)this_00;
            pNVar12 = (Node *)Graph::NewNode(pGVar18,pOVar9,3,&local_f8,false);
            if (bVar1 < 4) {
              pGVar18 = (Graph *)**(undefined8 **)pJVar20;
              pOVar9 = (Operator *)
                       SimplifiedOperatorBuilder::EnsureWritableFastElements
                                 ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar20)[0x2f]);
              local_d8 = pNVar5;
              pNStack_d0 = pNVar12;
              local_c8 = pNVar12;
              pAStack_c0 = this_00;
              pNVar12 = (Node *)Graph::NewNode(pGVar18,pOVar9,4,&local_d8,false);
            }
            pGVar18 = (Graph *)**(undefined8 **)pJVar20;
            pOVar9 = (Operator *)
                     SimplifiedOperatorBuilder::NumberSubtract
                               ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar20)[0x2f]);
            pNStack_d0 = (Node *)JSGraph::OneConstant(*(JSGraph **)pJVar20);
            local_d8 = pNVar10;
            uVar15 = Graph::NewNode(pGVar18,pOVar9,2,&local_d8,false);
            pGVar18 = (Graph *)**(undefined8 **)pJVar20;
            pSVar19 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar20)[0x2f];
            AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_d8,uVar22);
            pOVar9 = (Operator *)
                     SimplifiedOperatorBuilder::StoreField(pSVar19,(FieldAccess *)&local_d8);
            local_f8 = pNVar5;
            pNStack_f0 = (Node *)uVar15;
            local_e8 = pNVar12;
            pAStack_e0 = this_00;
            uVar16 = Graph::NewNode(pGVar18,pOVar9,4,&local_f8,false);
            pGVar18 = (Graph *)**(undefined8 **)pJVar20;
            pSVar19 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar20)[0x2f];
            AccessBuilder::ForFixedArrayElement((AccessBuilder *)&local_f8,bVar1,1);
            pOVar9 = (Operator *)
                     SimplifiedOperatorBuilder::LoadElement(pSVar19,(ElementAccess *)&local_f8);
            local_d8 = pNVar12;
            pNStack_d0 = (Node *)uVar15;
            local_c8 = (Node *)uVar16;
            pAStack_c0 = this_00;
            pAVar17 = (AccessBuilder *)Graph::NewNode(pGVar18,pOVar9,4,&local_d8,false);
            pGVar18 = (Graph *)**(undefined8 **)pJVar20;
            pSVar19 = (SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar20)[0x2f];
            uVar21 = (uint)bVar1;
            if ((bVar1 < 7) && ((0x55U >> (ulong)(uVar21 & 0x1f) & 1) != 0)) {
              uVar7 = 0x7010501030101 >> ((uVar22 & 7) << 3);
            }
            else {
              uVar7 = (ulong)uVar21;
            }
            AccessBuilder::ForFixedArrayElement((AccessBuilder *)&local_f8,uVar7,1);
            pOVar9 = (Operator *)
                     SimplifiedOperatorBuilder::StoreElement(pSVar19,(ElementAccess *)&local_f8);
            local_c8 = (Node *)JSGraph::TheHoleConstant(*(JSGraph **)pJVar20);
            local_d8 = pNVar12;
            pNStack_d0 = (Node *)uVar15;
            pAStack_c0 = pAVar17;
            local_b8 = this_00;
            uVar15 = Graph::NewNode(pGVar18,pOVar9,5,&local_d8,false);
            pGVar18 = (Graph *)**(undefined8 **)pJVar20;
            pOVar9 = (Operator *)
                     CommonOperatorBuilder::Merge
                               ((CommonOperatorBuilder *)(*(undefined8 **)pJVar20)[1],2);
            local_d8 = pNVar13;
            pNStack_d0 = (Node *)this_00;
            local_108 = (Node *)Graph::NewNode(pGVar18,pOVar9,2,&local_d8,false);
            pGVar18 = (Graph *)**(undefined8 **)pJVar20;
            pOVar9 = (Operator *)
                     CommonOperatorBuilder::EffectPhi
                               ((CommonOperatorBuilder *)(*(undefined8 **)pJVar20)[1],2);
            local_d8 = pNVar11;
            local_c8 = local_108;
            pNStack_d0 = (Node *)uVar15;
            local_100 = (Node *)Graph::NewNode(pGVar18,pOVar9,3,&local_d8,false);
            pGVar18 = (Graph *)**(undefined8 **)pJVar20;
            pOVar9 = (Operator *)
                     CommonOperatorBuilder::Phi
                               ((CommonOperatorBuilder *)(*(undefined8 **)pJVar20)[1],8,2);
            local_c8 = local_108;
            local_d8 = pNVar14;
            pNStack_d0 = (Node *)pAVar17;
            local_170 = (Node *)Graph::NewNode(pGVar18,pOVar9,3,&local_d8,false);
            if ((uVar21 < 6) && ((bVar1 & 1) != 0)) {
              pGVar18 = (Graph *)**(undefined8 **)pJVar20;
              pOVar9 = (Operator *)
                       SimplifiedOperatorBuilder::ConvertTaggedHoleToUndefined
                                 ((SimplifiedOperatorBuilder *)(*(undefined8 **)pJVar20)[0x2f]);
              local_d8 = local_170;
              local_170 = (Node *)Graph::NewNode(pGVar18,pOVar9,1,&local_d8,false);
            }
            if (local_130 == ppNStack_128) {
              std::__ndk1::
              vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
              ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                        ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                          *)&local_138,&local_108);
            }
            else {
              *local_130 = local_108;
              local_130 = local_130 + 1;
            }
            if (local_148 == local_140) {
              std::__ndk1::
              vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
              ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                        ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                          *)&local_150,&local_100);
            }
            else {
              *local_148 = local_100;
              local_148 = local_148 + 1;
            }
            if (local_160 == ppNStack_158) {
              std::__ndk1::
              vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
              ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                        ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                          *)&local_168,&local_170);
            }
            else {
              *local_160 = local_170;
              local_160 = local_160 + 1;
            }
            uVar23 = uVar23 + 1;
            uVar7 = (long)local_118 - (long)local_120;
          } while (uVar23 < uVar7);
        }
        if (1 < (ulong)((long)local_130 - (long)local_138 >> 3)) {
          uVar7 = (ulong)((long)local_130 - (long)local_138) >> 3;
          iVar3 = (int)uVar7;
          pGVar18 = (Graph *)**(undefined8 **)pJVar20;
          pOVar9 = (Operator *)
                   CommonOperatorBuilder::Merge
                             ((CommonOperatorBuilder *)(*(undefined8 **)pJVar20)[1],iVar3);
          local_108 = (Node *)Graph::NewNode(pGVar18,pOVar9,iVar3,local_138,false);
          if (local_148 == local_140) {
            std::__ndk1::
            vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
            ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                      ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                        *)&local_150,&local_108);
          }
          else {
            *local_148 = local_108;
            local_148 = local_148 + 1;
          }
          pGVar18 = (Graph *)**(undefined8 **)pJVar20;
          pOVar9 = (Operator *)
                   CommonOperatorBuilder::EffectPhi
                             ((CommonOperatorBuilder *)(*(undefined8 **)pJVar20)[1],iVar3);
          local_100 = (Node *)Graph::NewNode(pGVar18,pOVar9,iVar3 + 1,local_150,false);
          if (local_160 == ppNStack_158) {
            std::__ndk1::
            vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
            ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                      ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                        *)&local_168,&local_108);
          }
          else {
            *local_160 = local_108;
            local_160 = local_160 + 1;
          }
          pGVar18 = (Graph *)**(undefined8 **)pJVar20;
          pOVar9 = (Operator *)
                   CommonOperatorBuilder::Phi
                             ((CommonOperatorBuilder *)(*(undefined8 **)pJVar20)[1],8,
                              uVar7 & 0xffffffff);
          local_170 = (Node *)Graph::NewNode(pGVar18,pOVar9,iVar3 + 1,local_168,false);
        }
        (**(code **)(**(long **)(this + 8) + 0x20))
                  (*(long **)(this + 8),param_1,local_170,local_100,local_108);
        pNVar5 = local_170;
        if (local_168 != (Node **)0x0) {
          local_160 = local_168;
          operator_delete(local_168);
        }
        if (local_150 != (Node **)0x0) {
          local_148 = local_150;
          operator_delete(local_150);
        }
        if (local_138 != (Node **)0x0) {
          local_130 = local_138;
          operator_delete(local_138);
        }
      }
      if (local_120 != (void *)0x0) {
        local_118 = local_120;
        operator_delete(local_120);
      }
    }
    MapInference::~MapInference(aMStack_a0);
  }
  else {
    pNVar5 = (Node *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pNVar5;
}

