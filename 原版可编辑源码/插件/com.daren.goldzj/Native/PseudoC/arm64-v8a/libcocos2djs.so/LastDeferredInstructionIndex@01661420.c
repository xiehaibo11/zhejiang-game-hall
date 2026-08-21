
/* v8::internal::compiler::LinearScanAllocator::LastDeferredInstructionIndex(v8::internal::compiler::InstructionBlock*)
    */

int __thiscall
v8::internal::compiler::LinearScanAllocator::LastDeferredInstructionIndex
          (LinearScanAllocator *this,InstructionBlock *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  InstructionBlock *pIVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
  lVar2 = *plVar5;
  uVar6 = plVar5[1] - lVar2;
  do {
    pIVar4 = param_1;
    iVar3 = *(int *)(pIVar4 + 100);
    if ((int)(uVar6 >> 3) + -1 <= iVar3) break;
    uVar1 = (long)iVar3 + 1;
    if ((ulong)((long)uVar6 >> 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1 = *(InstructionBlock **)(lVar2 + uVar1 * 8);
  } while (param_1[0x78] != (InstructionBlock)0x0);
  return *(int *)(pIVar4 + 0x74) + -1;
}

