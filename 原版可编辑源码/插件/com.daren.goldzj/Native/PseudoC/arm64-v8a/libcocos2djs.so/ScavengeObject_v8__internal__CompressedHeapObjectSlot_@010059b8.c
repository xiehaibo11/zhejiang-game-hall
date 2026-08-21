
/* v8::internal::SlotCallbackResult
   v8::internal::Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>(v8::internal::CompressedHeapObjectSlot,
   v8::internal::HeapObject) */

ulong __thiscall
v8::internal::Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
          (Scavenger *this,uint *param_2,ulong *param_3)

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
  ulong *puVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  ulong *puVar16;
  undefined4 *puVar17;
  Heap *pHVar18;
  void *pvVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 *puVar23;
  uint *puVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 *puVar30;
  uint *puVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  NewSpace *pNVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  ulong *local_88;
  ulong *local_80;
  ulong uStack_78;
  ulong local_70 [2];
  
  uVar20 = *(uint *)((long)param_3 + -1);
  uVar33 = (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar20;
  if ((uVar20 & 1) == 0) {
    *param_2 = *param_2 & 2 | (uint)(uVar33 + 1);
    return (ulong)((*(byte *)((uVar33 + 1 & 0xfffffffffffc0000) + 8) & 0x18) == 0);
  }
  local_88 = param_3;
  uVar14 = HeapObject::SizeFromMap((HeapObject *)&local_88,uVar33);
  puVar12 = local_88;
  bVar5 = *(byte *)(uVar33 + 6);
  uVar29 = (ulong)uVar14;
  if (bVar5 == 0x27) {
    uVar33 = EvacuateShortcutCandidate<v8::internal::CompressedHeapObjectSlot>
                       (this,uVar33,param_2,local_88,uVar29);
    return uVar33;
  }
  if (bVar5 == 0x30) {
    uVar33 = EvacuateThinString<v8::internal::CompressedHeapObjectSlot>
                       (this,uVar33,param_2,local_88,uVar29);
    return uVar33;
  }
  if (((FLAG_young_generation_large_objects != '\0') &&
      (uVar21 = *(ulong *)(((ulong)local_88 & 0xfffffffffffc0000) + 8), ((uint)uVar21 >> 5 & 1) != 0
      )) && ((uVar21 & 0x18) != 0)) {
    puVar31 = (uint *)((long)local_88 + -1);
    do {
      if (*puVar31 != uVar20) {
        ClearExclusiveLocal();
        return 0;
      }
      cVar9 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar31,0x10);
      if (bVar13) {
        *puVar31 = (uint)puVar31;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    local_80 = local_88;
    uStack_78 = uVar33;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
    ::
    __emplace_unique_key_args<v8::internal::HeapObject,std::__ndk1::pair<v8::internal::HeapObject_const,v8::internal::Map>>
              ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
                *)(this + 0x290),(HeapObject *)&local_80,(pair *)&local_80);
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + (long)(int)uVar14;
    if (5 < bVar5) {
      lVar32 = *(long *)(this + 0x20);
      lVar35 = lVar32 + (long)*(int *)(this + 0x28) * 0x50;
      puVar30 = *(undefined8 **)(lVar35 + 0x2b8);
      lVar25 = puVar30[1];
      if (lVar25 == 4) {
        base::Mutex::Lock((Mutex *)(lVar32 + 0x538));
        *puVar30 = *(undefined8 *)(lVar32 + 0x560);
        *(undefined8 **)(lVar32 + 0x560) = puVar30;
        base::Mutex::Unlock((Mutex *)(lVar32 + 0x538));
        pvVar19 = operator_new(0x70);
        *(undefined8 *)((long)pvVar19 + 0x28) = 0;
        *(undefined8 *)((long)pvVar19 + 0x30) = 0;
        *(undefined8 *)((long)pvVar19 + 0x40) = 0;
        *(undefined8 *)((long)pvVar19 + 0x48) = 0;
        *(undefined8 *)((long)pvVar19 + 0x58) = 0;
        *(undefined8 *)((long)pvVar19 + 0x60) = 0;
        *(void **)(lVar35 + 0x2b8) = pvVar19;
        *(ulong **)((long)pvVar19 + 0x10) = puVar12;
        *(ulong *)((long)pvVar19 + 0x18) = uVar33;
        *(undefined8 *)((long)pvVar19 + 8) = 1;
        *(uint *)((long)pvVar19 + 0x20) = uVar14;
        return 0;
      }
      puVar30[1] = lVar25 + 1;
      puVar30[lVar25 * 3 + 2] = puVar12;
      puVar30[lVar25 * 3 + 3] = uVar33;
      *(uint *)(puVar30 + lVar25 * 3 + 4) = uVar14;
      return 0;
    }
    return 0;
  }
  puVar31 = (uint *)((long)local_88 + -1);
  uVar21 = (ulong)puVar31 & 0xfffffffffffc0000;
  if (((*(byte *)(uVar21 + 10) >> 3 & 1) == 0) ||
     (((puVar24 = *(uint **)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x1f0),
       *(uint **)(uVar21 + 0x20) <= puVar24 && (puVar24 <= puVar31)) &&
      (puVar24 <= *(uint **)(uVar21 + 0x28))))) {
    if ((int)uVar14 < 0x2001) {
      puVar16 = (ulong *)LocalAllocator::AllocateInLAB((LocalAllocator *)(this + 0x88),uVar29,0);
    }
    else {
      pNVar36 = *(NewSpace **)(this + 0x90);
      base::Mutex::Lock((Mutex *)(pNVar36 + 0x98));
      uVar22 = *(ulong *)(pNVar36 + 0x68);
      if (uVar22 < *(ulong *)(pNVar36 + 0x78)) {
        *(ulong *)(pNVar36 + 0x78) = uVar22;
      }
      uVar34 = uVar22 + uVar29;
      if (*(ulong *)(pNVar36 + 0x70) < uVar34) {
        uVar22 = NewSpace::EnsureAllocation(pNVar36,uVar29,0);
        if ((uVar22 & 1) != 0) {
          uVar22 = *(ulong *)(pNVar36 + 0x68);
          uVar34 = uVar22 + uVar29;
          goto LAB_01005b28;
        }
        puVar16 = (ulong *)0x2;
      }
      else {
LAB_01005b28:
        *(ulong *)(pNVar36 + 0x68) = uVar34;
        puVar16 = (ulong *)(uVar22 + 1);
        if (FLAG_trace_allocations_origins != '\0') {
          SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar36,2);
        }
        if (((ulong)puVar16 & 1) == 0) goto LAB_01005c50;
      }
      base::Mutex::Unlock((Mutex *)(pNVar36 + 0x98));
    }
    if (((ulong)puVar16 & 1) != 0) {
      lVar35 = (long)puVar16 - 1;
      uVar8 = uVar14 - 1;
      if (-1 < (int)(uVar14 - 4)) {
        uVar8 = uVar14 - 4;
      }
      *(uint *)((long)puVar16 - 1) = uVar20;
      if (6 < uVar14 - 1) {
        uVar22 = (long)((ulong)uVar8 << 0x20) >> 0x22;
        puVar17 = (undefined4 *)((long)puVar16 + 3);
        puVar23 = (undefined4 *)((long)puVar12 + 3);
        if ((uint)((int)uVar8 >> 2) < 0x10) {
          uVar34 = uVar22;
          if ((7 < (uint)((int)uVar8 >> 2)) &&
             ((puVar23 + uVar22 <= puVar17 || (puVar17 + uVar22 <= puVar23)))) {
            uVar27 = uVar22 & 0xfffffffffffffff8;
            puVar30 = (undefined8 *)((long)puVar16 + 0x13);
            uVar34 = uVar22 - uVar27;
            puVar23 = puVar23 + uVar27;
            puVar17 = puVar17 + uVar27;
            puVar28 = (undefined8 *)((long)puVar12 + 0x13);
            uVar26 = uVar27;
            do {
              puVar11 = puVar28 + -1;
              uVar37 = puVar28[-2];
              uVar39 = puVar28[1];
              uVar38 = *puVar28;
              uVar26 = uVar26 - 8;
              puVar28 = puVar28 + 4;
              puVar30[-1] = *puVar11;
              puVar30[-2] = uVar37;
              puVar30[1] = uVar39;
              *puVar30 = uVar38;
              puVar30 = puVar30 + 4;
            } while (uVar26 != 0);
            if (uVar27 == uVar22) goto LAB_010060bc;
          }
          do {
            uVar34 = uVar34 - 1;
            *puVar17 = *puVar23;
            puVar17 = puVar17 + 1;
            puVar23 = puVar23 + 1;
          } while (uVar34 != 0);
        }
        else {
          MemCopy(puVar17,puVar23,uVar22 << 2);
        }
      }
LAB_010060bc:
      do {
        if (*puVar31 != uVar20) {
          ClearExclusiveLocal();
          if ((*(long *)(this + 0x278) != 0) &&
             (*(long *)(this + 0x278) - (long)(int)uVar14 == lVar35)) goto LAB_010061fc;
          pHVar18 = *(Heap **)(this + 0x88);
          goto LAB_01006218;
        }
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar31,0x10);
        if (bVar13) {
          *puVar31 = (uint)lVar35;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (this[0x2e0] != (Scavenger)0x0) {
        Heap::OnMoveEvent(*(Heap **)(this + 8),puVar16,puVar12,uVar29);
      }
      if (this[0x2e1] != (Scavenger)0x0) {
        uVar34 = (ulong)puVar16 & 0xfffffffffffc0000;
        uVar22 = (long)puVar16 - uVar34 >> 7 & 0x1ffffff;
        puVar24 = (uint *)(*(long *)(uVar34 + 0x10) + uVar22 * 4);
        uVar20 = (uint)(1L << ((long)puVar16 - uVar34 >> 2 & 0x1f));
        if ((*puVar24 & uVar20) != 0) {
          uVar8 = uVar20 << 1;
          bVar13 = uVar8 == 0;
          if (bVar13) {
            uVar8 = 1;
          }
          if ((puVar24[bVar13] & uVar8) != 0) goto LAB_010066dc;
        }
        uVar26 = (ulong)puVar12 & 0xfffffffffffc0000;
        uVar27 = (long)puVar12 - uVar26 >> 7 & 0x1ffffff;
        puVar24 = (uint *)(*(long *)(uVar26 + 0x10) + uVar27 * 4);
        uVar7 = 1 << (ulong)((uint)((long)puVar12 - uVar26 >> 2) & 0x1f);
        uVar8 = uVar7 << 1;
        if ((*puVar24 & uVar7) != 0) {
          uVar4 = uVar8;
          if (uVar8 == 0) {
            uVar4 = 1;
          }
          if ((puVar24[uVar8 == 0] & uVar4) == 0) {
            puVar24 = (uint *)(*(long *)(uVar34 + 0x10) + uVar22 * 4);
            while (uVar8 = *puVar24, (uVar20 & (uVar8 ^ 0xffffffff)) != 0) {
              while (*puVar24 == uVar8) {
                cVar9 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(puVar24,0x10);
                if (bVar13) {
                  *puVar24 = uVar8 | uVar20;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_010066dc;
              }
              ClearExclusiveLocal();
            }
            goto LAB_010066dc;
          }
        }
        puVar24 = (uint *)(*(long *)(uVar26 + 0x10) + uVar27 * 4);
        if ((*puVar24 & uVar7) != 0) {
          bVar13 = uVar8 == 0;
          if (bVar13) {
            uVar8 = 1;
          }
          if ((puVar24[bVar13] & uVar8) != 0) {
            puVar24 = (uint *)(*(long *)(uVar34 + 0x10) + uVar22 * 4);
            while (uVar8 = *puVar24, (uVar20 & (uVar8 ^ 0xffffffff)) != 0) {
              while (*puVar24 == uVar8) {
                cVar9 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(puVar24,0x10);
                if (bVar13) {
                  *puVar24 = uVar8 | uVar20;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') {
                  puVar24 = (uint *)(*(long *)(uVar34 + 0x10) +
                                    ((long)puVar16 + ~uVar34 >> 7 & 0x1ffffff) * 4);
                  uVar20 = 1 << (ulong)((uint)((long)puVar16 + ~uVar34 >> 2) & 0x1f);
                  local_80 = puVar16;
                  if ((*puVar24 & uVar20) == 0) goto LAB_010066dc;
                  uVar20 = uVar20 << 1;
                  bVar13 = uVar20 == 0;
                  puVar3 = puVar24;
                  if (bVar13) {
                    uVar20 = 1;
                    puVar3 = puVar24 + 1;
                  }
                  goto LAB_010064b4;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
      }
      goto LAB_010066dc;
    }
  }
  puVar16 = (ulong *)PagedSpace::AllocateRaw((PagedSpace *)(this + 0xa0),uVar29,0,2);
  if (((ulong)puVar16 & 1) != 0) {
    lVar35 = (long)puVar16 + -1;
    uVar8 = uVar14 - 1;
    if (-1 < (int)(uVar14 - 4)) {
      uVar8 = uVar14 - 4;
    }
    *(uint *)((long)puVar16 + -1) = uVar20;
    if (6 < uVar14 - 1) {
      uVar22 = (long)((ulong)uVar8 << 0x20) >> 0x22;
      puVar17 = (undefined4 *)((long)puVar16 + 3);
      puVar23 = (undefined4 *)((long)puVar12 + 3);
      if ((uint)((int)uVar8 >> 2) < 0x10) {
        uVar34 = uVar22;
        if ((7 < (uint)((int)uVar8 >> 2)) &&
           ((puVar23 + uVar22 <= puVar17 || (puVar17 + uVar22 <= puVar23)))) {
          uVar27 = uVar22 & 0xfffffffffffffff8;
          puVar30 = (undefined8 *)((long)puVar16 + 0x13);
          uVar34 = uVar22 - uVar27;
          puVar23 = puVar23 + uVar27;
          puVar17 = puVar17 + uVar27;
          puVar28 = (undefined8 *)((long)puVar12 + 0x13);
          uVar26 = uVar27;
          do {
            puVar11 = puVar28 + -1;
            uVar37 = puVar28[-2];
            uVar39 = puVar28[1];
            uVar38 = *puVar28;
            uVar26 = uVar26 - 8;
            puVar28 = puVar28 + 4;
            puVar30[-1] = *puVar11;
            puVar30[-2] = uVar37;
            puVar30[1] = uVar39;
            *puVar30 = uVar38;
            puVar30 = puVar30 + 4;
          } while (uVar26 != 0);
          if (uVar27 == uVar22) goto LAB_01005d70;
        }
        do {
          uVar34 = uVar34 - 1;
          *puVar17 = *puVar23;
          puVar17 = puVar17 + 1;
          puVar23 = puVar23 + 1;
        } while (uVar34 != 0);
      }
      else {
        MemCopy(puVar17,puVar23,uVar22 << 2);
      }
    }
LAB_01005d70:
    do {
      if (*puVar31 != uVar20) {
        ClearExclusiveLocal();
        if ((*(long *)(this + 0x108) != 0) &&
           (*(long *)(this + 0x108) - (long)(int)uVar14 == lVar35)) {
          *(long *)(this + 0x108) = lVar35;
          goto LAB_01006220;
        }
        pHVar18 = *(Heap **)(this + 0x88);
        goto LAB_01006218;
      }
      cVar9 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar31,0x10);
      if (bVar13) {
        *puVar31 = (uint)lVar35;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (this[0x2e0] == (Scavenger)0x0) {
      SVar6 = this[0x2e1];
    }
    else {
      Heap::OnMoveEvent(*(Heap **)(this + 8),puVar16,puVar12,uVar29);
      SVar6 = this[0x2e1];
    }
    if (SVar6 != (Scavenger)0x0) {
      uVar34 = (ulong)puVar16 & 0xfffffffffffc0000;
      uVar22 = (long)puVar16 - uVar34 >> 7 & 0x1ffffff;
      puVar24 = (uint *)(*(long *)(uVar34 + 0x10) + uVar22 * 4);
      uVar20 = (uint)(1L << ((long)puVar16 - uVar34 >> 2 & 0x1f));
      if ((*puVar24 & uVar20) != 0) {
        uVar8 = uVar20 << 1;
        bVar13 = uVar8 == 0;
        if (bVar13) {
          uVar8 = 1;
        }
        if ((puVar24[bVar13] & uVar8) != 0) goto LAB_010065bc;
      }
      uVar26 = (ulong)puVar12 & 0xfffffffffffc0000;
      uVar27 = (long)puVar12 - uVar26 >> 7 & 0x1ffffff;
      puVar24 = (uint *)(*(long *)(uVar26 + 0x10) + uVar27 * 4);
      uVar7 = 1 << (ulong)((uint)((long)puVar12 - uVar26 >> 2) & 0x1f);
      uVar8 = uVar7 << 1;
      if ((*puVar24 & uVar7) != 0) {
        uVar4 = uVar8;
        if (uVar8 == 0) {
          uVar4 = 1;
        }
        if ((puVar24[uVar8 == 0] & uVar4) == 0) {
          puVar24 = (uint *)(*(long *)(uVar34 + 0x10) + uVar22 * 4);
          while (uVar8 = *puVar24, (uVar20 & (uVar8 ^ 0xffffffff)) != 0) {
            while (*puVar24 == uVar8) {
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(puVar24,0x10);
              if (bVar13) {
                *puVar24 = uVar8 | uVar20;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_010065bc;
            }
            ClearExclusiveLocal();
          }
          goto LAB_010065bc;
        }
      }
      puVar24 = (uint *)(*(long *)(uVar26 + 0x10) + uVar27 * 4);
      if ((*puVar24 & uVar7) != 0) {
        bVar13 = uVar8 == 0;
        if (bVar13) {
          uVar8 = 1;
        }
        if ((puVar24[bVar13] & uVar8) != 0) {
          puVar24 = (uint *)(*(long *)(uVar34 + 0x10) + uVar22 * 4);
          while (uVar8 = *puVar24, (uVar20 & (uVar8 ^ 0xffffffff)) != 0) {
            while (*puVar24 == uVar8) {
              cVar9 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(puVar24,0x10);
              if (bVar13) {
                *puVar24 = uVar8 | uVar20;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') {
                puVar24 = (uint *)(*(long *)(uVar34 + 0x10) +
                                  ((long)puVar16 + ~uVar34 >> 7 & 0x1ffffff) * 4);
                uVar20 = 1 << (ulong)((uint)((long)puVar16 + ~uVar34 >> 2) & 0x1f);
                local_80 = puVar16;
                if ((*puVar24 & uVar20) == 0) goto LAB_010065bc;
                uVar20 = uVar20 << 1;
                bVar13 = uVar20 == 0;
                puVar3 = puVar24;
                if (bVar13) {
                  uVar20 = 1;
                  puVar3 = puVar24 + 1;
                }
                goto LAB_010063b4;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
    }
LAB_010065bc:
    if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(uVar33 + 7) | 2) == 0x423)) {
      lVar35 = *(long *)(this + 8);
      local_80 = puVar12;
      iVar15 = HeapObject::SizeFromMap((HeapObject *)&local_80,uVar33);
      piVar2 = (int *)((long)puVar31 + (long)iVar15);
      if ((((uVar21 == ((ulong)(piVar2 + 1) & 0xfffffffffffc0000)) &&
           (*piVar2 == *(int *)(lVar35 + -0x7b78))) &&
          (((*(byte *)(uVar21 + 10) >> 3 & 1) == 0 ||
           (((puVar24 = *(uint **)(*(long *)(uVar21 + 0x58) + 0x80),
             *(uint **)(uVar21 + 0x20) <= puVar24 && (puVar24 <= puVar31)) &&
            (puVar24 < *(uint **)(uVar21 + 0x28))))))) &&
         (uVar33 = (long)puVar12 + (long)iVar15, (int)uVar33 != 0)) {
        local_80 = local_70;
        local_70[0] = uVar33 & 0xffffffff00000000 | (ulong)*(uint *)(uVar33 + 3);
        lVar35 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
                 ::
                 __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::AllocationSite&&>,std::__ndk1::tuple<>>
                           ((AllocationSite *)(this + 0x50),(piecewise_construct_t *)local_70,
                            (tuple *)&DAT_019c6624,(tuple *)&local_80);
        *(long *)(lVar35 + 0x18) = *(long *)(lVar35 + 0x18) + 1;
      }
    }
    *param_2 = *param_2 & 2 | (uint)puVar16;
    if (5 < bVar5) {
      Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Push
                (*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x28),puVar16,uVar29);
    }
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + (long)(int)uVar14;
    return 1;
  }
  if ((int)uVar14 < 0x2001) {
    puVar16 = (ulong *)LocalAllocator::AllocateInLAB((LocalAllocator *)(this + 0x88),uVar29,0);
  }
  else {
    pNVar36 = *(NewSpace **)(this + 0x90);
    base::Mutex::Lock((Mutex *)(pNVar36 + 0x98));
    uVar22 = *(ulong *)(pNVar36 + 0x68);
    if (uVar22 < *(ulong *)(pNVar36 + 0x78)) {
      *(ulong *)(pNVar36 + 0x78) = uVar22;
    }
    uVar34 = uVar22 + uVar29;
    if (*(ulong *)(pNVar36 + 0x70) < uVar34) {
      uVar22 = NewSpace::EnsureAllocation(pNVar36,uVar29,0);
      if ((uVar22 & 1) != 0) {
        uVar22 = *(ulong *)(pNVar36 + 0x68);
        uVar34 = uVar22 + uVar29;
        goto LAB_01005c28;
      }
      puVar16 = (ulong *)0x2;
    }
    else {
LAB_01005c28:
      *(ulong *)(pNVar36 + 0x68) = uVar34;
      puVar16 = (ulong *)(uVar22 + 1);
      if (FLAG_trace_allocations_origins != '\0') {
        SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar36,2);
      }
      if (((ulong)puVar16 & 1) == 0) {
LAB_01005c50:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!object.IsSmi()");
      }
    }
    base::Mutex::Unlock((Mutex *)(pNVar36 + 0x98));
  }
  if (((ulong)puVar16 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory(*(Heap **)(this + 8),"Scavenger: semi-space copy");
  }
  lVar35 = (long)puVar16 - 1;
  uVar8 = uVar14 - 1;
  if (-1 < (int)(uVar14 - 4)) {
    uVar8 = uVar14 - 4;
  }
  *(uint *)((long)puVar16 - 1) = uVar20;
  if (6 < uVar14 - 1) {
    uVar22 = (long)((ulong)uVar8 << 0x20) >> 0x22;
    puVar17 = (undefined4 *)((long)puVar16 + 3);
    puVar23 = (undefined4 *)((long)puVar12 + 3);
    if ((uint)((int)uVar8 >> 2) < 0x10) {
      uVar34 = uVar22;
      if ((7 < (uint)((int)uVar8 >> 2)) &&
         ((puVar23 + uVar22 <= puVar17 || (puVar17 + uVar22 <= puVar23)))) {
        uVar27 = uVar22 & 0xfffffffffffffff8;
        puVar30 = (undefined8 *)((long)puVar16 + 0x13);
        uVar34 = uVar22 - uVar27;
        puVar23 = puVar23 + uVar27;
        puVar17 = puVar17 + uVar27;
        puVar28 = (undefined8 *)((long)puVar12 + 0x13);
        uVar26 = uVar27;
        do {
          puVar11 = puVar28 + -1;
          uVar37 = puVar28[-2];
          uVar39 = puVar28[1];
          uVar38 = *puVar28;
          uVar26 = uVar26 - 8;
          puVar28 = puVar28 + 4;
          puVar30[-1] = *puVar11;
          puVar30[-2] = uVar37;
          puVar30[1] = uVar39;
          *puVar30 = uVar38;
          puVar30 = puVar30 + 4;
        } while (uVar26 != 0);
        if (uVar27 == uVar22) goto LAB_01005ed0;
      }
      do {
        uVar34 = uVar34 - 1;
        *puVar17 = *puVar23;
        puVar17 = puVar17 + 1;
        puVar23 = puVar23 + 1;
      } while (uVar34 != 0);
    }
    else {
      MemCopy(puVar17,puVar23,uVar22 << 2);
    }
  }
LAB_01005ed0:
  do {
    if (*puVar31 != uVar20) {
      ClearExclusiveLocal();
      if ((*(long *)(this + 0x278) == 0) || (*(long *)(this + 0x278) - (long)(int)uVar14 != lVar35))
      {
        pHVar18 = *(Heap **)(this + 0x88);
LAB_01006218:
        Heap::CreateFillerObjectAt(pHVar18,lVar35,uVar29,1,1);
      }
      else {
LAB_010061fc:
        *(long *)(this + 0x278) = lVar35;
      }
LAB_01006220:
      uVar20 = *puVar31 + 1;
      uVar14 = *param_2 & 2 | uVar20;
      *param_2 = uVar14;
      if (uVar14 == 3) {
        return 1;
      }
      if ((uVar20 & 1) == 0) {
        return 1;
      }
      return (ulong)((*(uint *)(((ulong)uVar20 & 0xfffc0000 | (ulong)param_2 & 0xffffffff00000000) +
                               8) >> 4 ^ 0xffffffff) & 1);
    }
    cVar9 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar31,0x10);
    if (bVar13) {
      *puVar31 = (uint)lVar35;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (this[0x2e0] != (Scavenger)0x0) {
    Heap::OnMoveEvent(*(Heap **)(this + 8),puVar16,puVar12,uVar29);
  }
  if (this[0x2e1] != (Scavenger)0x0) {
    uVar34 = (ulong)puVar16 & 0xfffffffffffc0000;
    uVar22 = (long)puVar16 - uVar34 >> 7 & 0x1ffffff;
    puVar24 = (uint *)(*(long *)(uVar34 + 0x10) + uVar22 * 4);
    uVar20 = (uint)(1L << ((long)puVar16 - uVar34 >> 2 & 0x1f));
    if ((*puVar24 & uVar20) != 0) {
      uVar8 = uVar20 << 1;
      bVar13 = uVar8 == 0;
      if (bVar13) {
        uVar8 = 1;
      }
      if ((puVar24[bVar13] & uVar8) != 0) goto LAB_010066dc;
    }
    uVar26 = (ulong)puVar12 & 0xfffffffffffc0000;
    uVar27 = (long)puVar12 - uVar26 >> 7 & 0x1ffffff;
    puVar24 = (uint *)(*(long *)(uVar26 + 0x10) + uVar27 * 4);
    uVar7 = 1 << (ulong)((uint)((long)puVar12 - uVar26 >> 2) & 0x1f);
    uVar8 = uVar7 << 1;
    if ((*puVar24 & uVar7) != 0) {
      uVar4 = uVar8;
      if (uVar8 == 0) {
        uVar4 = 1;
      }
      if ((puVar24[uVar8 == 0] & uVar4) == 0) {
        puVar24 = (uint *)(*(long *)(uVar34 + 0x10) + uVar22 * 4);
        while (uVar8 = *puVar24, (uVar20 & (uVar8 ^ 0xffffffff)) != 0) {
          while (*puVar24 == uVar8) {
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar24,0x10);
            if (bVar13) {
              *puVar24 = uVar8 | uVar20;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_010066dc;
          }
          ClearExclusiveLocal();
        }
        goto LAB_010066dc;
      }
    }
    puVar24 = (uint *)(*(long *)(uVar26 + 0x10) + uVar27 * 4);
    if ((*puVar24 & uVar7) != 0) {
      bVar13 = uVar8 == 0;
      if (bVar13) {
        uVar8 = 1;
      }
      if ((puVar24[bVar13] & uVar8) != 0) {
        puVar24 = (uint *)(*(long *)(uVar34 + 0x10) + uVar22 * 4);
        while (uVar8 = *puVar24, (uVar20 & (uVar8 ^ 0xffffffff)) != 0) {
          while (*puVar24 == uVar8) {
            cVar9 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar24,0x10);
            if (bVar13) {
              *puVar24 = uVar8 | uVar20;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') {
              puVar24 = (uint *)(*(long *)(uVar34 + 0x10) +
                                ((long)puVar16 + ~uVar34 >> 7 & 0x1ffffff) * 4);
              uVar20 = 1 << (ulong)((uint)((long)puVar16 + ~uVar34 >> 2) & 0x1f);
              local_80 = puVar16;
              if ((*puVar24 & uVar20) == 0) goto LAB_010066dc;
              uVar20 = uVar20 << 1;
              bVar13 = uVar20 == 0;
              puVar3 = puVar24;
              if (bVar13) {
                uVar20 = 1;
                puVar3 = puVar24 + 1;
              }
              goto LAB_01006434;
            }
          }
          ClearExclusiveLocal();
        }
      }
    }
  }
LAB_010066dc:
  if ((FLAG_allocation_site_pretenuring != '\0') && ((*(ushort *)(uVar33 + 7) | 2) == 0x423)) {
    lVar35 = *(long *)(this + 8);
    local_80 = puVar12;
    iVar15 = HeapObject::SizeFromMap((HeapObject *)&local_80,uVar33);
    piVar2 = (int *)((long)puVar31 + (long)iVar15);
    if ((((uVar21 == ((ulong)(piVar2 + 1) & 0xfffffffffffc0000)) &&
         (*piVar2 == *(int *)(lVar35 + -0x7b78))) &&
        (((*(byte *)(uVar21 + 10) >> 3 & 1) == 0 ||
         (((puVar24 = *(uint **)(*(long *)(uVar21 + 0x58) + 0x80),
           *(uint **)(uVar21 + 0x20) <= puVar24 && (puVar24 <= puVar31)) &&
          (puVar24 < *(uint **)(uVar21 + 0x28))))))) &&
       (uVar33 = (long)puVar12 + (long)iVar15, (int)uVar33 != 0)) {
      local_80 = local_70;
      local_70[0] = uVar33 & 0xffffffff00000000 | (ulong)*(uint *)(uVar33 + 3);
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
               ::
               __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::AllocationSite&&>,std::__ndk1::tuple<>>
                         ((AllocationSite *)(this + 0x50),(piecewise_construct_t *)local_70,
                          (tuple *)&DAT_019c6624,(tuple *)&local_80);
      *(long *)(lVar35 + 0x18) = *(long *)(lVar35 + 0x18) + 1;
    }
  }
  *param_2 = *param_2 & 2 | (uint)puVar16;
  if (5 < bVar5) {
    Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Push
              (*(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x38),puVar16,uVar29);
  }
  *(long *)(this + 0x78) = *(long *)(this + 0x78) + (long)(int)uVar14;
  return 0;
LAB_010064b4:
  uVar8 = puVar24[bVar13];
  if ((uVar20 & (uVar8 ^ 0xffffffff)) == 0) goto LAB_010066dc;
  while (*puVar3 == uVar8) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar10) {
      *puVar3 = uVar8 | uVar20;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') {
      iVar15 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar16 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar16 - 1))
      ;
      plVar1 = (long *)(uVar34 + 0x68);
      do {
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = *plVar1 + (long)iVar15;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      goto LAB_010066dc;
    }
  }
  ClearExclusiveLocal();
  goto LAB_010064b4;
LAB_010063b4:
  uVar8 = puVar24[bVar13];
  if ((uVar20 & (uVar8 ^ 0xffffffff)) == 0) goto LAB_010065bc;
  while (*puVar3 == uVar8) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar10) {
      *puVar3 = uVar8 | uVar20;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') {
      iVar15 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar16 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar16 + -1)
                         );
      plVar1 = (long *)(uVar34 + 0x68);
      do {
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = *plVar1 + (long)iVar15;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      goto LAB_010065bc;
    }
  }
  ClearExclusiveLocal();
  goto LAB_010063b4;
LAB_01006434:
  uVar8 = puVar24[bVar13];
  if ((uVar20 & (uVar8 ^ 0xffffffff)) == 0) goto LAB_010066dc;
  while (*puVar3 == uVar8) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar10) {
      *puVar3 = uVar8 | uVar20;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') {
      iVar15 = HeapObject::SizeFromMap
                         ((HeapObject *)&local_80,
                          (ulong)puVar16 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar16 - 1))
      ;
      plVar1 = (long *)(uVar34 + 0x68);
      do {
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = *plVar1 + (long)iVar15;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      goto LAB_010066dc;
    }
  }
  ClearExclusiveLocal();
  goto LAB_01006434;
}

