
/* v8::internal::ArrayBufferTracker::PrepareToFreeDeadInNewSpace(v8::internal::Heap*) */

void v8::internal::ArrayBufferTracker::PrepareToFreeDeadInNewSpace(Heap *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xe8) + 400);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    uVar1 = ProcessBuffers(lVar2,0);
    if ((uVar1 & 1) == 0) break;
    lVar2 = *(long *)(lVar2 + 0xe0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","empty");
}

