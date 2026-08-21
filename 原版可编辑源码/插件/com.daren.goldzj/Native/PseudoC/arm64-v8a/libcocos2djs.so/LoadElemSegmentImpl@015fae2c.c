
/* v8::internal::wasm::LoadElemSegmentImpl(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>,
   v8::internal::Handle<v8::internal::WasmTableObject>, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned long) */

void v8::internal::wasm::LoadElemSegmentImpl
               (long param_1,ulong *param_2,ulong *param_3,int param_4,uint param_5,uint param_6,
               uint param_7,ulong param_8)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  uint *puVar11;
  Isolate *pIVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *local_80;
  ulong *local_78;
  uint local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_80 = (ulong *)*param_2;
  lVar6 = WasmInstanceObject::module((WasmInstanceObject *)&local_80);
  uVar7 = 0;
  uVar16 = (long)((ulong)*(uint *)(*param_3 + 0xf) << 0x20) >> 0x21;
  if ((param_8 <= uVar16) && ((ulong)param_6 <= uVar16 - param_8)) {
    uVar16 = (ulong)param_5;
    lVar6 = *(long *)(lVar6 + 0x118);
    if (*(char *)(*(long *)((long)*param_2 + 0xbb) + uVar16) == '\0') {
      lVar8 = lVar6 + uVar16 * 0x38;
      uVar10 = *(long *)(lVar8 + 0x20) - *(long *)(lVar8 + 0x18) >> 2;
    }
    else {
      uVar10 = 0;
    }
    uVar7 = 0;
    if ((param_8 <= uVar10) && ((ulong)param_7 <= uVar10 - param_8)) {
      local_80 = (ulong *)*param_2;
      lVar8 = WasmInstanceObject::module((WasmInstanceObject *)&local_80);
      if (param_8 != 0) {
        iVar18 = param_6 << 2;
        lVar15 = (ulong)param_7 << 2;
        lVar1 = (long)(param_4 << 2) + 7;
        do {
          uVar3 = *(uint *)(*(long *)(lVar6 + uVar16 * 0x38 + 0x18) + lVar15);
          if (uVar3 == 0xffffffff) {
            lVar17 = param_1 + 0xb0;
            if ((*(uint *)(*param_3 + 0x1b) >> 1 & 0xff) == 7) {
              if (param_4 == 0) {
                puVar9 = (ulong *)0x0;
                local_80 = param_2;
              }
              else {
                local_80 = (ulong *)0x0;
                pIVar12 = (Isolate *)(*param_2 & 0xffffffff00000000);
                uVar10 = (ulong)pIVar12 |
                         (ulong)*(uint *)(lVar1 + ((ulong)pIVar12 |
                                                  (ulong)*(uint *)(*param_2 + 0x93)));
                if (*(CanonicalHandleScope **)((ulong)pIVar12 | 0x95b8) ==
                    (CanonicalHandleScope *)0x0) {
                  puVar9 = *(ulong **)(pIVar12 + 0x95a0);
                  if (puVar9 == *(ulong **)(pIVar12 + 0x95a8)) {
                    puVar9 = (ulong *)HandleScope::Extend(pIVar12);
                  }
                  *(ulong **)(pIVar12 + 0x95a0) = puVar9 + 1;
                  *puVar9 = uVar10;
                }
                else {
                  puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                              (*(CanonicalHandleScope **)((ulong)pIVar12 | 0x95b8),
                                               uVar10);
                }
              }
              local_78 = puVar9;
              local_70 = param_6;
              IndirectFunctionTableEntry::clear((IndirectFunctionTableEntry *)&local_80);
            }
LAB_015faf70:
            WasmTableObject::Set(param_1,param_3,param_6,lVar17);
          }
          else {
            lVar17 = *(long *)(lVar8 + 0x88);
            puVar11 = (uint *)(*param_3 + 0x1b);
            if ((*puVar11 >> 1 & 0xff) == 7) {
              uVar4 = *(undefined4 *)
                       (*(long *)(lVar8 + 0x70) +
                       (ulong)*(uint *)(lVar17 + (ulong)uVar3 * 0x20 + 0xc) * 4);
              if (param_4 == 0) {
                puVar9 = (ulong *)0x0;
                local_80 = param_2;
              }
              else {
                local_80 = (ulong *)0x0;
                pIVar12 = (Isolate *)(*param_2 & 0xffffffff00000000);
                uVar10 = (ulong)pIVar12 |
                         (ulong)*(uint *)(lVar1 + ((ulong)pIVar12 |
                                                  (ulong)*(uint *)(*param_2 + 0x93)));
                if (*(CanonicalHandleScope **)((ulong)pIVar12 | 0x95b8) ==
                    (CanonicalHandleScope *)0x0) {
                  puVar9 = *(ulong **)(pIVar12 + 0x95a0);
                  if (puVar9 == *(ulong **)(pIVar12 + 0x95a8)) {
                    puVar9 = (ulong *)HandleScope::Extend(pIVar12);
                  }
                  *(ulong **)(pIVar12 + 0x95a0) = puVar9 + 1;
                  *puVar9 = uVar10;
                }
                else {
                  puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                              (*(CanonicalHandleScope **)((ulong)pIVar12 | 0x95b8),
                                               uVar10);
                }
              }
              local_78 = puVar9;
              local_70 = param_6;
              IndirectFunctionTableEntry::Set
                        ((IndirectFunctionTableEntry *)&local_80,uVar4,param_2,uVar3);
              puVar11 = (uint *)(*param_3 + 0x1b);
            }
            if ((*puVar11 >> 1 & 0xff) == 6) {
              lVar17 = WasmInstanceObject::GetOrCreateWasmExternalFunction(param_1,param_2,uVar3);
              goto LAB_015faf70;
            }
            puVar9 = (ulong *)WasmInstanceObject::GetWasmExternalFunction(param_1,param_2,uVar3);
            if (puVar9 == (ulong *)0x0) {
              WasmTableObject::SetFunctionTablePlaceholder(param_1,param_3,param_6,param_2,uVar3);
            }
            else {
              uVar20 = *puVar9;
              uVar13 = (ulong)*(uint *)(*param_3 + 0xb);
              uVar10 = *param_3 & 0xffffffff00000000;
              uVar19 = uVar10 | uVar13;
              *(int *)(uVar19 + (long)iVar18 + 7) = (int)uVar20;
              if ((uVar20 & 1) != 0) {
                uVar14 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
                lVar2 = uVar19 + (long)iVar18 + 7;
                if (((uint)uVar14 >> 0x12 & 1) != 0) {
                  Heap_MarkingBarrierSlow(uVar19,lVar2,uVar20);
                  uVar14 = *(ulong *)(uVar20 & 0xfffffffffffc0000 | 8);
                }
                if (((uVar14 & 0x18) != 0) &&
                   ((*(byte *)((uVar10 | uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                  Heap_GenerationalBarrierSlow(uVar19,lVar2,uVar20);
                }
              }
            }
            WasmTableObject::UpdateDispatchTables
                      (param_1,param_3,param_6,*(undefined8 *)(lVar17 + (ulong)uVar3 * 0x20),param_2
                       ,uVar3);
          }
          param_8 = param_8 - 1;
          param_6 = param_6 + 1;
          iVar18 = iVar18 + 4;
          lVar15 = lVar15 + 4;
        } while (param_8 != 0);
      }
      uVar7 = 1;
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

