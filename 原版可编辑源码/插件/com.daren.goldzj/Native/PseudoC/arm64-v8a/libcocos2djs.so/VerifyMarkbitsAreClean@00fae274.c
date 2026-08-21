
/* v8::internal::MarkCompactCollector::VerifyMarkbitsAreClean(v8::internal::PagedSpace*) */

MarkCompactCollector * __thiscall
v8::internal::MarkCompactCollector::VerifyMarkbitsAreClean
          (MarkCompactCollector *this,PagedSpace *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  while( true ) {
    if (lVar1 == 0) {
      return this;
    }
    this = (MarkCompactCollector *)
           ConcurrentBitmap<(v8::internal::AccessMode)1>::IsClean
                     (*(ConcurrentBitmap<(v8::internal::AccessMode)1> **)(lVar1 + 0x10));
    if (((ulong)this & 1) == 0) break;
    if (*(long *)(lVar1 + 0x68) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == non_atomic_marking_state()->live_bytes(p)");
    }
    lVar1 = *(long *)(lVar1 + 0xe0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","non_atomic_marking_state()->bitmap(p)->IsClean()");
}

