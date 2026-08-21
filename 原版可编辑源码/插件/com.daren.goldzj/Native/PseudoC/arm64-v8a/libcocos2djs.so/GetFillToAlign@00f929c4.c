
/* v8::internal::Heap::GetFillToAlign(unsigned long, v8::internal::AllocationAlignment) */

undefined4 v8::internal::Heap::GetFillToAlign(ulong param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 1) && ((param_1 & 7) != 0)) {
    return 4;
  }
  uVar1 = 4;
  if ((param_1 & 7) != 0 || param_2 != 2) {
    uVar1 = 0;
  }
  return uVar1;
}

