
/* v8::internal::compiler::JSCallReducer::ReduceArrayPrototypePush(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceArrayPrototypePush(JSCallReducer *this,Node *param_1)

{
  FeedbackSource *pFVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  Node *pNVar7;
  Node *pNVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *__s;
  undefined8 uVar11;
  Operator *pOVar12;
  Node *pNVar13;
  AccessBuilder *this_00;
  AccessBuilder *this_01;
  Node *pNVar14;
  Operator *pOVar15;
  Node *pNVar16;
  ulong uVar17;
  ulong uVar18;
  ulong __n;
  ulong uVar19;
  undefined8 *puVar20;
  Graph *pGVar21;
  Node *pNVar22;
  undefined8 *puVar23;
  SimplifiedOperatorBuilder *pSVar24;
  ulong uVar25;
  Graph *this_02;
  Node *local_188;
  Node *local_180;
  Node **local_178;
  Node **local_170;
  Node **ppNStack_168;
  Node **local_160;
  Node **local_158;
  Node **local_150;
  Node **local_148;
  Node **local_140;
  Node **ppNStack_138;
  void *local_130;
  void *local_128;
  undefined8 uStack_120;
  Node *local_118;
  Node *local_110;
  Node *local_108;
  Node *pNStack_100;
  Node *local_f8;
  Node *pNStack_f0;
  Node *local_e8;
  Node *pNStack_e0;
  Node *local_d8;
  Node *pNStack_d0;
  Node *local_c8;
  Node *pNStack_c0;
  MapInference aMStack_b0 [48];
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  lVar6 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar6 + 3) >> 4 & 1) == 0) {
    iVar2 = *(int *)(*(long *)param_1 + 0x14);
    pNVar7 = (Node *)NodeProperties::GetValueInput(param_1,1);
    pNVar8 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    local_110 = pNVar8;
    local_118 = (Node *)NodeProperties::GetControlInput(param_1,0);
    MapInference::MapInference(aMStack_b0,*(JSHeapBroker **)(this + 0x18),pNVar7,pNVar8);
    uVar9 = MapInference::HaveMaps(aMStack_b0);
    if ((uVar9 & 1) == 0) {
      pNVar7 = (Node *)0x0;
    }
    else {
      uVar10 = MapInference::GetMaps(aMStack_b0);
      local_128 = (void *)0x0;
      uStack_120 = 0;
      local_130 = (void *)0x0;
      uVar9 = FUN_016f4a24(*(undefined8 *)(this + 0x18),uVar10,&local_130,1);
      if ((uVar9 & 1) == 0) {
        pNVar7 = (Node *)MapInference::NoChange(aMStack_b0);
      }
      else {
        uVar9 = CompilationDependencies::DependOnNoElementsProtector
                          (*(CompilationDependencies **)(this + 0x30));
        if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pFVar1 = (FeedbackSource *)(lVar6 + 8);
        MapInference::RelyOnMapsPreferStability
                  (aMStack_b0,*(CompilationDependencies **)(this + 0x30),*(JSGraph **)(this + 0x10),
                   &local_110,local_118,pFVar1);
        local_140 = (Node **)0x0;
        ppNStack_138 = (Node **)0x0;
        local_150 = (Node **)0x0;
        local_148 = (Node **)0x0;
        local_160 = (Node **)0x0;
        local_158 = (Node **)0x0;
        local_170 = (Node **)0x0;
        ppNStack_168 = (Node **)0x0;
        local_178 = (Node **)0x0;
        local_180 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
        uVar10 = LoadReceiverElementsKind(this,pNVar7,&local_110,&local_118);
        pNVar8 = local_110;
        uVar9 = (long)local_128 - (long)local_130;
        local_188 = local_118;
        if (uVar9 != 0) {
          uVar4 = iVar2 - 2;
          uVar25 = (ulong)uVar4;
          uVar18 = (ulong)(int)uVar4;
          uVar19 = 0;
          uVar17 = uVar18 & 0xfffffffffffffffe;
          __n = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar25 << 3;
          do {
            bVar3 = *(byte *)((long)local_130 + uVar19);
            local_118 = local_188;
            local_110 = pNVar8;
            if (uVar19 != uVar9 - 1) {
              CheckIfElementsKind(this,uVar10,bVar3,local_188,&local_118,&local_188);
            }
            if (uVar4 == 0) {
              __s = (undefined8 *)0x0;
              puVar20 = (undefined8 *)0x0;
            }
            else {
              if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              __s = operator_new(__n);
              memset(__s,0,__n);
              uVar9 = uVar18;
              puVar20 = __s;
              if (uVar4 < 2) {
LAB_016e5a70:
                do {
                  uVar9 = uVar9 - 1;
                  puVar20 = puVar20 + 1;
                } while (uVar9 != 0);
              }
              else {
                puVar20 = __s + uVar17;
                uVar9 = uVar17;
                do {
                  uVar9 = uVar9 - 2;
                } while (uVar9 != 0);
                uVar9 = uVar18 - uVar17;
                if (uVar17 != uVar18) goto LAB_016e5a70;
              }
              if (0 < (int)uVar4) {
                uVar9 = 0;
                do {
                  uVar11 = NodeProperties::GetValueInput(param_1,(int)uVar9 + 2);
                  __s[uVar9] = uVar11;
                  uVar9 = uVar9 + 1;
                } while (uVar25 != uVar9);
              }
            }
            if (__s != puVar20) {
              puVar23 = __s;
              if (1 < bVar3) goto LAB_016e5b2c;
LAB_016e5ad4:
              pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar12 = (Operator *)
                        SimplifiedOperatorBuilder::CheckSmi
                                  ((SimplifiedOperatorBuilder *)
                                   (*(undefined8 **)(this + 0x10))[0x2f],pFVar1);
              local_e8 = (Node *)*puVar23;
              pNStack_e0 = local_110;
              local_d8 = local_118;
              pNVar13 = (Node *)Graph::NewNode(pGVar21,pOVar12,3,&local_e8,false);
              local_110 = pNVar13;
              do {
                *puVar23 = pNVar13;
                do {
                  puVar23 = puVar23 + 1;
                  if (puVar20 == puVar23) goto LAB_016e5bac;
                  if (bVar3 < 2) goto LAB_016e5ad4;
LAB_016e5b2c:
                } while ((bVar3 & 0xfe) != 4);
                pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
                pOVar12 = (Operator *)
                          SimplifiedOperatorBuilder::CheckNumber
                                    ((SimplifiedOperatorBuilder *)
                                     (*(undefined8 **)(this + 0x10))[0x2f],pFVar1);
                local_e8 = (Node *)*puVar23;
                pNStack_e0 = local_110;
                local_d8 = local_118;
                local_110 = (Node *)Graph::NewNode(pGVar21,pOVar12,3,&local_e8,false);
                *puVar23 = local_110;
                pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
                pOVar12 = (Operator *)
                          SimplifiedOperatorBuilder::NumberSilenceNaN
                                    ((SimplifiedOperatorBuilder *)
                                     (*(undefined8 **)(this + 0x10))[0x2f]);
                local_e8 = (Node *)*puVar23;
                pNVar13 = (Node *)Graph::NewNode(pGVar21,pOVar12,1,&local_e8,false);
              } while( true );
            }
LAB_016e5bac:
            pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
            pSVar24 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
            AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_e8,bVar3);
            pOVar12 = (Operator *)
                      SimplifiedOperatorBuilder::LoadField(pSVar24,(FieldAccess *)&local_e8);
            pNStack_100 = local_110;
            local_f8 = local_118;
            local_108 = pNVar7;
            pNVar13 = (Node *)Graph::NewNode(pGVar21,pOVar12,3,&local_108,false);
            local_180 = pNVar13;
            local_110 = pNVar13;
            if (0 < (int)uVar4) {
              pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar12 = (Operator *)
                        SimplifiedOperatorBuilder::NumberAdd
                                  ((SimplifiedOperatorBuilder *)
                                   (*(undefined8 **)(this + 0x10))[0x2f]);
              pNStack_e0 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)(int)uVar4);
              local_e8 = pNVar13;
              this_00 = (AccessBuilder *)Graph::NewNode(pGVar21,pOVar12,2,&local_e8,false);
              pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
              pSVar24 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
              local_180 = (Node *)this_00;
              AccessBuilder::ForJSObjectElements(this_00);
              pOVar12 = (Operator *)
                        SimplifiedOperatorBuilder::LoadField(pSVar24,(FieldAccess *)&local_e8);
              pNStack_100 = local_110;
              local_f8 = local_118;
              local_108 = pNVar7;
              this_01 = (AccessBuilder *)Graph::NewNode(pGVar21,pOVar12,3,&local_108,false);
              pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
              pSVar24 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
              local_110 = (Node *)this_01;
              AccessBuilder::ForFixedArrayLength(this_01);
              pOVar12 = (Operator *)
                        SimplifiedOperatorBuilder::LoadField(pSVar24,(FieldAccess *)&local_e8);
              pNStack_100 = local_110;
              local_f8 = local_118;
              local_108 = (Node *)this_01;
              pNVar14 = (Node *)Graph::NewNode(pGVar21,pOVar12,3,&local_108,false);
              pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
              local_110 = pNVar14;
              pOVar12 = (Operator *)
                        SimplifiedOperatorBuilder::MaybeGrowFastElements
                                  ((SimplifiedOperatorBuilder *)
                                   (*(undefined8 **)(this + 0x10))[0x2f],(bVar3 & 0xfe) != 4,pFVar1)
              ;
              this_02 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar15 = (Operator *)
                        SimplifiedOperatorBuilder::NumberAdd
                                  ((SimplifiedOperatorBuilder *)
                                   (*(undefined8 **)(this + 0x10))[0x2f]);
              pNStack_e0 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)(iVar2 + -3)
                                                    );
              local_e8 = pNVar13;
              local_d8 = (Node *)Graph::NewNode(this_02,pOVar15,2,&local_e8,false);
              local_c8 = local_110;
              pNStack_c0 = local_118;
              local_e8 = pNVar7;
              pNStack_e0 = (Node *)this_01;
              pNStack_d0 = pNVar14;
              pNVar14 = (Node *)Graph::NewNode(pGVar21,pOVar12,6,&local_e8,false);
              pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
              pSVar24 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
              local_110 = pNVar14;
              AccessBuilder::ForJSArrayLength((AccessBuilder *)&local_e8,bVar3);
              pOVar12 = (Operator *)
                        SimplifiedOperatorBuilder::StoreField(pSVar24,(FieldAccess *)&local_e8);
              local_f8 = local_110;
              pNStack_f0 = local_118;
              local_108 = pNVar7;
              pNStack_100 = (Node *)this_00;
              local_110 = (Node *)Graph::NewNode(pGVar21,pOVar12,4,&local_108,false);
              uVar9 = 0;
              do {
                pNVar22 = (Node *)__s[uVar9];
                pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
                pOVar12 = (Operator *)
                          SimplifiedOperatorBuilder::NumberAdd
                                    ((SimplifiedOperatorBuilder *)
                                     (*(undefined8 **)(this + 0x10))[0x2f]);
                pNStack_e0 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)(int)uVar9
                                                      );
                local_e8 = pNVar13;
                pNVar16 = (Node *)Graph::NewNode(pGVar21,pOVar12,2,&local_e8,false);
                pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
                pSVar24 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
                AccessBuilder::ForFixedArrayElement((AccessBuilder *)&local_108,bVar3,1);
                pOVar12 = (Operator *)
                          SimplifiedOperatorBuilder::StoreElement
                                    (pSVar24,(ElementAccess *)&local_108);
                pNStack_d0 = local_110;
                local_c8 = local_118;
                local_e8 = pNVar14;
                pNStack_e0 = pNVar16;
                local_d8 = pNVar22;
                local_110 = (Node *)Graph::NewNode(pGVar21,pOVar12,5,&local_e8,false);
                uVar9 = uVar9 + 1;
              } while (uVar25 != uVar9);
            }
            if (local_140 == ppNStack_138) {
              std::__ndk1::
              vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
              ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                        ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                          *)&local_148,&local_118);
            }
            else {
              *local_140 = local_118;
              local_140 = local_140 + 1;
            }
            if (local_158 == local_150) {
              std::__ndk1::
              vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
              ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                        ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                          *)&local_160,&local_110);
            }
            else {
              *local_158 = local_110;
              local_158 = local_158 + 1;
            }
            if (local_170 == ppNStack_168) {
              std::__ndk1::
              vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
              ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                        ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                          *)&local_178,&local_180);
            }
            else {
              *local_170 = local_180;
              local_170 = local_170 + 1;
            }
            if (__s != (undefined8 *)0x0) {
              operator_delete(__s);
            }
            uVar19 = uVar19 + 1;
            uVar9 = (long)local_128 - (long)local_130;
          } while (uVar19 < uVar9);
        }
        if (1 < (ulong)((long)local_140 - (long)local_148 >> 3)) {
          uVar9 = (ulong)((long)local_140 - (long)local_148) >> 3;
          iVar2 = (int)uVar9;
          pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar12 = (Operator *)
                    CommonOperatorBuilder::Merge
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],iVar2);
          local_118 = (Node *)Graph::NewNode(pGVar21,pOVar12,iVar2,local_148,false);
          if (local_158 == local_150) {
            std::__ndk1::
            vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
            ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                      ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                        *)&local_160,&local_118);
          }
          else {
            *local_158 = local_118;
            local_158 = local_158 + 1;
          }
          pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar12 = (Operator *)
                    CommonOperatorBuilder::EffectPhi
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],iVar2);
          local_110 = (Node *)Graph::NewNode(pGVar21,pOVar12,iVar2 + 1,local_160,false);
          if (local_170 == ppNStack_168) {
            std::__ndk1::
            vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
            ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                      ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                        *)&local_178,&local_118);
          }
          else {
            *local_170 = local_118;
            local_170 = local_170 + 1;
          }
          pGVar21 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar12 = (Operator *)
                    CommonOperatorBuilder::Phi
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,
                               uVar9 & 0xffffffff);
          local_180 = (Node *)Graph::NewNode(pGVar21,pOVar12,iVar2 + 1,local_178,false);
        }
        (**(code **)(**(long **)(this + 8) + 0x20))
                  (*(long **)(this + 8),param_1,local_180,local_110,local_118);
        pNVar7 = local_180;
        if (local_178 != (Node **)0x0) {
          local_170 = local_178;
          operator_delete(local_178);
        }
        if (local_160 != (Node **)0x0) {
          local_158 = local_160;
          operator_delete(local_160);
        }
        if (local_148 != (Node **)0x0) {
          local_140 = local_148;
          operator_delete(local_148);
        }
      }
      if (local_130 != (void *)0x0) {
        local_128 = local_130;
        operator_delete(local_130);
      }
    }
    MapInference::~MapInference(aMStack_b0);
  }
  else {
    pNVar7 = (Node *)0x0;
  }
  if (*(long *)(lVar5 + 0x28) == local_80) {
    return pNVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

