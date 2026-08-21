
/* v8::internal::SlotCallbackResult
   v8::internal::Scavenger::EvacuateThinString<v8::internal::CompressedHeapObjectSlot>(v8::internal::Map,
   v8::internal::CompressedHeapObjectSlot, v8::internal::ThinString, int) */

uint __thiscall
v8::internal::Scavenger::EvacuateThinString<v8::internal::CompressedHeapObjectSlot>
          (Scavenger *this,long param_2,uint *param_3,ulong *param_4,uint param_5)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  Scavenger SVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  bool bVar10;
  int iVar11;
  ulong *puVar12;
  undefined4 *puVar13;
  Heap *pHVar14;
  void *pvVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 *puVar20;
  int *piVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  NewSpace *pNVar31;
  int *piVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  ulong *local_80;
  long lStack_78;
  ulong local_70 [2];
  
  if (this[0x2e1] == (Scavenger)0x0) {
    *param_3 = *param_3 & 2 | *(uint *)((long)param_4 + 0xb);
    return 1;
  }
  uVar26 = (ulong)param_5;
  iVar11 = (int)param_2;
  if (((FLAG_young_generation_large_objects != '\0') &&
      (uVar18 = *(ulong *)(((ulong)param_4 & 0xfffffffffffc0000) + 8), ((uint)uVar18 >> 5 & 1) != 0)
      ) && ((uVar18 & 0x18) != 0)) {
    piVar32 = (int *)((long)param_4 + -1);
    do {
      if (*piVar32 != iVar11) {
        ClearExclusiveLocal();
        return 0;
      }
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar10) {
        *piVar32 = (int)piVar32;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    local_80 = param_4;
    lStack_78 = param_2;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
    ::
    __emplace_unique_key_args<v8::internal::HeapObject,std::__ndk1::pair<v8::internal::HeapObject_const,v8::internal::Map>>
              ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
                *)(this + 0x290),(HeapObject *)&local_80,(pair *)&local_80);
    lVar28 = *(long *)(this + 0x20);
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + (long)(int)param_5;
    lVar30 = lVar28 + (long)*(int *)(this + 0x28) * 0x50;
    puVar27 = *(undefined8 **)(lVar30 + 0x2b8);
    lVar22 = puVar27[1];
    if (lVar22 == 4) {
      base::Mutex::Lock((Mutex *)(lVar28 + 0x538));
      *puVar27 = *(undefined8 *)(lVar28 + 0x560);
      *(undefined8 **)(lVar28 + 0x560) = puVar27;
      base::Mutex::Unlock((Mutex *)(lVar28 + 0x538));
      pvVar15 = operator_new(0x70);
      *(undefined8 *)((long)pvVar15 + 0x28) = 0;
      *(undefined8 *)((long)pvVar15 + 0x30) = 0;
      *(undefined8 *)((long)pvVar15 + 0x40) = 0;
      *(undefined8 *)((long)pvVar15 + 0x48) = 0;
      *(undefined8 *)((long)pvVar15 + 0x58) = 0;
      *(undefined8 *)((long)pvVar15 + 0x60) = 0;
      *(void **)(lVar30 + 0x2b8) = pvVar15;
      *(ulong **)((long)pvVar15 + 0x10) = param_4;
      *(long *)((long)pvVar15 + 0x18) = param_2;
      *(undefined8 *)((long)pvVar15 + 8) = 1;
      *(uint *)((long)pvVar15 + 0x20) = param_5;
      return 0;
    }
    puVar27[1] = lVar22 + 1;
    puVar27[lVar22 * 3 + 2] = param_4;
    puVar27[lVar22 * 3 + 3] = param_2;
    *(uint *)(puVar27 + lVar22 * 3 + 4) = param_5;
    return 0;
  }
  piVar32 = (int *)((long)param_4 + -1);
  uVar18 = (ulong)piVar32 & 0xfffffffffffc0000;
  if (((*(byte *)(uVar18 + 10) >> 3 & 1) == 0) ||
     (((piVar21 = *(int **)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x1f0),
       *(int **)(uVar18 + 0x20) <= piVar21 && (piVar21 <= piVar32)) &&
      (piVar21 <= *(int **)(uVar18 + 0x28))))) {
    if ((int)param_5 < 0x2001) {
      puVar12 = (ulong *)LocalAllocator::AllocateInLAB((LocalAllocator *)(this + 0x88),uVar26,0);
    }
    else {
      pNVar31 = *(NewSpace **)(this + 0x90);
      base::Mutex::Lock((Mutex *)(pNVar31 + 0x98));
      uVar19 = *(ulong *)(pNVar31 + 0x68);
      if (uVar19 < *(ulong *)(pNVar31 + 0x78)) {
        *(ulong *)(pNVar31 + 0x78) = uVar19;
      }
      uVar29 = uVar19 + uVar26;
      if (*(ulong *)(pNVar31 + 0x70) < uVar29) {
        uVar19 = NewSpace::EnsureAllocation(pNVar31,uVar26,0);
        if ((uVar19 & 1) != 0) {
          uVar19 = *(ulong *)(pNVar31 + 0x68);
          uVar29 = uVar19 + uVar26;
          goto LAB_01006c8c;
        }
        puVar12 = (ulong *)0x2;
      }
      else {
LAB_01006c8c:
        *(ulong *)(pNVar31 + 0x68) = uVar29;
        puVar12 = (ulong *)(uVar19 + 1);
        if (FLAG_trace_allocations_origins != '\0') {
          SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar31,2);
        }
        if (((ulong)puVar12 & 1) == 0) goto LAB_01006dd0;
      }
      base::Mutex::Unlock((Mutex *)(pNVar31 + 0x98));
    }
    if (((ulong)puVar12 & 1) != 0) {
      lVar30 = (long)puVar12 - 1;
      uVar16 = param_5 - 1;
      if (-1 < (int)(param_5 - 4)) {
        uVar16 = param_5 - 4;
      }
      *(int *)((long)puVar12 - 1) = iVar11;
      if (6 < param_5 - 1) {
        uVar19 = (long)((ulong)uVar16 << 0x20) >> 0x22;
        puVar13 = (undefined4 *)((long)puVar12 + 3);
        puVar20 = (undefined4 *)((long)param_4 + 3);
        if ((uint)((int)uVar16 >> 2) < 0x10) {
          uVar29 = uVar19;
          if ((7 < (uint)((int)uVar16 >> 2)) &&
             ((puVar20 + uVar19 <= puVar13 || (puVar13 + uVar19 <= puVar20)))) {
            uVar24 = uVar19 & 0xfffffffffffffff8;
            puVar27 = (undefined8 *)((long)puVar12 + 0x13);
            uVar29 = uVar19 - uVar24;
            puVar20 = puVar20 + uVar24;
            puVar13 = puVar13 + uVar24;
            puVar25 = (undefined8 *)((long)param_4 + 0x13);
            uVar23 = uVar24;
            do {
              puVar9 = puVar25 + -1;
              uVar33 = puVar25[-2];
              uVar35 = puVar25[1];
              uVar34 = *puVar25;
              uVar23 = uVar23 - 8;
              puVar25 = puVar25 + 4;
              puVar27[-1] = *puVar9;
              puVar27[-2] = uVar33;
              puVar27[1] = uVar35;
              *puVar27 = uVar34;
              puVar27 = puVar27 + 4;
            } while (uVar23 != 0);
            if (uVar24 == uVar19) goto LAB_0100720c;
          }
          do {
            uVar29 = uVar29 - 1;
            *puVar13 = *puVar20;
            puVar13 = puVar13 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar29 != 0);
        }
        else {
          MemCopy(puVar13,puVar20,uVar19 << 2);
        }
      }
LAB_0100720c:
      do {
        if (*piVar32 != iVar11) goto LAB_01007330;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar32,0x10);
        if (bVar10) {
          *piVar32 = (int)lVar30;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (this[0x2e0] == (Scavenger)0x0) {
        SVar5 = this[0x2e1];
      }
      else {
        Heap::OnMoveEvent(*(Heap **)(this + 8),puVar12,param_4,uVar26);
        SVar5 = this[0x2e1];
      }
      if (SVar5 != (Scavenger)0x0) {
        uVar29 = (ulong)puVar12 & 0xfffffffffffc0000;
        uVar19 = (long)puVar12 - uVar29 >> 7 & 0x1ffffff;
        puVar2 = (uint *)(*(long *)(uVar29 + 0x10) + uVar19 * 4);
        uVar16 = (uint)(1L << ((long)puVar12 - uVar29 >> 2 & 0x1f));
        if ((*puVar2 & uVar16) != 0) {
          uVar17 = uVar16 << 1;
          bVar10 = uVar17 == 0;
          if (bVar10) {
            uVar17 = 1;
          }
          if ((puVar2[bVar10] & uVar17) != 0) goto LAB_01007824;
        }
        uVar23 = (ulong)param_4 & 0xfffffffffffc0000;
        uVar24 = (long)param_4 - uVar23 >> 7 & 0x1ffffff;
        puVar2 = (uint *)(*(long *)(uVar23 + 0x10) + uVar24 * 4);
        uVar6 = 1 << (ulong)((uint)((long)param_4 - uVar23 >> 2) & 0x1f);
        uVar17 = uVar6 << 1;
        if ((*puVar2 & uVar6) != 0) {
          uVar4 = uVar17;
          if (uVar17 == 0) {
            uVar4 = 1;
          }
          if ((puVar2[uVar17 == 0] & uVar4) == 0) {
            puVar2 = (uint *)(*(long *)(uVar29 + 0x10) + uVar19 * 4);
            while (uVar17 = *puVar2, (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
              while (*puVar2 == uVar17) {
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar10) {
                  *puVar2 = uVar17 | uVar16;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_01007824;
              }
              ClearExclusiveLocal();
            }
            goto LAB_01007824;
          }
        }
        puVar2 = (uint *)(*(long *)(uVar23 + 0x10) + uVar24 * 4);
        if ((*puVar2 & uVar6) != 0) {
          bVar10 = uVar17 == 0;
          if (bVar10) {
            uVar17 = 1;
          }
          if ((puVar2[bVar10] & uVar17) != 0) {
            puVar2 = (uint *)(*(long *)(uVar29 + 0x10) + uVar19 * 4);
            while (uVar17 = *puVar2, (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
              while (*puVar2 == uVar17) {
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar10) {
                  *puVar2 = uVar17 | uVar16;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') {
                  puVar2 = (uint *)(*(long *)(uVar29 + 0x10) +
                                   ((long)puVar12 + ~uVar29 >> 7 & 0x1ffffff) * 4);
                  uVar16 = 1 << (ulong)((uint)((long)puVar12 + ~uVar29 >> 2) & 0x1f);
                  local_80 = puVar12;
                  if ((*puVar2 & uVar16) == 0) goto LAB_01007824;
                  uVar16 = uVar16 << 1;
                  bVar10 = uVar16 == 0;
                  puVar3 = puVar2;
                  if (bVar10) {
                    uVar16 = 1;
                    puVar3 = puVar2 + 1;
                  }
                  goto LAB_01007604;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
      }
      goto LAB_01007824;
    }
  }
  puVar12 = (ulong *)PagedSpace::AllocateRaw((PagedSpace *)(this + 0xa0),uVar26,0,2);
  if (((ulong)puVar12 & 1) != 0) {
    lVar30 = (long)puVar12 + -1;
    uVar16 = param_5 - 1;
    if (-1 < (int)(param_5 - 4)) {
      uVar16 = param_5 - 4;
    }
    *(int *)((long)puVar12 + -1) = iVar11;
    if (6 < param_5 - 1) {
      uVar19 = (long)((ulong)uVar16 << 0x20) >> 0x22;
      puVar13 = (undefined4 *)((long)puVar12 + 3);
      puVar20 = (undefined4 *)((long)param_4 + 3);
      if ((uint)((int)uVar16 >> 2) < 0x10) {
        uVar29 = uVar19;
        if ((7 < (uint)((int)uVar16 >> 2)) &&
           ((puVar20 + uVar19 <= puVar13 || (puVar13 + uVar19 <= puVar20)))) {
          uVar24 = uVar19 & 0xfffffffffffffff8;
          puVar27 = (undefined8 *)((long)puVar12 + 0x13);
          uVar29 = uVar19 - uVar24;
          puVar20 = puVar20 + uVar24;
          puVar13 = puVar13 + uVar24;
          puVar25 = (undefined8 *)((long)param_4 + 0x13);
          uVar23 = uVar24;
          do {
            puVar9 = puVar25 + -1;
            uVar33 = puVar25[-2];
            uVar35 = puVar25[1];
            uVar34 = *puVar25;
            uVar23 = uVar23 - 8;
            puVar25 = puVar25 + 4;
            puVar27[-1] = *puVar9;
            puVar27[-2] = uVar33;
            puVar27[1] = uVar35;
            *puVar27 = uVar34;
            puVar27 = puVar27 + 4;
          } while (uVar23 != 0);
          if (uVar24 == uVar19) goto LAB_01006eec;
        }
        do {
          uVar29 = uVar29 - 1;
          *puVar13 = *puVar20;
          puVar13 = puVar13 + 1;
          puVar20 = puVar20 + 1;
        } while (uVar29 != 0);
      }
      else {
        MemCopy(puVar13,puVar20,uVar19 << 2);
      }
    }
LAB_01006eec:
    do {
      if (*piVar32 != iVar11) {
        ClearExclusiveLocal();
        if ((*(long *)(this + 0x108) == 0) ||
           (*(long *)(this + 0x108) - (long)(int)param_5 != lVar30)) {
          pHVar14 = *(Heap **)(this + 0x88);
          goto LAB_01007360;
        }
        *(long *)(this + 0x108) = lVar30;
        goto LAB_01007368;
      }
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar10) {
        *piVar32 = (int)lVar30;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (this[0x2e0] == (Scavenger)0x0) {
      SVar5 = this[0x2e1];
    }
    else {
      Heap::OnMoveEvent(*(Heap **)(this + 8),puVar12,param_4,param_5);
      SVar5 = this[0x2e1];
    }
    if (SVar5 != (Scavenger)0x0) {
      uVar19 = (ulong)puVar12 & 0xfffffffffffc0000;
      uVar26 = (long)puVar12 - uVar19 >> 7 & 0x1ffffff;
      puVar2 = (uint *)(*(long *)(uVar19 + 0x10) + uVar26 * 4);
      uVar16 = (uint)(1L << ((long)puVar12 - uVar19 >> 2 & 0x1f));
      if ((*puVar2 & uVar16) != 0) {
        uVar17 = uVar16 << 1;
        bVar10 = uVar17 == 0;
        if (bVar10) {
          uVar17 = 1;
        }
        if ((puVar2[bVar10] & uVar17) != 0) goto LAB_0100770c;
      }
      uVar29 = (ulong)param_4 & 0xfffffffffffc0000;
      uVar23 = (long)param_4 - uVar29 >> 7 & 0x1ffffff;
      puVar2 = (uint *)(*(long *)(uVar29 + 0x10) + uVar23 * 4);
      uVar6 = 1 << (ulong)((uint)((long)param_4 - uVar29 >> 2) & 0x1f);
      uVar17 = uVar6 << 1;
      if ((*puVar2 & uVar6) != 0) {
        uVar4 = uVar17;
        if (uVar17 == 0) {
          uVar4 = 1;
        }
        if ((puVar2[uVar17 == 0] & uVar4) == 0) {
          puVar2 = (uint *)(*(long *)(uVar19 + 0x10) + uVar26 * 4);
          while (uVar17 = *puVar2, (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
            while (*puVar2 == uVar17) {
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar10) {
                *puVar2 = uVar17 | uVar16;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_0100770c;
            }
            ClearExclusiveLocal();
          }
          goto LAB_0100770c;
        }
      }
      puVar2 = (uint *)(*(long *)(uVar29 + 0x10) + uVar23 * 4);
      if ((*puVar2 & uVar6) != 0) {
        bVar10 = uVar17 == 0;
        if (bVar10) {
          uVar17 = 1;
        }
        if ((puVar2[bVar10] & uVar17) != 0) {
          puVar2 = (uint *)(*(long *)(uVar19 + 0x10) + uVar26 * 4);
          while (uVar17 = *puVar2, (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
            while (*puVar2 == uVar17) {
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar10) {
                *puVar2 = uVar17 | uVar16;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') {
                puVar2 = (uint *)(*(long *)(uVar19 + 0x10) +
                                 ((long)puVar12 + ~uVar19 >> 7 & 0x1ffffff) * 4);
                uVar16 = 1 << (ulong)((uint)((long)puVar12 + ~uVar19 >> 2) & 0x1f);
                local_80 = puVar12;
                if ((*puVar2 & uVar16) == 0) goto LAB_0100770c;
                uVar16 = uVar16 << 1;
                bVar10 = uVar16 == 0;
                puVar3 = puVar2;
                if (bVar10) {
                  uVar16 = 1;
                  puVar3 = puVar2 + 1;
                }
                goto LAB_01007504;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
    }
LAB_0100770c:
    if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(param_2 + 7) | 2) == 0x423)) {
      lVar30 = *(long *)(this + 8);
      local_80 = param_4;
      iVar11 = HeapObject::SizeFromMap((HeapObject *)&local_80,param_2);
      piVar21 = (int *)((long)piVar32 + (long)iVar11);
      if ((((uVar18 == ((ulong)(piVar21 + 1) & 0xfffffffffffc0000)) &&
           (*piVar21 == *(int *)(lVar30 + -0x7b78))) &&
          (((*(byte *)(uVar18 + 10) >> 3 & 1) == 0 ||
           (((piVar21 = *(int **)(*(long *)(uVar18 + 0x58) + 0x80),
             *(int **)(uVar18 + 0x20) <= piVar21 && (piVar21 <= piVar32)) &&
            (piVar21 < *(int **)(uVar18 + 0x28))))))) &&
         (uVar26 = (long)iVar11 + (long)param_4, (int)uVar26 != 0)) {
        local_80 = local_70;
        local_70[0] = uVar26 & 0xffffffff00000000 | (ulong)*(uint *)(uVar26 + 3);
        lVar30 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
                 ::
                 __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::AllocationSite&&>,std::__ndk1::tuple<>>
                           ((AllocationSite *)(this + 0x50),(piecewise_construct_t *)local_70,
                            (tuple *)&DAT_019c6624,(tuple *)&local_80);
        *(long *)(lVar30 + 0x18) = *(long *)(lVar30 + 0x18) + 1;
      }
    }
    *param_3 = *param_3 & 2 | (uint)puVar12;
    Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Push
              (*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x28),puVar12,param_5);
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + (long)(int)param_5;
    return 1;
  }
  if ((int)param_5 < 0x2001) {
    puVar12 = (ulong *)LocalAllocator::AllocateInLAB((LocalAllocator *)(this + 0x88),param_5,0);
  }
  else {
    pNVar31 = *(NewSpace **)(this + 0x90);
    base::Mutex::Lock((Mutex *)(pNVar31 + 0x98));
    uVar19 = *(ulong *)(pNVar31 + 0x68);
    if (uVar19 < *(ulong *)(pNVar31 + 0x78)) {
      *(ulong *)(pNVar31 + 0x78) = uVar19;
    }
    uVar29 = uVar19 + param_5;
    if (*(ulong *)(pNVar31 + 0x70) < uVar29) {
      uVar19 = NewSpace::EnsureAllocation(pNVar31,uVar26,0);
      if ((uVar19 & 1) != 0) {
        uVar19 = *(ulong *)(pNVar31 + 0x68);
        uVar29 = uVar19 + param_5;
        goto LAB_01006da8;
      }
      puVar12 = (ulong *)0x2;
    }
    else {
LAB_01006da8:
      *(ulong *)(pNVar31 + 0x68) = uVar29;
      puVar12 = (ulong *)(uVar19 + 1);
      if (FLAG_trace_allocations_origins != '\0') {
        SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar31,2);
      }
      if (((ulong)puVar12 & 1) == 0) {
LAB_01006dd0:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!object.IsSmi()");
      }
    }
    base::Mutex::Unlock((Mutex *)(pNVar31 + 0x98));
  }
  if (((ulong)puVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory(*(Heap **)(this + 8),"Scavenger: semi-space copy");
  }
  lVar30 = (long)puVar12 - 1;
  uVar16 = param_5 - 1;
  if (-1 < (int)(param_5 - 4)) {
    uVar16 = param_5 - 4;
  }
  *(int *)((long)puVar12 - 1) = iVar11;
  if (6 < param_5 - 1) {
    uVar19 = (long)((ulong)uVar16 << 0x20) >> 0x22;
    puVar13 = (undefined4 *)((long)puVar12 + 3);
    puVar20 = (undefined4 *)((long)param_4 + 3);
    if ((uint)((int)uVar16 >> 2) < 0x10) {
      uVar29 = uVar19;
      if ((7 < (uint)((int)uVar16 >> 2)) &&
         ((puVar20 + uVar19 <= puVar13 || (puVar13 + uVar19 <= puVar20)))) {
        uVar24 = uVar19 & 0xfffffffffffffff8;
        puVar27 = (undefined8 *)((long)puVar12 + 0x13);
        uVar29 = uVar19 - uVar24;
        puVar20 = puVar20 + uVar24;
        puVar13 = puVar13 + uVar24;
        puVar25 = (undefined8 *)((long)param_4 + 0x13);
        uVar23 = uVar24;
        do {
          puVar9 = puVar25 + -1;
          uVar33 = puVar25[-2];
          uVar35 = puVar25[1];
          uVar34 = *puVar25;
          uVar23 = uVar23 - 8;
          puVar25 = puVar25 + 4;
          puVar27[-1] = *puVar9;
          puVar27[-2] = uVar33;
          puVar27[1] = uVar35;
          *puVar27 = uVar34;
          puVar27 = puVar27 + 4;
        } while (uVar23 != 0);
        if (uVar24 == uVar19) goto LAB_0100704c;
      }
      do {
        uVar29 = uVar29 - 1;
        *puVar13 = *puVar20;
        puVar13 = puVar13 + 1;
        puVar20 = puVar20 + 1;
      } while (uVar29 != 0);
    }
    else {
      MemCopy(puVar13,puVar20,uVar19 << 2);
    }
  }
LAB_0100704c:
  do {
    if (*piVar32 != iVar11) {
LAB_01007330:
      ClearExclusiveLocal();
      if ((*(long *)(this + 0x278) == 0) || (*(long *)(this + 0x278) - (long)(int)param_5 != lVar30)
         ) {
        pHVar14 = *(Heap **)(this + 0x88);
LAB_01007360:
        Heap::CreateFillerObjectAt(pHVar14,lVar30,uVar26,1,1);
      }
      else {
        *(long *)(this + 0x278) = lVar30;
      }
LAB_01007368:
      uVar16 = *piVar32 + 1;
      uVar17 = *param_3 & 2 | uVar16;
      *param_3 = uVar17;
      if (uVar17 == 3) {
        return 1;
      }
      if ((uVar16 & 1) == 0) {
        return 1;
      }
      return (*(uint *)(((ulong)uVar16 & 0xfffc0000 | (ulong)param_3 & 0xffffffff00000000) + 8) >> 4
             ^ 0xffffffff) & 1;
    }
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(piVar32,0x10);
    if (bVar10) {
      *piVar32 = (int)lVar30;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (this[0x2e0] == (Scavenger)0x0) {
    SVar5 = this[0x2e1];
  }
  else {
    Heap::OnMoveEvent(*(Heap **)(this + 8),puVar12,param_4,param_5);
    SVar5 = this[0x2e1];
  }
  if (SVar5 != (Scavenger)0x0) {
    uVar29 = (ulong)puVar12 & 0xfffffffffffc0000;
    uVar19 = (long)puVar12 - uVar29 >> 7 & 0x1ffffff;
    puVar2 = (uint *)(*(long *)(uVar29 + 0x10) + uVar19 * 4);
    uVar16 = (uint)(1L << ((long)puVar12 - uVar29 >> 2 & 0x1f));
    if ((*puVar2 & uVar16) != 0) {
      uVar17 = uVar16 << 1;
      bVar10 = uVar17 == 0;
      if (bVar10) {
        uVar17 = 1;
      }
      if ((puVar2[bVar10] & uVar17) != 0) goto LAB_01007824;
    }
    uVar23 = (ulong)param_4 & 0xfffffffffffc0000;
    uVar24 = (long)param_4 - uVar23 >> 7 & 0x1ffffff;
    puVar2 = (uint *)(*(long *)(uVar23 + 0x10) + uVar24 * 4);
    uVar6 = 1 << (ulong)((uint)((long)param_4 - uVar23 >> 2) & 0x1f);
    uVar17 = uVar6 << 1;
    if ((*puVar2 & uVar6) != 0) {
      uVar4 = uVar17;
      if (uVar17 == 0) {
        uVar4 = 1;
      }
      if ((puVar2[uVar17 == 0] & uVar4) == 0) {
        puVar2 = (uint *)(*(long *)(uVar29 + 0x10) + uVar19 * 4);
        while (uVar17 = *puVar2, (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar17) {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar10) {
              *puVar2 = uVar17 | uVar16;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_01007824;
          }
          ClearExclusiveLocal();
        }
        goto LAB_01007824;
      }
    }
    puVar2 = (uint *)(*(long *)(uVar23 + 0x10) + uVar24 * 4);
    if ((*puVar2 & uVar6) != 0) {
      bVar10 = uVar17 == 0;
      if (bVar10) {
        uVar17 = 1;
      }
      if ((puVar2[bVar10] & uVar17) != 0) {
        puVar2 = (uint *)(*(long *)(uVar29 + 0x10) + uVar19 * 4);
        while (uVar17 = *puVar2, (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar17) {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar10) {
              *puVar2 = uVar17 | uVar16;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              puVar2 = (uint *)(*(long *)(uVar29 + 0x10) +
                               ((long)puVar12 + ~uVar29 >> 7 & 0x1ffffff) * 4);
              uVar16 = 1 << (ulong)((uint)((long)puVar12 + ~uVar29 >> 2) & 0x1f);
              local_80 = puVar12;
              if ((*puVar2 & uVar16) == 0) goto LAB_01007824;
              uVar16 = uVar16 << 1;
              bVar10 = uVar16 == 0;
              puVar3 = puVar2;
              if (bVar10) {
                uVar16 = 1;
                puVar3 = puVar2 + 1;
              }
              goto LAB_01007584;
            }
          }
          ClearExclusiveLocal();
        }
      }
    }
  }
LAB_01007824:
  if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(param_2 + 7) | 2) == 0x423)) {
    lVar30 = *(long *)(this + 8);
    local_80 = param_4;
    iVar11 = HeapObject::SizeFromMap((HeapObject *)&local_80,param_2);
    piVar21 = (int *)((long)piVar32 + (long)iVar11);
    if ((((uVar18 == ((ulong)(piVar21 + 1) & 0xfffffffffffc0000)) &&
         (*piVar21 == *(int *)(lVar30 + -0x7b78))) &&
        (((*(byte *)(uVar18 + 10) >> 3 & 1) == 0 ||
         (((piVar21 = *(int **)(*(long *)(uVar18 + 0x58) + 0x80),
           *(int **)(uVar18 + 0x20) <= piVar21 && (piVar21 <= piVar32)) &&
          (piVar21 < *(int **)(uVar18 + 0x28))))))) &&
       (uVar18 = (long)iVar11 + (long)param_4, (int)uVar18 != 0)) {
      local_80 = local_70;
      local_70[0] = uVar18 & 0xffffffff00000000 | (ulong)*(uint *)(uVar18 + 3);
      lVar30 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
               ::
               __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::AllocationSite&&>,std::__ndk1::tuple<>>
                         ((AllocationSite *)(this + 0x50),(piecewise_construct_t *)local_70,
                          (tuple *)&DAT_019c6624,(tuple *)&local_80);
      *(long *)(lVar30 + 0x18) = *(long *)(lVar30 + 0x18) + 1;
    }
  }
  *param_3 = *param_3 & 2 | (uint)puVar12;
  Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Push
            (*(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x38),puVar12,uVar26);
  *(long *)(this + 0x78) = *(long *)(this + 0x78) + (long)(int)param_5;
  return 0;
LAB_01007604:
  uVar17 = puVar2[bVar10];
  if ((uVar16 & (uVar17 ^ 0xffffffff)) == 0) goto LAB_01007824;
  while (*puVar3 == uVar17) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar8) {
      *puVar3 = uVar17 | uVar16;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') {
      iVar11 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar12 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar12 - 1))
      ;
      plVar1 = (long *)(uVar29 + 0x68);
      do {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = *plVar1 + (long)iVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      goto LAB_01007824;
    }
  }
  ClearExclusiveLocal();
  goto LAB_01007604;
LAB_01007504:
  uVar17 = puVar2[bVar10];
  if ((uVar16 & (uVar17 ^ 0xffffffff)) == 0) goto LAB_0100770c;
  while (*puVar3 == uVar17) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar8) {
      *puVar3 = uVar17 | uVar16;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') {
      iVar11 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar12 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar12 + -1)
                         );
      plVar1 = (long *)(uVar19 + 0x68);
      do {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = *plVar1 + (long)iVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      goto LAB_0100770c;
    }
  }
  ClearExclusiveLocal();
  goto LAB_01007504;
LAB_01007584:
  uVar17 = puVar2[bVar10];
  if ((uVar16 & (uVar17 ^ 0xffffffff)) == 0) goto LAB_01007824;
  while (*puVar3 == uVar17) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar8) {
      *puVar3 = uVar17 | uVar16;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') {
      iVar11 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar12 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar12 - 1))
      ;
      plVar1 = (long *)(uVar29 + 0x68);
      do {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = *plVar1 + (long)iVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      goto LAB_01007824;
    }
  }
  ClearExclusiveLocal();
  goto LAB_01007584;
}

