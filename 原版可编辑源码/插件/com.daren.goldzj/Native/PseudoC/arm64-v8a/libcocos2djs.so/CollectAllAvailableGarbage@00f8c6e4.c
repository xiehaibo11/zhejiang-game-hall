
/* v8::internal::Heap::CollectAllAvailableGarbage(v8::internal::GarbageCollectionReason) */

void __thiscall v8::internal::Heap::CollectAllAvailableGarbage(Heap *this,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  __tree_node_base *p_Var8;
  PagedSpace *pPVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong *puVar12;
  pair *ppVar13;
  pair *ppVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  int *piVar18;
  NewLargeObjectSpace *this_00;
  __tree_node_base *p_Var19;
  __tree_node_base *p_Var20;
  uint uVar21;
  __tree_node_base *p_Var22;
  __tree_node_base *p_Var23;
  pair *local_f8;
  pair *local_f0;
  pair *local_e8;
  long local_d8;
  __tree_node_base *local_b8;
  __tree_node_base *local_b0;
  long local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  pair *local_70;
  ulong uStack_68;
  pair *local_48;
  
  if (param_2 == 0xd) {
    InvokeNearHeapLimitCallback(this);
  }
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(this + 0xcd0) + 0x58a0);
    RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x86);
  }
  uVar21 = 1;
  Isolate::AbortConcurrentOptimization((Isolate *)(this + -0x8850),1);
  Isolate::ClearSerializerData((Isolate *)(this + -0x8850));
  *(undefined4 *)(this + 0xad4) = 1;
  CompilationCache::Clear(*(CompilationCache **)(*(long *)(this + 0x30) + 0x9518));
  uVar10 = 4;
  if (param_2 != 0xe) {
    uVar10 = 0x10;
  }
  do {
    bVar5 = CollectGarbage(this,2,param_2,uVar10);
    if ((uVar21 != 1 & (bVar5 ^ 1)) != 0) break;
    bVar4 = uVar21 < 7;
    uVar21 = uVar21 + 1;
  } while (bVar4);
  *(undefined4 *)(this + 0xad4) = 0;
  NewSpace::Shrink(*(NewSpace **)(this + 0xe8));
  this_00 = *(NewLargeObjectSpace **)(this + 0x118);
  uVar11 = *(ulong *)(*(long *)(this + 0xe8) + 0x138);
  lVar7 = MemoryChunkLayout::AllocatableMemoryInDataPage();
  NewLargeObjectSpace::SetCapacity(this_00,(uVar11 >> 0x12) * lVar7);
  if (*(char *)(*(long *)(this + 0xe8) + 0x1f8) != '\0') {
    SemiSpace::Uncommit((SemiSpace *)(*(long *)(this + 0xe8) + 0x170));
  }
  EagerlyFreeExternalMemory(this);
  if (FLAG_trace_duplicate_threshold_kb != 0) {
    p_Var23 = (__tree_node_base *)&local_b0;
    local_b0 = (__tree_node_base *)0x0;
    local_a8 = 0;
    pPVar9 = *(PagedSpace **)(this + 0xf0);
    local_b8 = p_Var23;
    if (pPVar9 != (PagedSpace *)0x0) {
      uVar21 = 3;
LAB_00f8c82c:
      PagedSpaceObjectIterator::PagedSpaceObjectIterator
                ((PagedSpaceObjectIterator *)&local_f8,this,pPVar9);
      do {
        ppVar13 = local_e8;
        if (local_f0 != local_e8) {
          do {
            while ((local_f0 == *(pair **)(local_d8 + 0x68) &&
                   (ppVar14 = *(pair **)(local_d8 + 0x70), local_f0 != ppVar14))) {
              local_f0 = ppVar14;
              if (ppVar14 == ppVar13) goto LAB_00f8c844;
            }
            local_70 = local_f0 + 1;
            iVar6 = HeapObject::SizeFromMap
                              ((HeapObject *)&local_70,
                               (ulong)local_70 & 0xffffffff00000000 | (ulong)*(uint *)local_f0);
            local_f0 = local_f0 + iVar6;
            if ((*(ushort *)
                  (((ulong)local_70 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_70 + -1)) | 1
                ) != 0xa1) {
              if ((int)local_70 != 0) goto LAB_00f8cadc;
              break;
            }
            ppVar13 = local_e8;
          } while (local_f0 != local_e8);
        }
LAB_00f8c844:
        uVar11 = PagedSpaceObjectIterator::AdvanceToNextPage((PagedSpaceObjectIterator *)&local_f8);
      } while ((uVar11 & 1) != 0);
      local_48 = (pair *)0x0;
      goto joined_r0x00f8caf0;
    }
LAB_00f8caf4:
    LargeObjectSpaceObjectIterator::LargeObjectSpaceObjectIterator
              ((LargeObjectSpaceObjectIterator *)&local_f8,*(LargeObjectSpace **)(this + 0x108));
    while( true ) {
      local_70 = (pair *)LargeObjectSpaceObjectIterator::Next
                                   ((LargeObjectSpaceObjectIterator *)&local_f8);
      if ((int)local_70 == 0) break;
      iVar6 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_70,
                         (ulong)local_70 & 0xffffffff00000000 | (ulong)*(uint *)(local_70 + -1));
      p_Var20 = p_Var23;
      p_Var8 = p_Var23;
      p_Var19 = local_b0;
      while (p_Var19 != (__tree_node_base *)0x0) {
        while (p_Var8 = p_Var19, iVar6 < *(int *)(p_Var8 + 0x20)) {
          p_Var20 = p_Var8;
          p_Var19 = *(__tree_node_base **)p_Var8;
          if (*(__tree_node_base **)p_Var8 == (__tree_node_base *)0x0) {
            p_Var19 = *(__tree_node_base **)p_Var8;
            goto joined_r0x00f8cbdc;
          }
        }
        if (iVar6 <= *(int *)(p_Var8 + 0x20)) break;
        p_Var20 = p_Var8 + 8;
        p_Var19 = *(__tree_node_base **)p_Var20;
      }
      p_Var19 = *(__tree_node_base **)p_Var20;
joined_r0x00f8cbdc:
      if (p_Var19 == (__tree_node_base *)0x0) {
        p_Var19 = operator_new(0x40);
        *(int *)(p_Var19 + 0x20) = iVar6;
        *(undefined8 *)(p_Var19 + 0x30) = 0;
        *(undefined8 *)(p_Var19 + 0x38) = 0;
        *(undefined8 *)(p_Var19 + 0x28) = 0;
        *(undefined8 *)p_Var19 = 0;
        *(undefined8 *)(p_Var19 + 8) = 0;
        *(__tree_node_base **)(p_Var19 + 0x10) = p_Var8;
        *(__tree_node_base **)p_Var20 = p_Var19;
        p_Var8 = p_Var19;
        if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
          p_Var8 = *(__tree_node_base **)p_Var20;
          local_b8 = *(__tree_node_base **)local_b8;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (local_b0,p_Var8);
        local_a8 = local_a8 + 1;
      }
      if (*(ulong **)(p_Var19 + 0x30) == *(ulong **)(p_Var19 + 0x38)) {
        std::__ndk1::
        vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>::
        __push_back_slow_path<v8::internal::HeapObject_const&>
                  ((vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
                    *)(p_Var19 + 0x28),(HeapObject *)&local_70);
      }
      else {
        **(ulong **)(p_Var19 + 0x30) = (ulong)local_70;
        *(long *)(p_Var19 + 0x30) = *(long *)(p_Var19 + 0x30) + 8;
      }
    }
    if (p_Var23 != local_b8) {
      do {
        p_Var20 = *(__tree_node_base **)p_Var23;
        p_Var8 = p_Var23;
        p_Var19 = p_Var20;
        if (p_Var20 == (__tree_node_base *)0x0) {
          do {
            p_Var22 = *(__tree_node_base **)(p_Var8 + 0x10);
            bVar4 = *(__tree_node_base **)p_Var22 == p_Var8;
            p_Var8 = p_Var22;
          } while (bVar4);
        }
        else {
          do {
            p_Var22 = p_Var19;
            p_Var19 = *(__tree_node_base **)(p_Var22 + 8);
          } while (*(__tree_node_base **)(p_Var22 + 8) != (__tree_node_base *)0x0);
        }
        uVar21 = *(uint *)(p_Var22 + 0x20);
        p_Var8 = p_Var20;
        p_Var19 = p_Var23;
        if (p_Var20 == (__tree_node_base *)0x0) {
          do {
            p_Var22 = *(__tree_node_base **)(p_Var19 + 0x10);
            bVar4 = *(__tree_node_base **)p_Var22 == p_Var19;
            p_Var19 = p_Var22;
          } while (bVar4);
        }
        else {
          do {
            p_Var22 = p_Var8;
            p_Var8 = *(__tree_node_base **)(p_Var22 + 8);
          } while (*(__tree_node_base **)(p_Var22 + 8) != (__tree_node_base *)0x0);
        }
        if (*(long *)(p_Var22 + 0x30) != *(long *)(p_Var22 + 0x28)) {
          local_f8 = (pair *)CONCAT44(local_f8._4_4_,uVar21);
          FUN_00f9c1e8(*(long *)(p_Var22 + 0x28),*(long *)(p_Var22 + 0x30),&local_f8);
          local_f0 = (pair *)0x0;
          local_e8 = (pair *)0x0;
          local_f8 = (pair *)0x0;
          puVar12 = *(ulong **)(p_Var22 + 0x28);
          lVar7 = *(long *)(p_Var22 + 0x30);
          if (1 < (ulong)(lVar7 - (long)puVar12 >> 3)) {
            uVar2 = uVar21 + 3;
            if (-1 < (int)uVar21) {
              uVar2 = uVar21;
            }
            iVar6 = 1;
            uVar11 = 1;
            uVar15 = *puVar12;
            if (3 < (int)uVar21) goto LAB_00f8cd28;
LAB_00f8cd0c:
            do {
              uVar16 = uVar15;
              iVar6 = iVar6 + 1;
              while( true ) {
                uVar11 = uVar11 + 1;
                if ((ulong)(lVar7 - (long)puVar12 >> 3) <= uVar11) {
                  ppVar13 = (pair *)(ulong)(iVar6 - 1U);
                  if (iVar6 - 1U != 0 && 0 < iVar6) {
                    local_70 = ppVar13;
                    uStack_68 = uVar16;
                    if (local_f0 < local_e8) {
                      *(ulong *)(local_f0 + 8) = uVar16;
                      *(pair **)local_f0 = ppVar13;
                      local_f0 = local_f0 + 0x10;
                    }
                    else {
                      std::__ndk1::
                      vector<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::allocator<std::__ndk1::pair<int,v8::internal::HeapObject>>>
                      ::__push_back_slow_path<std::__ndk1::pair<int,v8::internal::HeapObject>>
                                ((vector<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::allocator<std::__ndk1::pair<int,v8::internal::HeapObject>>>
                                  *)&local_f8,(pair *)&local_70);
                    }
                  }
                  goto LAB_00f8cdf4;
                }
                uVar15 = uVar16;
                if ((int)uVar21 < 4) break;
LAB_00f8cd28:
                uVar16 = puVar12[uVar11];
                piVar18 = (int *)(uVar15 - 1);
                piVar17 = (int *)(uVar16 - 1);
                iVar3 = (int)uVar2 >> 2;
                while (*piVar18 == *piVar17) {
                  piVar18 = piVar18 + 1;
                  iVar3 = iVar3 + -1;
                  piVar17 = piVar17 + 1;
                  if (iVar3 == 0) goto LAB_00f8cd0c;
                }
                if (iVar6 < 2) {
                  iVar6 = 1;
                }
                else {
                  local_70 = (pair *)(ulong)(iVar6 - 1);
                  uStack_68 = uVar15;
                  if (local_f0 < local_e8) {
                    *(ulong *)(local_f0 + 8) = uVar15;
                    *(pair **)local_f0 = local_70;
                    local_f0 = local_f0 + 0x10;
                  }
                  else {
                    std::__ndk1::
                    vector<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::allocator<std::__ndk1::pair<int,v8::internal::HeapObject>>>
                    ::__push_back_slow_path<std::__ndk1::pair<int,v8::internal::HeapObject>>
                              ((vector<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::allocator<std::__ndk1::pair<int,v8::internal::HeapObject>>>
                                *)&local_f8,(pair *)&local_70);
                  }
                  puVar12 = *(ulong **)(p_Var22 + 0x28);
                  lVar7 = *(long *)(p_Var22 + 0x30);
                  iVar6 = 1;
                  uVar16 = puVar12[uVar11];
                }
              }
            } while( true );
          }
LAB_00f8cdf4:
          iVar6 = FLAG_trace_duplicate_threshold_kb;
          std::__ndk1::
          __sort<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
                    (local_f8,local_f0,(__less *)&local_70);
          ppVar13 = local_f0;
          if (local_f0 != local_f8) {
            ppVar14 = local_f0 + -0x10;
            uVar2 = *(uint *)ppVar14;
            while (iVar3 = uVar2 * uVar21, ppVar13 = local_f8, iVar6 * 0x400 <= iVar3) {
              iVar1 = iVar3 + 0x3ff;
              if (-1 < iVar3) {
                iVar1 = iVar3;
              }
              PrintF("%d duplicates of size %d each (%dKB)\n",(ulong)uVar2,(ulong)uVar21,
                     (ulong)(uint)(iVar1 >> 10));
              PrintF("Sample object: ");
              Object::Print((Object *)(ppVar14 + 8));
              PrintF("============================\n");
              if (ppVar14 == local_f8) goto LAB_00f8ce80;
              ppVar14 = ppVar14 + -0x10;
              uVar2 = *(uint *)ppVar14;
            }
          }
          ppVar14 = ppVar13;
          if (ppVar14 != (pair *)0x0) {
LAB_00f8ce80:
            local_f0 = ppVar14;
            operator_delete(ppVar14);
          }
          p_Var20 = *(__tree_node_base **)p_Var23;
        }
        p_Var8 = p_Var23;
        if (p_Var20 == (__tree_node_base *)0x0) {
          do {
            p_Var23 = *(__tree_node_base **)(p_Var8 + 0x10);
            bVar4 = *(__tree_node_base **)p_Var23 == p_Var8;
            p_Var8 = p_Var23;
          } while (bVar4);
        }
        else {
          do {
            p_Var23 = p_Var20;
            p_Var20 = *(__tree_node_base **)(p_Var23 + 8);
          } while (*(__tree_node_base **)(p_Var23 + 8) != (__tree_node_base *)0x0);
        }
      } while (p_Var23 != local_b8);
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<int,std::__ndk1::vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<int,std::__ndk1::vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>>>>
               *)&local_b8,(__tree_node *)local_b0);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return;
