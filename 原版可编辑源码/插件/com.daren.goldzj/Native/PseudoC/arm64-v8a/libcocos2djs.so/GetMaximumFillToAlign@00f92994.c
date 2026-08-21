
/* v8::internal::Heap::GetMaximumFillToAlign(v8::internal::AllocationAlignment) */

undefined4 v8::internal::Heap::GetMaximumFillToAlign(uint param_1)

{
  if (param_1 < 3) {
    return *(undefined4 *)(&DAT_019c33c4 + (long)(int)param_1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

