
/* v8::internal::compiler::LinearScanAllocator::BlockIsDeferredOrImmediatePredecessorIsNotDeferred(v8::internal::compiler::InstructionBlock
   const*) */

bool __thiscall
v8::internal::compiler::LinearScanAllocator::BlockIsDeferredOrImmediatePredecessorIsNotDeferred
          (LinearScanAllocator *this,InstructionBlock *param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  long *plVar6;
  int *piVar5;
  
  if (param_1[0x78] == (InstructionBlock)0x0) {
    piVar4 = *(int **)(param_1 + 0x20);
    piVar2 = *(int **)(param_1 + 0x28);
    if (piVar2 == piVar4) {
      return true;
    }
    if (piVar4 == piVar2) {
      return true;
    }
    do {
      piVar5 = piVar4 + 1;
      iVar3 = *piVar4;
      if (iVar3 + 1 == *(int *)(param_1 + 100)) {
        plVar6 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
        lVar1 = *plVar6;
        if ((ulong)(long)iVar3 < (ulong)(plVar6[1] - lVar1 >> 3)) {
          return *(char *)(*(long *)(lVar1 + (long)iVar3 * 8) + 0x78) == '\0';
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
      piVar4 = piVar5;
    } while (piVar2 != piVar5);
  }
  return true;
}

