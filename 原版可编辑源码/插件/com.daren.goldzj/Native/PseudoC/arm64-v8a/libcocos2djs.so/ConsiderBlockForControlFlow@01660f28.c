
/* v8::internal::compiler::LinearScanAllocator::ConsiderBlockForControlFlow(v8::internal::compiler::InstructionBlock*,
   v8::internal::compiler::RpoNumber) */

bool __thiscall
v8::internal::compiler::LinearScanAllocator::ConsiderBlockForControlFlow
          (LinearScanAllocator *this,long param_1,int param_3)

{
  long lVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 100) <= param_3) {
    return false;
  }
  if (*(char *)(param_1 + 0x78) != '\0') {
    return true;
  }
  plVar2 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
  lVar1 = *plVar2;
  if ((ulong)(long)param_3 < (ulong)(plVar2[1] - lVar1 >> 3)) {
    return *(char *)(*(long *)(lVar1 + (long)param_3 * 8) + 0x78) == '\0';
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

