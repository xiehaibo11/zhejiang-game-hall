
/* v8::internal::Heap::GarbageCollectionReasonToString(v8::internal::GarbageCollectionReason) */

undefined * v8::internal::Heap::GarbageCollectionReasonToString(uint param_1)

{
  if (param_1 < 0x18) {
    return (&PTR_s_unknown_018904fa_0xb_01ca7ec0)[(int)param_1];
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

