
/* v8::internal::TransitionsAccessor::IsSpecialTransition(v8::internal::ReadOnlyRoots,
   v8::internal::Name) */

bool v8::internal::TransitionsAccessor::IsSpecialTransition(long param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x40) {
    return false;
  }
  if (iVar1 == *(int *)(param_1 + 0xb18)) {
    return true;
  }
  if (iVar1 == *(int *)(param_1 + 0xb60)) {
    return true;
  }
  if (iVar1 == *(int *)(param_1 + 0xae8)) {
    return true;
  }
  if (iVar1 == *(int *)(param_1 + 0xac8)) {
    return true;
  }
  return iVar1 == *(int *)(param_1 + 0xb70);
}

