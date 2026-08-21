
/* v8::internal::Heap::GetSpaceName(v8::internal::AllocationSpace) */

undefined * v8::internal::Heap::GetSpaceName(uint param_1)

{
  if (param_1 < 8) {
    return (&PTR_s_read_only_space_01ca7e80)[(int)param_1];
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

