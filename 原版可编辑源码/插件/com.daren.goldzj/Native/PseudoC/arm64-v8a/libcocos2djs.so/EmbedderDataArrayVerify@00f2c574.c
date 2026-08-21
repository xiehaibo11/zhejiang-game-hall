
/* v8::internal::EmbedderDataArray::EmbedderDataArrayVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::EmbedderDataArray::EmbedderDataArrayVerify(EmbedderDataArray *this,Isolate *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  
  TorqueGeneratedClassVerifiers::EmbedderDataArrayVerify(*(undefined8 *)this);
  lVar4 = *(long *)this;
  puVar1 = (uint *)(lVar4 + 7);
  puVar6 = (uint *)(lVar4 + (int)((*(uint *)(lVar4 + 3) & 0x3ffffffe) * 4 + 8) + -1);
  if (puVar1 < puVar6) {
    uVar2 = *puVar1;
    while( true ) {
      if ((uVar2 & 1) != 0) {
        uVar5 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar2;
        uVar3 = ReadOnlyHeap::Contains(uVar5);
        if (((uVar3 & 1) == 0) &&
           (uVar3 = Heap::Contains((Heap *)(param_1 + 0x8850),uVar5), (uVar3 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
        }
      }
      puVar1 = puVar1 + 2;
      if (puVar6 <= puVar1) break;
      uVar2 = *puVar1;
    }
  }
  return;
}

