
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::SlotCallbackResult
   v8::internal::Scavenger::EvacuateShortcutCandidate<v8::internal::CompressedHeapObjectSlot>(v8::internal::Map,
   v8::internal::CompressedHeapObjectSlot, v8::internal::ConsString, int) */

uint __thiscall
v8::internal::Scavenger::EvacuateShortcutCandidate<v8::internal::CompressedHeapObjectSlot>
          (Scavenger *this,long param_2,uint *param_3,ulong *param_4,uint param_5)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  Scavenger SVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  Heap *pHVar14;
  ulong *puVar15;
  undefined4 *puVar16;
  void *pvVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  int *piVar23;
  undefined4 *puVar24;
  uint *puVar25;
  long lVar26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  uint *puVar35;
  long lVar36;
  long lVar37;
  int *piVar38;
  NewSpace *pNVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  ulong *local_88;
  ulong *local_80;
  ulong uStack_78;
  ulong local_70 [2];
  
  uVar32 = (ulong)param_5;
  if ((this[0x2e1] != (Scavenger)0x0) ||
     (*(int *)((long)param_4 + 0xf) != *(int *)(*(long *)(this + 8) + -0x8788))) {
    iVar13 = (int)param_2;
    if (((FLAG_young_generation_large_objects != '\0') &&
        (uVar21 = *(ulong *)(((ulong)param_4 & 0xfffffffffffc0000) + 8),
        ((uint)uVar21 >> 5 & 1) != 0)) && ((uVar21 & 0x18) != 0)) {
      piVar38 = (int *)((long)param_4 + -1);
      do {
        if (*piVar38 != iVar13) {
          ClearExclusiveLocal();
          return 0;
        }
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar38,0x10);
        if (bVar11) {
          *piVar38 = (int)piVar38;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      local_80 = param_4;
      uStack_78 = param_2;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
      ::
      __emplace_unique_key_args<v8::internal::HeapObject,std::__ndk1::pair<v8::internal::HeapObject_const,v8::internal::Map>>
                ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
                  *)(this + 0x290),(HeapObject *)&local_80,(pair *)&local_80);
      lVar36 = *(long *)(this + 0x20);
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + (long)(int)param_5;
      lVar37 = lVar36 + (long)*(int *)(this + 0x28) * 0x50;
      puVar31 = *(undefined8 **)(lVar37 + 0x2b8);
      lVar26 = puVar31[1];
      if (lVar26 == 4) {
        base::Mutex::Lock((Mutex *)(lVar36 + 0x538));
        *puVar31 = *(undefined8 *)(lVar36 + 0x560);
        *(undefined8 **)(lVar36 + 0x560) = puVar31;
        base::Mutex::Unlock((Mutex *)(lVar36 + 0x538));
        pvVar17 = operator_new(0x70);
        *(undefined8 *)((long)pvVar17 + 0x28) = 0;
        *(undefined8 *)((long)pvVar17 + 0x30) = 0;
        *(undefined8 *)((long)pvVar17 + 0x40) = 0;
        *(undefined8 *)((long)pvVar17 + 0x48) = 0;
        *(undefined8 *)((long)pvVar17 + 0x58) = 0;
        *(undefined8 *)((long)pvVar17 + 0x60) = 0;
        *(void **)(lVar37 + 0x2b8) = pvVar17;
        *(ulong **)((long)pvVar17 + 0x10) = param_4;
        *(long *)((long)pvVar17 + 0x18) = param_2;
        *(undefined8 *)((long)pvVar17 + 8) = 1;
        *(uint *)((long)pvVar17 + 0x20) = param_5;
        return 0;
      }
      puVar31[1] = lVar26 + 1;
      puVar31[lVar26 * 3 + 2] = param_4;
      puVar31[lVar26 * 3 + 3] = param_2;
      *(uint *)(puVar31 + lVar26 * 3 + 4) = param_5;
      return 0;
    }
    piVar38 = (int *)((long)param_4 + -1);
    uVar21 = (ulong)piVar38 & 0xfffffffffffc0000;
    if (((*(byte *)(uVar21 + 10) >> 3 & 1) == 0) ||
       (((piVar23 = *(int **)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x1f0),
         *(int **)(uVar21 + 0x20) <= piVar23 && (piVar23 <= piVar38)) &&
        (piVar23 <= *(int **)(uVar21 + 0x28))))) {
      if ((int)param_5 < 0x2001) {
        puVar22 = (ulong *)LocalAllocator::AllocateInLAB((LocalAllocator *)(this + 0x88),uVar32,0);
      }
      else {
        pNVar39 = *(NewSpace **)(this + 0x90);
        base::Mutex::Lock((Mutex *)(pNVar39 + 0x98));
        uVar33 = *(ulong *)(pNVar39 + 0x68);
        if (uVar33 < *(ulong *)(pNVar39 + 0x78)) {
          *(ulong *)(pNVar39 + 0x78) = uVar33;
        }
        uVar34 = uVar33 + uVar32;
        if (*(ulong *)(pNVar39 + 0x70) < uVar34) {
          uVar33 = NewSpace::EnsureAllocation(pNVar39,uVar32,0);
          if ((uVar33 & 1) != 0) {
            uVar33 = *(ulong *)(pNVar39 + 0x68);
            uVar34 = uVar33 + uVar32;
            goto LAB_01007c74;
          }
          puVar22 = (ulong *)0x2;
        }
        else {
LAB_01007c74:
          *(ulong *)(pNVar39 + 0x68) = uVar34;
          puVar22 = (ulong *)(uVar33 + 1);
          if (FLAG_trace_allocations_origins != '\0') {
            SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar39,2);
          }
          if (((ulong)puVar22 & 1) == 0) goto LAB_01008590;
        }
        base::Mutex::Unlock((Mutex *)(pNVar39 + 0x98));
      }
      if (((ulong)puVar22 & 1) != 0) {
        lVar37 = (long)puVar22 - 1;
        uVar18 = param_5 - 1;
        if (-1 < (int)(param_5 - 4)) {
          uVar18 = param_5 - 4;
        }
        *(int *)((long)puVar22 - 1) = iVar13;
        if (6 < param_5 - 1) {
          uVar33 = (long)((ulong)uVar18 << 0x20) >> 0x22;
          puVar16 = (undefined4 *)((long)puVar22 + 3);
          puVar24 = (undefined4 *)((long)param_4 + 3);
          if ((uint)((int)uVar18 >> 2) < 0x10) {
            uVar34 = uVar33;
            if ((7 < (uint)((int)uVar18 >> 2)) &&
               ((puVar24 + uVar33 <= puVar16 || (puVar16 + uVar33 <= puVar24)))) {
              uVar20 = uVar33 & 0xfffffffffffffff8;
              puVar31 = (undefined8 *)((long)puVar22 + 0x13);
              uVar34 = uVar33 - uVar20;
              puVar24 = puVar24 + uVar20;
              puVar16 = puVar16 + uVar20;
              puVar28 = (undefined8 *)((long)param_4 + 0x13);
              uVar19 = uVar20;
              do {
                puVar10 = puVar28 + -1;
                uVar40 = puVar28[-2];
                uVar42 = puVar28[1];
                uVar41 = *puVar28;
                uVar19 = uVar19 - 8;
                puVar28 = puVar28 + 4;
                puVar31[-1] = *puVar10;
                puVar31[-2] = uVar40;
                puVar31[1] = uVar42;
                *puVar31 = uVar41;
                puVar31 = puVar31 + 4;
              } while (uVar19 != 0);
              if (uVar20 == uVar33) goto LAB_01008040;
            }
            do {
              uVar34 = uVar34 - 1;
              *puVar16 = *puVar24;
              puVar16 = puVar16 + 1;
              puVar24 = puVar24 + 1;
            } while (uVar34 != 0);
          }
          else {
            MemCopy(puVar16,puVar24,uVar33 << 2);
          }
        }
LAB_01008040:
        do {
          if (*piVar38 != iVar13) goto LAB_01008414;
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar38,0x10);
          if (bVar11) {
            *piVar38 = (int)lVar37;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (this[0x2e0] == (Scavenger)0x0) {
          SVar5 = this[0x2e1];
        }
        else {
          Heap::OnMoveEvent(*(Heap **)(this + 8),puVar22,param_4,uVar32);
          SVar5 = this[0x2e1];
        }
        if (SVar5 != (Scavenger)0x0) {
          uVar34 = (ulong)puVar22 & 0xfffffffffffc0000;
          uVar33 = (long)puVar22 - uVar34 >> 7 & 0x1ffffff;
          puVar35 = (uint *)(*(long *)(uVar34 + 0x10) + uVar33 * 4);
          uVar18 = (uint)(1L << ((long)puVar22 - uVar34 >> 2 & 0x1f));
          if ((*puVar35 & uVar18) != 0) {
            uVar12 = uVar18 << 1;
            bVar11 = uVar12 == 0;
            if (bVar11) {
              uVar12 = 1;
            }
            if ((puVar35[bVar11] & uVar12) != 0) goto LAB_01008a88;
          }
          uVar19 = (ulong)param_4 & 0xfffffffffffc0000;
          uVar20 = (long)param_4 - uVar19 >> 7 & 0x1ffffff;
          puVar35 = (uint *)(*(long *)(uVar19 + 0x10) + uVar20 * 4);
          uVar7 = 1 << (ulong)((uint)((long)param_4 - uVar19 >> 2) & 0x1f);
          uVar12 = uVar7 << 1;
          if ((*puVar35 & uVar7) != 0) {
            uVar6 = uVar12;
            if (uVar12 == 0) {
              uVar6 = 1;
            }
            if ((puVar35[uVar12 == 0] & uVar6) == 0) {
              puVar35 = (uint *)(*(long *)(uVar34 + 0x10) + uVar33 * 4);
              while (uVar12 = *puVar35, (uVar18 & (uVar12 ^ 0xffffffff)) != 0) {
                while (*puVar35 == uVar12) {
                  cVar8 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar35,0x10);
                  if (bVar11) {
                    *puVar35 = uVar12 | uVar18;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                  if (cVar8 == '\0') goto LAB_01008a88;
                }
                ClearExclusiveLocal();
              }
              goto LAB_01008a88;
            }
          }
          puVar35 = (uint *)(*(long *)(uVar19 + 0x10) + uVar20 * 4);
          if ((*puVar35 & uVar7) != 0) {
            bVar11 = uVar12 == 0;
            if (bVar11) {
              uVar12 = 1;
            }
            if ((puVar35[bVar11] & uVar12) != 0) {
              puVar35 = (uint *)(*(long *)(uVar34 + 0x10) + uVar33 * 4);
              while (uVar12 = *puVar35, (uVar18 & (uVar12 ^ 0xffffffff)) != 0) {
                while (*puVar35 == uVar12) {
                  cVar8 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar35,0x10);
                  if (bVar11) {
                    *puVar35 = uVar12 | uVar18;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                  if (cVar8 == '\0') {
                    puVar35 = (uint *)(*(long *)(uVar34 + 0x10) +
                                      ((long)puVar22 + ~uVar34 >> 7 & 0x1ffffff) * 4);
                    uVar18 = 1 << (ulong)((uint)((long)puVar22 + ~uVar34 >> 2) & 0x1f);
                    local_80 = puVar22;
                    if ((*puVar35 & uVar18) == 0) goto LAB_01008a88;
                    uVar18 = uVar18 << 1;
                    bVar11 = uVar18 == 0;
                    puVar25 = puVar35;
                    if (bVar11) {
                      uVar18 = 1;
                      puVar25 = puVar35 + 1;
                    }
                    goto LAB_01008834;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
        }
        goto LAB_01008a88;
      }
    }
    puVar22 = (ulong *)PagedSpace::AllocateRaw((PagedSpace *)(this + 0xa0),uVar32,0,2);
    if (((ulong)puVar22 & 1) != 0) {
      lVar37 = (long)puVar22 + -1;
      uVar18 = param_5 - 1;
      if (-1 < (int)(param_5 - 4)) {
        uVar18 = param_5 - 4;
      }
      *(int *)((long)puVar22 + -1) = iVar13;
      if (6 < param_5 - 1) {
        uVar33 = (long)((ulong)uVar18 << 0x20) >> 0x22;
        puVar16 = (undefined4 *)((long)puVar22 + 3);
        puVar24 = (undefined4 *)((long)param_4 + 3);
        if ((uint)((int)uVar18 >> 2) < 0x10) {
          uVar34 = uVar33;
          if ((7 < (uint)((int)uVar18 >> 2)) &&
             ((puVar24 + uVar33 <= puVar16 || (puVar16 + uVar33 <= puVar24)))) {
            uVar20 = uVar33 & 0xfffffffffffffff8;
            puVar31 = (undefined8 *)((long)puVar22 + 0x13);
            uVar34 = uVar33 - uVar20;
            puVar24 = puVar24 + uVar20;
            puVar16 = puVar16 + uVar20;
            puVar28 = (undefined8 *)((long)param_4 + 0x13);
            uVar19 = uVar20;
            do {
              puVar10 = puVar28 + -1;
              uVar40 = puVar28[-2];
              uVar42 = puVar28[1];
              uVar41 = *puVar28;
              uVar19 = uVar19 - 8;
              puVar28 = puVar28 + 4;
              puVar31[-1] = *puVar10;
              puVar31[-2] = uVar40;
              puVar31[1] = uVar42;
              *puVar31 = uVar41;
              puVar31 = puVar31 + 4;
            } while (uVar19 != 0);
            if (uVar20 == uVar33) goto LAB_01007e4c;
          }
          do {
            uVar34 = uVar34 - 1;
            *puVar16 = *puVar24;
            puVar16 = puVar16 + 1;
            puVar24 = puVar24 + 1;
          } while (uVar34 != 0);
        }
        else {
          MemCopy(puVar16,puVar24,uVar33 << 2);
        }
      }
LAB_01007e4c:
      do {
        if (*piVar38 != iVar13) {
          ClearExclusiveLocal();
          if ((*(long *)(this + 0x108) == 0) ||
             (*(long *)(this + 0x108) - (long)(int)param_5 != lVar37)) {
            pHVar14 = *(Heap **)(this + 0x88);
            goto LAB_01008444;
          }
          *(long *)(this + 0x108) = lVar37;
          goto LAB_0100844c;
        }
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar38,0x10);
        if (bVar11) {
          *piVar38 = (int)lVar37;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (this[0x2e0] == (Scavenger)0x0) {
        SVar5 = this[0x2e1];
      }
      else {
        Heap::OnMoveEvent(*(Heap **)(this + 8),puVar22,param_4,param_5);
        SVar5 = this[0x2e1];
      }
      if (SVar5 != (Scavenger)0x0) {
        uVar33 = (ulong)puVar22 & 0xfffffffffffc0000;
        uVar32 = (long)puVar22 - uVar33 >> 7 & 0x1ffffff;
        puVar35 = (uint *)(*(long *)(uVar33 + 0x10) + uVar32 * 4);
        uVar18 = (uint)(1L << ((long)puVar22 - uVar33 >> 2 & 0x1f));
        if ((*puVar35 & uVar18) != 0) {
          uVar12 = uVar18 << 1;
          bVar11 = uVar12 == 0;
          if (bVar11) {
            uVar12 = 1;
          }
          if ((puVar35[bVar11] & uVar12) != 0) goto LAB_01008970;
        }
        uVar34 = (ulong)param_4 & 0xfffffffffffc0000;
        uVar19 = (long)param_4 - uVar34 >> 7 & 0x1ffffff;
        puVar35 = (uint *)(*(long *)(uVar34 + 0x10) + uVar19 * 4);
        uVar7 = 1 << (ulong)((uint)((long)param_4 - uVar34 >> 2) & 0x1f);
        uVar12 = uVar7 << 1;
        if ((*puVar35 & uVar7) != 0) {
          uVar6 = uVar12;
          if (uVar12 == 0) {
            uVar6 = 1;
          }
          if ((puVar35[uVar12 == 0] & uVar6) == 0) {
            puVar35 = (uint *)(*(long *)(uVar33 + 0x10) + uVar32 * 4);
            while (uVar12 = *puVar35, (uVar18 & (uVar12 ^ 0xffffffff)) != 0) {
              while (*puVar35 == uVar12) {
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar35,0x10);
                if (bVar11) {
                  *puVar35 = uVar12 | uVar18;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                if (cVar8 == '\0') goto LAB_01008970;
              }
              ClearExclusiveLocal();
            }
            goto LAB_01008970;
          }
        }
        puVar35 = (uint *)(*(long *)(uVar34 + 0x10) + uVar19 * 4);
        if ((*puVar35 & uVar7) != 0) {
          bVar11 = uVar12 == 0;
          if (bVar11) {
            uVar12 = 1;
          }
          if ((puVar35[bVar11] & uVar12) != 0) {
            puVar35 = (uint *)(*(long *)(uVar33 + 0x10) + uVar32 * 4);
            while (uVar12 = *puVar35, (uVar18 & (uVar12 ^ 0xffffffff)) != 0) {
              while (*puVar35 == uVar12) {
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar35,0x10);
                if (bVar11) {
                  *puVar35 = uVar12 | uVar18;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                if (cVar8 == '\0') {
                  puVar35 = (uint *)(*(long *)(uVar33 + 0x10) +
                                    ((long)puVar22 + ~uVar33 >> 7 & 0x1ffffff) * 4);
                  uVar18 = 1 << (ulong)((uint)((long)puVar22 + ~uVar33 >> 2) & 0x1f);
                  local_80 = puVar22;
                  if ((*puVar35 & uVar18) == 0) goto LAB_01008970;
                  uVar18 = uVar18 << 1;
                  bVar11 = uVar18 == 0;
                  puVar25 = puVar35;
                  if (bVar11) {
                    uVar18 = 1;
                    puVar25 = puVar35 + 1;
                  }
                  goto LAB_01008734;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
      }
LAB_01008970:
      if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(param_2 + 7) | 2) == 0x423)) {
        lVar37 = *(long *)(this + 8);
        local_80 = param_4;
        iVar13 = HeapObject::SizeFromMap((HeapObject *)&local_80,param_2);
        piVar23 = (int *)((long)piVar38 + (long)iVar13);
        if ((((uVar21 == ((ulong)(piVar23 + 1) & 0xfffffffffffc0000)) &&
             (*piVar23 == *(int *)(lVar37 + -0x7b78))) &&
            (((*(byte *)(uVar21 + 10) >> 3 & 1) == 0 ||
             (((piVar23 = *(int **)(*(long *)(uVar21 + 0x58) + 0x80),
               *(int **)(uVar21 + 0x20) <= piVar23 && (piVar23 <= piVar38)) &&
              (piVar23 < *(int **)(uVar21 + 0x28))))))) &&
           (uVar32 = (long)iVar13 + (long)param_4, (int)uVar32 != 0)) {
          local_80 = local_70;
          local_70[0] = uVar32 & 0xffffffff00000000 | (ulong)*(uint *)(uVar32 + 3);
          lVar37 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
                   ::
                   __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::AllocationSite&&>,std::__ndk1::tuple<>>
                             ((AllocationSite *)(this + 0x50),(piecewise_construct_t *)local_70,
                              (tuple *)&DAT_019c6624,(tuple *)&local_80);
          *(long *)(lVar37 + 0x18) = *(long *)(lVar37 + 0x18) + 1;
        }
      }
      *param_3 = *param_3 & 2 | (uint)puVar22;
      Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Push
                (*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x28),puVar22,param_5);
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + (long)(int)param_5;
      return 1;
    }
    if ((int)param_5 < 0x2001) {
      puVar22 = (ulong *)LocalAllocator::AllocateInLAB((LocalAllocator *)(this + 0x88),param_5,0);
    }
    else {
      pNVar39 = *(NewSpace **)(this + 0x90);
      base::Mutex::Lock((Mutex *)(pNVar39 + 0x98));
      uVar33 = *(ulong *)(pNVar39 + 0x68);
      if (uVar33 < *(ulong *)(pNVar39 + 0x78)) {
        *(ulong *)(pNVar39 + 0x78) = uVar33;
      }
      uVar34 = uVar33 + param_5;
      if (*(ulong *)(pNVar39 + 0x70) < uVar34) {
        uVar33 = NewSpace::EnsureAllocation(pNVar39,uVar32,0);
        if ((uVar33 & 1) != 0) {
          uVar33 = *(ulong *)(pNVar39 + 0x68);
          uVar34 = uVar33 + param_5;
          goto LAB_01007d74;
        }
        puVar22 = (ulong *)0x2;
      }
      else {
LAB_01007d74:
        *(ulong *)(pNVar39 + 0x68) = uVar34;
        puVar22 = (ulong *)(uVar33 + 1);
        if (FLAG_trace_allocations_origins != '\0') {
          SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar39,2);
        }
        if (((ulong)puVar22 & 1) == 0) goto LAB_01008590;
      }
      base::Mutex::Unlock((Mutex *)(pNVar39 + 0x98));
    }
    if (((ulong)puVar22 & 1) == 0) goto LAB_01008924;
    lVar37 = (long)puVar22 - 1;
    uVar18 = param_5 - 1;
    if (-1 < (int)(param_5 - 4)) {
      uVar18 = param_5 - 4;
    }
    *(int *)((long)puVar22 - 1) = iVar13;
    if (6 < param_5 - 1) {
      uVar33 = (long)((ulong)uVar18 << 0x20) >> 0x22;
      puVar16 = (undefined4 *)((long)puVar22 + 3);
      puVar24 = (undefined4 *)((long)param_4 + 3);
      if ((uint)((int)uVar18 >> 2) < 0x10) {
        uVar34 = uVar33;
        if ((7 < (uint)((int)uVar18 >> 2)) &&
           ((puVar24 + uVar33 <= puVar16 || (puVar16 + uVar33 <= puVar24)))) {
          uVar20 = uVar33 & 0xfffffffffffffff8;
          puVar31 = (undefined8 *)((long)puVar22 + 0x13);
          uVar34 = uVar33 - uVar20;
          puVar24 = puVar24 + uVar20;
          puVar16 = puVar16 + uVar20;
          puVar28 = (undefined8 *)((long)param_4 + 0x13);
          uVar19 = uVar20;
          do {
            puVar10 = puVar28 + -1;
            uVar40 = puVar28[-2];
            uVar42 = puVar28[1];
            uVar41 = *puVar28;
            uVar19 = uVar19 - 8;
            puVar28 = puVar28 + 4;
            puVar31[-1] = *puVar10;
            puVar31[-2] = uVar40;
            puVar31[1] = uVar42;
            *puVar31 = uVar41;
            puVar31 = puVar31 + 4;
          } while (uVar19 != 0);
          if (uVar20 == uVar33) goto LAB_010082f0;
        }
        do {
          uVar34 = uVar34 - 1;
          *puVar16 = *puVar24;
          puVar16 = puVar16 + 1;
          puVar24 = puVar24 + 1;
        } while (uVar34 != 0);
      }
      else {
        MemCopy(puVar16,puVar24,uVar33 << 2);
      }
    }
LAB_010082f0:
    do {
      if (*piVar38 != iVar13) {
LAB_01008414:
        ClearExclusiveLocal();
        if ((*(long *)(this + 0x278) == 0) ||
           (*(long *)(this + 0x278) - (long)(int)param_5 != lVar37)) {
          pHVar14 = *(Heap **)(this + 0x88);
LAB_01008444:
          Heap::CreateFillerObjectAt(pHVar14,lVar37,uVar32,1,1);
        }
        else {
          *(long *)(this + 0x278) = lVar37;
        }
LAB_0100844c:
        uVar18 = *piVar38 + 1;
        uVar12 = *param_3 & 2 | uVar18;
        *param_3 = uVar12;
        if (uVar12 == 3) {
          return 1;
        }
        if ((uVar18 & 1) == 0) {
          return 1;
        }
        return (*(uint *)(((ulong)uVar18 & 0xfffc0000 | (ulong)param_3 & 0xffffffff00000000) + 8) >>
                4 ^ 0xffffffff) & 1;
      }
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar38,0x10);
      if (bVar11) {
        *piVar38 = (int)lVar37;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (this[0x2e0] == (Scavenger)0x0) {
      SVar5 = this[0x2e1];
    }
    else {
      Heap::OnMoveEvent(*(Heap **)(this + 8),puVar22,param_4,param_5);
      SVar5 = this[0x2e1];
    }
    if (SVar5 != (Scavenger)0x0) {
      uVar34 = (ulong)puVar22 & 0xfffffffffffc0000;
      uVar33 = (long)puVar22 - uVar34 >> 7 & 0x1ffffff;
      puVar35 = (uint *)(*(long *)(uVar34 + 0x10) + uVar33 * 4);
      uVar18 = (uint)(1L << ((long)puVar22 - uVar34 >> 2 & 0x1f));
      if ((*puVar35 & uVar18) != 0) {
        uVar12 = uVar18 << 1;
        bVar11 = uVar12 == 0;
        if (bVar11) {
          uVar12 = 1;
        }
        if ((puVar35[bVar11] & uVar12) != 0) goto LAB_01008a88;
      }
      uVar19 = (ulong)param_4 & 0xfffffffffffc0000;
      uVar20 = (long)param_4 - uVar19 >> 7 & 0x1ffffff;
      puVar35 = (uint *)(*(long *)(uVar19 + 0x10) + uVar20 * 4);
      uVar7 = 1 << (ulong)((uint)((long)param_4 - uVar19 >> 2) & 0x1f);
      uVar12 = uVar7 << 1;
      if ((*puVar35 & uVar7) != 0) {
        uVar6 = uVar12;
        if (uVar12 == 0) {
          uVar6 = 1;
        }
        if ((puVar35[uVar12 == 0] & uVar6) == 0) {
          puVar35 = (uint *)(*(long *)(uVar34 + 0x10) + uVar33 * 4);
          while (uVar12 = *puVar35, (uVar18 & (uVar12 ^ 0xffffffff)) != 0) {
            while (*puVar35 == uVar12) {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar35,0x10);
              if (bVar11) {
                *puVar35 = uVar12 | uVar18;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_01008a88;
            }
            ClearExclusiveLocal();
          }
          goto LAB_01008a88;
        }
      }
      puVar35 = (uint *)(*(long *)(uVar19 + 0x10) + uVar20 * 4);
      if ((*puVar35 & uVar7) != 0) {
        bVar11 = uVar12 == 0;
        if (bVar11) {
          uVar12 = 1;
        }
        if ((puVar35[bVar11] & uVar12) != 0) {
          puVar35 = (uint *)(*(long *)(uVar34 + 0x10) + uVar33 * 4);
          while (uVar12 = *puVar35, (uVar18 & (uVar12 ^ 0xffffffff)) != 0) {
            while (*puVar35 == uVar12) {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar35,0x10);
              if (bVar11) {
                *puVar35 = uVar12 | uVar18;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                puVar35 = (uint *)(*(long *)(uVar34 + 0x10) +
                                  ((long)puVar22 + ~uVar34 >> 7 & 0x1ffffff) * 4);
                uVar18 = 1 << (ulong)((uint)((long)puVar22 + ~uVar34 >> 2) & 0x1f);
                local_80 = puVar22;
                if ((*puVar35 & uVar18) == 0) goto LAB_01008a88;
                uVar18 = uVar18 << 1;
                bVar11 = uVar18 == 0;
                puVar25 = puVar35;
                if (bVar11) {
                  uVar18 = 1;
                  puVar25 = puVar35 + 1;
                }
                goto LAB_010087b4;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
    }
LAB_01008a88:
    if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(param_2 + 7) | 2) == 0x423)) {
      lVar37 = *(long *)(this + 8);
      local_80 = param_4;
      iVar13 = HeapObject::SizeFromMap((HeapObject *)&local_80,param_2);
      piVar23 = (int *)((long)piVar38 + (long)iVar13);
      if ((((uVar21 == ((ulong)(piVar23 + 1) & 0xfffffffffffc0000)) &&
           (*piVar23 == *(int *)(lVar37 + -0x7b78))) &&
          (((*(byte *)(uVar21 + 10) >> 3 & 1) == 0 ||
           (((piVar23 = *(int **)(*(long *)(uVar21 + 0x58) + 0x80),
             *(int **)(uVar21 + 0x20) <= piVar23 && (piVar23 <= piVar38)) &&
            (piVar23 < *(int **)(uVar21 + 0x28))))))) &&
         (uVar21 = (long)iVar13 + (long)param_4, (int)uVar21 != 0)) {
        local_80 = local_70;
        local_70[0] = uVar21 & 0xffffffff00000000 | (ulong)*(uint *)(uVar21 + 3);
        lVar37 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
                 ::
                 __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::AllocationSite&&>,std::__ndk1::tuple<>>
                           ((AllocationSite *)(this + 0x50),(piecewise_construct_t *)local_70,
                            (tuple *)&DAT_019c6624,(tuple *)&local_80);
        *(long *)(lVar37 + 0x18) = *(long *)(lVar37 + 0x18) + 1;
      }
    }
    *param_3 = *param_3 & 2 | (uint)puVar22;
    Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Push
              (*(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x38),puVar22,uVar32);
    *(long *)(this + 0x78) = *(long *)(this + 0x78) + (long)(int)param_5;
    return 0;
  }
  uVar18 = *(uint *)((long)param_4 + 0xb);
  uVar32 = (ulong)uVar18;
  uVar21 = (ulong)param_4 & 0xffffffff00000000;
  puVar22 = (ulong *)(uVar21 | uVar32);
  *param_3 = *param_3 & 2 | uVar18;
  if ((*(byte *)((uVar21 | uVar32 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
    *(uint *)((long)param_4 + -1) = uVar18 - 1;
    return 1;
  }
  uVar18 = *(uint *)((long)puVar22 + -1);
  uVar33 = uVar21 | uVar18;
  if ((uVar18 & 1) == 0) {
    *param_3 = *param_3 & 2 | (uint)(uVar33 + 1);
    *(uint *)((long)param_4 + -1) = uVar18;
    return (uint)((*(byte *)((uVar33 + 1 & 0xfffffffffffc0000) + 8) & 0x18) == 0);
  }
  local_88 = puVar22;
  uVar12 = HeapObject::SizeFromMap((HeapObject *)&local_88,uVar33);
  bVar4 = *(byte *)(uVar33 + 6);
  uVar34 = (ulong)uVar12;
  if (((FLAG_young_generation_large_objects != '\0') &&
      (uVar19 = *(ulong *)((uVar21 | uVar32 & 0xfffffffffffc0000) + 8), ((uint)uVar19 >> 5 & 1) != 0
      )) && ((uVar19 & 0x18) != 0)) {
    puVar35 = (uint *)((long)puVar22 + -1);
    do {
      if (*puVar35 != uVar18) {
        ClearExclusiveLocal();
        goto LAB_01009ae0;
      }
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar35,0x10);
      if (bVar11) {
        *puVar35 = (uint)puVar35;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    local_80 = puVar22;
    uStack_78 = uVar33;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
    ::
    __emplace_unique_key_args<v8::internal::HeapObject,std::__ndk1::pair<v8::internal::HeapObject_const,v8::internal::Map>>
              ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
                *)(this + 0x290),(HeapObject *)&local_80,(pair *)&local_80);
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + (long)(int)uVar12;
    if (bVar4 < 6) {
LAB_01009ae0:
      uVar18 = 0;
    }
    else {
      lVar36 = *(long *)(this + 0x20);
      lVar37 = lVar36 + (long)*(int *)(this + 0x28) * 0x50;
      puVar31 = *(undefined8 **)(lVar37 + 0x2b8);
      lVar26 = puVar31[1];
      if (lVar26 == 4) {
        base::Mutex::Lock((Mutex *)(lVar36 + 0x538));
        *puVar31 = *(undefined8 *)(lVar36 + 0x560);
        *(undefined8 **)(lVar36 + 0x560) = puVar31;
        base::Mutex::Unlock((Mutex *)(lVar36 + 0x538));
        pvVar17 = operator_new(0x70);
        uVar18 = 0;
        *(undefined8 *)((long)pvVar17 + 0x28) = 0;
        *(undefined8 *)((long)pvVar17 + 0x30) = 0;
        *(undefined8 *)((long)pvVar17 + 0x40) = 0;
        *(undefined8 *)((long)pvVar17 + 0x48) = 0;
        *(undefined8 *)((long)pvVar17 + 0x58) = 0;
        *(undefined8 *)((long)pvVar17 + 0x60) = 0;
        *(void **)(lVar37 + 0x2b8) = pvVar17;
        *(ulong **)((long)pvVar17 + 0x10) = puVar22;
        *(ulong *)((long)pvVar17 + 0x18) = uVar33;
        *(undefined8 *)((long)pvVar17 + 8) = 1;
        *(uint *)((long)pvVar17 + 0x20) = uVar12;
      }
      else {
        puVar31[1] = lVar26 + 1;
        uVar18 = 0;
        *(uint *)(puVar31 + lVar26 * 3 + 4) = uVar12;
        puVar31[lVar26 * 3 + 2] = puVar22;
        puVar31[lVar26 * 3 + 3] = uVar33;
      }
    }
    goto LAB_01009880;
  }
  puVar35 = (uint *)((long)puVar22 + -1);
  uVar19 = (ulong)puVar35 & 0xfffffffffffc0000;
  if (((*(byte *)(uVar19 + 10) >> 3 & 1) == 0) ||
     (((puVar25 = *(uint **)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x1f0),
       *(uint **)(uVar19 + 0x20) <= puVar25 && (puVar25 <= puVar35)) &&
      (puVar25 <= *(uint **)(uVar19 + 0x28))))) {
    if ((int)uVar12 < 0x2001) {
      puVar15 = (ulong *)LocalAllocator::AllocateInLAB((LocalAllocator *)(this + 0x88),uVar34,0);
    }
    else {
      pNVar39 = *(NewSpace **)(this + 0x90);
      base::Mutex::Lock((Mutex *)(pNVar39 + 0x98));
      uVar20 = *(ulong *)(pNVar39 + 0x68);
      if (uVar20 < *(ulong *)(pNVar39 + 0x78)) {
        *(ulong *)(pNVar39 + 0x78) = uVar20;
      }
      uVar30 = uVar20 + uVar34;
      if (*(ulong *)(pNVar39 + 0x70) < uVar30) {
        uVar20 = NewSpace::EnsureAllocation(pNVar39,uVar34,0);
        if ((uVar20 & 1) != 0) {
          uVar20 = *(ulong *)(pNVar39 + 0x68);
          uVar30 = uVar20 + uVar34;
          goto LAB_01008228;
        }
        puVar15 = (ulong *)0x2;
      }
      else {
LAB_01008228:
        *(ulong *)(pNVar39 + 0x68) = uVar30;
        puVar15 = (ulong *)(uVar20 + 1);
        if (FLAG_trace_allocations_origins != '\0') {
          SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar39,2);
        }
        if (((ulong)puVar15 & 1) == 0) goto LAB_01008590;
      }
      base::Mutex::Unlock((Mutex *)(pNVar39 + 0x98));
    }
    if (((ulong)puVar15 & 1) == 0) goto LAB_010084dc;
    lVar37 = (long)puVar15 - 1;
    uVar7 = uVar12 - 1;
    if (-1 < (int)(uVar12 - 4)) {
      uVar7 = uVar12 - 4;
    }
    *(uint *)((long)puVar15 - 1) = uVar18;
    if (6 < uVar12 - 1) {
      uVar20 = (long)((ulong)uVar7 << 0x20) >> 0x22;
      puVar16 = (undefined4 *)((long)puVar15 + 3);
      puVar24 = (undefined4 *)((long)puVar22 + 3);
      if ((uint)((int)uVar7 >> 2) < 0x10) {
        uVar30 = uVar20;
        if ((7 < (uint)((int)uVar7 >> 2)) &&
           ((puVar24 + uVar20 <= puVar16 || (puVar16 + uVar20 <= puVar24)))) {
          uVar27 = uVar20 & 0xfffffffffffffff8;
          puVar31 = (undefined8 *)((long)puVar15 + 0x13);
          uVar30 = uVar20 - uVar27;
          puVar24 = puVar24 + uVar27;
          puVar16 = puVar16 + uVar27;
          puVar28 = (undefined8 *)((long)puVar22 + 0x13);
          uVar29 = uVar27;
          do {
            puVar10 = puVar28 + -1;
            uVar40 = puVar28[-2];
            uVar42 = puVar28[1];
            uVar41 = *puVar28;
            uVar29 = uVar29 - 8;
            puVar28 = puVar28 + 4;
            puVar31[-1] = *puVar10;
            puVar31[-2] = uVar40;
            puVar31[1] = uVar42;
            *puVar31 = uVar41;
            puVar31 = puVar31 + 4;
          } while (uVar29 != 0);
          if (uVar27 == uVar20) goto LAB_01008da4;
        }
        do {
          uVar30 = uVar30 - 1;
          *puVar16 = *puVar24;
          puVar16 = puVar16 + 1;
          puVar24 = puVar24 + 1;
        } while (uVar30 != 0);
      }
      else {
        MemCopy(puVar16,puVar24,uVar20 << 2);
      }
    }
LAB_01008da4:
    do {
      if (*puVar35 != uVar18) {
        ClearExclusiveLocal();
        if ((*(long *)(this + 0x278) == 0) ||
           (*(long *)(this + 0x278) - (long)(int)uVar12 != lVar37)) {
          Heap::CreateFillerObjectAt(*(Heap **)(this + 0x88),lVar37,uVar34,1,1);
        }
        else {
          *(long *)(this + 0x278) = lVar37;
        }
        uVar32 = (ulong)*param_3 & 2 | (ulong)(*puVar35 + 1);
        uVar12 = (uint)uVar32;
        *param_3 = uVar12;
        goto joined_r0x01008f2c;
      }
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar35,0x10);
      if (bVar11) {
        *puVar35 = (uint)lVar37;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (this[0x2e0] != (Scavenger)0x0) {
      Heap::OnMoveEvent(*(Heap **)(this + 8),puVar15,puVar22,uVar34);
    }
    if (this[0x2e1] != (Scavenger)0x0) {
      uVar30 = (ulong)puVar15 & 0xfffffffffffc0000;
      uVar20 = (long)puVar15 - uVar30 >> 7 & 0x1ffffff;
      puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar20 * 4);
      uVar18 = (uint)(1L << ((long)puVar15 - uVar30 >> 2 & 0x1f));
      if ((*puVar25 & uVar18) != 0) {
        uVar7 = uVar18 << 1;
        bVar11 = uVar7 == 0;
        if (bVar11) {
          uVar7 = 1;
        }
        if ((puVar25[bVar11] & uVar7) != 0) goto LAB_010096b4;
      }
      uVar21 = uVar21 | uVar32 & 0xfffffffffffc0000;
      uVar32 = (long)puVar22 - uVar21 >> 7 & 0x1ffffff;
      puVar25 = (uint *)(*(long *)(uVar21 + 0x10) + uVar32 * 4);
      uVar6 = 1 << (ulong)((uint)((long)puVar22 - uVar21 >> 2) & 0x1f);
      uVar7 = uVar6 << 1;
      if ((*puVar25 & uVar6) != 0) {
        uVar3 = uVar7;
        if (uVar7 == 0) {
          uVar3 = 1;
        }
        if ((puVar25[uVar7 == 0] & uVar3) == 0) {
          puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar20 * 4);
          while (uVar7 = *puVar25, (uVar18 & (uVar7 ^ 0xffffffff)) != 0) {
            while (*puVar25 == uVar7) {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar25,0x10);
              if (bVar11) {
                *puVar25 = uVar7 | uVar18;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_010096b4;
            }
            ClearExclusiveLocal();
          }
          goto LAB_010096b4;
        }
      }
      puVar25 = (uint *)(*(long *)(uVar21 + 0x10) + uVar32 * 4);
      if ((*puVar25 & uVar6) != 0) {
        bVar11 = uVar7 == 0;
        if (bVar11) {
          uVar7 = 1;
        }
        if ((puVar25[bVar11] & uVar7) != 0) {
          puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar20 * 4);
          while (uVar7 = *puVar25, (uVar18 & (uVar7 ^ 0xffffffff)) != 0) {
            while (*puVar25 == uVar7) {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar25,0x10);
              if (bVar11) {
                *puVar25 = uVar7 | uVar18;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                puVar25 = (uint *)(*(long *)(uVar30 + 0x10) +
                                  ((long)puVar15 + ~uVar30 >> 7 & 0x1ffffff) * 4);
                uVar18 = 1 << (ulong)((uint)((long)puVar15 + ~uVar30 >> 2) & 0x1f);
                local_80 = puVar15;
                if ((*puVar25 & uVar18) == 0) goto LAB_010096b4;
                uVar18 = uVar18 << 1;
                bVar11 = uVar18 == 0;
                puVar2 = puVar25;
                if (bVar11) {
                  uVar18 = 1;
                  puVar2 = puVar25 + 1;
                }
                goto LAB_0100940c;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
    }
LAB_010096b4:
    if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(uVar33 + 7) | 2) == 0x423)) {
      lVar37 = *(long *)(this + 8);
      local_80 = puVar22;
      iVar13 = HeapObject::SizeFromMap((HeapObject *)&local_80,uVar33);
      piVar38 = (int *)((long)puVar35 + (long)iVar13);
      if (((uVar19 != ((ulong)(piVar38 + 1) & 0xfffffffffffc0000)) ||
          (*piVar38 != *(int *)(lVar37 + -0x7b78))) ||
         (((*(byte *)(uVar19 + 10) >> 3 & 1) != 0 &&
          (((puVar25 = *(uint **)(*(long *)(uVar19 + 0x58) + 0x80),
            puVar25 < *(uint **)(uVar19 + 0x20) || (puVar35 < puVar25)) ||
           (*(uint **)(uVar19 + 0x28) <= puVar25)))))) goto LAB_01009840;
      uVar32 = (long)puVar22 + (long)iVar13;
      iVar13 = (int)uVar32;
      goto joined_r0x0100972c;
    }
  }
  else {
LAB_010084dc:
    puVar15 = (ulong *)PagedSpace::AllocateRaw((PagedSpace *)(this + 0xa0),uVar34,0,2);
    if (((ulong)puVar15 & 1) != 0) {
      lVar37 = (long)puVar15 + -1;
      uVar7 = uVar12 - 1;
      if (-1 < (int)(uVar12 - 4)) {
        uVar7 = uVar12 - 4;
      }
      *(uint *)((long)puVar15 + -1) = uVar18;
      if (6 < uVar12 - 1) {
        uVar20 = (long)((ulong)uVar7 << 0x20) >> 0x22;
        puVar16 = (undefined4 *)((long)puVar15 + 3);
        puVar24 = (undefined4 *)((long)puVar22 + 3);
        if ((uint)((int)uVar7 >> 2) < 0x10) {
          uVar30 = uVar20;
          if ((7 < (uint)((int)uVar7 >> 2)) &&
             ((puVar24 + uVar20 <= puVar16 || (puVar16 + uVar20 <= puVar24)))) {
            uVar27 = uVar20 & 0xfffffffffffffff8;
            puVar31 = (undefined8 *)((long)puVar15 + 0x13);
            uVar30 = uVar20 - uVar27;
            puVar24 = puVar24 + uVar27;
            puVar16 = puVar16 + uVar27;
            puVar28 = (undefined8 *)((long)puVar22 + 0x13);
            uVar29 = uVar27;
            do {
              puVar10 = puVar28 + -1;
              uVar40 = puVar28[-2];
              uVar42 = puVar28[1];
              uVar41 = *puVar28;
              uVar29 = uVar29 - 8;
              puVar28 = puVar28 + 4;
              puVar31[-1] = *puVar10;
              puVar31[-2] = uVar40;
              puVar31[1] = uVar42;
              *puVar31 = uVar41;
              puVar31 = puVar31 + 4;
            } while (uVar29 != 0);
            if (uVar27 == uVar20) goto LAB_01008b94;
          }
          do {
            uVar30 = uVar30 - 1;
            *puVar16 = *puVar24;
            puVar16 = puVar16 + 1;
            puVar24 = puVar24 + 1;
          } while (uVar30 != 0);
        }
        else {
          MemCopy(puVar16,puVar24,uVar20 << 2);
        }
      }
LAB_01008b94:
      do {
        if (*puVar35 != uVar18) {
          ClearExclusiveLocal();
          if ((*(long *)(this + 0x108) == 0) ||
             (*(long *)(this + 0x108) - (long)(int)uVar12 != lVar37)) {
            Heap::CreateFillerObjectAt(*(Heap **)(this + 0x88),lVar37,uVar34,1,1);
          }
          else {
            *(long *)(this + 0x108) = lVar37;
          }
          uVar18 = *puVar35;
          uVar12 = *param_3;
          goto LAB_010091bc;
        }
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar35,0x10);
        if (bVar11) {
          *puVar35 = (uint)lVar37;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (this[0x2e0] == (Scavenger)0x0) {
        SVar5 = this[0x2e1];
      }
      else {
        Heap::OnMoveEvent(*(Heap **)(this + 8),puVar15,puVar22,uVar34);
        SVar5 = this[0x2e1];
      }
      if (SVar5 != (Scavenger)0x0) {
        uVar30 = (ulong)puVar15 & 0xfffffffffffc0000;
        uVar20 = (long)puVar15 - uVar30 >> 7 & 0x1ffffff;
        puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar20 * 4);
        uVar18 = (uint)(1L << ((long)puVar15 - uVar30 >> 2 & 0x1f));
        if ((*puVar25 & uVar18) != 0) {
          uVar7 = uVar18 << 1;
          bVar11 = uVar7 == 0;
          if (bVar11) {
            uVar7 = 1;
          }
          if ((puVar25[bVar11] & uVar7) != 0) goto LAB_01009514;
        }
        uVar21 = uVar21 | uVar32 & 0xfffffffffffc0000;
        uVar32 = (long)puVar22 - uVar21 >> 7 & 0x1ffffff;
        puVar25 = (uint *)(*(long *)(uVar21 + 0x10) + uVar32 * 4);
        uVar6 = 1 << (ulong)((uint)((long)puVar22 - uVar21 >> 2) & 0x1f);
        uVar7 = uVar6 << 1;
        if ((*puVar25 & uVar6) != 0) {
          uVar3 = uVar7;
          if (uVar7 == 0) {
            uVar3 = 1;
          }
          if ((puVar25[uVar7 == 0] & uVar3) == 0) {
            puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar20 * 4);
            while (uVar7 = *puVar25, (uVar18 & (uVar7 ^ 0xffffffff)) != 0) {
              while (*puVar25 == uVar7) {
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar25,0x10);
                if (bVar11) {
                  *puVar25 = uVar7 | uVar18;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                if (cVar8 == '\0') goto LAB_01009514;
              }
              ClearExclusiveLocal();
            }
            goto LAB_01009514;
          }
        }
        puVar25 = (uint *)(*(long *)(uVar21 + 0x10) + uVar32 * 4);
        if ((*puVar25 & uVar6) != 0) {
          bVar11 = uVar7 == 0;
          if (bVar11) {
            uVar7 = 1;
          }
          if ((puVar25[bVar11] & uVar7) != 0) {
            puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar20 * 4);
            while (uVar7 = *puVar25, (uVar18 & (uVar7 ^ 0xffffffff)) != 0) {
              while (*puVar25 == uVar7) {
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar25,0x10);
                if (bVar11) {
                  *puVar25 = uVar7 | uVar18;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                if (cVar8 == '\0') {
                  puVar25 = (uint *)(*(long *)(uVar30 + 0x10) +
                                    ((long)puVar15 + ~uVar30 >> 7 & 0x1ffffff) * 4);
                  uVar18 = 1 << (ulong)((uint)((long)puVar15 + ~uVar30 >> 2) & 0x1f);
                  local_80 = puVar15;
                  if ((*puVar25 & uVar18) == 0) goto LAB_01009514;
                  uVar18 = uVar18 << 1;
                  bVar11 = uVar18 == 0;
                  puVar2 = puVar25;
                  if (bVar11) {
                    uVar18 = 1;
                    puVar2 = puVar25 + 1;
                  }
                  goto LAB_0100930c;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
      }
LAB_01009514:
      if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(uVar33 + 7) | 2) == 0x423)) {
        lVar37 = *(long *)(this + 8);
        local_80 = puVar22;
        iVar13 = HeapObject::SizeFromMap((HeapObject *)&local_80,uVar33);
        piVar38 = (int *)((long)puVar35 + (long)iVar13);
        if ((((uVar19 == ((ulong)(piVar38 + 1) & 0xfffffffffffc0000)) &&
             (*piVar38 == *(int *)(lVar37 + -0x7b78))) &&
            (((*(byte *)(uVar19 + 10) >> 3 & 1) == 0 ||
             (((puVar25 = *(uint **)(*(long *)(uVar19 + 0x58) + 0x80),
               *(uint **)(uVar19 + 0x20) <= puVar25 && (puVar25 <= puVar35)) &&
              (puVar25 < *(uint **)(uVar19 + 0x28))))))) &&
           (uVar32 = (long)puVar22 + (long)iVar13, (int)uVar32 != 0)) {
          local_80 = local_70;
          local_70[0] = uVar32 & 0xffffffff00000000 | (ulong)*(uint *)(uVar32 + 3);
          lVar37 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
                   ::
                   __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::AllocationSite&&>,std::__ndk1::tuple<>>
                             ((AllocationSite *)(this + 0x50),(piecewise_construct_t *)local_70,
                              (tuple *)&DAT_019c6624,(tuple *)&local_80);
          *(long *)(lVar37 + 0x18) = *(long *)(lVar37 + 0x18) + 1;
        }
      }
      *param_3 = *param_3 & 2 | (uint)puVar15;
      if (5 < bVar4) {
        Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Push
                  (*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x28),puVar15,uVar34);
      }
      uVar18 = 1;
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + (long)(int)uVar12;
      goto LAB_01009880;
    }
    if ((int)uVar12 < 0x2001) {
      puVar15 = (ulong *)LocalAllocator::AllocateInLAB((LocalAllocator *)(this + 0x88),uVar12,0);
    }
    else {
      pNVar39 = *(NewSpace **)(this + 0x90);
      base::Mutex::Lock((Mutex *)(pNVar39 + 0x98));
      uVar20 = *(ulong *)(pNVar39 + 0x68);
      if (uVar20 < *(ulong *)(pNVar39 + 0x78)) {
        *(ulong *)(pNVar39 + 0x78) = uVar20;
      }
      uVar30 = uVar20 + uVar12;
      if (*(ulong *)(pNVar39 + 0x70) < uVar30) {
        uVar20 = NewSpace::EnsureAllocation(pNVar39,uVar12,0);
        if ((uVar20 & 1) != 0) {
          uVar20 = *(ulong *)(pNVar39 + 0x68);
          uVar30 = uVar20 + uVar12;
          goto LAB_01008568;
        }
        puVar15 = (ulong *)0x2;
      }
      else {
LAB_01008568:
        *(ulong *)(pNVar39 + 0x68) = uVar30;
        puVar15 = (ulong *)(uVar20 + 1);
        if (FLAG_trace_allocations_origins != '\0') {
          SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar39,2);
        }
        if (((ulong)puVar15 & 1) == 0) {
LAB_01008590:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!object.IsSmi()");
        }
      }
      base::Mutex::Unlock((Mutex *)(pNVar39 + 0x98));
    }
    if (((ulong)puVar15 & 1) == 0) {
LAB_01008924:
                    /* WARNING: Subroutine does not return */
      Heap::FatalProcessOutOfMemory(*(Heap **)(this + 8),"Scavenger: semi-space copy");
    }
    lVar37 = (long)puVar15 - 1;
    uVar7 = uVar12 - 1;
    if (-1 < (int)(uVar12 - 4)) {
      uVar7 = uVar12 - 4;
    }
    *(uint *)((long)puVar15 - 1) = uVar18;
    if (6 < uVar12 - 1) {
      uVar20 = (long)((ulong)uVar7 << 0x20) >> 0x22;
      puVar16 = (undefined4 *)((long)puVar15 + 3);
      puVar24 = (undefined4 *)((long)puVar22 + 3);
      if ((uint)((int)uVar7 >> 2) < 0x10) {
        uVar30 = uVar20;
        if ((7 < (uint)((int)uVar7 >> 2)) &&
           ((puVar24 + uVar20 <= puVar16 || (puVar16 + uVar20 <= puVar24)))) {
          uVar27 = uVar20 & 0xfffffffffffffff8;
          puVar31 = (undefined8 *)((long)puVar15 + 0x13);
          uVar30 = uVar20 - uVar27;
          puVar24 = puVar24 + uVar27;
          puVar16 = puVar16 + uVar27;
          puVar28 = (undefined8 *)((long)puVar22 + 0x13);
          uVar29 = uVar27;
          do {
            puVar10 = puVar28 + -1;
            uVar40 = puVar28[-2];
            uVar42 = puVar28[1];
            uVar41 = *puVar28;
            uVar29 = uVar29 - 8;
            puVar28 = puVar28 + 4;
            puVar31[-1] = *puVar10;
            puVar31[-2] = uVar40;
            puVar31[1] = uVar42;
            *puVar31 = uVar41;
            puVar31 = puVar31 + 4;
          } while (uVar29 != 0);
          if (uVar27 == uVar20) goto LAB_01009048;
        }
        do {
          uVar30 = uVar30 - 1;
          *puVar16 = *puVar24;
          puVar16 = puVar16 + 1;
          puVar24 = puVar24 + 1;
        } while (uVar30 != 0);
      }
      else {
        MemCopy(puVar16,puVar24,uVar20 << 2);
      }
    }
LAB_01009048:
    do {
      if (*puVar35 != uVar18) {
        ClearExclusiveLocal();
        if ((*(long *)(this + 0x278) == 0) ||
           (*(long *)(this + 0x278) - (long)(int)uVar12 != lVar37)) {
          Heap::CreateFillerObjectAt(*(Heap **)(this + 0x88),lVar37,uVar34,1,1);
        }
        else {
          *(long *)(this + 0x278) = lVar37;
        }
        uVar18 = *puVar35;
        uVar12 = *param_3;
LAB_010091bc:
        uVar32 = (ulong)uVar12 & 2 | (ulong)(uVar18 + 1);
        uVar12 = (uint)uVar32;
        *param_3 = uVar12;
joined_r0x01008f2c:
        uVar18 = 1;
        if ((uVar12 != 3) && (uVar18 = 1, (uVar32 & 1) != 0)) {
          uVar18 = (*(uint *)((uVar32 & 0xfffc0000 | (ulong)param_3 & 0xffffffff00000000) + 8) >> 4
                   ^ 0xffffffff) & 1;
        }
        goto LAB_01009880;
      }
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar35,0x10);
      if (bVar11) {
        *puVar35 = (uint)lVar37;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (this[0x2e0] != (Scavenger)0x0) {
      Heap::OnMoveEvent(*(Heap **)(this + 8),puVar15,puVar22,uVar34);
    }
    if (this[0x2e1] != (Scavenger)0x0) {
      uVar30 = (ulong)puVar15 & 0xfffffffffffc0000;
      uVar20 = (long)puVar15 - uVar30 >> 7 & 0x1ffffff;
      puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar20 * 4);
      uVar18 = (uint)(1L << ((long)puVar15 - uVar30 >> 2 & 0x1f));
      if ((*puVar25 & uVar18) != 0) {
        uVar7 = uVar18 << 1;
        bVar11 = uVar7 == 0;
        if (bVar11) {
          uVar7 = 1;
        }
        if ((puVar25[bVar11] & uVar7) != 0) goto LAB_01009604;
      }
      uVar21 = uVar21 | uVar32 & 0xfffffffffffc0000;
      uVar32 = (long)puVar22 - uVar21 >> 7 & 0x1ffffff;
      puVar25 = (uint *)(*(long *)(uVar21 + 0x10) + uVar32 * 4);
      uVar6 = 1 << (ulong)((uint)((long)puVar22 - uVar21 >> 2) & 0x1f);
      uVar7 = uVar6 << 1;
      if ((*puVar25 & uVar6) != 0) {
        uVar3 = uVar7;
        if (uVar7 == 0) {
          uVar3 = 1;
        }
        if ((puVar25[uVar7 == 0] & uVar3) == 0) {
          puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar20 * 4);
          while (uVar7 = *puVar25, (uVar18 & (uVar7 ^ 0xffffffff)) != 0) {
            while (*puVar25 == uVar7) {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar25,0x10);
              if (bVar11) {
                *puVar25 = uVar7 | uVar18;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_01009604;
            }
            ClearExclusiveLocal();
          }
          goto LAB_01009604;
        }
      }
      puVar25 = (uint *)(*(long *)(uVar21 + 0x10) + uVar32 * 4);
      if ((*puVar25 & uVar6) != 0) {
        bVar11 = uVar7 == 0;
        if (bVar11) {
          uVar7 = 1;
        }
        if ((puVar25[bVar11] & uVar7) != 0) {
          puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar20 * 4);
          while (uVar7 = *puVar25, (uVar18 & (uVar7 ^ 0xffffffff)) != 0) {
            while (*puVar25 == uVar7) {
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar25,0x10);
              if (bVar11) {
                *puVar25 = uVar7 | uVar18;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                puVar25 = (uint *)(*(long *)(uVar30 + 0x10) +
                                  ((long)puVar15 + ~uVar30 >> 7 & 0x1ffffff) * 4);
                uVar18 = 1 << (ulong)((uint)((long)puVar15 + ~uVar30 >> 2) & 0x1f);
                local_80 = puVar15;
                if ((*puVar25 & uVar18) == 0) goto LAB_01009604;
                uVar18 = uVar18 << 1;
                bVar11 = uVar18 == 0;
                puVar2 = puVar25;
                if (bVar11) {
                  uVar18 = 1;
                  puVar2 = puVar25 + 1;
                }
                goto LAB_0100938c;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
    }
LAB_01009604:
    if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(uVar33 + 7) | 2) == 0x423)) {
      lVar37 = *(long *)(this + 8);
      local_80 = puVar22;
      iVar13 = HeapObject::SizeFromMap((HeapObject *)&local_80,uVar33);
      piVar38 = (int *)((long)puVar35 + (long)iVar13);
      if (((uVar19 == ((ulong)(piVar38 + 1) & 0xfffffffffffc0000)) &&
          (*piVar38 == *(int *)(lVar37 + -0x7b78))) &&
         (((*(byte *)(uVar19 + 10) >> 3 & 1) == 0 ||
          (((puVar25 = *(uint **)(*(long *)(uVar19 + 0x58) + 0x80),
            *(uint **)(uVar19 + 0x20) <= puVar25 && (puVar25 <= puVar35)) &&
           (puVar25 < *(uint **)(uVar19 + 0x28))))))) {
        uVar32 = (long)puVar22 + (long)iVar13;
        iVar13 = (int)uVar32;
joined_r0x0100972c:
        if (iVar13 != 0) {
          local_80 = local_70;
          local_70[0] = uVar32 & 0xffffffff00000000 | (ulong)*(uint *)(uVar32 + 3);
          lVar37 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
                   ::
                   __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::AllocationSite&&>,std::__ndk1::tuple<>>
                             ((AllocationSite *)(this + 0x50),(piecewise_construct_t *)local_70,
                              (tuple *)&DAT_019c6624,(tuple *)&local_80);
          *(long *)(lVar37 + 0x18) = *(long *)(lVar37 + 0x18) + 1;
        }
      }
    }
  }
LAB_01009840:
  *param_3 = *param_3 & 2 | (uint)puVar15;
  if (5 < bVar4) {
    Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Push
              (*(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x38),puVar15,uVar34);
  }
  uVar18 = 0;
  *(long *)(this + 0x78) = *(long *)(this + 0x78) + (long)(int)uVar12;
LAB_01009880:
  *(uint *)((long)param_4 + -1) = *param_3 - 1;
  return uVar18;
LAB_0100940c:
  uVar7 = puVar25[bVar11];
  if ((uVar18 & (uVar7 ^ 0xffffffff)) == 0) goto LAB_010096b4;
  while (*puVar2 == uVar7) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = uVar7 | uVar18;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') {
      iVar13 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar15 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar15 - 1))
      ;
      plVar1 = (long *)(uVar30 + 0x68);
      do {
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + (long)iVar13;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      goto LAB_010096b4;
    }
  }
  ClearExclusiveLocal();
  goto LAB_0100940c;
