
/* v8::internal::wasm::NativeModule::AddCodeForTesting(v8::internal::Handle<v8::internal::Code>) */

undefined8 __thiscall
v8::internal::wasm::NativeModule::AddCodeForTesting(NativeModule *this,ulong *param_2)

{
  Mutex *this_00;
  uint uVar1;
  uint uVar2;
  Instruction *this_01;
  int iVar3;
  int iVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  void *__dest;
  void *__src;
  void *__dest_00;
  long lVar7;
  long lVar8;
  WasmCode *this_02;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  size_t __n;
  long lVar15;
  undefined1 auVar16 [16];
  long local_120;
  void *local_108;
  ulong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  WasmCode *local_e8 [2];
  Instruction *local_d8;
  char local_d0;
  char local_b0;
  ulong local_a8 [2];
  RelocInfo aRStack_98 [56];
  
  uVar10 = *param_2;
  if ((*(int *)(uVar10 + 0x17) < 0) ||
     (uVar1 = *(uint *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 3)) + 3),
     (int)uVar1 >> 1 == 0)) {
    local_108 = (void *)0x0;
    local_100 = 0;
  }
  else {
    local_100 = (long)((ulong)uVar1 << 0x20) >> 0x21;
    local_108 = operator_new__(local_100);
    memcpy(local_108,(void *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3)) + 7),
           local_100);
    uVar10 = *param_2;
  }
  pIVar5 = (Isolate *)(uVar10 & 0xffffffff00000000);
  uVar14 = (ulong)pIVar5 | (ulong)*(uint *)(uVar10 + 0xb);
  if (((*(uint *)(uVar10 + 0xb) & 1) == 0) ||
     (*(short *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0x85)) {
    uVar14 = (ulong)pIVar5 | (ulong)*(uint *)(uVar14 + 3);
  }
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar14;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar14);
    uVar14 = *puVar6;
  }
  uVar1 = *(uint *)(uVar14 + 3);
  uVar11 = (ulong)uVar1;
  uVar10 = (long)(uVar11 << 0x20) >> 0x21;
  if ((int)uVar1 >> 1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = operator_new__(uVar10);
    uVar14 = *puVar6;
    uVar1 = *(uint *)(uVar14 + 3);
    uVar11 = (ulong)uVar1;
  }
  if (1 < (int)uVar1) {
    memcpy(__dest,(void *)(uVar14 + 7),uVar11 >> 1);
  }
  local_a8[0] = *param_2;
  if (*(int *)(local_a8[0] + 0x17) < 0) {
    __src = (void *)Code::OffHeapInstructionStart((Code *)local_a8);
  }
  else {
    __src = (void *)(local_a8[0] + 0x3f);
  }
  local_e8[0] = (WasmCode *)*param_2;
  if (*(int *)(local_e8[0] + 0x17) < 0) {
    iVar3 = Code::OffHeapInstructionSize((Code *)local_e8);
  }
  else {
    iVar3 = *(int *)(local_e8[0] + 0x13);
  }
  local_a8[0] = *param_2;
  __n = (size_t)iVar3;
  uVar2 = *(uint *)(local_a8[0] + 0x17);
  uVar1 = uVar2 >> 7 & 0xffffff;
  if ((uVar2 & 0x3e) != 10 && (uVar2 & 0x40) == 0) {
    uVar1 = 0;
  }
  uVar14 = Code::has_safepoint_table((Code *)local_a8);
  if ((uVar14 & 1) == 0) {
    local_120 = 0;
  }
  else {
    local_120 = (long)*(int *)(*param_2 + 0x1b);
  }
  iVar3 = *(int *)(*param_2 + 0x1f);
  lVar13 = (long)*(int *)(*param_2 + 0x23);
  local_a8[0] = 0;
  auVar16 = WasmCodeAllocator::AllocateForCodeInRegion(this,this,__n,0,0xffffffffffffffff,local_a8);
  __dest_00 = auVar16._0_8_;
  memcpy(__dest_00,__src,__n);
  local_a8[0] = *param_2;
  if (*(int *)(local_a8[0] + 0x17) < 0) {
    lVar7 = Code::OffHeapInstructionStart((Code *)local_a8);
  }
  else {
    lVar7 = local_a8[0] + 0x3f;
  }
  this_00 = (Mutex *)(this + 0x110);
  base::Mutex::Lock(this_00);
  plVar12 = *(long **)(this + 0x160);
  if (plVar12 != *(long **)(this + 0x168)) {
    do {
      if (((ulong)((long)__dest_00 - *plVar12) < (ulong)plVar12[1]) &&
         ((long *)plVar12[3] != (long *)0x0)) {
        lVar15 = *(long *)plVar12[3];
        base::Mutex::Unlock(this_00);
        RelocIterator::RelocIterator((RelocIterator *)local_a8,*param_2,0x161);
        RelocIterator::RelocIterator
                  ((RelocIterator *)local_e8,__dest_00,auVar16._8_8_,local_108,local_100,
                   (long)__dest_00 + lVar13,0x161);
        if (local_b0 == '\0') {
          do {
            this_01 = local_d8;
            if (local_d0 == '\b') {
              *(long *)local_d8 = *(long *)local_d8 + ((long)__dest_00 - lVar7);
            }
            else if (local_d0 == '\x05') {
              iVar4 = RelocInfo::wasm_call_tag(aRStack_98);
              RelocInfo::set_wasm_stub_call_address
                        ((RelocInfo *)&local_d8,lVar15 + (ulong)(uint)(iVar4 << 4),1);
            }
            else if ((*(uint *)local_d8 | 0x80000000) >> 0x1a == 0x25) {
              lVar8 = Instruction::ImmPCOffsetTarget(local_d8);
              Instruction::SetBranchImmTarget
                        (this_01,(Instruction *)(lVar8 - ((long)__dest_00 - lVar7)));
            }
            RelocIterator::next((RelocIterator *)local_e8);
            RelocIterator::next((RelocIterator *)local_a8);
          } while (local_b0 == '\0');
        }
        FlushInstructionCache(__dest_00,auVar16._8_8_);
        this_02 = operator_new(0x90);
        *(void **)(this_02 + 0x10) = local_108;
        *(undefined1 (*) [16])this_02 = auVar16;
        *(long *)(this_02 + 0x40) = lVar13;
        *(ulong *)(this_02 + 0x18) = local_100;
        *(undefined8 *)(this_02 + 0x78) = 0;
        *(undefined8 *)(this_02 + 0x80) = 0;
        this_02[0x88] = (WasmCode)0x0;
        *(undefined8 *)(this_02 + 0x38) = 0xffffffff;
        *(void **)(this_02 + 0x20) = __dest;
        *(undefined4 *)(this_02 + 0x8c) = 1;
        *(ulong *)(this_02 + 0x28) = uVar10;
        *(NativeModule **)(this_02 + 0x30) = this;
        *(uint *)(this_02 + 0x48) = uVar1;
        *(undefined4 *)(this_02 + 0x4c) = 0;
        *(long *)(this_02 + 0x50) = local_120;
        *(long *)(this_02 + 0x58) = (long)iVar3;
        *(long *)(this_02 + 0x60) = lVar13;
        *(size_t *)(this_02 + 0x68) = __n;
        *(undefined4 *)(this_02 + 0x70) = 0xffffffff;
        WasmCode::MaybePrint(this_02,(char *)0x0);
        local_f0 = 0;
        base::Mutex::Lock(this_00);
        local_f8 = 0;
        local_e8[0] = this_02;
        uVar9 = PublishCodeLocked(this,local_e8);
        FUN_012017d0(local_e8);
        base::Mutex::Unlock(this_00);
        FUN_012017d0(&local_f8);
        FUN_012017d0(&local_f0);
        return uVar9;
      }
      plVar12 = plVar12 + 4;
    } while (plVar12 != *(long **)(this + 0x168));
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("code_addr is not part of a code space");
}

