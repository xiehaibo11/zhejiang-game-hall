
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::SlotCallbackResult
   v8::internal::Scavenger::EvacuateShortcutCandidate<v8::internal::FullHeapObjectSlot>(v8::internal::Map,
   v8::internal::FullHeapObjectSlot, v8::internal::ConsString, int) */

uint __thiscall
v8::internal::Scavenger::EvacuateShortcutCandidate<v8::internal::FullHeapObjectSlot>
          (Scavenger *this,long param_2,ulong *param_3,ulong *param_4,uint param_5)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  Scavenger SVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  undefined8 *puVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  Heap *pHVar15;
  ulong *puVar16;
  undefined4 *puVar17;
  void *pvVar18;
  uint uVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
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
  NewSpace *pNVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  ulong *local_88;
  ulong *local_80;
  ulong uStack_78;
  ulong local_70 [2];
  
  uVar32 = (ulong)param_5;
  if ((this[0x2e1] != (Scavenger)0x0) ||
     (*(int *)((long)param_4 + 0xf) != *(int *)(*(long *)(this + 8) + -0x8788))) {
    uVar19 = (uint)param_2;
    if (((FLAG_young_generation_large_objects != '\0') &&
        (uVar23 = *(ulong *)(((ulong)param_4 & 0xfffffffffffc0000) + 8),
        ((uint)uVar23 >> 5 & 1) != 0)) && ((uVar23 & 0x18) != 0)) {
      puVar35 = (uint *)((long)param_4 + -1);
      do {
        if (*puVar35 != uVar19) {
          ClearExclusiveLocal();
          return 0;
        }
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar35,0x10);
        if (bVar12) {
          *puVar35 = (uint)puVar35;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
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
        pvVar18 = operator_new(0x70);
        *(undefined8 *)((long)pvVar18 + 0x28) = 0;
        *(undefined8 *)((long)pvVar18 + 0x30) = 0;
        *(undefined8 *)((long)pvVar18 + 0x40) = 0;
        *(undefined8 *)((long)pvVar18 + 0x48) = 0;
        *(undefined8 *)((long)pvVar18 + 0x58) = 0;
        *(undefined8 *)((long)pvVar18 + 0x60) = 0;
        *(void **)(lVar37 + 0x2b8) = pvVar18;
        *(ulong **)((long)pvVar18 + 0x10) = param_4;
        *(long *)((long)pvVar18 + 0x18) = param_2;
        *(undefined8 *)((long)pvVar18 + 8) = 1;
        *(uint *)((long)pvVar18 + 0x20) = param_5;
        return 0;
      }
      puVar31[1] = lVar26 + 1;
      puVar31[lVar26 * 3 + 2] = param_4;
      puVar31[lVar26 * 3 + 3] = param_2;
      *(uint *)(puVar31 + lVar26 * 3 + 4) = param_5;
      return 0;
    }
    puVar35 = (uint *)((long)param_4 + -1);
    uVar23 = (ulong)puVar35 & 0xfffffffffffc0000;
    if (((*(byte *)(uVar23 + 10) >> 3 & 1) == 0) ||
       (((puVar25 = *(uint **)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x1f0),
         *(uint **)(uVar23 + 0x20) <= puVar25 && (puVar25 <= puVar35)) &&
        (puVar25 <= *(uint **)(uVar23 + 0x28))))) {
      if ((int)param_5 < 0x2001) {
        puVar20 = (ulong *)LocalAllocator::AllocateInLAB((LocalAllocator *)(this + 0x88),uVar32,0);
      }
      else {
        pNVar38 = *(NewSpace **)(this + 0x90);
        base::Mutex::Lock((Mutex *)(pNVar38 + 0x98));
        uVar33 = *(ulong *)(pNVar38 + 0x68);
        if (uVar33 < *(ulong *)(pNVar38 + 0x78)) {
          *(ulong *)(pNVar38 + 0x78) = uVar33;
        }
        uVar34 = uVar33 + uVar32;
        if (*(ulong *)(pNVar38 + 0x70) < uVar34) {
          uVar33 = NewSpace::EnsureAllocation(pNVar38,uVar32,0);
          if ((uVar33 & 1) != 0) {
            uVar33 = *(ulong *)(pNVar38 + 0x68);
            uVar34 = uVar33 + uVar32;
            goto LAB_0100ea1c;
          }
          puVar20 = (ulong *)0x2;
        }
        else {
LAB_0100ea1c:
          *(ulong *)(pNVar38 + 0x68) = uVar34;
          puVar20 = (ulong *)(uVar33 + 1);
          if (FLAG_trace_allocations_origins != '\0') {
            SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar38,2);
          }
          if (((ulong)puVar20 & 1) == 0) goto LAB_0100f338;
        }
        base::Mutex::Unlock((Mutex *)(pNVar38 + 0x98));
      }
      if (((ulong)puVar20 & 1) != 0) {
        lVar37 = (long)puVar20 - 1;
        uVar13 = param_5 - 1;
        if (-1 < (int)(param_5 - 4)) {
          uVar13 = param_5 - 4;
        }
        *(uint *)((long)puVar20 - 1) = uVar19;
        if (6 < param_5 - 1) {
          uVar33 = (long)((ulong)uVar13 << 0x20) >> 0x22;
          puVar17 = (undefined4 *)((long)puVar20 + 3);
          puVar24 = (undefined4 *)((long)param_4 + 3);
          if ((uint)((int)uVar13 >> 2) < 0x10) {
            uVar34 = uVar33;
            if ((7 < (uint)((int)uVar13 >> 2)) &&
               ((puVar24 + uVar33 <= puVar17 || (puVar17 + uVar33 <= puVar24)))) {
              uVar22 = uVar33 & 0xfffffffffffffff8;
              puVar31 = (undefined8 *)((long)puVar20 + 0x13);
              uVar34 = uVar33 - uVar22;
              puVar24 = puVar24 + uVar22;
              puVar17 = puVar17 + uVar22;
              puVar28 = (undefined8 *)((long)param_4 + 0x13);
              uVar21 = uVar22;
              do {
                puVar11 = puVar28 + -1;
                uVar39 = puVar28[-2];
                uVar41 = puVar28[1];
                uVar40 = *puVar28;
                uVar21 = uVar21 - 8;
                puVar28 = puVar28 + 4;
                puVar31[-1] = *puVar11;
                puVar31[-2] = uVar39;
                puVar31[1] = uVar41;
                *puVar31 = uVar40;
                puVar31 = puVar31 + 4;
              } while (uVar21 != 0);
              if (uVar22 == uVar33) goto LAB_0100ede8;
            }
            do {
              uVar34 = uVar34 - 1;
              *puVar17 = *puVar24;
              puVar17 = puVar17 + 1;
              puVar24 = puVar24 + 1;
            } while (uVar34 != 0);
          }
          else {
            MemCopy(puVar17,puVar24,uVar33 << 2);
          }
        }
LAB_0100ede8:
        do {
          if (*puVar35 != uVar19) goto LAB_0100f1bc;
          cVar9 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar35,0x10);
          if (bVar12) {
            *puVar35 = (uint)lVar37;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (this[0x2e0] == (Scavenger)0x0) {
          SVar6 = this[0x2e1];
        }
        else {
          Heap::OnMoveEvent(*(Heap **)(this + 8),puVar20,param_4,uVar32);
          SVar6 = this[0x2e1];
        }
        if (SVar6 != (Scavenger)0x0) {
          uVar34 = (ulong)puVar20 & 0xfffffffffffc0000;
          uVar33 = (long)puVar20 - uVar34 >> 7 & 0x1ffffff;
          puVar25 = (uint *)(*(long *)(uVar34 + 0x10) + uVar33 * 4);
          uVar19 = (uint)(1L << ((long)puVar20 - uVar34 >> 2 & 0x1f));
          if ((*puVar25 & uVar19) != 0) {
            uVar13 = uVar19 << 1;
            bVar12 = uVar13 == 0;
            if (bVar12) {
              uVar13 = 1;
            }
            if ((puVar25[bVar12] & uVar13) != 0) goto LAB_0100f830;
          }
          uVar21 = (ulong)param_4 & 0xfffffffffffc0000;
          uVar22 = (long)param_4 - uVar21 >> 7 & 0x1ffffff;
          puVar25 = (uint *)(*(long *)(uVar21 + 0x10) + uVar22 * 4);
          uVar8 = 1 << (ulong)((uint)((long)param_4 - uVar21 >> 2) & 0x1f);
          uVar13 = uVar8 << 1;
          if ((*puVar25 & uVar8) != 0) {
            uVar7 = uVar13;
            if (uVar13 == 0) {
              uVar7 = 1;
            }
            if ((puVar25[uVar13 == 0] & uVar7) == 0) {
              puVar25 = (uint *)(*(long *)(uVar34 + 0x10) + uVar33 * 4);
              while (uVar13 = *puVar25, (uVar19 & (uVar13 ^ 0xffffffff)) != 0) {
                while (*puVar25 == uVar13) {
                  cVar9 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(puVar25,0x10);
                  if (bVar12) {
                    *puVar25 = uVar13 | uVar19;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                  if (cVar9 == '\0') goto LAB_0100f830;
                }
                ClearExclusiveLocal();
              }
              goto LAB_0100f830;
            }
          }
          puVar25 = (uint *)(*(long *)(uVar21 + 0x10) + uVar22 * 4);
          if ((*puVar25 & uVar8) != 0) {
            bVar12 = uVar13 == 0;
            if (bVar12) {
              uVar13 = 1;
            }
            if ((puVar25[bVar12] & uVar13) != 0) {
              puVar25 = (uint *)(*(long *)(uVar34 + 0x10) + uVar33 * 4);
              while (uVar13 = *puVar25, (uVar19 & (uVar13 ^ 0xffffffff)) != 0) {
                while (*puVar25 == uVar13) {
                  cVar9 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(puVar25,0x10);
                  if (bVar12) {
                    *puVar25 = uVar13 | uVar19;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                  if (cVar9 == '\0') {
                    puVar25 = (uint *)(*(long *)(uVar34 + 0x10) +
                                      ((long)puVar20 + ~uVar34 >> 7 & 0x1ffffff) * 4);
                    uVar19 = 1 << (ulong)((uint)((long)puVar20 + ~uVar34 >> 2) & 0x1f);
                    local_80 = puVar20;
                    if ((*puVar25 & uVar19) == 0) goto LAB_0100f830;
                    uVar19 = uVar19 << 1;
                    bVar12 = uVar19 == 0;
                    puVar3 = puVar25;
                    if (bVar12) {
                      uVar19 = 1;
                      puVar3 = puVar25 + 1;
                    }
                    goto LAB_0100f5dc;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
        }
        goto LAB_0100f830;
      }
    }
    puVar20 = (ulong *)PagedSpace::AllocateRaw((PagedSpace *)(this + 0xa0),uVar32,0,2);
    if (((ulong)puVar20 & 1) != 0) {
      lVar37 = (long)puVar20 + -1;
      uVar13 = param_5 - 1;
      if (-1 < (int)(param_5 - 4)) {
        uVar13 = param_5 - 4;
      }
      *(uint *)((long)puVar20 + -1) = uVar19;
      if (6 < param_5 - 1) {
        uVar33 = (long)((ulong)uVar13 << 0x20) >> 0x22;
        puVar17 = (undefined4 *)((long)puVar20 + 3);
        puVar24 = (undefined4 *)((long)param_4 + 3);
        if ((uint)((int)uVar13 >> 2) < 0x10) {
          uVar34 = uVar33;
          if ((7 < (uint)((int)uVar13 >> 2)) &&
             ((puVar24 + uVar33 <= puVar17 || (puVar17 + uVar33 <= puVar24)))) {
            uVar22 = uVar33 & 0xfffffffffffffff8;
            puVar31 = (undefined8 *)((long)puVar20 + 0x13);
            uVar34 = uVar33 - uVar22;
            puVar24 = puVar24 + uVar22;
            puVar17 = puVar17 + uVar22;
            puVar28 = (undefined8 *)((long)param_4 + 0x13);
            uVar21 = uVar22;
            do {
              puVar11 = puVar28 + -1;
              uVar39 = puVar28[-2];
              uVar41 = puVar28[1];
              uVar40 = *puVar28;
              uVar21 = uVar21 - 8;
              puVar28 = puVar28 + 4;
              puVar31[-1] = *puVar11;
              puVar31[-2] = uVar39;
              puVar31[1] = uVar41;
              *puVar31 = uVar40;
              puVar31 = puVar31 + 4;
            } while (uVar21 != 0);
            if (uVar22 == uVar33) goto LAB_0100ebf4;
          }
          do {
            uVar34 = uVar34 - 1;
            *puVar17 = *puVar24;
            puVar17 = puVar17 + 1;
            puVar24 = puVar24 + 1;
          } while (uVar34 != 0);
        }
        else {
          MemCopy(puVar17,puVar24,uVar33 << 2);
        }
      }
LAB_0100ebf4:
      do {
        if (*puVar35 != uVar19) {
          ClearExclusiveLocal();
          if ((*(long *)(this + 0x108) == 0) ||
             (*(long *)(this + 0x108) - (long)(int)param_5 != lVar37)) {
            pHVar15 = *(Heap **)(this + 0x88);
            goto LAB_0100f1ec;
          }
          *(long *)(this + 0x108) = lVar37;
          goto LAB_0100f1f4;
        }
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar35,0x10);
        if (bVar12) {
          *puVar35 = (uint)lVar37;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (this[0x2e0] == (Scavenger)0x0) {
        SVar6 = this[0x2e1];
      }
      else {
        Heap::OnMoveEvent(*(Heap **)(this + 8),puVar20,param_4,param_5);
        SVar6 = this[0x2e1];
      }
      if (SVar6 != (Scavenger)0x0) {
        uVar33 = (ulong)puVar20 & 0xfffffffffffc0000;
        uVar32 = (long)puVar20 - uVar33 >> 7 & 0x1ffffff;
        puVar25 = (uint *)(*(long *)(uVar33 + 0x10) + uVar32 * 4);
        uVar19 = (uint)(1L << ((long)puVar20 - uVar33 >> 2 & 0x1f));
        if ((*puVar25 & uVar19) != 0) {
          uVar13 = uVar19 << 1;
          bVar12 = uVar13 == 0;
          if (bVar12) {
            uVar13 = 1;
          }
          if ((puVar25[bVar12] & uVar13) != 0) goto LAB_0100f718;
        }
        uVar34 = (ulong)param_4 & 0xfffffffffffc0000;
        uVar21 = (long)param_4 - uVar34 >> 7 & 0x1ffffff;
        puVar25 = (uint *)(*(long *)(uVar34 + 0x10) + uVar21 * 4);
        uVar8 = 1 << (ulong)((uint)((long)param_4 - uVar34 >> 2) & 0x1f);
        uVar13 = uVar8 << 1;
        if ((*puVar25 & uVar8) != 0) {
          uVar7 = uVar13;
          if (uVar13 == 0) {
            uVar7 = 1;
          }
          if ((puVar25[uVar13 == 0] & uVar7) == 0) {
            puVar25 = (uint *)(*(long *)(uVar33 + 0x10) + uVar32 * 4);
            while (uVar13 = *puVar25, (uVar19 & (uVar13 ^ 0xffffffff)) != 0) {
              while (*puVar25 == uVar13) {
                cVar9 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(puVar25,0x10);
                if (bVar12) {
                  *puVar25 = uVar13 | uVar19;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_0100f718;
              }
              ClearExclusiveLocal();
            }
            goto LAB_0100f718;
          }
        }
        puVar25 = (uint *)(*(long *)(uVar34 + 0x10) + uVar21 * 4);
        if ((*puVar25 & uVar8) != 0) {
          bVar12 = uVar13 == 0;
          if (bVar12) {
            uVar13 = 1;
          }
          if ((puVar25[bVar12] & uVar13) != 0) {
            puVar25 = (uint *)(*(long *)(uVar33 + 0x10) + uVar32 * 4);
            while (uVar13 = *puVar25, (uVar19 & (uVar13 ^ 0xffffffff)) != 0) {
              while (*puVar25 == uVar13) {
                cVar9 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(puVar25,0x10);
                if (bVar12) {
                  *puVar25 = uVar13 | uVar19;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') {
                  puVar25 = (uint *)(*(long *)(uVar33 + 0x10) +
                                    ((long)puVar20 + ~uVar33 >> 7 & 0x1ffffff) * 4);
                  uVar19 = 1 << (ulong)((uint)((long)puVar20 + ~uVar33 >> 2) & 0x1f);
                  local_80 = puVar20;
                  if ((*puVar25 & uVar19) == 0) goto LAB_0100f718;
                  uVar19 = uVar19 << 1;
                  bVar12 = uVar19 == 0;
                  puVar3 = puVar25;
                  if (bVar12) {
                    uVar19 = 1;
                    puVar3 = puVar25 + 1;
                  }
                  goto LAB_0100f4dc;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
      }
LAB_0100f718:
      if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(param_2 + 7) | 2) == 0x423)) {
        lVar37 = *(long *)(this + 8);
        local_80 = param_4;
        iVar14 = HeapObject::SizeFromMap((HeapObject *)&local_80,param_2);
        piVar2 = (int *)((long)puVar35 + (long)iVar14);
        if ((((uVar23 == ((ulong)(piVar2 + 1) & 0xfffffffffffc0000)) &&
             (*piVar2 == *(int *)(lVar37 + -0x7b78))) &&
            (((*(byte *)(uVar23 + 10) >> 3 & 1) == 0 ||
             (((puVar25 = *(uint **)(*(long *)(uVar23 + 0x58) + 0x80),
               *(uint **)(uVar23 + 0x20) <= puVar25 && (puVar25 <= puVar35)) &&
              (puVar25 < *(uint **)(uVar23 + 0x28))))))) &&
           (uVar32 = (long)iVar14 + (long)param_4, (int)uVar32 != 0)) {
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
      *param_3 = *param_3 & 2 | (ulong)puVar20;
      Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Push
                (*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x28),puVar20,param_5);
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + (long)(int)param_5;
      return 1;
    }
    if ((int)param_5 < 0x2001) {
      puVar20 = (ulong *)LocalAllocator::AllocateInLAB((LocalAllocator *)(this + 0x88),param_5,0);
    }
    else {
      pNVar38 = *(NewSpace **)(this + 0x90);
      base::Mutex::Lock((Mutex *)(pNVar38 + 0x98));
      uVar33 = *(ulong *)(pNVar38 + 0x68);
      if (uVar33 < *(ulong *)(pNVar38 + 0x78)) {
        *(ulong *)(pNVar38 + 0x78) = uVar33;
      }
      uVar34 = uVar33 + param_5;
      if (*(ulong *)(pNVar38 + 0x70) < uVar34) {
        uVar33 = NewSpace::EnsureAllocation(pNVar38,uVar32,0);
        if ((uVar33 & 1) != 0) {
          uVar33 = *(ulong *)(pNVar38 + 0x68);
          uVar34 = uVar33 + param_5;
          goto LAB_0100eb1c;
        }
        puVar20 = (ulong *)0x2;
      }
      else {
LAB_0100eb1c:
        *(ulong *)(pNVar38 + 0x68) = uVar34;
        puVar20 = (ulong *)(uVar33 + 1);
        if (FLAG_trace_allocations_origins != '\0') {
          SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar38,2);
        }
        if (((ulong)puVar20 & 1) == 0) goto LAB_0100f338;
      }
      base::Mutex::Unlock((Mutex *)(pNVar38 + 0x98));
    }
    if (((ulong)puVar20 & 1) == 0) goto LAB_0100f6cc;
    lVar37 = (long)puVar20 - 1;
    uVar13 = param_5 - 1;
    if (-1 < (int)(param_5 - 4)) {
      uVar13 = param_5 - 4;
    }
    *(uint *)((long)puVar20 - 1) = uVar19;
    if (6 < param_5 - 1) {
      uVar33 = (long)((ulong)uVar13 << 0x20) >> 0x22;
      puVar17 = (undefined4 *)((long)puVar20 + 3);
      puVar24 = (undefined4 *)((long)param_4 + 3);
      if ((uint)((int)uVar13 >> 2) < 0x10) {
        uVar34 = uVar33;
        if ((7 < (uint)((int)uVar13 >> 2)) &&
           ((puVar24 + uVar33 <= puVar17 || (puVar17 + uVar33 <= puVar24)))) {
          uVar22 = uVar33 & 0xfffffffffffffff8;
          puVar31 = (undefined8 *)((long)puVar20 + 0x13);
          uVar34 = uVar33 - uVar22;
          puVar24 = puVar24 + uVar22;
          puVar17 = puVar17 + uVar22;
          puVar28 = (undefined8 *)((long)param_4 + 0x13);
          uVar21 = uVar22;
          do {
            puVar11 = puVar28 + -1;
            uVar39 = puVar28[-2];
            uVar41 = puVar28[1];
            uVar40 = *puVar28;
            uVar21 = uVar21 - 8;
            puVar28 = puVar28 + 4;
            puVar31[-1] = *puVar11;
            puVar31[-2] = uVar39;
            puVar31[1] = uVar41;
            *puVar31 = uVar40;
            puVar31 = puVar31 + 4;
          } while (uVar21 != 0);
          if (uVar22 == uVar33) goto LAB_0100f098;
        }
        do {
          uVar34 = uVar34 - 1;
          *puVar17 = *puVar24;
          puVar17 = puVar17 + 1;
          puVar24 = puVar24 + 1;
        } while (uVar34 != 0);
      }
      else {
        MemCopy(puVar17,puVar24,uVar33 << 2);
      }
    }
LAB_0100f098:
    do {
      if (*puVar35 != uVar19) {
LAB_0100f1bc:
        ClearExclusiveLocal();
        if ((*(long *)(this + 0x278) == 0) ||
           (*(long *)(this + 0x278) - (long)(int)param_5 != lVar37)) {
          pHVar15 = *(Heap **)(this + 0x88);
LAB_0100f1ec:
          Heap::CreateFillerObjectAt(pHVar15,lVar37,uVar32,1,1);
        }
        else {
          *(long *)(this + 0x278) = lVar37;
        }
LAB_0100f1f4:
        uVar32 = ((ulong)param_4 & 0xffffffff00000000 | (ulong)*puVar35) + 1;
        uVar23 = uVar32 | *param_3 & 2;
        *param_3 = uVar23;
        if ((uVar32 & 1) == 0) {
          return 1;
        }
        if ((int)uVar23 == 3) {
          return 1;
        }
        return (*(uint *)((uVar32 & 0xfffffffffffc0000) + 8) >> 4 ^ 0xffffffff) & 1;
      }
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar35,0x10);
      if (bVar12) {
        *puVar35 = (uint)lVar37;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (this[0x2e0] == (Scavenger)0x0) {
      SVar6 = this[0x2e1];
    }
    else {
      Heap::OnMoveEvent(*(Heap **)(this + 8),puVar20,param_4,param_5);
      SVar6 = this[0x2e1];
    }
    if (SVar6 != (Scavenger)0x0) {
      uVar34 = (ulong)puVar20 & 0xfffffffffffc0000;
      uVar33 = (long)puVar20 - uVar34 >> 7 & 0x1ffffff;
      puVar25 = (uint *)(*(long *)(uVar34 + 0x10) + uVar33 * 4);
      uVar19 = (uint)(1L << ((long)puVar20 - uVar34 >> 2 & 0x1f));
      if ((*puVar25 & uVar19) != 0) {
        uVar13 = uVar19 << 1;
        bVar12 = uVar13 == 0;
        if (bVar12) {
          uVar13 = 1;
        }
        if ((puVar25[bVar12] & uVar13) != 0) goto LAB_0100f830;
      }
      uVar21 = (ulong)param_4 & 0xfffffffffffc0000;
      uVar22 = (long)param_4 - uVar21 >> 7 & 0x1ffffff;
      puVar25 = (uint *)(*(long *)(uVar21 + 0x10) + uVar22 * 4);
      uVar8 = 1 << (ulong)((uint)((long)param_4 - uVar21 >> 2) & 0x1f);
      uVar13 = uVar8 << 1;
      if ((*puVar25 & uVar8) != 0) {
        uVar7 = uVar13;
        if (uVar13 == 0) {
          uVar7 = 1;
        }
        if ((puVar25[uVar13 == 0] & uVar7) == 0) {
          puVar25 = (uint *)(*(long *)(uVar34 + 0x10) + uVar33 * 4);
          while (uVar13 = *puVar25, (uVar19 & (uVar13 ^ 0xffffffff)) != 0) {
            while (*puVar25 == uVar13) {
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar25,0x10);
              if (bVar12) {
                *puVar25 = uVar13 | uVar19;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_0100f830;
            }
            ClearExclusiveLocal();
          }
          goto LAB_0100f830;
        }
      }
      puVar25 = (uint *)(*(long *)(uVar21 + 0x10) + uVar22 * 4);
      if ((*puVar25 & uVar8) != 0) {
        bVar12 = uVar13 == 0;
        if (bVar12) {
          uVar13 = 1;
        }
        if ((puVar25[bVar12] & uVar13) != 0) {
          puVar25 = (uint *)(*(long *)(uVar34 + 0x10) + uVar33 * 4);
          while (uVar13 = *puVar25, (uVar19 & (uVar13 ^ 0xffffffff)) != 0) {
            while (*puVar25 == uVar13) {
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar25,0x10);
              if (bVar12) {
                *puVar25 = uVar13 | uVar19;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') {
                puVar25 = (uint *)(*(long *)(uVar34 + 0x10) +
                                  ((long)puVar20 + ~uVar34 >> 7 & 0x1ffffff) * 4);
                uVar19 = 1 << (ulong)((uint)((long)puVar20 + ~uVar34 >> 2) & 0x1f);
                local_80 = puVar20;
                if ((*puVar25 & uVar19) == 0) goto LAB_0100f830;
                uVar19 = uVar19 << 1;
                bVar12 = uVar19 == 0;
                puVar3 = puVar25;
                if (bVar12) {
                  uVar19 = 1;
                  puVar3 = puVar25 + 1;
                }
                goto LAB_0100f55c;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
    }
LAB_0100f830:
    if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(param_2 + 7) | 2) == 0x423)) {
      lVar37 = *(long *)(this + 8);
      local_80 = param_4;
      iVar14 = HeapObject::SizeFromMap((HeapObject *)&local_80,param_2);
      piVar2 = (int *)((long)puVar35 + (long)iVar14);
      if ((((uVar23 == ((ulong)(piVar2 + 1) & 0xfffffffffffc0000)) &&
           (*piVar2 == *(int *)(lVar37 + -0x7b78))) &&
          (((*(byte *)(uVar23 + 10) >> 3 & 1) == 0 ||
           (((puVar25 = *(uint **)(*(long *)(uVar23 + 0x58) + 0x80),
             *(uint **)(uVar23 + 0x20) <= puVar25 && (puVar25 <= puVar35)) &&
            (puVar25 < *(uint **)(uVar23 + 0x28))))))) &&
         (uVar23 = (long)iVar14 + (long)param_4, (int)uVar23 != 0)) {
        local_80 = local_70;
        local_70[0] = uVar23 & 0xffffffff00000000 | (ulong)*(uint *)(uVar23 + 3);
        lVar37 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
                 ::
                 __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::AllocationSite&&>,std::__ndk1::tuple<>>
                           ((AllocationSite *)(this + 0x50),(piecewise_construct_t *)local_70,
                            (tuple *)&DAT_019c6624,(tuple *)&local_80);
        *(long *)(lVar37 + 0x18) = *(long *)(lVar37 + 0x18) + 1;
      }
    }
    *param_3 = *param_3 & 2 | (ulong)puVar20;
    Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Push
              (*(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x38),puVar20,uVar32);
    *(long *)(this + 0x78) = *(long *)(this + 0x78) + (long)(int)param_5;
    return 0;
  }
  uVar19 = *(uint *)((long)param_4 + 0xb);
  uVar32 = (ulong)uVar19;
  uVar23 = (ulong)param_4 & 0xffffffff00000000;
  puVar20 = (ulong *)(uVar23 | uVar32);
  *param_3 = *param_3 & 2 | (ulong)puVar20;
  if ((*(byte *)((uVar23 | uVar32 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
    *(uint *)((long)param_4 + -1) = uVar19 - 1;
    return 1;
  }
  uVar19 = *(uint *)((long)puVar20 + -1);
  uVar33 = uVar23 | uVar19;
  if ((uVar19 & 1) == 0) {
    *param_3 = *param_3 & 2 | uVar33 + 1;
    *(uint *)((long)param_4 + -1) = uVar19;
    return (uint)((*(byte *)((uVar33 + 1 & 0xfffffffffffc0000) + 8) & 0x18) == 0);
  }
  local_88 = puVar20;
  uVar13 = HeapObject::SizeFromMap((HeapObject *)&local_88,uVar33);
  bVar5 = *(byte *)(uVar33 + 6);
  uVar34 = (ulong)uVar13;
  if (((FLAG_young_generation_large_objects != '\0') &&
      (uVar21 = *(ulong *)((uVar23 | uVar32 & 0xfffffffffffc0000) + 8), ((uint)uVar21 >> 5 & 1) != 0
      )) && ((uVar21 & 0x18) != 0)) {
    puVar35 = (uint *)((long)puVar20 + -1);
    do {
      if (*puVar35 != uVar19) {
        ClearExclusiveLocal();
        goto LAB_010108cc;
      }
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar35,0x10);
      if (bVar12) {
        *puVar35 = (uint)puVar35;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    local_80 = puVar20;
    uStack_78 = uVar33;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
    ::
    __emplace_unique_key_args<v8::internal::HeapObject,std::__ndk1::pair<v8::internal::HeapObject_const,v8::internal::Map>>
              ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
                *)(this + 0x290),(HeapObject *)&local_80,(pair *)&local_80);
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + (long)(int)uVar13;
    if (bVar5 < 6) {
LAB_010108cc:
      uVar19 = 0;
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
        pvVar18 = operator_new(0x70);
        uVar19 = 0;
        *(undefined8 *)((long)pvVar18 + 0x28) = 0;
        *(undefined8 *)((long)pvVar18 + 0x30) = 0;
        *(undefined8 *)((long)pvVar18 + 0x40) = 0;
        *(undefined8 *)((long)pvVar18 + 0x48) = 0;
        *(undefined8 *)((long)pvVar18 + 0x58) = 0;
        *(undefined8 *)((long)pvVar18 + 0x60) = 0;
        *(void **)(lVar37 + 0x2b8) = pvVar18;
        *(ulong **)((long)pvVar18 + 0x10) = puVar20;
        *(ulong *)((long)pvVar18 + 0x18) = uVar33;
        *(undefined8 *)((long)pvVar18 + 8) = 1;
        *(uint *)((long)pvVar18 + 0x20) = uVar13;
      }
      else {
        puVar31[1] = lVar26 + 1;
        uVar19 = 0;
        *(uint *)(puVar31 + lVar26 * 3 + 4) = uVar13;
        puVar31[lVar26 * 3 + 2] = puVar20;
        puVar31[lVar26 * 3 + 3] = uVar33;
      }
    }
    goto LAB_01010650;
  }
  puVar35 = (uint *)((long)puVar20 + -1);
  uVar21 = (ulong)puVar35 & 0xfffffffffffc0000;
  if (((*(byte *)(uVar21 + 10) >> 3 & 1) == 0) ||
     (((puVar25 = *(uint **)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x1f0),
       *(uint **)(uVar21 + 0x20) <= puVar25 && (puVar25 <= puVar35)) &&
      (puVar25 <= *(uint **)(uVar21 + 0x28))))) {
    if ((int)uVar13 < 0x2001) {
      puVar16 = (ulong *)LocalAllocator::AllocateInLAB((LocalAllocator *)(this + 0x88),uVar34,0);
    }
    else {
      pNVar38 = *(NewSpace **)(this + 0x90);
      base::Mutex::Lock((Mutex *)(pNVar38 + 0x98));
      uVar22 = *(ulong *)(pNVar38 + 0x68);
      if (uVar22 < *(ulong *)(pNVar38 + 0x78)) {
        *(ulong *)(pNVar38 + 0x78) = uVar22;
      }
      uVar30 = uVar22 + uVar34;
      if (*(ulong *)(pNVar38 + 0x70) < uVar30) {
        uVar22 = NewSpace::EnsureAllocation(pNVar38,uVar34,0);
        if ((uVar22 & 1) != 0) {
          uVar22 = *(ulong *)(pNVar38 + 0x68);
          uVar30 = uVar22 + uVar34;
          goto LAB_0100efd0;
        }
        puVar16 = (ulong *)0x2;
      }
      else {
LAB_0100efd0:
        *(ulong *)(pNVar38 + 0x68) = uVar30;
        puVar16 = (ulong *)(uVar22 + 1);
        if (FLAG_trace_allocations_origins != '\0') {
          SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar38,2);
        }
        if (((ulong)puVar16 & 1) == 0) goto LAB_0100f338;
      }
      base::Mutex::Unlock((Mutex *)(pNVar38 + 0x98));
    }
    if (((ulong)puVar16 & 1) == 0) goto LAB_0100f284;
    lVar37 = (long)puVar16 - 1;
    uVar8 = uVar13 - 1;
    if (-1 < (int)(uVar13 - 4)) {
      uVar8 = uVar13 - 4;
    }
    *(uint *)((long)puVar16 - 1) = uVar19;
    if (6 < uVar13 - 1) {
      uVar22 = (long)((ulong)uVar8 << 0x20) >> 0x22;
      puVar17 = (undefined4 *)((long)puVar16 + 3);
      puVar24 = (undefined4 *)((long)puVar20 + 3);
      if ((uint)((int)uVar8 >> 2) < 0x10) {
        uVar30 = uVar22;
        if ((7 < (uint)((int)uVar8 >> 2)) &&
           ((puVar24 + uVar22 <= puVar17 || (puVar17 + uVar22 <= puVar24)))) {
          uVar27 = uVar22 & 0xfffffffffffffff8;
          puVar31 = (undefined8 *)((long)puVar16 + 0x13);
          uVar30 = uVar22 - uVar27;
          puVar24 = puVar24 + uVar27;
          puVar17 = puVar17 + uVar27;
          puVar28 = (undefined8 *)((long)puVar20 + 0x13);
          uVar29 = uVar27;
          do {
            puVar11 = puVar28 + -1;
            uVar39 = puVar28[-2];
            uVar41 = puVar28[1];
            uVar40 = *puVar28;
            uVar29 = uVar29 - 8;
            puVar28 = puVar28 + 4;
            puVar31[-1] = *puVar11;
            puVar31[-2] = uVar39;
            puVar31[1] = uVar41;
            *puVar31 = uVar40;
            puVar31 = puVar31 + 4;
          } while (uVar29 != 0);
          if (uVar27 == uVar22) goto LAB_0100fb40;
        }
        do {
          uVar30 = uVar30 - 1;
          *puVar17 = *puVar24;
          puVar17 = puVar17 + 1;
          puVar24 = puVar24 + 1;
        } while (uVar30 != 0);
      }
      else {
        MemCopy(puVar17,puVar24,uVar22 << 2);
      }
    }
LAB_0100fb40:
    do {
      if (*puVar35 != uVar19) {
        ClearExclusiveLocal();
        if ((*(long *)(this + 0x278) == 0) ||
           (*(long *)(this + 0x278) - (long)(int)uVar13 != lVar37)) {
          Heap::CreateFillerObjectAt(*(Heap **)(this + 0x88),lVar37,uVar34,1,1);
        }
        else {
          *(long *)(this + 0x278) = lVar37;
        }
        uVar32 = (uVar23 | *puVar35) + 1;
        uVar23 = uVar32 | *param_3 & 2;
        *param_3 = uVar23;
        goto joined_r0x0100fcd0;
      }
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar35,0x10);
      if (bVar12) {
        *puVar35 = (uint)lVar37;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (this[0x2e0] != (Scavenger)0x0) {
      Heap::OnMoveEvent(*(Heap **)(this + 8),puVar16,puVar20,uVar34);
    }
    if (this[0x2e1] != (Scavenger)0x0) {
      uVar30 = (ulong)puVar16 & 0xfffffffffffc0000;
      uVar22 = (long)puVar16 - uVar30 >> 7 & 0x1ffffff;
      puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar22 * 4);
      uVar19 = (uint)(1L << ((long)puVar16 - uVar30 >> 2 & 0x1f));
      if ((*puVar25 & uVar19) != 0) {
        uVar8 = uVar19 << 1;
        bVar12 = uVar8 == 0;
        if (bVar12) {
          uVar8 = 1;
        }
        if ((puVar25[bVar12] & uVar8) != 0) goto LAB_01010498;
      }
      uVar23 = uVar23 | uVar32 & 0xfffffffffffc0000;
      uVar32 = (long)puVar20 - uVar23 >> 7 & 0x1ffffff;
      puVar25 = (uint *)(*(long *)(uVar23 + 0x10) + uVar32 * 4);
      uVar7 = 1 << (ulong)((uint)((long)puVar20 - uVar23 >> 2) & 0x1f);
      uVar8 = uVar7 << 1;
      if ((*puVar25 & uVar7) != 0) {
        uVar4 = uVar8;
        if (uVar8 == 0) {
          uVar4 = 1;
        }
        if ((puVar25[uVar8 == 0] & uVar4) == 0) {
          puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar22 * 4);
          while (uVar8 = *puVar25, (uVar19 & (uVar8 ^ 0xffffffff)) != 0) {
            while (*puVar25 == uVar8) {
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar25,0x10);
              if (bVar12) {
                *puVar25 = uVar8 | uVar19;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_01010498;
            }
            ClearExclusiveLocal();
          }
          goto LAB_01010498;
        }
      }
      puVar25 = (uint *)(*(long *)(uVar23 + 0x10) + uVar32 * 4);
      if ((*puVar25 & uVar7) != 0) {
        bVar12 = uVar8 == 0;
        if (bVar12) {
          uVar8 = 1;
        }
        if ((puVar25[bVar12] & uVar8) != 0) {
          puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar22 * 4);
          while (uVar8 = *puVar25, (uVar19 & (uVar8 ^ 0xffffffff)) != 0) {
            while (*puVar25 == uVar8) {
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar25,0x10);
              if (bVar12) {
                *puVar25 = uVar8 | uVar19;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') {
                puVar25 = (uint *)(*(long *)(uVar30 + 0x10) +
                                  ((long)puVar16 + ~uVar30 >> 7 & 0x1ffffff) * 4);
                uVar19 = 1 << (ulong)((uint)((long)puVar16 + ~uVar30 >> 2) & 0x1f);
                local_80 = puVar16;
                if ((*puVar25 & uVar19) == 0) goto LAB_01010498;
                uVar19 = uVar19 << 1;
                bVar12 = uVar19 == 0;
                puVar3 = puVar25;
                if (bVar12) {
                  uVar19 = 1;
                  puVar3 = puVar25 + 1;
                }
                goto LAB_010101b0;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
    }
LAB_01010498:
    if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(uVar33 + 7) | 2) == 0x423)) {
      lVar37 = *(long *)(this + 8);
      local_80 = puVar20;
      iVar14 = HeapObject::SizeFromMap((HeapObject *)&local_80,uVar33);
      piVar2 = (int *)((long)puVar35 + (long)iVar14);
      if ((((uVar21 == ((ulong)(piVar2 + 1) & 0xfffffffffffc0000)) &&
           (*piVar2 == *(int *)(lVar37 + -0x7b78))) &&
          (((*(byte *)(uVar21 + 10) >> 3 & 1) == 0 ||
           (((puVar25 = *(uint **)(*(long *)(uVar21 + 0x58) + 0x80),
             *(uint **)(uVar21 + 0x20) <= puVar25 && (puVar25 <= puVar35)) &&
            (puVar25 < *(uint **)(uVar21 + 0x28))))))) &&
         (uVar32 = (long)puVar20 + (long)iVar14, (int)uVar32 != 0)) {
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
    uVar32 = *param_3;
  }
  else {
LAB_0100f284:
    puVar16 = (ulong *)PagedSpace::AllocateRaw((PagedSpace *)(this + 0xa0),uVar34,0,2);
    if (((ulong)puVar16 & 1) != 0) {
      lVar37 = (long)puVar16 + -1;
      uVar8 = uVar13 - 1;
      if (-1 < (int)(uVar13 - 4)) {
        uVar8 = uVar13 - 4;
      }
      *(uint *)((long)puVar16 + -1) = uVar19;
      if (6 < uVar13 - 1) {
        uVar22 = (long)((ulong)uVar8 << 0x20) >> 0x22;
        puVar17 = (undefined4 *)((long)puVar16 + 3);
        puVar24 = (undefined4 *)((long)puVar20 + 3);
        if ((uint)((int)uVar8 >> 2) < 0x10) {
          uVar30 = uVar22;
          if ((7 < (uint)((int)uVar8 >> 2)) &&
             ((puVar24 + uVar22 <= puVar17 || (puVar17 + uVar22 <= puVar24)))) {
            uVar27 = uVar22 & 0xfffffffffffffff8;
            puVar31 = (undefined8 *)((long)puVar16 + 0x13);
            uVar30 = uVar22 - uVar27;
            puVar24 = puVar24 + uVar27;
            puVar17 = puVar17 + uVar27;
            puVar28 = (undefined8 *)((long)puVar20 + 0x13);
            uVar29 = uVar27;
            do {
              puVar11 = puVar28 + -1;
              uVar39 = puVar28[-2];
              uVar41 = puVar28[1];
              uVar40 = *puVar28;
              uVar29 = uVar29 - 8;
              puVar28 = puVar28 + 4;
              puVar31[-1] = *puVar11;
              puVar31[-2] = uVar39;
              puVar31[1] = uVar41;
              *puVar31 = uVar40;
              puVar31 = puVar31 + 4;
            } while (uVar29 != 0);
            if (uVar27 == uVar22) goto LAB_0100f93c;
          }
          do {
            uVar30 = uVar30 - 1;
            *puVar17 = *puVar24;
            puVar17 = puVar17 + 1;
            puVar24 = puVar24 + 1;
          } while (uVar30 != 0);
        }
        else {
          MemCopy(puVar17,puVar24,uVar22 << 2);
        }
      }
LAB_0100f93c:
      do {
        if (*puVar35 != uVar19) {
          ClearExclusiveLocal();
          if ((*(long *)(this + 0x108) == 0) ||
             (*(long *)(this + 0x108) - (long)(int)uVar13 != lVar37)) {
            Heap::CreateFillerObjectAt(*(Heap **)(this + 0x88),lVar37,uVar34,1,1);
          }
          else {
            *(long *)(this + 0x108) = lVar37;
          }
          uVar19 = *puVar35;
          goto LAB_0100ff54;
        }
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar35,0x10);
        if (bVar12) {
          *puVar35 = (uint)lVar37;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (this[0x2e0] == (Scavenger)0x0) {
        SVar6 = this[0x2e1];
      }
      else {
        Heap::OnMoveEvent(*(Heap **)(this + 8),puVar16,puVar20,uVar34);
        SVar6 = this[0x2e1];
      }
      if (SVar6 != (Scavenger)0x0) {
        uVar30 = (ulong)puVar16 & 0xfffffffffffc0000;
        uVar22 = (long)puVar16 - uVar30 >> 7 & 0x1ffffff;
        puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar22 * 4);
        uVar19 = (uint)(1L << ((long)puVar16 - uVar30 >> 2 & 0x1f));
        if ((*puVar25 & uVar19) != 0) {
          uVar8 = uVar19 << 1;
          bVar12 = uVar8 == 0;
          if (bVar12) {
            uVar8 = 1;
          }
          if ((puVar25[bVar12] & uVar8) != 0) goto LAB_010102b8;
        }
        uVar23 = uVar23 | uVar32 & 0xfffffffffffc0000;
        uVar32 = (long)puVar20 - uVar23 >> 7 & 0x1ffffff;
        puVar25 = (uint *)(*(long *)(uVar23 + 0x10) + uVar32 * 4);
        uVar7 = 1 << (ulong)((uint)((long)puVar20 - uVar23 >> 2) & 0x1f);
        uVar8 = uVar7 << 1;
        if ((*puVar25 & uVar7) != 0) {
          uVar4 = uVar8;
          if (uVar8 == 0) {
            uVar4 = 1;
          }
          if ((puVar25[uVar8 == 0] & uVar4) == 0) {
            puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar22 * 4);
            while (uVar8 = *puVar25, (uVar19 & (uVar8 ^ 0xffffffff)) != 0) {
              while (*puVar25 == uVar8) {
                cVar9 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(puVar25,0x10);
                if (bVar12) {
                  *puVar25 = uVar8 | uVar19;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_010102b8;
              }
              ClearExclusiveLocal();
            }
            goto LAB_010102b8;
          }
        }
        puVar25 = (uint *)(*(long *)(uVar23 + 0x10) + uVar32 * 4);
        if ((*puVar25 & uVar7) != 0) {
          bVar12 = uVar8 == 0;
          if (bVar12) {
            uVar8 = 1;
          }
          if ((puVar25[bVar12] & uVar8) != 0) {
            puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar22 * 4);
            while (uVar8 = *puVar25, (uVar19 & (uVar8 ^ 0xffffffff)) != 0) {
              while (*puVar25 == uVar8) {
                cVar9 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(puVar25,0x10);
                if (bVar12) {
                  *puVar25 = uVar8 | uVar19;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') {
                  puVar25 = (uint *)(*(long *)(uVar30 + 0x10) +
                                    ((long)puVar16 + ~uVar30 >> 7 & 0x1ffffff) * 4);
                  uVar19 = 1 << (ulong)((uint)((long)puVar16 + ~uVar30 >> 2) & 0x1f);
                  local_80 = puVar16;
                  if ((*puVar25 & uVar19) == 0) goto LAB_010102b8;
                  uVar19 = uVar19 << 1;
                  bVar12 = uVar19 == 0;
                  puVar3 = puVar25;
                  if (bVar12) {
                    uVar19 = 1;
                    puVar3 = puVar25 + 1;
                  }
                  goto LAB_010100b0;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
      }
LAB_010102b8:
      if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(uVar33 + 7) | 2) == 0x423)) {
        lVar37 = *(long *)(this + 8);
        local_80 = puVar20;
        iVar14 = HeapObject::SizeFromMap((HeapObject *)&local_80,uVar33);
        piVar2 = (int *)((long)puVar35 + (long)iVar14);
        if ((((uVar21 == ((ulong)(piVar2 + 1) & 0xfffffffffffc0000)) &&
             (*piVar2 == *(int *)(lVar37 + -0x7b78))) &&
            (((*(byte *)(uVar21 + 10) >> 3 & 1) == 0 ||
             (((puVar25 = *(uint **)(*(long *)(uVar21 + 0x58) + 0x80),
               *(uint **)(uVar21 + 0x20) <= puVar25 && (puVar25 <= puVar35)) &&
              (puVar25 < *(uint **)(uVar21 + 0x28))))))) &&
           (uVar32 = (long)puVar20 + (long)iVar14, (int)uVar32 != 0)) {
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
      *param_3 = *param_3 & 2 | (ulong)puVar16;
      if (5 < bVar5) {
        Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Push
                  (*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x28),puVar16,uVar34);
      }
      uVar19 = 1;
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + (long)(int)uVar13;
      goto LAB_01010650;
    }
    if ((int)uVar13 < 0x2001) {
      puVar16 = (ulong *)LocalAllocator::AllocateInLAB((LocalAllocator *)(this + 0x88),uVar13,0);
    }
    else {
      pNVar38 = *(NewSpace **)(this + 0x90);
      base::Mutex::Lock((Mutex *)(pNVar38 + 0x98));
      uVar22 = *(ulong *)(pNVar38 + 0x68);
      if (uVar22 < *(ulong *)(pNVar38 + 0x78)) {
        *(ulong *)(pNVar38 + 0x78) = uVar22;
      }
      uVar30 = uVar22 + uVar13;
      if (*(ulong *)(pNVar38 + 0x70) < uVar30) {
        uVar22 = NewSpace::EnsureAllocation(pNVar38,uVar13,0);
        if ((uVar22 & 1) != 0) {
          uVar22 = *(ulong *)(pNVar38 + 0x68);
          uVar30 = uVar22 + uVar13;
          goto LAB_0100f310;
        }
        puVar16 = (ulong *)0x2;
      }
      else {
LAB_0100f310:
        *(ulong *)(pNVar38 + 0x68) = uVar30;
        puVar16 = (ulong *)(uVar22 + 1);
        if (FLAG_trace_allocations_origins != '\0') {
          SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar38,2);
        }
        if (((ulong)puVar16 & 1) == 0) {
LAB_0100f338:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!object.IsSmi()");
        }
      }
      base::Mutex::Unlock((Mutex *)(pNVar38 + 0x98));
    }
    if (((ulong)puVar16 & 1) == 0) {
LAB_0100f6cc:
                    /* WARNING: Subroutine does not return */
      Heap::FatalProcessOutOfMemory(*(Heap **)(this + 8),"Scavenger: semi-space copy");
    }
    lVar37 = (long)puVar16 - 1;
    uVar8 = uVar13 - 1;
    if (-1 < (int)(uVar13 - 4)) {
      uVar8 = uVar13 - 4;
    }
    *(uint *)((long)puVar16 - 1) = uVar19;
    if (6 < uVar13 - 1) {
      uVar22 = (long)((ulong)uVar8 << 0x20) >> 0x22;
      puVar17 = (undefined4 *)((long)puVar16 + 3);
      puVar24 = (undefined4 *)((long)puVar20 + 3);
      if ((uint)((int)uVar8 >> 2) < 0x10) {
        uVar30 = uVar22;
        if ((7 < (uint)((int)uVar8 >> 2)) &&
           ((puVar24 + uVar22 <= puVar17 || (puVar17 + uVar22 <= puVar24)))) {
          uVar27 = uVar22 & 0xfffffffffffffff8;
          puVar31 = (undefined8 *)((long)puVar16 + 0x13);
          uVar30 = uVar22 - uVar27;
          puVar24 = puVar24 + uVar27;
          puVar17 = puVar17 + uVar27;
          puVar28 = (undefined8 *)((long)puVar20 + 0x13);
          uVar29 = uVar27;
          do {
            puVar11 = puVar28 + -1;
            uVar39 = puVar28[-2];
            uVar41 = puVar28[1];
            uVar40 = *puVar28;
            uVar29 = uVar29 - 8;
            puVar28 = puVar28 + 4;
            puVar31[-1] = *puVar11;
            puVar31[-2] = uVar39;
            puVar31[1] = uVar41;
            *puVar31 = uVar40;
            puVar31 = puVar31 + 4;
          } while (uVar29 != 0);
          if (uVar27 == uVar22) goto LAB_0100fdec;
        }
        do {
          uVar30 = uVar30 - 1;
          *puVar17 = *puVar24;
          puVar17 = puVar17 + 1;
          puVar24 = puVar24 + 1;
        } while (uVar30 != 0);
      }
      else {
        MemCopy(puVar17,puVar24,uVar22 << 2);
      }
    }
LAB_0100fdec:
    do {
      if (*puVar35 != uVar19) {
        ClearExclusiveLocal();
        if ((*(long *)(this + 0x278) == 0) ||
           (*(long *)(this + 0x278) - (long)(int)uVar13 != lVar37)) {
          Heap::CreateFillerObjectAt(*(Heap **)(this + 0x88),lVar37,uVar34,1,1);
        }
        else {
          *(long *)(this + 0x278) = lVar37;
        }
        uVar19 = *puVar35;
LAB_0100ff54:
        uVar32 = (uVar23 | uVar19) + 1;
        uVar23 = uVar32 | *param_3 & 2;
        *param_3 = uVar23;
joined_r0x0100fcd0:
        uVar19 = 1;
        if (((uVar32 & 1) != 0) && (uVar19 = 1, (int)uVar23 != 3)) {
          uVar19 = (*(uint *)((uVar32 & 0xfffffffffffc0000) + 8) >> 4 ^ 0xffffffff) & 1;
        }
        goto LAB_01010650;
      }
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar35,0x10);
      if (bVar12) {
        *puVar35 = (uint)lVar37;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (this[0x2e0] != (Scavenger)0x0) {
      Heap::OnMoveEvent(*(Heap **)(this + 8),puVar16,puVar20,uVar34);
    }
    if (this[0x2e1] != (Scavenger)0x0) {
      uVar30 = (ulong)puVar16 & 0xfffffffffffc0000;
      uVar22 = (long)puVar16 - uVar30 >> 7 & 0x1ffffff;
      puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar22 * 4);
      uVar19 = (uint)(1L << ((long)puVar16 - uVar30 >> 2 & 0x1f));
      if ((*puVar25 & uVar19) != 0) {
        uVar8 = uVar19 << 1;
        bVar12 = uVar8 == 0;
        if (bVar12) {
          uVar8 = 1;
        }
        if ((puVar25[bVar12] & uVar8) != 0) goto LAB_010103a8;
      }
      uVar23 = uVar23 | uVar32 & 0xfffffffffffc0000;
      uVar32 = (long)puVar20 - uVar23 >> 7 & 0x1ffffff;
      puVar25 = (uint *)(*(long *)(uVar23 + 0x10) + uVar32 * 4);
      uVar7 = 1 << (ulong)((uint)((long)puVar20 - uVar23 >> 2) & 0x1f);
      uVar8 = uVar7 << 1;
      if ((*puVar25 & uVar7) != 0) {
        uVar4 = uVar8;
        if (uVar8 == 0) {
          uVar4 = 1;
        }
        if ((puVar25[uVar8 == 0] & uVar4) == 0) {
          puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar22 * 4);
          while (uVar8 = *puVar25, (uVar19 & (uVar8 ^ 0xffffffff)) != 0) {
            while (*puVar25 == uVar8) {
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar25,0x10);
              if (bVar12) {
                *puVar25 = uVar8 | uVar19;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_010103a8;
            }
            ClearExclusiveLocal();
          }
          goto LAB_010103a8;
        }
      }
      puVar25 = (uint *)(*(long *)(uVar23 + 0x10) + uVar32 * 4);
      if ((*puVar25 & uVar7) != 0) {
        bVar12 = uVar8 == 0;
        if (bVar12) {
          uVar8 = 1;
        }
        if ((puVar25[bVar12] & uVar8) != 0) {
          puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + uVar22 * 4);
          while (uVar8 = *puVar25, (uVar19 & (uVar8 ^ 0xffffffff)) != 0) {
            while (*puVar25 == uVar8) {
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar25,0x10);
              if (bVar12) {
                *puVar25 = uVar8 | uVar19;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') {
                puVar25 = (uint *)(*(long *)(uVar30 + 0x10) +
                                  ((long)puVar16 + ~uVar30 >> 7 & 0x1ffffff) * 4);
                uVar19 = 1 << (ulong)((uint)((long)puVar16 + ~uVar30 >> 2) & 0x1f);
                local_80 = puVar16;
                if ((*puVar25 & uVar19) == 0) goto LAB_010103a8;
                uVar19 = uVar19 << 1;
                bVar12 = uVar19 == 0;
                puVar3 = puVar25;
                if (bVar12) {
                  uVar19 = 1;
                  puVar3 = puVar25 + 1;
                }
                goto LAB_01010130;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
    }
LAB_010103a8:
    if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(uVar33 + 7) | 2) == 0x423)) {
      lVar37 = *(long *)(this + 8);
      local_80 = puVar20;
      iVar14 = HeapObject::SizeFromMap((HeapObject *)&local_80,uVar33);
      piVar2 = (int *)((long)puVar35 + (long)iVar14);
      if ((((uVar21 == ((ulong)(piVar2 + 1) & 0xfffffffffffc0000)) &&
           (*piVar2 == *(int *)(lVar37 + -0x7b78))) &&
          (((*(byte *)(uVar21 + 10) >> 3 & 1) == 0 ||
           (((puVar25 = *(uint **)(*(long *)(uVar21 + 0x58) + 0x80),
             *(uint **)(uVar21 + 0x20) <= puVar25 && (puVar25 <= puVar35)) &&
            (puVar25 < *(uint **)(uVar21 + 0x28))))))) &&
         (uVar32 = (long)puVar20 + (long)iVar14, (int)uVar32 != 0)) {
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
    uVar32 = *param_3;
  }
  *param_3 = uVar32 & 2 | (ulong)puVar16;
  if (5 < bVar5) {
    Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Push
              (*(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x38),puVar16,uVar34);
  }
  uVar19 = 0;
  *(long *)(this + 0x78) = *(long *)(this + 0x78) + (long)(int)uVar13;
LAB_01010650:
  *(int *)((long)param_4 + -1) = (int)*param_3 + -1;
  return uVar19;
LAB_010101b0:
  uVar8 = puVar25[bVar12];
  if ((uVar19 & (uVar8 ^ 0xffffffff)) == 0) goto LAB_01010498;
  while (*puVar3 == uVar8) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar10) {
      *puVar3 = uVar8 | uVar19;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') {
      iVar14 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar16 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar16 - 1))
      ;
      plVar1 = (long *)(uVar30 + 0x68);
      do {
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = *plVar1 + (long)iVar14;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      goto LAB_01010498;
    }
  }
  ClearExclusiveLocal();
  goto LAB_010101b0;
LAB_010100b0:
  uVar8 = puVar25[bVar12];
  if ((uVar19 & (uVar8 ^ 0xffffffff)) == 0) goto LAB_010102b8;
  while (*puVar3 == uVar8) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar10) {
      *puVar3 = uVar8 | uVar19;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') {
      iVar14 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar16 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar16 + -1)
                         );
      plVar1 = (long *)(uVar30 + 0x68);
      do {
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = *plVar1 + (long)iVar14;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      goto LAB_010102b8;
    }
  }
  ClearExclusiveLocal();
  goto LAB_010100b0;
LAB_01010130:
  uVar8 = puVar25[bVar12];
  if ((uVar19 & (uVar8 ^ 0xffffffff)) == 0) goto LAB_010103a8;
  while (*puVar3 == uVar8) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar10) {
      *puVar3 = uVar8 | uVar19;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') {
      iVar14 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar16 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar16 - 1))
      ;
      plVar1 = (long *)(uVar30 + 0x68);
      do {
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = *plVar1 + (long)iVar14;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      goto LAB_010103a8;
    }
  }
  ClearExclusiveLocal();
  goto LAB_01010130;
LAB_0100f5dc:
  uVar13 = puVar25[bVar12];
  if ((uVar19 & (uVar13 ^ 0xffffffff)) == 0) goto LAB_0100f830;
  while (*puVar3 == uVar13) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar10) {
      *puVar3 = uVar13 | uVar19;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') {
      iVar14 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar20 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar20 - 1))
      ;
      plVar1 = (long *)(uVar34 + 0x68);
      do {
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = *plVar1 + (long)iVar14;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      goto LAB_0100f830;
    }
  }
  ClearExclusiveLocal();
  goto LAB_0100f5dc;
LAB_0100f4dc:
  uVar13 = puVar25[bVar12];
  if ((uVar19 & (uVar13 ^ 0xffffffff)) == 0) goto LAB_0100f718;
  while (*puVar3 == uVar13) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar10) {
      *puVar3 = uVar13 | uVar19;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') {
      iVar14 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar20 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar20 + -1)
                         );
      plVar1 = (long *)(uVar33 + 0x68);
      do {
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = *plVar1 + (long)iVar14;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      goto LAB_0100f718;
    }
  }
  ClearExclusiveLocal();
  goto LAB_0100f4dc;
LAB_0100f55c:
  uVar13 = puVar25[bVar12];
  if ((uVar19 & (uVar13 ^ 0xffffffff)) == 0) goto LAB_0100f830;
  while (*puVar3 == uVar13) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar10) {
      *puVar3 = uVar13 | uVar19;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') {
      iVar14 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar20 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar20 - 1))
      ;
      plVar1 = (long *)(uVar34 + 0x68);
      do {
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = *plVar1 + (long)iVar14;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      goto LAB_0100f830;
    }
  }
  ClearExclusiveLocal();
  goto LAB_0100f55c;
}

