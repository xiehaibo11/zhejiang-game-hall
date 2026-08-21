
/* v8::internal::WasmInstanceObject::EnsureIndirectFunctionTableWithMinimumSize(v8::internal::Handle<v8::internal::WasmInstanceObject>,
   int, unsigned int) */

void v8::internal::WasmInstanceObject::EnsureIndirectFunctionTableWithMinimumSize
               (ulong *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  long lVar10;
  Isolate *pIVar11;
  Isolate *pIVar12;
  void *pvVar13;
  ulong uVar14;
  uint uVar15;
  uint *puVar16;
  ulong *local_80;
  undefined8 uStack_78;
  uint local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar7 = *param_1;
  pIVar12 = (Isolate *)(uVar7 & 0xffffffff00000000);
  if (param_2 < 1) {
    uVar15 = *(uint *)(uVar7 + 0x4b);
    if (param_3 <= uVar15) {
      uVar6 = 0;
      goto LAB_0124fe2c;
    }
    puVar16 = (uint *)**(undefined8 **)
                        (*(long *)(((ulong)pIVar12 | (ulong)*(uint *)(uVar7 + 0x97)) + 3) + 0x18);
    if (*puVar16 < param_3) {
      uVar6 = *(undefined8 *)(pIVar12 + 0x95a0);
      pIVar9 = pIVar12 + 0x95a8;
      lVar10 = *(long *)pIVar9;
      pIVar11 = pIVar12 + 0x95b0;
      *(int *)pIVar11 = *(int *)pIVar11 + 1;
      uVar2 = *puVar16;
      uVar1 = uVar2 << 1;
      if (uVar2 << 1 <= param_3) {
        uVar1 = param_3;
      }
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","kMaxInt >= old_capacity");
      }
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","kMaxInt >= new_capacity");
      }
      uVar7 = *param_1;
      pvVar13 = *(void **)(puVar16 + 2);
      uVar14 = (ulong)uVar1 << 2;
      pvVar5 = operator_new__(uVar14);
      memset(pvVar5,0,uVar14);
      if (uVar2 != 0) {
        memmove(pvVar5,pvVar13,(ulong)uVar2 << 2);
        pvVar13 = *(void **)(puVar16 + 2);
      }
      *(void **)(puVar16 + 2) = pvVar5;
      if (pvVar13 != (void *)0x0) {
        operator_delete__(pvVar13);
        pvVar5 = *(void **)(puVar16 + 2);
      }
      uVar14 = (ulong)uVar1 << 3;
      *(void **)(uVar7 + 0x43) = pvVar5;
      uVar7 = *param_1;
      pvVar13 = *(void **)(puVar16 + 4);
      pvVar5 = operator_new__(uVar14);
      memset(pvVar5,0,uVar14);
      if (uVar2 != 0) {
        memmove(pvVar5,pvVar13,(ulong)uVar2 << 3);
        pvVar13 = *(void **)(puVar16 + 4);
      }
      *(void **)(puVar16 + 4) = pvVar5;
      if (pvVar13 != (void *)0x0) {
        operator_delete__(pvVar13);
        pvVar5 = *(void **)(puVar16 + 4);
      }
      *(void **)(uVar7 + 0x3b) = pvVar5;
      uVar7 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0x37);
      if (*(CanonicalHandleScope **)(pIVar12 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar12 + 0x95a0);
        if (puVar4 == *(ulong **)pIVar9) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar12);
        }
        *(ulong **)(pIVar12 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar7;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar12 + 0x95b8),uVar7);
      }
      puVar4 = (ulong *)Factory::CopyFixedArrayAndGrow(pIVar12,puVar4,uVar1 - uVar2);
      uVar14 = *param_1;
      uVar7 = *puVar4;
      *(int *)(uVar14 + 0x37) = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar8 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x37,uVar7);
          uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x37,uVar7);
        }
      }
      *puVar16 = uVar1;
      *(undefined8 *)(pIVar12 + 0x95a0) = uVar6;
      *(int *)pIVar11 = *(int *)pIVar11 + -1;
      if (*(long *)pIVar9 != lVar10) {
        *(long *)pIVar9 = lVar10;
        HandleScope::DeleteExtensions(pIVar12);
      }
    }
    *(uint *)(*param_1 + 0x4b) = param_3;
    do {
      uStack_78 = 0;
      local_80 = param_1;
      local_70 = uVar15;
      IndirectFunctionTableEntry::clear((IndirectFunctionTableEntry *)&local_80);
      uVar15 = uVar15 + 1;
    } while (param_3 != uVar15);
  }
  else {
    uVar7 = (ulong)pIVar12 |
            (ulong)*(uint *)(((ulong)pIVar12 | (ulong)*(uint *)(uVar7 + 0x93)) +
                             (long)(param_2 << 2) + 7);
    if (*(CanonicalHandleScope **)(pIVar12 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar12 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar12 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar12);
      }
      *(ulong **)(pIVar12 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar12 + 0x95b8),uVar7);
    }
    WasmIndirectFunctionTable::Resize(pIVar12,puVar4,param_3);
  }
  uVar6 = 1;
LAB_0124fe2c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

