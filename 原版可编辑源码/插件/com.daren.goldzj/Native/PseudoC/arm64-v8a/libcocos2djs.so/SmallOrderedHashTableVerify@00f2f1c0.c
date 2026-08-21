
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::SmallOrderedHashTableVerify(v8::internal::Isolate*)
    */

void __thiscall
v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::SmallOrderedHashTableVerify
          (SmallOrderedHashTable<v8::internal::SmallOrderedHashSet> *this,Isolate *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  
  uVar5 = *(ulong *)this;
  if (2 < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) - 0x92) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSmallOrderedHashTable()");
  }
  bVar2 = *(byte *)(uVar5 + 5);
  uVar6 = (ulong)bVar2;
  if (bVar2 < 2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","capacity >= kMinCapacity");
  }
  if ((char)bVar2 < '\0') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","capacity <= kMaxCapacity");
  }
  pbVar8 = (byte *)(uVar5 + uVar6 * 8 + 7);
  uVar9 = uVar6;
  do {
    if ((*pbVar8 != 0xff) && ((uint)bVar2 << 1 < (uint)*pbVar8)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","bucket <= capacity");
    }
    uVar9 = uVar9 - 1;
    pbVar8 = pbVar8 + 1;
  } while (uVar9 != 0);
  bVar3 = *(byte *)(uVar5 + 3);
  if ((ulong)bVar3 != 0) {
    uVar9 = 0;
    do {
      uVar10 = (uint)*(byte *)(uVar6 * 9 + uVar5 + 7 + uVar9);
      if ((uVar10 != 0xff) && ((uint)bVar2 << 1 < uVar10)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","chain <= capacity");
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < bVar3);
    if (bVar3 != 0) {
      uVar6 = 0;
      lVar11 = 7;
      uVar10 = *(uint *)(uVar5 + 7);
      while( true ) {
        if ((uVar10 & 1) != 0) {
          uVar9 = uVar5 & 0xffffffff00000000 | (ulong)uVar10;
          uVar5 = ReadOnlyHeap::Contains(uVar9);
          if (((uVar5 & 1) == 0) &&
             (uVar5 = Heap::Contains((Heap *)(param_1 + 0x8850),uVar9), (uVar5 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
          }
        }
        uVar5 = *(ulong *)this;
        uVar6 = uVar6 + 1;
        lVar11 = lVar11 + 4;
        uVar9 = (ulong)*(byte *)(uVar5 + 3);
        if (uVar9 <= uVar6) break;
        uVar10 = *(uint *)(uVar5 + lVar11);
      }
      goto LAB_00f2f320;
    }
  }
  uVar9 = 0;
LAB_00f2f320:
  uVar10 = (int)uVar9 + (uint)*(byte *)(uVar5 + 4);
  uVar4 = (uint)*(byte *)(uVar5 + 5) << 1;
  if (uVar10 < uVar4) {
    iVar7 = uVar10 * 4 + 8;
    do {
      uVar1 = *(uint *)((uVar5 - 1) + (long)iVar7);
      if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_1 + 0xa8))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","val.IsTheHole(isolate)");
      }
      uVar10 = uVar10 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar10 < uVar4);
  }
  return;
}

