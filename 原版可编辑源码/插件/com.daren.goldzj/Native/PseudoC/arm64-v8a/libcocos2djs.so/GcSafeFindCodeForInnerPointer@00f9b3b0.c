
/* v8::internal::Heap::GcSafeFindCodeForInnerPointer(unsigned long) */

ulong __thiscall v8::internal::Heap::GcSafeFindCodeForInnerPointer(Heap *this,ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  ReadOnlyHeapObjectIterator aRStack_48 [24];
  ulong local_18;
  
  uVar2 = InstructionStream::TryLookupCode((Isolate *)(this + -0x8850),param_1);
  if ((int)uVar2 == 0) {
    lVar3 = CodeLargeObjectSpace::FindPage(*(CodeLargeObjectSpace **)(this + 0x110),param_1);
    if (lVar3 == 0) {
      if (*(long *)(this + 0xf8) == *(long *)(param_1 & 0xfffffffffffc0000 | 0x58)) {
        lVar3 = CodeObjectRegistry::GetCodeObjectStartFromInnerAddress
                          (*(CodeObjectRegistry **)((param_1 & 0xfffffffffffc0000) + 0x110),param_1)
        ;
        uVar2 = lVar3 + 1;
      }
      else {
        ReadOnlyHeapObjectIterator::ReadOnlyHeapObjectIterator
                  (aRStack_48,*(ReadOnlyHeap **)(this + 0xc28));
        do {
          uVar2 = ReadOnlyHeapObjectIterator::Next(aRStack_48);
          if ((int)uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
        } while (((*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) !=
                   0x9a) || (puVar4 = (uint *)(uVar2 - 1), local_18 = uVar2, param_1 < puVar4)) ||
                (iVar1 = HeapObject::SizeFromMap
                                   ((HeapObject *)&local_18,
                                    uVar2 & 0xffffffff00000000 | (ulong)*puVar4), uVar2 = local_18,
                (ulong)((long)puVar4 + (long)iVar1) <= param_1));
      }
    }
    else {
      uVar2 = *(long *)(lVar3 + 0x20) + 1;
    }
  }
  return uVar2;
}

