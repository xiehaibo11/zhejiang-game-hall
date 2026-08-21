
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::SmallOrderedHashTableVerify(v8::internal::Isolate*)
    */

void __thiscall
v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::SmallOrderedHashTableVerify
          (SmallOrderedHashTable<v8::internal::SmallOrderedHashMap> *this,Isolate *param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  uVar3 = *(ulong *)this;
  if (2 < *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x92) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSmallOrderedHashTable()");
  }
  bVar1 = *(byte *)(uVar3 + 5);
  uVar5 = (ulong)bVar1;
  if (bVar1 < 2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","capacity >= kMinCapacity");
  }
  if ((char)bVar1 < '\0') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","capacity <= kMaxCapacity");
  }
  pbVar6 = (byte *)((uVar5 << 4 | 8) + uVar3 + -1);
  uVar7 = uVar5;
  do {
    if ((*pbVar6 != 0xff) && ((uint)bVar1 << 1 < (uint)*pbVar6)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","bucket <= capacity");
    }
    uVar7 = uVar7 - 1;
    pbVar6 = pbVar6 + 1;
  } while (uVar7 != 0);
  bVar2 = *(byte *)(uVar3 + 3);
  if ((ulong)bVar2 != 0) {
    uVar7 = 0;
    do {
      uVar8 = (uint)*(byte *)((uVar5 << 4 | 8) + uVar5 + uVar3 + -1 + uVar7);
      if ((uVar8 != 0xff) && ((uint)bVar1 << 1 < uVar8)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","chain <= capacity");
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < bVar2);
    if (bVar2 != 0) {
      uVar7 = 0;
      lVar9 = 0xb;
      do {
        uVar8 = *(uint *)(uVar3 + lVar9 + -4);
        if ((uVar8 & 1) != 0) {
          uVar5 = uVar3 & 0xffffffff00000000 | (ulong)uVar8;
          uVar3 = ReadOnlyHeap::Contains(uVar5);
          if (((uVar3 & 1) == 0) &&
             (uVar3 = Heap::Contains((Heap *)(param_1 + 0x8850),uVar5), (uVar3 & 1) == 0))
          goto LAB_00f2f0f0;
        }
        uVar8 = *(uint *)(lVar9 + *(ulong *)this);
        if ((uVar8 & 1) != 0) {
          uVar5 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar8;
          uVar3 = ReadOnlyHeap::Contains(uVar5);
          if (((uVar3 & 1) == 0) &&
             (uVar3 = Heap::Contains((Heap *)(param_1 + 0x8850),uVar5), (uVar3 & 1) == 0)) {
LAB_00f2f0f0:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
          }
        }
        uVar3 = *(ulong *)this;
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 8;
        uVar5 = (ulong)*(byte *)(uVar3 + 3);
      } while (uVar7 < uVar5);
      goto LAB_00f2f108;
    }
  }
  uVar5 = 0;
LAB_00f2f108:
  uVar5 = uVar5 + *(byte *)(uVar3 + 4);
  uVar7 = (ulong)*(byte *)(uVar3 + 5) << 1;
  if ((uint)uVar5 < (uint)uVar7) {
    puVar4 = (uint *)(uVar3 + uVar5 * 8 + 0xb);
    do {
      uVar8 = puVar4[-1];
      if (((((uVar8 & 1) == 0) || (uVar8 != *(uint *)(param_1 + 0xa8))) || ((*puVar4 & 1) == 0)) ||
         (*puVar4 != uVar8)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","val.IsTheHole(isolate)");
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar5 < uVar7);
  }
  return;
}

