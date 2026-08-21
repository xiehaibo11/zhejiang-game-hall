
/* v8::internal::Sweeper::RawSweep(v8::internal::Page*,
   v8::internal::Sweeper::FreeListRebuildingMode, v8::internal::FreeSpaceTreatmentMode,
   v8::internal::Sweeper::FreeSpaceMayContainInvalidatedSlots) */

undefined4 __thiscall
v8::internal::Sweeper::RawSweep
          (Sweeper *this,MemoryChunk *param_1,int param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  __tree_node **pp_Var3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  MemoryChunk *extraout_x1;
  MemoryChunk *extraout_x1_00;
  MemoryChunk *pMVar9;
  MemoryChunk *extraout_x1_01;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  __tree_node_base *p_Var14;
  __tree_node_base *p_Var15;
  int iVar16;
  void *pvVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  void *__s;
  CodeObjectRegistry *this_00;
  long local_1b0;
  ulong local_198;
  __tree_node_base *local_190;
  __tree_node_base *p_Stack_188;
  undefined8 *local_180;
  __tree_node **local_178;
  __tree_node *local_170;
  long local_168;
  void *local_160;
  void *pvStack_158;
  __tree_node_base *local_148;
  __tree_node_base *local_140;
  long local_138;
  MemoryChunk *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  MemoryChunk *local_110;
  long lStack_108;
  uint local_100;
  uint local_fc;
  MemoryChunk *local_f8;
  MemoryChunk *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  __tree_node_base *local_d0;
  __tree_node_base *p_Stack_c8;
  undefined8 *local_c0;
  __tree_node **local_b8;
  __tree_node *local_b0;
  long local_a8;
  uint local_a0;
  uint uStack_9c;
  MemoryChunk *pMStack_98;
  MemoryChunk *local_90;
  undefined4 local_88;
  ulong local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar10 = *(long *)(param_1 + 0x58);
  this_00 = *(CodeObjectRegistry **)(param_1 + 0x110);
  if (*(long *)(param_1 + 0x78) == 0) {
    bVar4 = *(long *)(param_1 + 0x80) != 0;
  }
  else {
    bVar4 = true;
  }
  p_Var15 = (__tree_node_base *)&local_140;
  local_140 = (__tree_node_base *)0x0;
  local_138 = 0;
  lVar21 = *(long *)(param_1 + 0xf8);
  pMVar9 = param_1;
  local_148 = p_Var15;
  if ((lVar21 != 0) &&
     (LocalArrayBufferTracker::
      Free<v8::internal::ArrayBufferTracker::FreeDead<v8::internal::MajorNonAtomicMarkingState>(v8::internal::Page*,v8::internal::MajorNonAtomicMarkingState*)::_lambda(v8::internal::JSArrayBuffer)_1_>
                (lVar21,*(undefined8 *)(this + 8)), pMVar9 = extraout_x1,
     *(long *)(lVar21 + 0x20) == 0)) {
    MemoryChunk::ReleaseLocalTracker(param_1);
    pMVar9 = extraout_x1_00;
  }
  __s = *(void **)(param_1 + 0x20);
  InvalidatedSlotsCleanup::NoCleanup((InvalidatedSlotsCleanup *)param_1,pMVar9);
  if (param_5 == 0) {
    InvalidatedSlotsCleanup::OldToNew((InvalidatedSlotsCleanup *)param_1,extraout_x1_01);
    p_Stack_188 = p_Stack_c8;
    local_190 = local_d0;
    local_180 = local_c0;
    std::__ndk1::
    __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
    ::destroy((__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
               *)&local_178,local_170);
    local_178 = local_b8;
    local_170 = local_b0;
    local_168 = local_a8;
    pp_Var3 = &local_170;
    if (local_a8 != 0) {
      local_b8 = &local_b0;
      *(__tree_node ***)(local_b0 + 0x10) = &local_170;
      local_b0 = (__tree_node *)0x0;
      local_a8 = 0;
      pp_Var3 = local_178;
    }
    local_178 = pp_Var3;
    local_160 = (void *)CONCAT44(uStack_9c,local_a0);
    pvStack_158 = pMStack_98;
    std::__ndk1::
    __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
    ::destroy((__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
               *)&local_b8,local_b0);
  }
  Page::ResetAllocationStatistics((Page *)param_1);
  if (this_00 != (CodeObjectRegistry *)0x0) {
    CodeObjectRegistry::Clear(this_00);
  }
  lVar21 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x28);
  local_d0 = (__tree_node_base *)param_1;
  local_c0 = (undefined8 *)*(undefined8 *)(lVar11 + -0x87c0);
  p_Stack_c8 = (__tree_node_base *)*(undefined8 *)(lVar11 + -0x87c8);
  uVar19 = (ulong)(lVar1 - (long)param_1) >> 7 & 0x1ffffff;
  uVar13 = (ulong)(*(long *)(param_1 + 0x20) - (long)param_1) >> 7 & 0x1ffffff;
  local_b8 = (__tree_node **)*(undefined8 *)(lVar11 + -0x87d0);
  local_b0 = (__tree_node *)param_1;
  local_a8 = lVar21;
  uVar18 = (uint)uVar19;
  local_a0 = uVar18;
  uStack_9c = 0;
  local_80 = 0;
  pMStack_98 = param_1;
  uVar12 = (uint)uVar13;
  if (uVar12 != 0) {
    uStack_9c = uVar12;
    pMStack_98 = param_1 + (*(long *)(param_1 + 0x20) - (long)param_1 & 0xffffff80);
  }
  iVar16 = (int)param_1;
  local_100 = uVar18;
  if (uVar12 < uVar18) {
    local_88 = *(undefined4 *)(lVar21 + uVar13 * 4);
    local_90 = pMStack_98;
    LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::AdvanceToNextValidObject
              ((iterator *)&local_d0);
    lVar11 = *(long *)(param_1 + 0x18);
    local_100 = (uint)(*(int *)(param_1 + 0x28) - iVar16) >> 7;
  }
  local_130 = param_1;
  uStack_120 = *(undefined8 *)(lVar11 + -0x87c0);
  local_128 = *(undefined8 *)(lVar11 + -0x87c8);
  local_110 = param_1;
  lStack_108 = lVar21;
  local_fc = 0;
  local_e0 = 0;
  local_118 = *(undefined8 *)(lVar11 + -0x87d0);
  local_f8 = param_1;
  if (uVar18 == 0) {
    if (local_100 != 0) goto LAB_01022f0c;
  }
  else {
    local_fc = uVar18;
    local_f8 = param_1 + (lVar1 - (long)param_1 & 0xffffff80);
    if (uVar18 < local_100) {
LAB_01022f0c:
      local_e8 = *(undefined4 *)(lVar21 + uVar19 * 4);
      local_f0 = local_f8;
      LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::AdvanceToNextValidObject
                ((iterator *)&local_130);
      iVar5 = (int)local_e0;
      goto LAB_01022f38;
    }
  }
  iVar5 = 0;
