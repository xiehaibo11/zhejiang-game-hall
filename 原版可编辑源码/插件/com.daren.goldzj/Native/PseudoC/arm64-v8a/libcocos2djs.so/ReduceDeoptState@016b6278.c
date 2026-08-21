
/* v8::internal::compiler::EscapeAnalysisReducer::ReduceDeoptState(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Deduplicator*) */

Node * __thiscall
v8::internal::compiler::EscapeAnalysisReducer::ReduceDeoptState
          (EscapeAnalysisReducer *this,Node *param_1,Node *param_2,Deduplicator *param_3)

{
  long *plVar1;
  uint uVar2;
  Graph *this_00;
  short sVar3;
  uint uVar4;
  int iVar5;
  Node *pNVar6;
  long lVar7;
  VirtualObject *pVVar8;
  Operator *pOVar9;
  undefined8 uVar10;
  Node *pNVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  Use *pUVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  Node *local_90 [3];
  EscapeAnalysisReducer *local_78;
  Node *local_70;
  undefined8 *local_68;
  
  sVar3 = *(short *)(*(long *)param_1 + 0x10);
  local_70 = param_1;
  if (sVar3 == 0x2a) {
    local_78 = this + 0x40;
    local_68 = (undefined8 *)0x0;
    if (0 < *(int *)(*(long *)param_1 + 0x14)) {
      iVar18 = 1;
      while( true ) {
        puVar16 = local_68;
        iVar5 = iVar18 + -1;
        pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,iVar5);
        pNVar6 = (Node *)ReduceDeoptState(this,pNVar6,param_2,param_3);
        if ((puVar16 != (undefined8 *)0x0) ||
           (pNVar11 = (Node *)NodeProperties::GetValueInput(local_70,iVar5), pNVar11 != pNVar6)) {
          pNVar11 = (Node *)NodeHashCache::Constructor::MutableNode((Constructor *)&local_78);
          NodeProperties::ReplaceValueInput(pNVar11,pNVar6,iVar5);
        }
        if (*(int *)(*(long *)param_1 + 0x14) <= iVar18) break;
        iVar18 = iVar18 + 1;
      }
    }
  }
  else {
    if (sVar3 != 0x29) {
      local_78 = *(EscapeAnalysisReducer **)(this + 0x18);
      pNVar6 = param_1;
      while (sVar3 == 0x3a) {
        pNVar6 = (Node *)NodeProperties::GetValueInput(pNVar6,0);
        sVar3 = *(short *)(*(long *)pNVar6 + 0x10);
      }
      pVVar8 = (VirtualObject *)
               EscapeAnalysisResult::GetVirtualObject((EscapeAnalysisResult *)&local_78,pNVar6);
      if (pVVar8 == (VirtualObject *)0x0) {
        return param_1;
      }
      if (pVVar8[0x20] != (VirtualObject)0x0) {
        return param_1;
      }
      uVar4 = *(uint *)(pVVar8 + 0x24);
      if (*(ulong *)(param_3 + 8) <= (ulong)uVar4) {
        std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::resize
                  ((vector<bool,v8::internal::ZoneAllocator<bool>> *)param_3,(ulong)(uVar4 + 1),
                   false);
      }
      uVar12 = (ulong)(uVar4 >> 3) & 0x1ffffff8;
      uVar13 = *(ulong *)(*(long *)param_3 + uVar12);
      uVar14 = 1L << ((ulong)uVar4 & 0x3f);
      *(ulong *)(*(long *)param_3 + uVar12) = uVar13 | uVar14;
      if ((uVar13 & uVar14) != 0) {
        pNVar6 = (Node *)ObjectIdNode(this,pVVar8);
        return pNVar6;
      }
      local_70 = (Node *)0x0;
      local_68 = (undefined8 *)0x0;
      local_78 = (void *)0x0;
      if (0 < (int)(*(int *)(pVVar8 + 0x30) - *(int *)(pVVar8 + 0x28) & 0xfffffffcU)) {
        iVar18 = 0;
        do {
          local_90[0] = *(Node **)(this + 0x18);
          pNVar6 = (Node *)EscapeAnalysisResult::GetVirtualObjectField
                                     ((EscapeAnalysisResult *)local_90,pVVar8,iVar18,param_2);
          if (pNVar6 == (Node *)0x0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(field) != nullptr");
          }
          puVar16 = *(undefined8 **)(this + 0x10);
          pNVar11 = (Node *)puVar16[0x2c];
          if (pNVar11 == (Node *)0x0) {
            this_00 = (Graph *)*puVar16;
            pOVar9 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar16[1]);
            local_90[0] = (Node *)0x0;
            pNVar11 = (Node *)Graph::NewNode(this_00,pOVar9,0,local_90,false);
            puVar16[0x2c] = pNVar11;
          }
          if (pNVar6 != pNVar11) {
            local_90[0] = (Node *)ReduceDeoptState(this,pNVar6,param_2,param_3);
            if (local_70 < local_68) {
              *(Node **)local_70 = local_90[0];
              local_70 = (Node *)((long)local_70 + 8);
            }
            else {
              std::__ndk1::
              vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
              ::__push_back_slow_path<v8::internal::compiler::Node*>
                        ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                          *)&local_78,local_90);
            }
          }
          iVar18 = iVar18 + 4;
        } while (iVar18 < (int)(*(int *)(pVVar8 + 0x30) - *(int *)(pVVar8 + 0x28) & 0xfffffffcU));
      }
      uVar12 = (ulong)((long)local_70 - (long)local_78) >> 3;
      uVar10 = CommonOperatorBuilder::ObjectState
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),
                          *(uint *)(pVVar8 + 0x24),(int)uVar12);
      NodeHashCache::Constructor::Constructor
                ((Constructor *)local_90,this + 0x40,uVar10,uVar12 & 0xffffffff,local_78,
                 *(undefined8 *)(param_1 + 8));
      pNVar6 = (Node *)NodeHashCache::Constructor::Get((Constructor *)local_90);
      if (local_78 == (void *)0x0) {
        return pNVar6;
      }
      local_70 = (Node *)local_78;
      operator_delete(local_78);
      return pNVar6;
    }
    lVar19 = 0;
    local_78 = this + 0x40;
    local_68 = (undefined8 *)0x0;
    do {
      uVar4 = *(uint *)((long)&DAT_01a5c03c + lVar19);
      lVar20 = (long)(int)uVar4;
      pNVar6 = param_1 + 0x20;
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        pNVar6 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
      }
      pNVar6 = (Node *)ReduceDeoptState(this,*(Node **)(pNVar6 + lVar20 * 8),param_2,param_3);
      if (local_68 == (undefined8 *)0x0) {
        pNVar11 = local_70 + 0x20;
        if ((~*(uint *)(local_70 + 0x14) & 0xf000000) == 0) {
          pNVar11 = (Node *)(*(long *)pNVar11 + 0x10);
        }
        if (*(Node **)(pNVar11 + lVar20 * 8) != pNVar6) goto LAB_016b635c;
      }
      else {
LAB_016b635c:
        lVar7 = NodeHashCache::Constructor::MutableNode((Constructor *)&local_78);
        plVar1 = (long *)(lVar7 + 0x20);
        uVar2 = *(uint *)(lVar7 + 0x14) & 0xf000000;
        plVar15 = plVar1;
        if (uVar2 == 0xf000000) {
          plVar15 = (long *)(*plVar1 + 0x10);
        }
        pNVar11 = (Node *)plVar15[lVar20];
        if (pNVar11 != pNVar6) {
          if (uVar2 == 0xf000000) {
            lVar7 = *plVar1;
          }
          pUVar17 = (Use *)(lVar7 + (long)(int)~uVar4 * 0x18);
          if (pNVar11 != (Node *)0x0) {
            Node::RemoveUse(pNVar11,pUVar17);
          }
          plVar15[lVar20] = (long)pNVar6;
          if (pNVar6 != (Node *)0x0) {
            Node::AppendUse(pNVar6,pUVar17);
          }
        }
      }
      lVar19 = lVar19 + 4;
    } while (lVar19 != 0x18);
  }
  pNVar6 = (Node *)NodeHashCache::Constructor::Get((Constructor *)&local_78);
  return pNVar6;
}