LAB_00f8cadc:
  local_48 = local_70;
  if ((int)local_70 != 0) {
    iVar6 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_48,
                       (ulong)local_70 & 0xffffffff00000000 | (ulong)*(uint *)(local_70 + -1));
    p_Var20 = p_Var23;
    p_Var8 = p_Var23;
    p_Var19 = local_b0;
    while (p_Var19 != (__tree_node_base *)0x0) {
      while (p_Var8 = p_Var19, iVar6 < *(int *)(p_Var8 + 0x20)) {
        p_Var20 = p_Var8;
        p_Var19 = *(__tree_node_base **)p_Var8;
        if (*(__tree_node_base **)p_Var8 == (__tree_node_base *)0x0) {
          p_Var19 = *(__tree_node_base **)p_Var8;
          goto joined_r0x00f8c9e0;
        }
      }
      if (iVar6 <= *(int *)(p_Var8 + 0x20)) break;
      p_Var20 = p_Var8 + 8;
      p_Var19 = *(__tree_node_base **)p_Var20;
    }
    p_Var19 = *(__tree_node_base **)p_Var20;
joined_r0x00f8c9e0:
    if (p_Var19 == (__tree_node_base *)0x0) {
      p_Var19 = operator_new(0x40);
      *(int *)(p_Var19 + 0x20) = iVar6;
      *(undefined8 *)(p_Var19 + 0x30) = 0;
      *(undefined8 *)(p_Var19 + 0x38) = 0;
      *(undefined8 *)(p_Var19 + 0x28) = 0;
      *(undefined8 *)p_Var19 = 0;
      *(undefined8 *)(p_Var19 + 8) = 0;
      *(__tree_node_base **)(p_Var19 + 0x10) = p_Var8;
      *(__tree_node_base **)p_Var20 = p_Var19;
      p_Var8 = p_Var19;
      if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
        p_Var8 = *(__tree_node_base **)p_Var20;
        local_b8 = *(__tree_node_base **)local_b8;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (local_b0,p_Var8);
      local_a8 = local_a8 + 1;
    }
    if (*(undefined8 **)(p_Var19 + 0x30) == *(undefined8 **)(p_Var19 + 0x38)) {
      std::__ndk1::vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
      ::__push_back_slow_path<v8::internal::HeapObject_const&>
                ((vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
                  *)(p_Var19 + 0x28),(HeapObject *)&local_48);
    }
    else {
      **(undefined8 **)(p_Var19 + 0x30) = local_48;
      *(long *)(p_Var19 + 0x30) = *(long *)(p_Var19 + 0x30) + 8;
    }
    do {
      ppVar13 = local_e8;
      if (local_f0 != local_e8) {
        do {
          while ((local_f0 == *(pair **)(local_d8 + 0x68) &&
                 (ppVar14 = *(pair **)(local_d8 + 0x70), local_f0 != ppVar14))) {
            local_f0 = ppVar14;
            if (ppVar14 == ppVar13) goto LAB_00f8ca3c;
          }
          local_70 = local_f0 + 1;
          iVar6 = HeapObject::SizeFromMap
                            ((HeapObject *)&local_70,
                             (ulong)local_70 & 0xffffffff00000000 | (ulong)*(uint *)local_f0);
          local_f0 = local_f0 + iVar6;
          if ((*(ushort *)
                (((ulong)local_70 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_70 + -1)) | 1)
              != 0xa1) {
            if ((int)local_70 != 0) goto LAB_00f8cadc;
            break;
          }
          ppVar13 = local_e8;
        } while (local_f0 != local_e8);
      }
LAB_00f8ca3c:
      uVar11 = PagedSpaceObjectIterator::AdvanceToNextPage((PagedSpaceObjectIterator *)&local_f8);
    } while ((uVar11 & 1) != 0);
    local_48 = (pair *)0x0;
  }
joined_r0x00f8caf0:
  if (4 < uVar21) goto LAB_00f8caf4;
  switch(uVar21) {
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 2:
    pPVar9 = *(PagedSpace **)(this + 0xf0);
    break;
  case 3:
    pPVar9 = *(PagedSpace **)(this + 0xf8);
    break;
  case 4:
    pPVar9 = *(PagedSpace **)(this + 0x100);
  }
  uVar21 = uVar21 + 1;
  if (pPVar9 == (PagedSpace *)0x0) goto LAB_00f8caf4;
  goto LAB_00f8c82c;
}

