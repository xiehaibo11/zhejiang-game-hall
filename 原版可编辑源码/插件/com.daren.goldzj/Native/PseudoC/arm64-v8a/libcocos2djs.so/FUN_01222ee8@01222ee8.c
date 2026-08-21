
undefined8 FUN_01222ee8(ThreadImpl *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 uVar8;
  Isolate *pIVar9;
  Isolate *pIVar10;
  undefined8 local_78;
  uint local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pIVar10 = *(Isolate **)(param_1 + 8);
  uVar1 = *(undefined8 *)(pIVar10 + 0x95a0);
  lVar2 = *(long *)(pIVar10 + 0x95a8);
  *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + 1;
  local_78 = *(undefined8 *)(param_1 + 0x10);
  local_70 = param_2;
  uVar5 = v8::internal::ImportedFunctionEntry::object_ref((ImportedFunctionEntry *)&local_78);
  pIVar9 = *(Isolate **)(param_1 + 8);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar5;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar5);
  }
  pIVar9 = *(Isolate **)(param_1 + 8);
  uVar5 = v8::internal::ImportedFunctionEntry::target((ImportedFunctionEntry *)&local_78);
  lVar7 = v8::internal::wasm::ThreadImpl::GetTargetCode(pIVar9,uVar5);
  if (lVar7 == 0) {
    iVar4 = v8::internal::wasm::ThreadImpl::HandleException(param_1,*(Isolate **)(param_1 + 8));
    uVar8 = 4;
    if (iVar4 != 1) {
      uVar8 = 5;
    }
  }
  else {
    uVar8 = FUN_0123efd8(param_1,*(undefined8 *)(param_1 + 8),puVar6,lVar7,
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)param_1 + 8) + 0x88) + (ulong)param_2 * 0x20
                          ));
  }
  if (pIVar10 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar10 + 0x95a0) = uVar1;
    *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + -1;
    if (*(long *)(pIVar10 + 0x95a8) != lVar2) {
      *(long *)(pIVar10 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(pIVar10);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

