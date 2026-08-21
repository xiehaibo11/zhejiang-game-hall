
/* v8::internal::Worklist<std::__ndk1::pair<v8::internal::HeapObject,
   v8::internal::CompressedHeapObjectSlot>, 64>::~Worklist() */

void __thiscall
v8::internal::
Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::CompressedHeapObjectSlot>,64>::
~Worklist(Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::CompressedHeapObjectSlot>,64>
          *this)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::CompressedHeapObjectSlot>,64>
  *pWVar4;
  long lVar5;
  
  uVar1 = *(uint *)(this + 0x2b0);
  uVar3 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    pWVar4 = this + 8;
    do {
      if ((*(long *)(*(long *)pWVar4 + 8) != 0) || (*(long *)(*(long *)(pWVar4 + -8) + 8) != 0))
      goto LAB_00fda604;
      uVar3 = uVar3 - 1;
      pWVar4 = pWVar4 + 0x50;
    } while (uVar3 != 0);
  }
  if (*(long *)(this + 0x2a8) == 0) {
    if (0 < (int)uVar1) {
      lVar5 = 0;
      pvVar2 = *(void **)this;
      pWVar4 = this + 8;
      while( true ) {
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        if (*(void **)pWVar4 != (void *)0x0) {
          operator_delete(*(void **)pWVar4);
        }
        lVar5 = lVar5 + 1;
        if (*(int *)(this + 0x2b0) <= lVar5) break;
        pvVar2 = *(void **)(pWVar4 + 0x48);
        pWVar4 = pWVar4 + 0x50;
      }
    }
    base::Mutex::~Mutex((Mutex *)(this + 0x280));
    return;
  }
LAB_00fda604:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsEmpty()");
}

