
/* v8::internal::WasmCompiledFrame::Summarize(std::__ndk1::vector<v8::internal::FrameSummary,
   std::__ndk1::allocator<v8::internal::FrameSummary> >*) const */

void __thiscall v8::internal::WasmCompiledFrame::Summarize(WasmCompiledFrame *this,vector *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined1 uVar5;
  int *piVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  ulong *local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  int *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined3 uStack_8c;
  WasmCodeRefScope aWStack_88 [48];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  wasm::WasmCodeRefScope::WasmCodeRefScope(aWStack_88);
  piVar6 = (int *)wasm::WasmCodeManager::LookupCode
                            (*(WasmCodeManager **)(*(long *)(this + 0x10) + 0xc770),
                             **(ulong **)(this + 0x28));
  pIVar7 = *(Isolate **)(this + 0x10);
  uVar9 = *(ulong *)(*(long *)(this + 0x20) + -0x10);
  iVar2 = **(int **)(this + 0x28) - *piVar6;
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar9;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar9);
  }
  uVar10 = *(undefined8 *)(this + 0x10);
  uVar5 = at_to_number_conversion(this);
  uStack_c0 = 1;
  uStack_b0._1_3_ = (undefined3)uStack_90;
  uVar4 = CONCAT31(uStack_b0._1_3_,uVar5);
  uStack_b0 = uVar4 & 0xffffff01;
  uStack_ac = CONCAT31(uStack_8c,(char)((uint)uStack_90 >> 0x18));
  puVar1 = *(undefined8 **)(param_1 + 8);
  local_c8 = uVar10;
  local_b8 = puVar8;
  local_a8 = piVar6;
  iStack_a0 = iVar2;
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    puVar1[6] = local_98;
    puVar1[1] = CONCAT44(uStack_bc,1);
    *puVar1 = uVar10;
    puVar1[3] = CONCAT44(uStack_ac,uVar4) & 0xffffffffffffff01;
    puVar1[2] = puVar8;
    puVar1[5] = CONCAT44(uStack_9c,iVar2);
    puVar1[4] = piVar6;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x38;
  }
  else {
    std::__ndk1::
    vector<v8::internal::FrameSummary,std::__ndk1::allocator<v8::internal::FrameSummary>>::
    __push_back_slow_path<v8::internal::FrameSummary>
              ((vector<v8::internal::FrameSummary,std::__ndk1::allocator<v8::internal::FrameSummary>>
                *)param_1,(FrameSummary *)&local_c8);
  }
  if (uStack_c0 < 3) {
    wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_88);
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

