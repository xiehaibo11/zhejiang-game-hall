
/* v8::internal::Map::UpdateFieldType(v8::internal::Isolate*, v8::internal::InternalIndex,
   v8::internal::Handle<v8::internal::Name>, v8::internal::PropertyConstness,
   v8::internal::Representation, v8::internal::MaybeObjectHandle const&) */

void __thiscall
v8::internal::Map::UpdateFieldType
          (Map *this,long param_1,long param_3,undefined8 param_4,uint param_5,uint param_6,
          long param_7)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  uint *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong local_158;
  long *local_150;
  long *plStack_148;
  long *local_140;
  long local_138;
  Zone *local_130;
  long *local_128;
  ulong local_120;
  long local_118;
  Zone *local_110;
  long *local_108;
  Descriptor aDStack_f8 [32];
  long local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  ulong local_c0;
  int local_b8;
  Zone aZStack_b0 [64];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar7 = *(ulong *)this;
  uVar14 = param_3 * 0xc00000000 + 0x1000000000 >> 0x20;
  uVar16 = uVar14 | 3;
  uVar5 = *(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x17)) + uVar16);
  if ((uVar5 >> 2 & 1) == 0) {
    if (((uVar5 >> 3 & 1) != param_5) && ((*(uint *)(uVar7 + 0xb) >> 0x14 & 1) != 0)) {
      JSObject::InvalidatePrototypeChains();
    }
    Zone::Zone(aZStack_b0,*(AccountingAllocator **)(param_1 + 0x95d0),"../../src/objects/map.cc:677"
              );
    local_128 = (long *)0x0;
    local_120 = 0;
    local_118 = 0;
    plStack_148 = (long *)0x0;
    local_150 = (long *)0x0;
    local_138 = 0;
    local_140 = (long *)0x0;
    local_108 = (long *)0x0;
    local_130 = aZStack_b0;
    local_110 = aZStack_b0;
    std::__ndk1::deque<v8::internal::Map,v8::internal::RecyclingZoneAllocator<v8::internal::Map>>::
    __add_back_capacity((deque<v8::internal::Map,v8::internal::RecyclingZoneAllocator<v8::internal::Map>>
                         *)&local_150);
    *(undefined8 *)
     (*(long *)((long)plStack_148 + (local_120 + local_118 >> 6 & 0x3fffffffffffff8)) +
     (local_120 + local_118 & 0x1ff) * 8) = *(undefined8 *)this;
    bVar4 = local_118 != -1;
    local_118 = local_118 + 1;
    if (bVar4) {
      do {
        local_118 = local_118 + -1;
        uVar17 = *(ulong *)(*(long *)((long)plStack_148 + (local_120 >> 6 & 0x3fffffffffffff8)) +
                           (local_120 & 0x1ff) * 8);
        uVar7 = local_120 + 1;
        if (0x3ff < local_120 + 1) {
          plVar11 = (long *)*plStack_148;
          if ((local_108 == (long *)0x0) || ((ulong)local_108[1] < 0x201)) {
            plVar11[1] = 0x200;
            *plVar11 = (long)local_108;
            local_108 = plVar11;
          }
          plStack_148 = plStack_148 + 1;
          uVar7 = local_120 - 0x1ff;
        }
        local_120 = uVar7;
        uStack_d0 = 0;
        local_c0 = (ulong)*(uint *)(uVar17 + 0x23) + param_1;
        iVar6 = 1;
        local_d8 = param_1;
        local_c8 = uVar17;
        if (((local_c0 & 1) != 0) && ((int)local_c0 != 3)) {
          uVar7 = local_c0 & 3;
          iVar6 = (int)uVar7;
          if (uVar7 != 3) {
            if (uVar7 != 1) {
LAB_010ea9b0:
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            uVar7 = local_c0 & 0xffffffff00000000 | 7;
            if (*(short *)(uVar7 + *(uint *)(local_c0 - 1)) == 0x98) {
              iVar6 = 4;
            }
            else {
              iVar6 = (uint)(*(short *)(uVar7 + *(uint *)(local_c0 - 1)) != 100) << 1;
            }
          }
        }
        local_b8 = iVar6;
        uVar5 = TransitionsAccessor::NumberOfTransitions((TransitionsAccessor *)&local_d8);
        if (0 < (int)uVar5) {
          lVar15 = 0;
          do {
            if (local_b8 == 3) {
              uVar7 = local_c0 & 0xfffffffffffffffd;
            }
            else {
              if (local_b8 != 4) goto LAB_010ea9b0;
              uVar7 = local_c0 & 0xffffffff00000000 |
                      (ulong)*(uint *)(local_c0 + (long)((int)lVar15 + 0xc) + 7) & 0xfffffffd;
            }
            uVar1 = 0;
            if ((long)local_140 - (long)plStack_148 != 0) {
              uVar1 = ((long)local_140 - (long)plStack_148) * 0x40 - 1;
            }
            uVar10 = local_118 + local_120;
            if (uVar1 == uVar10) {
              std::__ndk1::
              deque<v8::internal::Map,v8::internal::RecyclingZoneAllocator<v8::internal::Map>>::
              __add_back_capacity((deque<v8::internal::Map,v8::internal::RecyclingZoneAllocator<v8::internal::Map>>
                                   *)&local_150);
              uVar10 = local_120 + local_118;
            }
            lVar15 = lVar15 + 8;
            *(ulong *)(*(long *)((long)plStack_148 + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                      (uVar10 & 0x1ff) * 8) = uVar7;
            local_118 = local_118 + 1;
          } while ((ulong)uVar5 * 8 - lVar15 != 0);
        }
        local_158 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + 0x17);
        puVar9 = (uint *)(local_158 + uVar16);
        uVar5 = (int)*puVar9 >> 1;
        if (((uVar5 >> 2 & 1) == param_5) && ((uVar5 >> 6 & 7) == (param_6 & 0xff))) {
          uVar2 = *(uint *)(uVar14 + 7 + local_158);
          uVar7 = (ulong)uVar2;
          if (uVar2 == 3) {
            iVar6 = FieldType::None();
            piVar8 = *(int **)(param_7 + 8);
          }
          else {
            if ((~uVar2 & 3) == 0) {
              uVar7 = uVar7 & 0xfffffffffffffffd;
            }
            iVar6 = FieldType::cast(uVar17 & 0xffffffff00000000 | uVar7);
            piVar8 = *(int **)(param_7 + 8);
          }
          if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
          if (iVar6 != *piVar8) {
            puVar9 = (uint *)(local_158 + uVar16);
            goto LAB_010ea644;
          }
        }
        else {
LAB_010ea644:
          Descriptor::DataField
                    (aDStack_f8,param_4,*puVar9 >> 0x14 & 0x3ff,uVar5 >> 3 & 7,param_5,
                     param_6 & 0xff,param_7);
          DescriptorArray::Replace((DescriptorArray *)&local_158,param_3,aDStack_f8);
        }
      } while (local_118 != 0);
    }
    std::__ndk1::
    __deque_base<v8::internal::Map,v8::internal::RecyclingZoneAllocator<v8::internal::Map>>::clear
              ((__deque_base<v8::internal::Map,v8::internal::RecyclingZoneAllocator<v8::internal::Map>>
                *)&local_150);
    if (plStack_148 != local_140) {
      plVar13 = (long *)*plStack_148;
      plVar11 = plStack_148;
      plVar12 = local_108;
      if (local_108 != (long *)0x0) goto LAB_010ea900;
      do {
        plVar12 = plVar13;
        plVar12[1] = 0x200;
        *plVar12 = (long)local_108;
        local_108 = plVar12;
        do {
          plVar11 = plVar11 + 1;
          if (local_140 == plVar11) {
            if ((long)local_140 - (long)plStack_148 != 0) {
              local_140 = local_140 +
                          (((long)local_140 - (long)plStack_148) - 8U >> 3 ^ 0xffffffffffffffff);
            }
            goto LAB_010ea930;
          }
          plVar13 = (long *)*plVar11;
          if (plVar12 == (long *)0x0) break;
LAB_010ea900:
        } while (0x200 < (ulong)plVar12[1]);
      } while( true );
    }
LAB_010ea930:
    if (((local_150 != (long *)0x0) && (0xf < (ulong)(local_138 - (long)local_150))) &&
       ((uVar7 = local_138 - (long)local_150 >> 3, local_128 == (long *)0x0 ||
        ((ulong)local_128[1] <= uVar7)))) {
      local_150[1] = uVar7;
      *local_150 = (long)local_128;
      local_128 = local_150;
    }
    Zone::~Zone(aZStack_b0);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

