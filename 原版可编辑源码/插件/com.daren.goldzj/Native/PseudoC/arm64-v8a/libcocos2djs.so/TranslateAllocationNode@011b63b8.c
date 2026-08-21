
/* v8::internal::SamplingHeapProfiler::TranslateAllocationNode(v8::internal::AllocationProfile*,
   v8::internal::SamplingHeapProfiler::AllocationNode*, std::__ndk1::map<int,
   v8::internal::Handle<v8::internal::Script>, std::__ndk1::less<int>,
   std::__ndk1::allocator<std::__ndk1::pair<int const, v8::internal::Handle<v8::internal::Script> >
   > > const&) */

long __thiscall
v8::internal::SamplingHeapProfiler::TranslateAllocationNode
          (SamplingHeapProfiler *this,AllocationProfile *param_1,AllocationNode *param_2,
          map *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *__dest;
  char *__s;
  __tree_node_base *p_Var8;
  map *pmVar9;
  ulong uVar10;
  AllocationNode *pAVar11;
  undefined8 *puVar12;
  long lVar13;
  map *pmVar14;
  long lVar15;
  undefined8 uVar16;
  AllocationNode *pAVar17;
  long lVar18;
  map *pmVar19;
  ulong uVar20;
  void *pvVar21;
  Factory *pFVar22;
  AllocationNode *pAVar23;
  __tree_node_base *p_Var24;
  ulong *puVar25;
  __tree_node_base *p_Var26;
  void *pvVar27;
  double dVar28;
  double dVar29;
  uint uVar30;
  __tree_node_base *local_c8;
  __tree_node_base *p_Stack_c0;
  long local_b8;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined8 *local_a0;
  char *local_90;
  size_t sStack_88;
  undefined8 local_78;
  
  param_2[0x4c] = (AllocationNode)0x1;
  pFVar22 = *(Factory **)this;
  puStack_a8 = (undefined8 *)__strlen_chk(&DAT_0189703a,1);
  local_b0 = (undefined8 *)&DAT_0189703a;
  uVar6 = Factory::InternalizeUtf8String(pFVar22,(Vector *)&local_b0);
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  uVar10 = *(ulong *)(param_2 + 0x10);
  if (uVar10 != 0) {
    if (uVar10 >> 0x3c != 0) goto LAB_011b6988;
    puStack_a8 = operator_new(uVar10 * 0x10);
    local_a0 = puStack_a8 + uVar10 * 2;
  }
  iVar4 = *(int *)(param_2 + 0x38);
  local_b0 = puStack_a8;
  if (iVar4 == 0) {
LAB_011b649c:
    local_78 = 0;
  }
  else {
    pmVar9 = param_3 + 8;
    pmVar14 = *(map **)pmVar9;
    pmVar19 = pmVar9;
    if (pmVar14 == (map *)0x0) goto LAB_011b649c;
    do {
      if (iVar4 <= *(int *)(pmVar14 + 0x20)) {
        pmVar19 = pmVar14;
      }
      pmVar14 = *(map **)(pmVar14 + (ulong)(*(int *)(pmVar14 + 0x20) < iVar4) * 8);
    } while (pmVar14 != (map *)0x0);
    if ((pmVar19 == pmVar9) || (iVar4 < *(int *)(pmVar19 + 0x20))) goto LAB_011b649c;
    p_Var26 = (__tree_node_base *)&p_Stack_c0;
    p_Stack_c0 = (__tree_node_base *)0x0;
    local_b8 = 0;
    local_c8 = p_Var26;
    std::__ndk1::
    map<int,v8::internal::Handle<v8::internal::Script>,std::__ndk1::less<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,v8::internal::Handle<v8::internal::Script>>>>
    ::
    insert<std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__tree_node<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,void*>*,long>>>
              ((map<int,v8::internal::Handle<v8::internal::Script>,std::__ndk1::less<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,v8::internal::Handle<v8::internal::Script>>>>
                *)&local_c8,*(undefined8 *)param_3);
    p_Var8 = p_Var26;
    if (p_Stack_c0 != (__tree_node_base *)0x0) {
      p_Var24 = p_Stack_c0;
      do {
        while (p_Var8 = p_Var24, *(int *)(param_2 + 0x38) < *(int *)(p_Var8 + 0x20)) {
          p_Var26 = p_Var8;
          p_Var24 = *(__tree_node_base **)p_Var8;
          if (*(__tree_node_base **)p_Var8 == (__tree_node_base *)0x0) {
            p_Var24 = *(__tree_node_base **)p_Var8;
            goto joined_r0x011b68d0;
          }
        }
        if (*(int *)(param_2 + 0x38) <= *(int *)(p_Var8 + 0x20)) break;
        p_Var26 = p_Var8 + 8;
        p_Var24 = *(__tree_node_base **)p_Var26;
      } while (*(__tree_node_base **)p_Var26 != (__tree_node_base *)0x0);
    }
    p_Var24 = *(__tree_node_base **)p_Var26;
joined_r0x011b68d0:
    if (p_Var24 == (__tree_node_base *)0x0) {
      p_Var24 = operator_new(0x30);
      uVar2 = *(undefined4 *)(param_2 + 0x38);
      *(undefined8 *)(p_Var24 + 0x28) = 0;
      *(undefined8 *)p_Var24 = 0;
      *(undefined8 *)(p_Var24 + 8) = 0;
      *(__tree_node_base **)(p_Var24 + 0x10) = p_Var8;
      *(undefined4 *)(p_Var24 + 0x20) = uVar2;
      *(__tree_node_base **)p_Var26 = p_Var24;
      p_Var8 = p_Var24;
      if (*(__tree_node_base **)local_c8 != (__tree_node_base *)0x0) {
        p_Var8 = *(__tree_node_base **)p_Var26;
        local_c8 = *(__tree_node_base **)local_c8;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (p_Stack_c0,p_Var8);
      local_b8 = local_b8 + 1;
    }
    puVar25 = *(ulong **)(p_Var24 + 0x28);
    if (puVar25 == (ulong *)0x0) {
      local_78 = 0;
    }
    else {
      uVar30 = *(uint *)(*puVar25 + 7);
      if (((uVar30 & 1) != 0) &&
         (uVar10 = *puVar25 & 0xffffffff00000000,
         *(ushort *)((uVar10 | 7) + (ulong)*(uint *)((uVar10 | uVar30) - 1)) < 0x41)) {
        pFVar22 = *(Factory **)this;
        __s = (char *)StringsStorage::GetName(*(StringsStorage **)(this + 0x58));
        sStack_88 = strlen(__s);
        local_90 = __s;
        uVar6 = Factory::InternalizeUtf8String(pFVar22,(Vector *)&local_90);
      }
      iVar4 = Script::GetLineNumber(puVar25,*(undefined4 *)(param_2 + 0x3c));
      iVar5 = Script::GetColumnNumber(puVar25,*(undefined4 *)(param_2 + 0x3c));
      local_78 = CONCAT44(iVar4 + 1,iVar5 + 1);
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
    ::destroy((__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
               *)&local_c8,(__tree_node *)p_Stack_c0);
  }
  pAVar23 = *(AllocationNode **)param_2;
  while (pAVar23 != param_2 + 8) {
    p_Var26 = *(__tree_node_base **)(pAVar23 + 0x20);
    uVar30 = *(uint *)(pAVar23 + 0x28);
    dVar28 = (double)NEON_ucvtf(*(undefined8 *)(this + 0xe0));
    dVar28 = exp(-(double)p_Var26 / dVar28);
    dVar29 = (double)NEON_ucvtf((ulong)uVar30);
    p_Stack_c0 = (__tree_node_base *)(ulong)(uint)(int)((1.0 / (1.0 - dVar28)) * dVar29 + 0.5);
    local_c8 = p_Var26;
    if (puStack_a8 < local_a0) {
      puStack_a8[1] = p_Stack_c0;
      *puStack_a8 = p_Var26;
      puStack_a8 = puStack_a8 + 2;
      pAVar11 = *(AllocationNode **)(pAVar23 + 8);
      if (*(AllocationNode **)(pAVar23 + 8) == (AllocationNode *)0x0) goto LAB_011b6554;
LAB_011b6544:
      do {
        pAVar23 = pAVar11;
        pAVar11 = *(AllocationNode **)pAVar23;
      } while (*(AllocationNode **)pAVar23 != (AllocationNode *)0x0);
    }
    else {
      std::__ndk1::
      vector<v8::AllocationProfile::Allocation,std::__ndk1::allocator<v8::AllocationProfile::Allocation>>
      ::__push_back_slow_path<v8::AllocationProfile::Allocation>
                ((vector<v8::AllocationProfile::Allocation,std::__ndk1::allocator<v8::AllocationProfile::Allocation>>
                  *)&local_b0,(Allocation *)&local_c8);
      pAVar11 = *(AllocationNode **)(pAVar23 + 8);
      if (*(AllocationNode **)(pAVar23 + 8) != (AllocationNode *)0x0) goto LAB_011b6544;
LAB_011b6554:
      pAVar11 = pAVar23 + 0x10;
      bVar3 = *(AllocationNode **)*(AllocationNode **)pAVar11 != pAVar23;
      pAVar23 = *(AllocationNode **)pAVar11;
      if (bVar3) {
        do {
          lVar15 = *(long *)pAVar11;
          pAVar11 = (AllocationNode *)(lVar15 + 0x10);
          pAVar23 = *(AllocationNode **)pAVar11;
        } while (*(long *)pAVar23 != lVar15);
      }
    }
  }
  p_Var26 = *(__tree_node_base **)(param_2 + 0x40);
  pFVar22 = *(Factory **)this;
  p_Stack_c0 = (__tree_node_base *)strlen((char *)p_Var26);
  local_c8 = p_Var26;
  uVar7 = Factory::InternalizeUtf8String(pFVar22,(Vector *)&local_c8);
  puVar12 = local_b0;
  uVar16 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar10 = (long)puStack_a8 - (long)local_b0;
  if (uVar10 == 0) {
    pvVar21 = (void *)0x0;
    pvVar27 = (void *)0x0;
    __dest = (void *)0x0;
  }
  else {
    if ((ulong)((long)uVar10 >> 4) >> 0x3c != 0) {
LAB_011b6988:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __dest = operator_new(uVar10);
    pvVar21 = (void *)((long)__dest + ((long)uVar10 >> 4) * 0x10);
    pvVar27 = __dest;
    if (0 < (long)uVar10) {
      memcpy(__dest,puVar12,uVar10);
      pvVar27 = (void *)((long)__dest + uVar10);
    }
  }
  lVar15 = *(long *)(param_1 + 0x10);
  lVar13 = *(long *)(param_1 + 0x18);
  uVar10 = 0;
  if (lVar13 - lVar15 != 0) {
    uVar10 = (lVar13 - lVar15 >> 3) * 0x2e - 1;
  }
  uVar20 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28);
  if (uVar10 == uVar20) {
    std::__ndk1::
    deque<v8::AllocationProfile::Node,std::__ndk1::allocator<v8::AllocationProfile::Node>>::
    __add_back_capacity((deque<v8::AllocationProfile::Node,std::__ndk1::allocator<v8::AllocationProfile::Node>>
                         *)(param_1 + 8));
    lVar15 = *(long *)(param_1 + 0x10);
    lVar13 = *(long *)(param_1 + 0x18);
    uVar20 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x30);
  }
  if (lVar13 == lVar15) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar12 = (undefined8 *)(*(long *)(lVar15 + (uVar20 / 0x2e) * 8) + (uVar20 % 0x2e) * 0x58);
  }
  *puVar12 = uVar7;
  puVar12[1] = uVar6;
  puVar12[2] = uVar16;
  *(undefined4 *)(puVar12 + 3) = local_78._4_4_;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[8] = __dest;
  puVar12[9] = pvVar27;
  puVar12[10] = pvVar21;
  *(undefined4 *)((long)puVar12 + 0x1c) = (undefined4)local_78;
  *(undefined4 *)(puVar12 + 4) = uVar2;
  uVar10 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  lVar15 = *(long *)(*(long *)(param_1 + 0x10) + (uVar10 / 0x2e) * 8);
  uVar10 = uVar10 % 0x2e;
  if (*(AllocationNode **)(param_2 + 0x18) != param_2 + 0x20) {
    lVar13 = lVar15 + uVar10 * 0x58;
    plVar1 = (long *)(lVar13 + 0x30);
    pAVar23 = *(AllocationNode **)(param_2 + 0x18);
    do {
      local_c8 = (__tree_node_base *)
                 TranslateAllocationNode(this,param_1,*(AllocationNode **)(pAVar23 + 0x28),param_3);
      if ((undefined8 *)*plVar1 < *(undefined8 **)(lVar13 + 0x38)) {
        *(undefined8 *)*plVar1 = local_c8;
        *plVar1 = *plVar1 + 8;
        pAVar11 = *(AllocationNode **)(pAVar23 + 8);
        if (*(AllocationNode **)(pAVar23 + 8) == (AllocationNode *)0x0) goto LAB_011b67ac;
LAB_011b679c:
        do {
          pAVar17 = pAVar11;
          pAVar11 = *(AllocationNode **)pAVar17;
        } while (*(AllocationNode **)pAVar17 != (AllocationNode *)0x0);
      }
      else {
        std::__ndk1::
        vector<v8::AllocationProfile::Node*,std::__ndk1::allocator<v8::AllocationProfile::Node*>>::
        __push_back_slow_path<v8::AllocationProfile::Node*>
                  ((vector<v8::AllocationProfile::Node*,std::__ndk1::allocator<v8::AllocationProfile::Node*>>
                    *)(lVar13 + 0x28),(Node **)&local_c8);
        pAVar11 = *(AllocationNode **)(pAVar23 + 8);
        if (*(AllocationNode **)(pAVar23 + 8) != (AllocationNode *)0x0) goto LAB_011b679c;
LAB_011b67ac:
        pAVar11 = pAVar23 + 0x10;
        pAVar17 = *(AllocationNode **)pAVar11;
        if (*(AllocationNode **)pAVar17 != pAVar23) {
          do {
            lVar18 = *(long *)pAVar11;
            pAVar11 = (AllocationNode *)(lVar18 + 0x10);
            pAVar17 = *(AllocationNode **)pAVar11;
          } while (*(long *)pAVar17 != lVar18);
        }
      }
      pAVar23 = pAVar17;
    } while (pAVar17 != param_2 + 0x20);
  }
  param_2[0x4c] = (AllocationNode)0x0;
  if (local_b0 != (undefined8 *)0x0) {
    puStack_a8 = local_b0;
    operator_delete(local_b0);
  }
  return lVar15 + uVar10 * 0x58;
}

