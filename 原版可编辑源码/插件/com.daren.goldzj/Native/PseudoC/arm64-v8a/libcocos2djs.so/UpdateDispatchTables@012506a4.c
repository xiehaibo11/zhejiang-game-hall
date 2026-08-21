
/* v8::internal::WasmTableObject::UpdateDispatchTables(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmTableObject>, int,
   v8::internal::Signature<v8::internal::wasm::ValueType>*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, int) */

void v8::internal::WasmTableObject::UpdateDispatchTables
               (Isolate *param_1,ulong *param_2,undefined4 param_3,Signature *param_4,ulong *param_5
               ,uint param_6)

{
  long *plVar1;
  Isolate *pIVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  NativeModule *this;
  undefined8 uVar10;
  Isolate *pIVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong *local_80;
  ulong *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar14 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  pIVar2 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar2;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar7 + 1;
    *puVar7 = uVar14;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
    uVar14 = *puVar7;
  }
  if (1 < *(int *)(uVar14 + 3)) {
    iVar16 = 0;
    lVar13 = 0;
    lVar12 = 0x400000000;
    do {
      iVar3 = *(int *)(uVar14 + 7 + (lVar12 >> 0x20)) >> 1;
      uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 7 + (long)iVar16);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar2;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar8 + 1;
        *puVar8 = uVar14;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
        uVar14 = *puVar8;
      }
      uVar6 = wasm::SignatureMap::Find
                        ((SignatureMap *)
                         (*(long *)(**(long **)(*(long *)((uVar14 & 0xffffffff00000000 |
                                                          (ulong)*(uint *)((uVar14 & 
                                                  0xffffffff00000000 |
                                                  (ulong)*(uint *)(uVar14 + 0x6f)) + 0xb)) + 3) +
                                               0x18) + 200) + 0x148),param_4);
      if (iVar3 == 0) {
        puVar9 = (ulong *)0x0;
        local_80 = puVar8;
      }
      else {
        local_80 = (ulong *)0x0;
        pIVar11 = (Isolate *)(*puVar8 & 0xffffffff00000000);
        uVar14 = (ulong)pIVar11 |
                 (ulong)*(uint *)(((ulong)pIVar11 | (ulong)*(uint *)(*puVar8 + 0x93)) +
                                  (long)(iVar3 << 2) + 7);
        if (*(CanonicalHandleScope **)((ulong)pIVar11 | 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)(pIVar11 + 0x95a0);
          if (puVar9 == *(ulong **)(pIVar11 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(pIVar11);
          }
          *(ulong **)(pIVar11 + 0x95a0) = puVar9 + 1;
          *puVar9 = uVar14;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)((ulong)pIVar11 | 0x95b8),uVar14);
        }
      }
      uVar15 = *param_5;
      uVar14 = uVar15 & 0xffffffff00000000;
      this = (NativeModule *)
             **(undefined8 **)
               (*(long *)((uVar14 | *(uint *)((uVar14 | *(uint *)(uVar15 + 0x6f)) + 0xb)) + 3) +
               0x18);
      uVar4 = *(uint *)(*(long *)(this + 200) + 0x3c);
      local_78 = puVar9;
      local_70 = param_3;
      if ((int)param_6 < (int)uVar4) {
        plVar1 = (long *)(uVar15 + 0x2f);
        uVar15 = uVar14 | *(uint *)((long)(int)(param_6 << 2) + 7 +
                                   (uVar14 | *(uint *)(uVar15 + 0x2b)));
        uVar10 = *(undefined8 *)(*plVar1 + (long)(int)param_6 * 8);
      }
      else if (param_6 < uVar4) {
        uVar10 = *(undefined8 *)(*(long *)(uVar15 + 0x2f) + (ulong)param_6 * 8);
      }
      else {
        uVar10 = wasm::NativeModule::GetCallTargetForFunction(this,param_6);
      }
      IndirectFunctionTableEntry::Set((IndirectFunctionTableEntry *)&local_80,uVar6,uVar10,uVar15);
      uVar14 = *puVar7;
      lVar13 = lVar13 + 3;
      iVar16 = iVar16 + 0xc;
      lVar12 = lVar12 + 0xc00000000;
    } while (lVar13 < *(int *)(uVar14 + 3) >> 1);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

