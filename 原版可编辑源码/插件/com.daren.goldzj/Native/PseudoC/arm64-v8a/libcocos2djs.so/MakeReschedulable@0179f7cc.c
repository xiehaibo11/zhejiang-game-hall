
/* v8::internal::compiler::RawMachineAssembler::MakeReschedulable() */

void __thiscall
v8::internal::compiler::RawMachineAssembler::MakeReschedulable(RawMachineAssembler *this)

{
  CommonOperatorBuilder *pCVar1;
  Node **ppNVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  ushort uVar7;
  int iVar8;
  bool bVar9;
  void *pvVar10;
  void *__s;
  Operator *pOVar11;
  Node *pNVar12;
  vector<v8::internal::compiler::BasicBlock*,std::__ndk1::allocator<v8::internal::compiler::BasicBlock*>>
  *this_00;
  Node *this_01;
  BasicBlock *pBVar13;
  Node *pNVar14;
  Node *this_02;
  Node *pNVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  Node *unaff_x22;
  Graph *pGVar21;
  BasicBlock *this_03;
  size_t __n;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long *local_138;
  long *local_130;
  long *local_128;
  BasicBlock *local_110;
  BasicBlock *local_108;
  BasicBlock *pBStack_100;
  Node *local_f8;
  Node *local_f0;
  Node *pNStack_e8;
  Node **local_e0;
  Node **local_d8;
  Node **ppNStack_d0;
  Node **local_c8;
  Node **local_c0;
  Node **local_b8;
  void *local_b0;
  void *local_a8;
  void *pvStack_a0;
  void *local_98;
  void *local_90;
  void *pvStack_88;
  Node *local_80;
  Node *local_78;
  Node *local_70;
  
  lVar25 = *(long *)(this + 0x10);
  local_90 = (void *)0x0;
  pvStack_88 = (void *)0x0;
  local_98 = (void *)0x0;
  uVar22 = *(long *)(lVar25 + 0x10) - *(long *)(lVar25 + 8);
  if (uVar22 == 0) {
    pvVar10 = (void *)0x0;
    __s = (void *)0x0;
    local_a8 = (void *)0x0;
    pvStack_a0 = (void *)0x0;
    local_b0 = (void *)0x0;
    goto LAB_0179f920;
  }
  uVar19 = (long)uVar22 >> 3;
  if (uVar19 >> 0x3d != 0) goto LAB_017a0380;
  pvVar10 = operator_new(uVar22);
  pvStack_88 = (void *)((long)pvVar10 + uVar19 * 8);
  local_98 = pvVar10;
  local_90 = pvVar10;
  memset(pvVar10,0,uVar22);
  local_90 = pvVar10;
  if (uVar19 < 2) {
LAB_0179f880:
    do {
      uVar19 = uVar19 - 1;
      local_90 = (void *)((long)local_90 + 8);
    } while (uVar19 != 0);
  }
  else {
    uVar17 = uVar19 & 0xfffffffffffffffe;
    local_90 = (void *)((long)pvVar10 + uVar17 * 8);
    uVar22 = uVar17;
    do {
      uVar22 = uVar22 - 2;
    } while (uVar22 != 0);
    bVar9 = uVar19 != uVar17;
    uVar19 = uVar19 - uVar17;
    if (bVar9) goto LAB_0179f880;
  }
  local_a8 = (void *)0x0;
  pvStack_a0 = (void *)0x0;
  local_b0 = (void *)0x0;
  uVar22 = *(long *)(lVar25 + 0x10) - *(long *)(lVar25 + 8);
  if (uVar22 == 0) {
    __s = (void *)0x0;
  }
  else {
    uVar19 = (long)uVar22 >> 3;
    if (uVar19 >> 0x3d != 0) {
LAB_017a0380:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __s = operator_new(uVar22);
    pvStack_a0 = (void *)((long)__s + uVar19 * 8);
    local_b0 = __s;
    local_a8 = __s;
    memset(__s,0,uVar22);
    local_a8 = __s;
    if (1 < uVar19) {
      uVar17 = uVar19 & 0xfffffffffffffffe;
      local_a8 = (void *)((long)__s + uVar17 * 8);
      uVar22 = uVar17;
      do {
        uVar22 = uVar22 - 2;
      } while (uVar22 != 0);
      bVar9 = uVar19 == uVar17;
      uVar19 = uVar19 - uVar17;
      if (bVar9) goto LAB_0179f920;
    }
    do {
      uVar19 = uVar19 - 1;
      local_a8 = (void *)((long)local_a8 + 8);
    } while (uVar19 != 0);
  }
LAB_0179f920:
  local_c0 = (Node **)0x0;
  local_b8 = (Node **)0x0;
  local_c8 = (Node **)0x0;
  local_d8 = (Node **)0x0;
  ppNStack_d0 = (Node **)0x0;
  local_e0 = (Node **)0x0;
  plVar24 = *(long **)(lVar25 + 0x48);
  plVar5 = *(long **)(lVar25 + 0x50);
  if (plVar24 == plVar5) {
    local_128 = (long *)0x0;
    local_130 = (long *)0x0;
  }
  else {
    pCVar1 = (CommonOperatorBuilder *)(this + 0x48);
    local_130 = (long *)0x0;
    local_128 = (long *)0x0;
    local_138 = (long *)0x0;
    while( true ) {
      lVar18 = *plVar24;
      plVar23 = local_130;
      if (lVar18 == *(long *)(lVar25 + 0x68)) {
        unaff_x22 = *(Node **)(*(long *)(this + 8) + 8);
        local_f8 = unaff_x22;
      }
      else if (lVar18 == *(long *)(lVar25 + 0x70)) {
        lVar25 = *(long *)(lVar18 + 0x80);
        if (*(long *)(lVar18 + 0x88) != lVar25) {
          uVar22 = 0;
          do {
            NodeProperties::MergeControlToEnd
                      (*(Graph **)(this + 8),pCVar1,
                       *(Node **)(*(long *)(lVar25 + uVar22 * 8) + 0x38));
            lVar25 = *(long *)(lVar18 + 0x80);
            uVar22 = uVar22 + 1;
          } while (uVar22 < (ulong)(*(long *)(lVar18 + 0x88) - lVar25 >> 3));
        }
      }
      else if (*(long *)(lVar18 + 0x28) == 0) {
        if (*(long *)(lVar18 + 0x88) - (long)*(long **)(lVar18 + 0x80) == 8) {
          lVar25 = *(long *)(**(long **)(lVar18 + 0x80) + 0xa0) * 8;
          local_f8 = *(Node **)((long)pvVar10 + lVar25);
          unaff_x22 = *(Node **)((long)__s + lVar25);
        }
        else {
          local_c0 = local_c8;
          local_d8 = local_e0;
          lVar25 = *(long *)(lVar18 + 0x80);
          uVar22 = *(long *)(lVar18 + 0x88) - lVar25;
          iVar20 = (int)(uVar22 >> 3);
          if (0 < iVar20) {
            lVar26 = 0;
            while( true ) {
              lVar25 = *(long *)(lVar25 + lVar26);
              ppNVar2 = (Node **)((long)pvVar10 + *(long *)(lVar25 + 0xa0) * 8);
              if (local_c0 == local_b8) {
                std::__ndk1::
                vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                          ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                            *)&local_c8,ppNVar2);
              }
              else {
                *local_c0 = *ppNVar2;
                local_c0 = local_c0 + 1;
              }
              ppNVar2 = (Node **)((long)__s + *(long *)(lVar25 + 0xa0) * 8);
              if (local_d8 == ppNStack_d0) {
                std::__ndk1::
                vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                          ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                            *)&local_e0,ppNVar2);
              }
              else {
                *local_d8 = *ppNVar2;
                local_d8 = local_d8 + 1;
              }
              if ((uVar22 >> 3 & 0xffffffff) * 8 + -8 == lVar26) break;
              lVar25 = *(long *)(lVar18 + 0x80);
              lVar26 = lVar26 + 8;
            }
          }
          pGVar21 = *(Graph **)(this + 8);
          pOVar11 = (Operator *)CommonOperatorBuilder::Merge(pCVar1,iVar20);
          local_f8 = (Node *)Graph::NewNode(pGVar21,pOVar11,
                                            (int)((ulong)((long)local_c0 - (long)local_c8) >> 3),
                                            local_c8,false);
          if (local_d8 == ppNStack_d0) {
            std::__ndk1::
            vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
            ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                      ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                        *)&local_e0,&local_f8);
          }
          else {
            *local_d8 = local_f8;
            local_d8 = local_d8 + 1;
          }
          pGVar21 = *(Graph **)(this + 8);
          pOVar11 = (Operator *)CommonOperatorBuilder::EffectPhi(pCVar1,iVar20);
          unaff_x22 = (Node *)Graph::NewNode(pGVar21,pOVar11,
                                             (int)((ulong)((long)local_d8 - (long)local_e0) >> 3),
                                             local_e0,false);
        }
      }
      else {
        pGVar21 = *(Graph **)(this + 8);
        pOVar11 = (Operator *)CommonOperatorBuilder::Loop(pCVar1,2);
        local_80 = *(Node **)(*(long *)(this + 8) + 8);
        local_78 = local_80;
        local_f8 = (Node *)Graph::NewNode(pGVar21,pOVar11,2,&local_80,false);
        pGVar21 = *(Graph **)(this + 8);
        pOVar11 = (Operator *)CommonOperatorBuilder::EffectPhi(pCVar1,2);
        local_80 = *(Node **)(*(long *)(this + 8) + 8);
        local_70 = local_f8;
        local_78 = local_80;
        unaff_x22 = (Node *)Graph::NewNode(pGVar21,pOVar11,3,&local_80,false);
        pGVar21 = *(Graph **)(this + 8);
        pOVar11 = (Operator *)CommonOperatorBuilder::Terminate(pCVar1);
        local_78 = local_f8;
        local_80 = unaff_x22;
        pNVar12 = (Node *)Graph::NewNode(pGVar21,pOVar11,2,&local_80,false);
        NodeProperties::MergeControlToEnd(*(Graph **)(this + 8),pCVar1,pNVar12);
        pNVar12 = local_f8;
        if (local_128 < local_138) {
          *local_128 = lVar18;
          local_128[1] = (long)local_f8;
          local_128[2] = (long)unaff_x22;
          local_128 = local_128 + 3;
        }
        else {
          __n = (long)local_128 - (long)local_130;
          uVar22 = ((long)__n >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar22) goto LAB_017a0380;
          lVar25 = (long)local_138 - (long)local_130 >> 3;
          uVar19 = lVar25 * 0x5555555555555556;
          if (uVar22 <= uVar19) {
            uVar22 = uVar19;
          }
          if (0x555555555555554 < (ulong)(lVar25 * -0x5555555555555555)) {
            uVar22 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar22 == 0) {
            pvVar10 = (void *)0x0;
          }
          else {
            if (0xaaaaaaaaaaaaaaa < uVar22) goto LAB_017a0380;
            pvVar10 = operator_new(uVar22 * 0x18);
          }
          plVar16 = (long *)((long)pvVar10 + ((long)__n >> 3) * 8);
          local_138 = (long *)((long)pvVar10 + uVar22 * 0x18);
          *plVar16 = lVar18;
          plVar16[1] = (long)pNVar12;
          local_128 = plVar16 + 3;
          plVar23 = (long *)((long)plVar16 - __n);
          plVar16[2] = (long)unaff_x22;
          if (0 < (long)__n) {
            memcpy(plVar23,local_130,__n);
          }
          if (local_130 != (long *)0x0) {
            operator_delete(local_130);
          }
        }
      }
      local_130 = plVar23;
      puVar6 = *(undefined8 **)(lVar18 + 0x48);
      for (puVar4 = *(undefined8 **)(lVar18 + 0x40); puVar4 != puVar6; puVar4 = puVar4 + 1) {
        pNVar12 = (Node *)*puVar4;
        uVar7 = *(ushort *)(*(long *)pNVar12 + 0x10);
        if (0 < *(int *)(*(long *)pNVar12 + 0x18)) {
          if ((uVar7 - 4 < 6) || (uVar7 - 0x23 < 2)) {
            NodeProperties::ReplaceEffectInput(pNVar12,unaff_x22,0);
          }
          else {
            Node::AppendInput(pNVar12,(Zone *)**(undefined8 **)(this + 8),unaff_x22);
          }
        }
        if (0 < *(int *)(*(long *)pNVar12 + 0x1c)) {
          if ((uVar7 - 4 < 6) || (uVar7 - 0x23 < 2)) {
            NodeProperties::ReplaceControlInput(pNVar12,local_f8,0);
          }
          else {
            Node::AppendInput(pNVar12,(Zone *)**(undefined8 **)(this + 8),local_f8);
          }
        }
        if (*(char *)(*(long *)pNVar12 + 0x24) != '\0') {
          unaff_x22 = pNVar12;
        }
        if (0 < *(int *)(*(long *)pNVar12 + 0x28)) {
          local_f8 = pNVar12;
        }
      }
      if (*(char *)(lVar18 + 8) != '\0') {
        MarkControlDeferred(this,local_f8);
      }
      pNVar12 = *(Node **)(lVar18 + 0x38);
      if (pNVar12 != (Node *)0x0) {
        uVar7 = *(ushort *)(*(long *)pNVar12 + 0x10);
        if (0 < *(int *)(*(long *)pNVar12 + 0x18)) {
          if ((uVar7 - 4 < 6) || (uVar7 - 0x23 < 2)) {
            NodeProperties::ReplaceEffectInput(pNVar12,unaff_x22,0);
          }
          else {
            Node::AppendInput(pNVar12,(Zone *)**(undefined8 **)(this + 8),unaff_x22);
          }
        }
        if (0 < *(int *)(*(long *)pNVar12 + 0x1c)) {
          if ((uVar7 - 4 < 6) || (uVar7 - 0x23 < 2)) {
            NodeProperties::ReplaceControlInput(pNVar12,local_f8,0);
          }
          else {
            Node::AppendInput(pNVar12,(Zone *)**(undefined8 **)(this + 8),local_f8);
          }
        }
        if (*(char *)(*(long *)pNVar12 + 0x24) != '\0') {
          unaff_x22 = pNVar12;
        }
        if (0 < *(int *)(*(long *)pNVar12 + 0x28)) {
          local_f8 = pNVar12;
        }
      }
      plVar24 = plVar24 + 1;
      *(Node **)((long)local_b0 + *(long *)(lVar18 + 0xa0) * 8) = unaff_x22;
      *(Node **)((long)local_98 + *(long *)(lVar18 + 0xa0) * 8) = local_f8;
      if (plVar24 == plVar5) break;
      lVar25 = *(long *)(this + 0x10);
      pvVar10 = local_98;
      __s = local_b0;
    }
  }
  if (local_130 != local_128) {
    pCVar1 = (CommonOperatorBuilder *)(this + 0x48);
    plVar24 = local_130;
    do {
      this_03 = (BasicBlock *)*plVar24;
      local_78 = (Node *)0x0;
      local_70 = (Node *)0x0;
      local_80 = (Node *)0x0;
      local_f0 = (Node *)0x0;
      pNStack_e8 = (Node *)0x0;
      local_f8 = (Node *)0x0;
      lVar25 = *(long *)(this_03 + 0x80);
      if (*(long *)(this_03 + 0x88) != lVar25) {
        uVar22 = 0;
        do {
          local_110 = *(BasicBlock **)(lVar25 + uVar22 * 8);
          uVar19 = BasicBlock::LoopContains(this_03,local_110);
          if ((uVar19 & 1) == 0) {
            if (local_78 == local_70) {
              this_00 = (vector<v8::internal::compiler::BasicBlock*,std::__ndk1::allocator<v8::internal::compiler::BasicBlock*>>
                         *)&local_80;
              goto LAB_0179ff58;
            }
            *(BasicBlock **)local_78 = local_110;
            local_78 = local_78 + 8;
          }
          else if (local_f0 == pNStack_e8) {
            this_00 = (vector<v8::internal::compiler::BasicBlock*,std::__ndk1::allocator<v8::internal::compiler::BasicBlock*>>
                       *)&local_f8;
LAB_0179ff58:
            std::__ndk1::
            vector<v8::internal::compiler::BasicBlock*,std::__ndk1::allocator<v8::internal::compiler::BasicBlock*>>
            ::__push_back_slow_path<v8::internal::compiler::BasicBlock*const&>(this_00,&local_110);
          }
          else {
            *(BasicBlock **)local_f0 = local_110;
            local_f0 = local_f0 + 8;
          }
          lVar25 = *(long *)(this_03 + 0x80);
          uVar22 = uVar22 + 1;
        } while (uVar22 < (ulong)(*(long *)(this_03 + 0x88) - lVar25 >> 3));
      }
      uVar22 = (long)local_f0 - (long)local_f8;
      iVar20 = (int)((ulong)((long)local_78 - (long)local_80) >> 3);
      pOVar11 = (Operator *)CommonOperatorBuilder::Merge(pCVar1,iVar20);
      local_108 = (BasicBlock *)0x0;
      pBStack_100 = (BasicBlock *)0x0;
      local_110 = (BasicBlock *)0x0;
      pNVar12 = (Node *)CreateNodeFromPredecessors
                                  (this,(vector *)&local_80,(vector *)&local_98,pOVar11,
                                   (vector *)&local_110);
      iVar8 = (int)(uVar22 >> 3);
      pOVar11 = (Operator *)CommonOperatorBuilder::Merge(pCVar1,iVar8);
      local_108 = (BasicBlock *)0x0;
      pBStack_100 = (BasicBlock *)0x0;
      local_110 = (BasicBlock *)0x0;
      this_01 = (Node *)CreateNodeFromPredecessors
                                  (this,(vector *)&local_f8,(vector *)&local_98,pOVar11,
                                   (vector *)&local_110);
      pOVar11 = (Operator *)CommonOperatorBuilder::EffectPhi(pCVar1,iVar20);
      pBVar13 = operator_new(8);
      *(Node **)pBVar13 = pNVar12;
      local_108 = pBVar13 + 8;
      pBStack_100 = pBVar13 + 8;
      local_110 = pBVar13;
      pNVar14 = (Node *)CreateNodeFromPredecessors
                                  (this,(vector *)&local_80,(vector *)&local_b0,pOVar11,
                                   (vector *)&local_110);
      operator_delete(pBVar13);
      pOVar11 = (Operator *)CommonOperatorBuilder::EffectPhi(pCVar1,iVar8);
      pBVar13 = operator_new(8);
      *(Node **)pBVar13 = this_01;
      local_108 = pBVar13 + 8;
      pBStack_100 = pBVar13 + 8;
      local_110 = pBVar13;
      this_02 = (Node *)CreateNodeFromPredecessors
                                  (this,(vector *)&local_f8,(vector *)&local_b0,pOVar11,
                                   (vector *)&local_110);
      operator_delete(pBVar13);
      lVar25 = plVar24[1];
      uVar3 = *(uint *)(lVar25 + 0x14) & 0xf000000;
      plVar5 = (long *)(lVar25 + 0x20);
      plVar23 = plVar5;
      if (uVar3 == 0xf000000) {
        plVar23 = (long *)(*plVar5 + 0x10);
      }
      pNVar15 = (Node *)*plVar23;
      if (pNVar15 != pNVar12) {
        if (uVar3 == 0xf000000) {
          lVar25 = *plVar5;
        }
        if (pNVar15 != (Node *)0x0) {
          Node::RemoveUse(pNVar15,(Use *)(lVar25 + -0x18));
        }
        *plVar23 = (long)pNVar12;
        if (pNVar12 != (Node *)0x0) {
          Node::AppendUse(pNVar12,(Use *)(lVar25 + -0x18));
        }
      }
      lVar25 = plVar24[1];
      uVar3 = *(uint *)(lVar25 + 0x14) & 0xf000000;
      plVar5 = (long *)(lVar25 + 0x20);
      plVar23 = plVar5;
      if (uVar3 == 0xf000000) {
        plVar23 = (long *)(*plVar5 + 0x10);
      }
      pNVar15 = (Node *)plVar23[1];
      if (pNVar15 != this_01) {
        if (uVar3 == 0xf000000) {
          lVar25 = *plVar5;
        }
        if (pNVar15 != (Node *)0x0) {
          Node::RemoveUse(pNVar15,(Use *)(lVar25 + -0x30));
        }
        plVar23[1] = (long)this_01;
        if (this_01 != (Node *)0x0) {
          Node::AppendUse(this_01,(Use *)(lVar25 + -0x30));
        }
      }
      lVar25 = plVar24[2];
      uVar3 = *(uint *)(lVar25 + 0x14) & 0xf000000;
      plVar5 = (long *)(lVar25 + 0x20);
      plVar23 = plVar5;
      if (uVar3 == 0xf000000) {
        plVar23 = (long *)(*plVar5 + 0x10);
      }
      pNVar15 = (Node *)*plVar23;
      if (pNVar15 != pNVar14) {
        if (uVar3 == 0xf000000) {
          lVar25 = *plVar5;
        }
        if (pNVar15 != (Node *)0x0) {
          Node::RemoveUse(pNVar15,(Use *)(lVar25 + -0x18));
        }
        *plVar23 = (long)pNVar14;
        if (pNVar14 != (Node *)0x0) {
          Node::AppendUse(pNVar14,(Use *)(lVar25 + -0x18));
        }
      }
      lVar25 = plVar24[2];
      uVar3 = *(uint *)(lVar25 + 0x14) & 0xf000000;
      plVar5 = (long *)(lVar25 + 0x20);
      plVar23 = plVar5;
      if (uVar3 == 0xf000000) {
        plVar23 = (long *)(*plVar5 + 0x10);
      }
      pNVar14 = (Node *)plVar23[1];
      if (pNVar14 != this_02) {
        if (uVar3 == 0xf000000) {
          lVar25 = *plVar5;
        }
        if (pNVar14 != (Node *)0x0) {
          Node::RemoveUse(pNVar14,(Use *)(lVar25 + -0x30));
        }
        plVar23[1] = (long)this_02;
        if (this_02 != (Node *)0x0) {
          Node::AppendUse(this_02,(Use *)(lVar25 + -0x30));
        }
      }
      puVar6 = *(undefined8 **)(this_03 + 0x48);
      for (puVar4 = *(undefined8 **)(this_03 + 0x40); puVar4 != puVar6; puVar4 = puVar4 + 1) {
        if (*(short *)(*(long *)*puVar4 + 0x10) == 0x23) {
          MakePhiBinary(this,(Node *)*puVar4,(int)((ulong)((long)local_78 - (long)local_80) >> 3),
                        pNVar12,this_01);
        }
      }
      if (local_f8 != (Node *)0x0) {
        local_f0 = local_f8;
        operator_delete(local_f8);
      }
      if (local_80 != (Node *)0x0) {
        local_78 = local_80;
        operator_delete(local_80);
      }
      plVar24 = plVar24 + 3;
    } while (plVar24 != local_128);
  }
  if (local_e0 != (Node **)0x0) {
    local_d8 = local_e0;
    operator_delete(local_e0);
  }
  if (local_c8 != (Node **)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
  if (local_130 != (long *)0x0) {
    operator_delete(local_130);
  }
  if (local_b0 != (void *)0x0) {
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
  if (local_98 != (void *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  return;
}

