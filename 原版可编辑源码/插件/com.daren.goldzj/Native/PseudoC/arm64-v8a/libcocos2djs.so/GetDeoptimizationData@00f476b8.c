
/* v8::internal::OptimizedFrame::GetDeoptimizationData(int*) const */

void __thiscall
v8::internal::OptimizedFrame::GetDeoptimizationData(OptimizedFrame *this,int *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_68;
  int local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)this + 0x98))();
  local_68 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x17);
  uVar3 = **(ulong **)(this + 0x28);
  if (((-1 < *(int *)(local_68 + 0x17)) ||
      (uVar4 = Code::OffHeapInstructionStart((Code *)&local_68), uVar3 < uVar4)) ||
     (uVar4 = Code::OffHeapInstructionEnd((Code *)&local_68), uVar4 <= uVar3)) {
    uVar4 = local_68 - 1;
    if ((uVar3 < uVar4) ||
       (iVar2 = HeapObject::SizeFromMap
                          ((HeapObject *)&local_68,
                           local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 - 1)),
       uVar4 + (long)iVar2 <= uVar3)) {
      local_68 = Heap::GcSafeFindCodeForInnerPointer
                           ((Heap *)(*(long *)(this + 0x10) + 0x8850),**(ulong **)(this + 0x28));
    }
  }
  Code::GetSafepointEntry((ulong)&local_68);
  if (local_60 == -1) {
    uVar3 = 0;
    *param_1 = -1;
  }
  else {
    *param_1 = local_60;
    uVar3 = local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 + 7);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

