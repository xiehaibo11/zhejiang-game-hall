
/* v8::internal::PropertyArray::PropertyArrayVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::PropertyArray::PropertyArrayVerify(PropertyArray *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  TorqueGeneratedClassVerifiers::PropertyArrayVerify(*(undefined8 *)this);
  uVar2 = *(ulong *)this;
  if ((*(ushort *)(uVar2 + 3) & 0x7fe) == 0) {
    if ((int)uVar2 != *(int *)(param_1 + 0x3b8)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","*this == ReadOnlyRoots(isolate).empty_property_array()");
    }
  }
  else {
    uVar4 = 0;
    lVar5 = 7;
    uVar1 = *(uint *)(uVar2 + 7);
    while( true ) {
      if ((uVar1 & 1) != 0) {
        uVar3 = uVar2 & 0xffffffff00000000 | (ulong)uVar1;
        uVar2 = ReadOnlyHeap::Contains(uVar3);
        if (((uVar2 & 1) == 0) &&
           (uVar2 = Heap::Contains((Heap *)(param_1 + 0x8850),uVar3), (uVar2 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
        }
      }
      uVar2 = *(ulong *)this;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 4;
      if (((ulong)(*(uint *)(uVar2 + 3) >> 1) & 0x3ff) <= uVar4) break;
      uVar1 = *(uint *)(uVar2 + lVar5);
    }
  }
  return;
}

