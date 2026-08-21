
/* v8::internal::compiler::RegisterAllocator::GetSplitPositionForInstruction(v8::internal::compiler::LiveRange
   const*, int) */

int __thiscall
v8::internal::compiler::RegisterAllocator::GetSplitPositionForInstruction
          (RegisterAllocator *this,LiveRange *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 4;
  if (**(int **)(param_1 + 0x10) < iVar1) {
    if (*(int *)(*(long *)(param_1 + 8) + 4) <= iVar1) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return -1;
}