LAB_01022f38:
  if ((int)local_80 == iVar5) {
    lVar21 = 0;
    local_1b0 = 0;
  }
  else {
    lVar21 = 0;
    local_1b0 = 0;
    uVar13 = local_80;
    do {
      local_198 = uVar13;
      local_80 = local_198;
      if (this_00 != (CodeObjectRegistry *)0x0) {
        CodeObjectRegistry::RegisterAlreadyExistingCodeObject(this_00,local_198 - 1);
      }
      pvVar17 = (void *)(local_198 - 1);
      uVar13 = (long)pvVar17 - (long)__s;
      if (uVar13 != 0) {
        if (pvVar17 < __s) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","free_end > free_start");
        }
        if (param_4 == 1) {
          memset(__s,0xcc,uVar13);
        }
        if (param_3 == 0) {
          if (uVar13 == 0) {
            lVar11 = 0;
          }
          else {
            Heap::CreateFillerObjectAt(*(Heap **)(lVar10 + 0x40),__s,uVar13 & 0xffffffff,1,1);
            lVar11 = (**(code **)(**(long **)(lVar10 + 0x60) + 0x18))
                               (*(long **)(lVar10 + 0x60),__s,uVar13,1);
            lVar11 = uVar13 - lVar11;
          }
          if (local_1b0 <= lVar11) {
            local_1b0 = lVar11;
          }
        }
        else {
          Heap::CreateFillerObjectAt(*(Heap **)(param_1 + 0x18),__s,uVar13 & 0xffffffff,1,0);
        }
        if (this[0x142] != (Sweeper)0x0) {
          MemoryChunk::DiscardUnusedMemory(param_1,(ulong)__s,uVar13);
        }
        iVar20 = (int)__s;
        iVar5 = (int)pvVar17;
        if (*(SlotSet **)(param_1 + 0x70) != (SlotSet *)0x0) {
          SlotSet::RemoveRange
                    (*(SlotSet **)(param_1 + 0x70),(long)(iVar20 - iVar16),(long)(iVar5 - iVar16),
                     *(long *)param_1 + 0xfffU >> 0xc,1);
        }
        if (*(SlotSet **)(param_1 + 0x38) != (SlotSet *)0x0) {
          SlotSet::RemoveRange
                    (*(SlotSet **)(param_1 + 0x38),(long)(iVar20 - iVar16),(long)(iVar5 - iVar16),
                     *(long *)param_1 + 0xfffU >> 0xc,1);
        }
        if (bVar4) {
          uVar12 = iVar20 - iVar16;
          p_Var14 = p_Var15;
          p_Var8 = p_Var15;
          p_Var7 = local_140;
          while (p_Var7 != (__tree_node_base *)0x0) {
            while (p_Var8 = p_Var7, uVar12 < *(uint *)(p_Var8 + 0x1c)) {
              p_Var7 = *(__tree_node_base **)p_Var8;
              p_Var14 = p_Var8;
              if (*(__tree_node_base **)p_Var8 == (__tree_node_base *)0x0) {
                lVar11 = *(long *)p_Var8;
                goto joined_r0x01023184;
              }
            }
            if (uVar12 <= *(uint *)(p_Var8 + 0x1c)) break;
            p_Var14 = p_Var8 + 8;
            p_Var7 = *(__tree_node_base **)p_Var14;
          }
          lVar11 = *(long *)p_Var14;
joined_r0x01023184:
          if (lVar11 == 0) {
            p_Var7 = operator_new(0x28);
            *(uint *)(p_Var7 + 0x1c) = uVar12;
            *(int *)(p_Var7 + 0x20) = iVar5 - iVar16;
            *(undefined8 *)p_Var7 = 0;
            *(undefined8 *)(p_Var7 + 8) = 0;
            *(__tree_node_base **)(p_Var7 + 0x10) = p_Var8;
            *(__tree_node_base **)p_Var14 = p_Var7;
            if (*(__tree_node_base **)local_148 != (__tree_node_base *)0x0) {
              p_Var7 = *(__tree_node_base **)p_Var14;
              local_148 = *(__tree_node_base **)local_148;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (local_140,p_Var7);
            local_138 = local_138 + 1;
          }
        }
        if (local_190 != p_Stack_188) {
          p_Var14 = local_190;
          if (pvStack_158 < __s) {
            p_Var8 = *(__tree_node_base **)(local_190 + 8);
            if (*(__tree_node_base **)(local_190 + 8) != (__tree_node_base *)0x0) goto LAB_010231e8;
            do {
              p_Var8 = local_190 + 0x10;
              p_Var14 = *(__tree_node_base **)p_Var8;
              if (*(__tree_node_base **)p_Var14 != local_190) {
                do {
                  lVar11 = *(long *)p_Var8;
                  p_Var8 = (__tree_node_base *)(lVar11 + 0x10);
                  p_Var14 = *(__tree_node_base **)p_Var8;
                } while (*(long *)p_Var14 != lVar11);
              }
              while( true ) {
                pvStack_158 = local_160;
                if (p_Var14 != p_Stack_188) {
                  pvStack_158 = (void *)(*(long *)(p_Var14 + 0x20) + -1);
                }
                if (__s <= pvStack_158) goto joined_r0x0102324c;
                p_Var8 = *(__tree_node_base **)(p_Var14 + 8);
                local_190 = p_Var14;
                if (*(__tree_node_base **)(p_Var14 + 8) == (__tree_node_base *)0x0) break;
LAB_010231e8:
                do {
                  p_Var14 = p_Var8;
                  p_Var8 = *(__tree_node_base **)p_Var14;
                } while (*(__tree_node_base **)p_Var14 != (__tree_node_base *)0x0);
              }
            } while( true );
          }
joined_r0x0102324c:
          while (local_190 = p_Var14, pvStack_158 < pvVar17) {
            p_Var8 = *(__tree_node_base **)(p_Var14 + 8);
            if (*(__tree_node_base **)(p_Var14 + 8) == (__tree_node_base *)0x0) {
              p_Var8 = p_Var14 + 0x10;
              p_Var7 = *(__tree_node_base **)p_Var8;
              if (*(__tree_node_base **)p_Var7 != p_Var14) {
                do {
                  lVar11 = *(long *)p_Var8;
                  p_Var8 = (__tree_node_base *)(lVar11 + 0x10);
                  p_Var7 = *(__tree_node_base **)p_Var8;
                } while (*(long *)p_Var7 != lVar11);
              }
            }
            else {
              do {
                p_Var7 = p_Var8;
                p_Var8 = *(__tree_node_base **)p_Var7;
              } while (*(__tree_node_base **)p_Var7 != (__tree_node_base *)0x0);
            }
            if ((__tree_node_base *)*local_180 == p_Var14) {
              *local_180 = p_Var7;
            }
            local_180[2] = local_180[2] + -1;
            std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                      ((__tree_node_base *)local_180[1],p_Var14);
            operator_delete(p_Var14);
            p_Var14 = p_Var7;
            pvStack_158 = local_160;
            if (p_Var7 != p_Stack_188) {
              pvStack_158 = (void *)(*(long *)(p_Var7 + 0x20) + -1);
            }
          }
        }
      }
      iVar5 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_198,
                         local_198 & 0xffffffff00000000 | (ulong)*(uint *)(local_198 - 1));
      lVar21 = lVar21 + iVar5;
      __s = (void *)((long)pvVar17 + (long)iVar5);
      LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::AdvanceToNextValidObject
                ((iterator *)&local_d0);
      uVar13 = local_80;
    } while ((int)local_80 != (int)local_e0);
  }
  uVar13 = (long)*(void **)(param_1 + 0x28) - (long)__s;
  if (uVar13 != 0) {
    if (*(void **)(param_1 + 0x28) < __s) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","p->area_end() > free_start");
    }
    if (param_4 == 1) {
      memset(__s,0xcc,uVar13);
    }
    if (param_3 == 0) {
      if (uVar13 == 0) {
        lVar10 = 0;
      }
      else {
        Heap::CreateFillerObjectAt(*(Heap **)(lVar10 + 0x40),__s,uVar13 & 0xffffffff,1,1);
        lVar10 = (**(code **)(**(long **)(lVar10 + 0x60) + 0x18))
                           (*(long **)(lVar10 + 0x60),__s,uVar13,1);
        lVar10 = uVar13 - lVar10;
      }
      if (local_1b0 <= lVar10) {
        local_1b0 = lVar10;
      }
    }
    else {
      Heap::CreateFillerObjectAt(*(Heap **)(param_1 + 0x18),__s,uVar13 & 0xffffffff,1,0);
    }
    if (this[0x142] != (Sweeper)0x0) {
      MemoryChunk::DiscardUnusedMemory(param_1,(ulong)__s,uVar13);
    }
    iVar5 = (int)__s;
    if (*(SlotSet **)(param_1 + 0x70) != (SlotSet *)0x0) {
      SlotSet::RemoveRange
                (*(SlotSet **)(param_1 + 0x70),(long)(iVar5 - iVar16),
                 (long)((int)*(undefined8 *)(param_1 + 0x28) - iVar16),
                 *(long *)param_1 + 0xfffU >> 0xc,1);
    }
    if (*(SlotSet **)(param_1 + 0x38) != (SlotSet *)0x0) {
      SlotSet::RemoveRange
                (*(SlotSet **)(param_1 + 0x38),(long)(iVar5 - iVar16),
                 (long)((int)*(undefined8 *)(param_1 + 0x28) - iVar16),
                 *(long *)param_1 + 0xfffU >> 0xc,1);
    }
    if (bVar4) {
      iVar20 = *(int *)(param_1 + 0x28);
      uVar12 = iVar5 - iVar16;
      p_Var14 = p_Var15;
      p_Var8 = local_140;
      while (p_Var8 != (__tree_node_base *)0x0) {
        while (p_Var14 = p_Var8, uVar12 < *(uint *)(p_Var14 + 0x1c)) {
          p_Var15 = p_Var14;
          p_Var8 = *(__tree_node_base **)p_Var14;
          if (*(__tree_node_base **)p_Var14 == (__tree_node_base *)0x0) {
            lVar10 = *(long *)p_Var14;
            goto joined_r0x010234b8;
          }
        }
        if (uVar12 <= *(uint *)(p_Var14 + 0x1c)) break;
        p_Var15 = p_Var14 + 8;
        p_Var8 = *(__tree_node_base **)p_Var15;
      }
      lVar10 = *(long *)p_Var15;
joined_r0x010234b8:
      if (lVar10 == 0) {
        p_Var8 = operator_new(0x28);
        *(uint *)(p_Var8 + 0x1c) = uVar12;
        *(int *)(p_Var8 + 0x20) = iVar20 - iVar16;
        *(undefined8 *)p_Var8 = 0;
        *(undefined8 *)(p_Var8 + 8) = 0;
        *(__tree_node_base **)(p_Var8 + 0x10) = p_Var14;
        *(__tree_node_base **)p_Var15 = p_Var8;
        if (*(__tree_node_base **)local_148 != (__tree_node_base *)0x0) {
          p_Var8 = *(__tree_node_base **)p_Var15;
          local_148 = *(__tree_node_base **)local_148;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (local_140,p_Var8);
        local_138 = local_138 + 1;
      }
    }
    if (local_190 != p_Stack_188) {
      pvVar17 = *(void **)(param_1 + 0x28);
      p_Var15 = local_190;
      if (pvStack_158 < __s) {
        p_Var14 = *(__tree_node_base **)(local_190 + 8);
        if (*(__tree_node_base **)(local_190 + 8) != (__tree_node_base *)0x0) goto LAB_01023518;
        do {
          p_Var14 = local_190 + 0x10;
          p_Var15 = *(__tree_node_base **)p_Var14;
          if (*(__tree_node_base **)p_Var15 != local_190) {
            do {
              lVar10 = *(long *)p_Var14;
              p_Var14 = (__tree_node_base *)(lVar10 + 0x10);
              p_Var15 = *(__tree_node_base **)p_Var14;
            } while (*(long *)p_Var15 != lVar10);
          }
          while( true ) {
            pvStack_158 = local_160;
            if (p_Var15 != p_Stack_188) {
              pvStack_158 = (void *)(*(long *)(p_Var15 + 0x20) + -1);
            }
            if (__s <= pvStack_158) goto joined_r0x0102357c;
            p_Var14 = *(__tree_node_base **)(p_Var15 + 8);
            local_190 = p_Var15;
            if (*(__tree_node_base **)(p_Var15 + 8) == (__tree_node_base *)0x0) break;
LAB_01023518:
            do {
              p_Var15 = p_Var14;
              p_Var14 = *(__tree_node_base **)p_Var15;
            } while (*(__tree_node_base **)p_Var15 != (__tree_node_base *)0x0);
          }
        } while( true );
      }
joined_r0x0102357c:
      while (local_190 = p_Var15, pvStack_158 < pvVar17) {
        p_Var14 = *(__tree_node_base **)(p_Var15 + 8);
        if (*(__tree_node_base **)(p_Var15 + 8) == (__tree_node_base *)0x0) {
          p_Var14 = p_Var15 + 0x10;
          p_Var8 = *(__tree_node_base **)p_Var14;
          if (*(__tree_node_base **)p_Var8 != p_Var15) {
            do {
              lVar10 = *(long *)p_Var14;
              p_Var14 = (__tree_node_base *)(lVar10 + 0x10);
              p_Var8 = *(__tree_node_base **)p_Var14;
            } while (*(long *)p_Var8 != lVar10);
          }
        }
        else {
          do {
            p_Var8 = p_Var14;
            p_Var14 = *(__tree_node_base **)p_Var8;
          } while (*(__tree_node_base **)p_Var8 != (__tree_node_base *)0x0);
        }
        if ((__tree_node_base *)*local_180 == p_Var15) {
          *local_180 = p_Var8;
        }
        local_180[2] = local_180[2] + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)local_180[1],p_Var15);
        operator_delete(p_Var15);
        p_Var15 = p_Var8;
        pvStack_158 = local_160;
        if (p_Var8 != p_Stack_188) {
          pvStack_158 = (void *)(*(long *)(p_Var8 + 0x20) + -1);
        }
      }
    }
  }
  if (local_138 != 0) {
    if (*(TypedSlotSet **)(param_1 + 0x78) != (TypedSlotSet *)0x0) {
      TypedSlotSet::ClearInvalidSlots(*(TypedSlotSet **)(param_1 + 0x78),(map *)&local_148);
    }
    if (*(TypedSlotSet **)(param_1 + 0x80) != (TypedSlotSet *)0x0) {
      TypedSlotSet::ClearInvalidSlots(*(TypedSlotSet **)(param_1 + 0x80),(map *)&local_148);
    }
  }
  memset(*(void **)(param_1 + 0x10),0,0x2000);
  if (param_3 == 1) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(long *)(param_1 + 0xc0) =
         (lVar21 - *(long *)(param_1 + 0x28)) + *(long *)(param_1 + 0x20) +
         *(long *)(param_1 + 0xc0);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (this_00 != (CodeObjectRegistry *)0x0) {
    CodeObjectRegistry::Finalize(this_00);
  }
  if (param_3 == 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(**(long **)(*(long *)(param_1 + 0x58) + 0x60) + 0x10))
                      (*(long **)(*(long *)(param_1 + 0x58) + 0x60),local_1b0);
  }
  std::__ndk1::
  __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
  ::destroy((__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
             *)&local_178,local_170);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)&local_148,(__tree_node *)local_140);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

