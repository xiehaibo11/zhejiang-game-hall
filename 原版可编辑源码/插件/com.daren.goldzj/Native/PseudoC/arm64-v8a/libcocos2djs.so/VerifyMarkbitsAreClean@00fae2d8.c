
/* v8::internal::MarkCompactCollector::VerifyMarkbitsAreClean(v8::internal::NewSpace*) */

MarkCompactCollector * __thiscall
v8::internal::MarkCompactCollector::VerifyMarkbitsAreClean
          (MarkCompactCollector *this,NewSpace *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)((*(long *)(param_1 + 0x68) - 4U & 0xfffffffffffc0000) + 0xe0);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0xf0) + 0x20) & 0xfffffffffffc0000;
  while( true ) {
    if (uVar1 == uVar2) {
      return this;
    }
    this = (MarkCompactCollector *)
           ConcurrentBitmap<(v8::internal::AccessMode)1>::IsClean
                     (*(ConcurrentBitmap<(v8::internal::AccessMode)1> **)(uVar2 + 0x10));
    if (((ulong)this & 1) == 0) break;
    if (*(long *)(uVar2 + 0x68) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == non_atomic_marking_state()->live_bytes(p)");
    }
    uVar2 = *(ulong *)(uVar2 + 0xe0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","non_atomic_marking_state()->bitmap(p)->IsClean()");
}

