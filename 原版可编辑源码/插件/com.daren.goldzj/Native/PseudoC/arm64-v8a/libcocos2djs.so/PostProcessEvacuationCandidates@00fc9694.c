
/* v8::internal::MarkCompactCollector::PostProcessEvacuationCandidates() */

void v8::internal::MarkCompactCollector::PostProcessEvacuationCandidates(void)

{
  MemoryChunk *pMVar1;
  long *plVar2;
  MemoryChunk *this;
  uint *puVar3;
  bool bVar4;
  bool bVar5;
  long in_x0;
  void *pvVar6;
  Page *this_00;
  MemoryChunk *in_x1;
  MemoryChunk *extraout_x1;
  MemoryChunk *extraout_x1_00;
  MemoryChunk *extraout_x1_01;
  MemoryChunk *extraout_x1_02;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  __tree_node_base *p_Var10;
  __tree_node_base *p_Var11;
  long *plVar12;
  __tree_node_base *p_Var13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  MemoryChunk *pMVar21;
  double dVar22;
  __tree_node_base *local_a0;
  __tree_node_base *local_98;
  undefined8 *local_90;
  __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
  a_Stack_88 [8];
  __tree_node *local_80;
  MemoryChunk *local_70;
  MemoryChunk *local_68;
  
  plVar20 = *(long **)(in_x0 + 0x26e0);
  plVar9 = *(long **)(in_x0 + 0x26e8);
  if (plVar20 != plVar9) {
    do {
      this = (MemoryChunk *)plVar20[1];
      pMVar21 = (MemoryChunk *)(*plVar20 + -1);
      *(ulong *)(this + 8) = *(ulong *)(this + 8) | 0x8000;
      if (*(SlotSet **)(this + 0x70) != (SlotSet *)0x0) {
        SlotSet::RemoveRange
                  (*(SlotSet **)(this + 0x70),0,(long)((int)pMVar21 - (int)this),
                   *(long *)this + 0xfffU >> 0xc,0);
        in_x1 = extraout_x1_00;
      }
      if (*(SlotSet **)(this + 0x30) != (SlotSet *)0x0) {
        SlotSet::RemoveRange
                  (*(SlotSet **)(this + 0x30),0,(long)((int)pMVar21 - (int)this),
                   *(long *)this + 0xfffU >> 0xc,0);
        in_x1 = extraout_x1_01;
      }
      lVar15 = *(long *)(this + 0x78);
      if (lVar15 != 0) {
        plVar18 = *(long **)(lVar15 + 8);
        if (plVar18 != (long *)0x0) {
          plVar12 = (long *)0x0;
          do {
            while( true ) {
              puVar7 = (uint *)plVar18[1];
              puVar3 = (uint *)plVar18[2];
              if (puVar7 != puVar3) break;
              plVar19 = (long *)*plVar18;
LAB_00fc9854:
              plVar2 = (long *)(lVar15 + 8);
              if (plVar12 != (long *)0x0) {
                plVar2 = plVar12;
              }
              *plVar2 = (long)plVar19;
              pvVar6 = (void *)plVar18[1];
              if (pvVar6 != (void *)0x0) {
                plVar18[2] = (long)pvVar6;
                operator_delete(pvVar6);
              }
              operator_delete(plVar18);
              in_x1 = extraout_x1_02;
              plVar18 = plVar19;
              if (plVar19 == (long *)0x0) goto LAB_00fc9880;
            }
            bVar5 = true;
            do {
              bVar4 = bVar5;
              if ((*puVar7 & 0xe0000000) != 0xa0000000) {
                pMVar1 = (MemoryChunk *)(*(long *)(lVar15 + 0x18) + ((ulong)*puVar7 & 0x1fffffff));
                bVar4 = false;
                if ((this <= pMVar1) && (pMVar1 < pMVar21)) {
                  *puVar7 = 0xa0000000;
                  bVar4 = bVar5;
                }
              }
              puVar7 = puVar7 + 1;
              bVar5 = bVar4;
            } while (puVar3 != puVar7);
            plVar19 = (long *)*plVar18;
            if (bVar4) goto LAB_00fc9854;
            plVar12 = plVar18;
            plVar18 = plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
LAB_00fc9880:
      if (*(MemoryChunk **)(this + 0x20) < pMVar21) {
        InvalidatedSlotsCleanup::OldToNew((InvalidatedSlotsCleanup *)this,in_x1);
        if (local_a0 != local_98) {
          p_Var11 = local_a0;
          if (local_68 < *(MemoryChunk **)(this + 0x20)) {
            p_Var10 = *(__tree_node_base **)(local_a0 + 8);
            if (*(__tree_node_base **)(local_a0 + 8) != (__tree_node_base *)0x0) goto LAB_00fc98d8;
            do {
              p_Var10 = local_a0 + 0x10;
              p_Var11 = *(__tree_node_base **)p_Var10;
              if (*(__tree_node_base **)p_Var11 != local_a0) {
                do {
                  lVar15 = *(long *)p_Var10;
                  p_Var10 = (__tree_node_base *)(lVar15 + 0x10);
                  p_Var11 = *(__tree_node_base **)p_Var10;
                } while (*(long *)p_Var11 != lVar15);
              }
              while( true ) {
                local_68 = local_70;
                if (p_Var11 != local_98) {
                  local_68 = (MemoryChunk *)(*(long *)(p_Var11 + 0x20) + -1);
                }
                if (*(MemoryChunk **)(this + 0x20) <= local_68) goto joined_r0x00fc993c;
                p_Var10 = *(__tree_node_base **)(p_Var11 + 8);
                local_a0 = p_Var11;
                if (*(__tree_node_base **)(p_Var11 + 8) == (__tree_node_base *)0x0) break;
LAB_00fc98d8:
                do {
                  p_Var11 = p_Var10;
                  p_Var10 = *(__tree_node_base **)p_Var11;
                } while (*(__tree_node_base **)p_Var11 != (__tree_node_base *)0x0);
              }
            } while( true );
          }
joined_r0x00fc993c:
          while (local_a0 = p_Var11, local_68 < pMVar21) {
            p_Var10 = *(__tree_node_base **)(p_Var11 + 8);
            if (*(__tree_node_base **)(p_Var11 + 8) == (__tree_node_base *)0x0) {
              p_Var10 = p_Var11 + 0x10;
              p_Var13 = *(__tree_node_base **)p_Var10;
              if (*(__tree_node_base **)p_Var13 != p_Var11) {
                do {
                  lVar15 = *(long *)p_Var10;
                  p_Var10 = (__tree_node_base *)(lVar15 + 0x10);
                  p_Var13 = *(__tree_node_base **)p_Var10;
                } while (*(long *)p_Var13 != lVar15);
              }
            }
            else {
              do {
                p_Var13 = p_Var10;
                p_Var10 = *(__tree_node_base **)p_Var13;
              } while (*(__tree_node_base **)p_Var13 != (__tree_node_base *)0x0);
            }
            if ((__tree_node_base *)*local_90 == p_Var11) {
              *local_90 = p_Var13;
            }
            local_90[2] = local_90[2] + -1;
            std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                      ((__tree_node_base *)local_90[1],p_Var11);
            operator_delete(p_Var11);
            p_Var11 = p_Var13;
            local_68 = local_70;
            if (p_Var13 != local_98) {
              local_68 = (MemoryChunk *)(*(long *)(p_Var13 + 0x20) + -1);
            }
          }
        }
        std::__ndk1::
        __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
        ::destroy(a_Stack_88,local_80);
      }
      LiveObjectVisitor::RecomputeLiveBytes<v8::internal::MajorNonAtomicMarkingState>
                (this,(MajorNonAtomicMarkingState *)(in_x0 + 0x2701));
      local_98 = *(__tree_node_base **)(in_x0 + 8);
      local_a0 = (__tree_node_base *)&PTR__HeapObjectVisitor_01ca85a0;
      LiveObjectVisitor::
      VisitBlackObjectsNoFail<v8::internal::EvacuateRecordOnlyVisitor,v8::internal::MajorNonAtomicMarkingState>
                (this,(MajorNonAtomicMarkingState *)(in_x0 + 0x2701),&local_a0,0);
      plVar20 = plVar20 + 2;
      in_x1 = extraout_x1;
    } while (plVar20 != plVar9);
    plVar9 = *(long **)(in_x0 + 0x26e8);
    plVar20 = *(long **)(in_x0 + 0x26e0);
  }
  puVar17 = *(undefined8 **)(in_x0 + 0x26b8);
  uVar16 = (ulong)((long)plVar9 - (long)plVar20) >> 4;
  for (puVar14 = *(undefined8 **)(in_x0 + 0x26b0); puVar14 != puVar17; puVar14 = puVar14 + 1) {
    this_00 = (Page *)*puVar14;
    if (((uint)*(ulong *)(this_00 + 8) >> 0xf & 1) == 0) {
      lVar15 = *(long *)(this_00 + 0x58);
      if (*(Page **)(lVar15 + 0x28) == this_00) {
        *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(this_00 + 0xe8);
      }
      if (*(Page **)(lVar15 + 0x20) == this_00) {
        *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(this_00 + 0xe0);
      }
      lVar15 = *(long *)(this_00 + 0xe0);
      lVar8 = *(long *)(this_00 + 0xe8);
      if (lVar15 != 0) {
        *(long *)(lVar15 + 0xe8) = lVar8;
      }
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0xe0) = lVar15;
      }
      *(undefined8 *)(this_00 + 0xe0) = 0;
      *(undefined8 *)(this_00 + 0xe8) = 0;
    }
    else {
      *(ulong *)(this_00 + 8) = *(ulong *)(this_00 + 8) & 0xffffffffffffffbf;
      Page::InitializeFreeListCategories(this_00);
    }
  }
  if ((0 < (int)uVar16) && (FLAG_trace_evacuation != '\0')) {
    lVar15 = *(long *)(in_x0 + 8);
    dVar22 = (double)Heap::MonotonicallyIncreasingTimeInMs();
    PrintIsolate((void *)(lVar15 + -0x8850),"%8.0f ms: evacuation: aborted=%d\n",
                 dVar22 - *(double *)(lVar15 + 0x2e70),uVar16 & 0xffffffff);
  }
  return;
}

