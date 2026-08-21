
/* v8::internal::compiler::LinearScanAllocator::HasNonDeferredPredecessor(v8::internal::compiler::InstructionBlock*)
    */

undefined8 __thiscall
v8::internal::compiler::LinearScanAllocator::HasNonDeferredPredecessor
          (LinearScanAllocator *this,InstructionBlock *param_1)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  
  piVar2 = *(int **)(param_1 + 0x20);
  if (piVar2 != *(int **)(param_1 + 0x28)) {
    plVar3 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
    lVar1 = *plVar3;
    do {
      if ((ulong)(plVar3[1] - lVar1 >> 3) <= (ulong)(long)*piVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(char *)(*(long *)(lVar1 + (long)*piVar2 * 8) + 0x78) == '\0') {
        return 1;
      }
      piVar2 = piVar2 + 1;
    } while (*(int **)(param_1 + 0x28) != piVar2);
  }
  return 0;
}

