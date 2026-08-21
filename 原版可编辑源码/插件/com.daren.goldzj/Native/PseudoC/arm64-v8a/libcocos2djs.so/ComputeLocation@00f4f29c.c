
/* v8::internal::Isolate::ComputeLocation(v8::internal::MessageLocation*) */

undefined4 __thiscall v8::internal::Isolate::ComputeLocation(Isolate *this,MessageLocation *param_1)

{
  long lVar1;
  FrameSummary *pFVar2;
  int iVar3;
  undefined4 uVar4;
  ulong *puVar5;
  ulong uVar6;
  FrameSummary *pFVar7;
  ulong *puVar8;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  FrameSummary *local_650;
  FrameSummary *local_648;
  undefined8 uStack_640;
  WasmCodeRefScope aWStack_638 [48];
  StackTraceFrameIterator aSStack_608 [1416];
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  StackTraceFrameIterator::StackTraceFrameIterator(aSStack_608,this);
  if (local_80 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    local_648 = (FrameSummary *)0x0;
    uStack_640 = 0;
    local_650 = (FrameSummary *)0x0;
    wasm::WasmCodeRefScope::WasmCodeRefScope(aWStack_638);
    (**(code **)(*local_80 + 0x88))(local_80,&local_650);
    pFVar2 = local_648;
    pFVar7 = local_648 + -0x38;
    puVar5 = (ulong *)FrameSummary::script(pFVar7);
    uVar6 = *puVar5;
    if ((((uVar6 & 1) == 0) ||
        (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x65)) ||
       (((*(uint *)(uVar6 + 3) & 1) != 0 && (*(uint *)(uVar6 + 3) == *(uint *)(this + 0xa0))))) {
      uVar4 = 0;
    }
    else {
      if (*(int *)(pFVar2 + -0x30) == 0) {
        uVar6 = **(ulong **)(pFVar2 + -0x20);
        uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xb);
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)(this + 0x95a0);
          if (puVar8 == *(ulong **)(this + 0x95a8)) {
            puVar8 = (ulong *)HandleScope::Extend(this);
          }
          *(ulong **)(this + 0x95a0) = puVar8 + 1;
          *puVar8 = uVar6;
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
        }
      }
      else {
        puVar8 = (ulong *)0x0;
      }
      uVar6 = FrameSummary::AreSourcePositionsAvailable(pFVar7);
      if ((uVar6 & 1) == 0) {
        uVar4 = FrameSummary::code_offset(pFVar7);
        MessageLocation::MessageLocation((MessageLocation *)&local_670,puVar5,puVar8,uVar4);
      }
      else {
        iVar3 = FrameSummary::SourcePosition(pFVar7);
        MessageLocation::MessageLocation
                  ((MessageLocation *)&local_670,puVar5,iVar3,iVar3 + 1,puVar8);
      }
      *(undefined8 *)(param_1 + 8) = uStack_668;
      *(undefined8 *)param_1 = local_670;
      *(undefined8 *)(param_1 + 0x18) = uStack_658;
      *(undefined8 *)(param_1 + 0x10) = uStack_660;
      uVar4 = 1;
    }
    wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_638);
    pFVar7 = local_650;
    pFVar2 = local_648;
    if (local_650 != (FrameSummary *)0x0) {
      while (pFVar2 != pFVar7) {
        FrameSummary::~FrameSummary(pFVar2 + -0x38);
        pFVar2 = pFVar2 + -0x38;
      }
      local_648 = pFVar7;
      operator_delete(local_650);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

