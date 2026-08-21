
/* v8::internal::wasm::NativeModule::PublishCodeLocked(std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,
   std::__ndk1::default_delete<v8::internal::wasm::WasmCode> >) */

ulong * __thiscall
v8::internal::wasm::NativeModule::PublishCodeLocked(NativeModule *this,long *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  __tree_node_base *p_Var8;
  ulong extraout_x1;
  ulong extraout_x1_00;
  uint uVar9;
  uint uVar10;
  long lVar11;
  WasmCode *this_00;
  void *__s;
  ulong *puVar12;
  WasmCode *pWVar13;
  NativeModule *pNVar14;
  ulong uVar15;
  ulong uVar16;
  NativeModule *pNVar17;
  NativeModule *pNVar18;
  WasmCode *local_38;
  
  pWVar13 = (WasmCode *)*param_2;
  uVar9 = *(uint *)(pWVar13 + 0x38);
  if ((uVar9 == 0xffffffff) || (uVar10 = *(uint *)(*(long *)(this + 200) + 0x3c), uVar9 < uVar10))
  goto LAB_01202178;
  if ((*(int *)(pWVar13 + 0x3c) == 0) && (*(ulong *)(pWVar13 + 0x80) != 0)) {
    iVar6 = trap_handler::RegisterHandlerData
                      (*(ulong *)pWVar13,*(ulong *)(pWVar13 + 8),*(ulong *)(pWVar13 + 0x80),
                       *(ProtectedInstructionData **)(pWVar13 + 0x78));
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 <= index");
    }
    if (-1 < *(int *)(pWVar13 + 0x70)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!has_trap_handler_index()");
    }
    *(int *)(pWVar13 + 0x70) = iVar6;
    pWVar13 = (WasmCode *)*param_2;
    uVar9 = *(uint *)(pWVar13 + 0x38);
    uVar10 = *(uint *)(*(long *)(this + 200) + 0x3c);
  }
  lVar11 = *(long *)(this + 0x150);
  uVar9 = uVar9 - uVar10;
  uVar15 = (ulong)uVar9;
  this_00 = *(WasmCode **)(lVar11 + uVar15 * 8);
  if (this_00 == (WasmCode *)0x0) {
    *(WasmCode **)(lVar11 + uVar15 * 8) = pWVar13;
LAB_01202058:
    if (*(long *)(this + 0x158) == 0) {
      bVar5 = true;
    }
    else {
      uVar10 = *(int *)(*param_2 + 0x38) - *(int *)(*(long *)(this + 200) + 0x3c);
      bVar5 = (*(byte *)(*(long *)(this + 0x158) + (ulong)(uVar10 >> 3)) >> (ulong)(uVar10 & 7) & 1)
              == 0;
    }
  }
  else {
    if ((char)this_00[0x88] < (char)pWVar13[0x88]) {
      *(WasmCode **)(lVar11 + uVar15 * 8) = pWVar13;
      local_38 = this_00;
      plVar7 = (long *)__emutls_get_address(&DAT_01d35888);
      std::__ndk1::
      __hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
      ::__emplace_unique_key_args<v8::internal::wasm::WasmCode*,v8::internal::wasm::WasmCode*const&>
                ((__hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
                  *)(*plVar7 + 8),&local_38,&local_38);
      if ((extraout_x1 & 1) != 0) {
        pWVar13 = local_38 + 0x8c;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pWVar13,0x10);
          if (bVar5) {
            *(int *)pWVar13 = *(int *)pWVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pWVar13 = this_00 + 0x8c;
      iVar6 = *(int *)pWVar13;
      do {
        while( true ) {
          if (iVar6 == 1) {
            uVar15 = WasmCode::DecRefOnPotentiallyDeadCode(this_00);
            if ((uVar15 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","!prior_code->DecRef()");
            }
            goto LAB_01202058;
          }
          iVar2 = *(int *)pWVar13;
          if (iVar2 == iVar6) break;
          ClearExclusiveLocal();
          iVar6 = iVar2;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pWVar13,0x10);
        if (bVar5) {
          *(int *)pWVar13 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar6 = iVar2;
      } while (cVar4 != '\0');
      goto LAB_01202058;
    }
    bVar5 = false;
  }
  pWVar13 = (WasmCode *)*param_2;
  if (*(int *)(pWVar13 + 0x3c) == 3) {
    iVar6 = *(int *)(pWVar13 + 0x38);
    __s = *(void **)(this + 0x158);
    lVar11 = *(long *)(this + 200);
    if (__s == (void *)0x0) {
      uVar15 = (ulong)(*(int *)(lVar11 + 0x44) + 7U >> 3);
      __s = operator_new__(uVar15);
      memset(__s,0,uVar15);
      *(void **)(this + 0x158) = __s;
    }
    uVar10 = iVar6 - *(int *)(lVar11 + 0x3c);
    uVar15 = (ulong)(uVar10 >> 3);
    *(byte *)((long)__s + uVar15) = *(byte *)((long)__s + uVar15) | (byte)(1 << (ulong)(uVar10 & 7))
    ;
    pWVar13 = (WasmCode *)*param_2;
  }
  else if (!bVar5) goto LAB_01202178;
  lVar11 = *(long *)(this + 0x160);
  lVar3 = *(long *)(this + 0x168);
  if (lVar11 != lVar3) {
    uVar15 = *(ulong *)pWVar13;
    uVar16 = (ulong)(uVar9 * 0x10 + 0x210);
    plVar7 = *(long **)(lVar11 + 0x10);
    while( true ) {
      if (plVar7 != (long *)0x0) {
        uVar1 = **(long **)(lVar11 + 0x18) + uVar16;
        if ((ulong)(*(long **)(lVar11 + 0x18))[1] <= uVar16) {
          uVar1 = 0;
        }
        JumpTableAssembler::PatchJumpTableSlot(*plVar7 + (ulong)(uVar9 * 4),uVar1,uVar15);
      }
      if (lVar3 == lVar11 + 0x20) break;
      plVar7 = *(long **)(lVar11 + 0x30);
      lVar11 = lVar11 + 0x20;
    }
    pWVar13 = (WasmCode *)*param_2;
  }
LAB_01202178:
  local_38 = pWVar13;
  plVar7 = (long *)__emutls_get_address(&DAT_01d35888);
  std::__ndk1::
  __hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
  ::__emplace_unique_key_args<v8::internal::wasm::WasmCode*,v8::internal::wasm::WasmCode*const&>
            ((__hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
              *)(*plVar7 + 8),&local_38,&local_38);
  if ((extraout_x1_00 & 1) != 0) {
    pWVar13 = local_38 + 0x8c;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pWVar13,0x10);
      if (bVar5) {
        *(int *)pWVar13 = *(int *)pWVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar12 = (ulong *)*param_2;
  pNVar14 = this + 0x140;
  uVar15 = *puVar12;
  pNVar17 = *(NativeModule **)(this + 0x140);
  pNVar18 = pNVar14;
  while (pNVar17 != (NativeModule *)0x0) {
    while (pNVar18 = pNVar17, uVar15 < *(ulong *)(pNVar18 + 0x20)) {
      pNVar14 = pNVar18;
      pNVar17 = *(NativeModule **)pNVar18;
      if (*(NativeModule **)pNVar18 == (NativeModule *)0x0) {
        lVar11 = *(long *)pNVar18;
        goto joined_r0x01202250;
      }
    }
    if (uVar15 <= *(ulong *)(pNVar18 + 0x20)) break;
    pNVar14 = pNVar18 + 8;
    pNVar17 = *(NativeModule **)pNVar14;
  }
  lVar11 = *(long *)pNVar14;
joined_r0x01202250:
  if (lVar11 == 0) {
    p_Var8 = operator_new(0x30);
    *(ulong *)(p_Var8 + 0x20) = uVar15;
    *(ulong **)(p_Var8 + 0x28) = puVar12;
    *param_2 = 0;
    *(undefined8 *)p_Var8 = 0;
    *(undefined8 *)(p_Var8 + 8) = 0;
    *(NativeModule **)(p_Var8 + 0x10) = pNVar18;
    *(__tree_node_base **)pNVar14 = p_Var8;
    if (**(long **)(this + 0x138) != 0) {
      *(long *)(this + 0x138) = **(long **)(this + 0x138);
      p_Var8 = *(__tree_node_base **)pNVar14;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x140),p_Var8);
    *(long *)(this + 0x148) = *(long *)(this + 0x148) + 1;
  }
  return puVar12;
}

