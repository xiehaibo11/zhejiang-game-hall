
undefined1  [16] FUN_012231b0(ThreadImpl *param_1,int param_2,uint param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  long lVar9;
  Zone *this;
  SideTable *this_00;
  ulong uVar10;
  ulong *puVar11;
  Isolate *pIVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  ulong *local_80;
  ulong *local_78;
  uint local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pIVar12 = *(Isolate **)(param_1 + 8);
  uVar1 = *(undefined8 *)(pIVar12 + 0x95a0);
  lVar2 = *(long *)(pIVar12 + 0x95a8);
  *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + 1;
  iVar6 = *(int *)(*(long *)(*(long *)(*(long *)param_1 + 8) + 0x70) + (param_4 & 0xffffffff) * 4);
  uVar4 = v8::internal::WasmInstanceObject::IndirectFunctionTableSize
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  if (param_3 < uVar4) {
    if (param_2 == 0) {
      local_78 = (ulong *)0x0;
      local_80 = *(ulong **)(param_1 + 0x10);
    }
    else {
      local_80 = (ulong *)0x0;
      uVar10 = **(ulong **)(param_1 + 0x10);
      pIVar7 = (Isolate *)(uVar10 & 0xffffffff00000000);
      uVar10 = (ulong)pIVar7 |
               (ulong)*(uint *)(((ulong)pIVar7 | (ulong)*(uint *)(uVar10 + 0x93)) +
                                (long)(param_2 << 2) + 7);
      if (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8) == (CanonicalHandleScope *)0x0) {
        local_78 = *(ulong **)(pIVar7 + 0x95a0);
        if (local_78 == *(ulong **)(pIVar7 + 0x95a8)) {
          local_78 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = local_78 + 1;
        *local_78 = uVar10;
      }
      else {
        local_78 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8),uVar10);
      }
    }
    local_70 = param_3;
    iVar5 = v8::internal::IndirectFunctionTableEntry::sig_id
                      ((IndirectFunctionTableEntry *)&local_80);
    if (iVar5 != iVar6) {
      uVar15 = 0;
      uVar10 = 2;
      goto joined_r0x01223480;
    }
    uVar13 = *(undefined8 *)
              (*(long *)(*(long *)(*(long *)param_1 + 8) + 0x58) + (param_4 & 0xffffffff) * 8);
    uVar10 = v8::internal::IndirectFunctionTableEntry::object_ref
                       ((IndirectFunctionTableEntry *)&local_80);
    pIVar7 = *(Isolate **)(param_1 + 8);
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar7 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar8 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar10;
    }
    else {
      puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar10);
    }
    pIVar7 = *(Isolate **)(param_1 + 8);
    uVar10 = v8::internal::IndirectFunctionTableEntry::target
                       ((IndirectFunctionTableEntry *)&local_80);
    lVar9 = v8::internal::wasm::ThreadImpl::GetTargetCode(pIVar7,uVar10);
    if (lVar9 == 0) {
      iVar6 = v8::internal::wasm::ThreadImpl::HandleException(param_1,*(Isolate **)(param_1 + 8));
      uVar10 = 4;
      if (iVar6 != 1) {
        uVar10 = 5;
      }
    }
    else {
      uVar10 = *puVar8;
      if ((((uVar10 & 1) == 0) ||
          (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x434))
         || ((puVar11 = *(ulong **)(param_1 + 0x10), puVar11 != puVar8 &&
             (((puVar8 == (ulong *)0x0 || (puVar11 == (ulong *)0x0)) || (*puVar11 != uVar10)))))) {
        auVar16 = FUN_0123efd8(param_1,*(undefined8 *)(param_1 + 8),puVar8,lVar9,uVar13);
        param_1 = auVar16._8_8_;
        uVar10 = auVar16._0_8_;
        uVar15 = uVar10 & 0xffffffff00000000;
        goto joined_r0x01223480;
      }
      puVar14 = *(undefined8 **)param_1;
      param_1 = (ThreadImpl *)(puVar14[2] + (ulong)*(uint *)(lVar9 + 0x38) * 0x58);
      if ((*(long *)(param_1 + 0x50) == 0) &&
         (*(long *)(puVar14[2] + (ulong)*(uint *)(lVar9 + 0x38) * 0x58 + 0x40) != 0)) {
        this = (Zone *)*puVar14;
        this_00 = *(SideTable **)(this + 0x10);
        if ((ulong)(*(long *)(this + 0x18) - (long)this_00) < 0x28) {
          this_00 = (SideTable *)v8::internal::Zone::NewExpand(this,0x28);
        }
        else {
          *(SideTable **)(this + 0x10) = this_00 + 0x28;
        }
        v8::internal::wasm::SideTable::SideTable
                  (this_00,(Zone *)*puVar14,(WasmModule *)puVar14[1],(InterpreterCode *)param_1);
        *(SideTable **)(param_1 + 0x50) = this_00;
      }
      uVar10 = 0;
    }
  }
  else {
    uVar10 = 1;
  }
  uVar15 = 0;
joined_r0x01223480:
  if (pIVar12 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar12 + 0x95a0) = uVar1;
    *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + -1;
    if (*(long *)(pIVar12 + 0x95a8) != lVar2) {
      *(long *)(pIVar12 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(pIVar12);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar16._0_8_ = uVar15 | uVar10 & 0xffffffff;
  auVar16._8_8_ = param_1;
  return auVar16;
}