LAB_0100930c:
  uVar7 = puVar25[bVar11];
  if ((uVar18 & (uVar7 ^ 0xffffffff)) == 0) goto LAB_01009514;
  while (*puVar2 == uVar7) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = uVar7 | uVar18;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') {
      iVar13 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar15 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar15 + -1)
                         );
      plVar1 = (long *)(uVar30 + 0x68);
      do {
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + (long)iVar13;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      goto LAB_01009514;
    }
  }
  ClearExclusiveLocal();
  goto LAB_0100930c;
LAB_0100938c:
  uVar7 = puVar25[bVar11];
  if ((uVar18 & (uVar7 ^ 0xffffffff)) == 0) goto LAB_01009604;
  while (*puVar2 == uVar7) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = uVar7 | uVar18;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') {
      iVar13 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar15 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar15 - 1))
      ;
      plVar1 = (long *)(uVar30 + 0x68);
      do {
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + (long)iVar13;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      goto LAB_01009604;
    }
  }
  ClearExclusiveLocal();
  goto LAB_0100938c;
LAB_01008834:
  uVar12 = puVar35[bVar11];
  if ((uVar18 & (uVar12 ^ 0xffffffff)) == 0) goto LAB_01008a88;
  while (*puVar25 == uVar12) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar25,0x10);
    if (bVar9) {
      *puVar25 = uVar12 | uVar18;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') {
      iVar13 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar22 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar22 - 1))
      ;
      plVar1 = (long *)(uVar34 + 0x68);
      do {
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + (long)iVar13;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      goto LAB_01008a88;
    }
  }
  ClearExclusiveLocal();
  goto LAB_01008834;
LAB_01008734:
  uVar12 = puVar35[bVar11];
  if ((uVar18 & (uVar12 ^ 0xffffffff)) == 0) goto LAB_01008970;
  while (*puVar25 == uVar12) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar25,0x10);
    if (bVar9) {
      *puVar25 = uVar12 | uVar18;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') {
      iVar13 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar22 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar22 + -1)
                         );
      plVar1 = (long *)(uVar33 + 0x68);
      do {
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + (long)iVar13;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      goto LAB_01008970;
    }
  }
  ClearExclusiveLocal();
  goto LAB_01008734;
LAB_010087b4:
  uVar12 = puVar35[bVar11];
  if ((uVar18 & (uVar12 ^ 0xffffffff)) == 0) goto LAB_01008a88;
  while (*puVar25 == uVar12) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar25,0x10);
    if (bVar9) {
      *puVar25 = uVar12 | uVar18;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') {
      iVar13 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar22 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar22 - 1))
      ;
      plVar1 = (long *)(uVar34 + 0x68);
      do {
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + (long)iVar13;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      goto LAB_01008a88;
    }
  }
  ClearExclusiveLocal();
  goto LAB_010087b4;
}

