
/* v8::internal::MarkCompactCollector::VerifyMarkbitsAreClean(v8::internal::LargeObjectSpace*) */

void __thiscall
v8::internal::MarkCompactCollector::VerifyMarkbitsAreClean
          (MarkCompactCollector *this,LargeObjectSpace *param_1)

{
  ulong uVar1;
  ulong uVar2;
  LargeObjectSpaceObjectIterator aLStack_20 [16];
  
  LargeObjectSpaceObjectIterator::LargeObjectSpaceObjectIterator(aLStack_20,param_1);
  while( true ) {
    uVar1 = LargeObjectSpaceObjectIterator::Next(aLStack_20);
    if ((int)uVar1 == 0) {
      return;
    }
    uVar2 = uVar1 & 0xfffffffffffc0000;
    if ((*(uint *)(*(long *)(uVar2 + 0x10) + (uVar1 - uVar2 >> 7 & 0x1ffffff) * 4) >>
         (ulong)((uint)(uVar1 - uVar2 >> 2) & 0x1f) & 1) != 0) break;
    if (*(long *)(uVar2 + 0x68) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "0 == non_atomic_marking_state()->live_bytes( MemoryChunk::FromHeapObject(obj))");
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","non_atomic_marking_state()->IsWhite(obj)");
}

