
/* v8::internal::WasmTableObject::ClearDispatchTables(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmTableObject>, int) */

void v8::internal::WasmTableObject::ClearDispatchTables
               (Isolate *param_1,ulong *param_2,undefined4 param_3)

{
  Isolate *pIVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong *local_80;
  ulong *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pIVar1 = param_1 + 0x95a0;
  uVar8 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
    uVar8 = *puVar4;
  }
  if (1 < *(int *)(uVar8 + 3)) {
    iVar9 = 0;
    lVar10 = 0;
    lVar11 = 0x400000000;
    do {
      iVar2 = *(int *)(uVar8 + 7 + (lVar11 >> 0x20)) >> 1;
      uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 7 + (long)iVar9);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)pIVar1;
        if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar6 + 1;
        *puVar6 = uVar8;
        if (iVar2 == 0) goto LAB_012504c4;
LAB_0125055c:
        local_80 = (ulong *)0x0;
        pIVar7 = (Isolate *)(*puVar6 & 0xffffffff00000000);
        uVar8 = (ulong)pIVar7 |
                (ulong)*(uint *)(((ulong)pIVar7 | (ulong)*(uint *)(*puVar6 + 0x93)) +
                                 (long)(iVar2 << 2) + 7);
        if (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)(pIVar7 + 0x95a0);
          if (puVar5 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(pIVar7);
          }
          *(ulong **)(pIVar7 + 0x95a0) = puVar5 + 1;
          *puVar5 = uVar8;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8),uVar8);
        }
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
        if (iVar2 != 0) goto LAB_0125055c;
LAB_012504c4:
        puVar5 = (ulong *)0x0;
        local_80 = puVar6;
      }
      local_78 = puVar5;
      local_70 = param_3;
      IndirectFunctionTableEntry::clear((IndirectFunctionTableEntry *)&local_80);
      uVar8 = *puVar4;
      lVar10 = lVar10 + 3;
      iVar9 = iVar9 + 0xc;
      lVar11 = lVar11 + 0xc00000000;
    } while (lVar10 < *(int *)(uVar8 + 3) >> 1);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

