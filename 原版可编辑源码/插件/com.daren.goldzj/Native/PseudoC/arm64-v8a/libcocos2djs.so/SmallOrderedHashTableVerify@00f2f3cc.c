
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::SmallOrderedHashTableVerify(v8::internal::Isolate*)
    */

void __thiscall
v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::
SmallOrderedHashTableVerify
          (SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary> *this,Isolate *param_1)

{
  Heap *pHVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  uVar4 = *(ulong *)this;
  if (2 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) - 0x92) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsSmallOrderedHashTable()");
  }
  bVar2 = *(byte *)(uVar4 + 9);
  uVar6 = (ulong)bVar2;
  if (bVar2 < 2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","capacity >= kMinCapacity");
  }
  if ((char)bVar2 < '\0') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","capacity <= kMaxCapacity");
  }
  pbVar7 = (byte *)(uVar4 + uVar6 * 0x18 + 0xb);
  uVar8 = uVar6;
  do {
    if ((*pbVar7 != 0xff) && ((uint)bVar2 << 1 < (uint)*pbVar7)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","bucket <= capacity");
    }
    uVar8 = uVar8 - 1;
    pbVar7 = pbVar7 + 1;
  } while (uVar8 != 0);
  bVar3 = *(byte *)(uVar4 + 7);
  if ((ulong)bVar3 != 0) {
    uVar8 = 0;
    do {
      uVar9 = (uint)*(byte *)(uVar6 * 0x19 + uVar4 + 0xb + uVar8);
      if ((uVar9 != 0xff) && ((uint)bVar2 << 1 < uVar9)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","chain <= capacity");
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < bVar3);
    if (bVar3 != 0) {
      uVar8 = 0;
      pHVar1 = (Heap *)(param_1 + 0x8850);
      lVar10 = 0x13;
      do {
        uVar9 = *(uint *)(uVar4 + lVar10 + -8);
        if ((uVar9 & 1) != 0) {
          uVar6 = uVar4 & 0xffffffff00000000 | (ulong)uVar9;
          uVar4 = ReadOnlyHeap::Contains(uVar6);
          if (((uVar4 & 1) == 0) && (uVar4 = Heap::Contains(pHVar1,uVar6), (uVar4 & 1) == 0))
          goto LAB_00f2f580;
        }
        uVar9 = *(uint *)(lVar10 + *(ulong *)this + -4);
        if ((uVar9 & 1) != 0) {
          uVar6 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar9;
          uVar4 = ReadOnlyHeap::Contains(uVar6);
          if (((uVar4 & 1) == 0) && (uVar4 = Heap::Contains(pHVar1,uVar6), (uVar4 & 1) == 0))
          goto LAB_00f2f580;
        }
        uVar9 = *(uint *)(lVar10 + *(ulong *)this);
        if ((uVar9 & 1) != 0) {
          uVar6 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar9;
          uVar4 = ReadOnlyHeap::Contains(uVar6);
          if (((uVar4 & 1) == 0) && (uVar4 = Heap::Contains(pHVar1,uVar6), (uVar4 & 1) == 0)) {
LAB_00f2f580:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
          }
        }
        uVar4 = *(ulong *)this;
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0xc;
        uVar6 = (ulong)*(byte *)(uVar4 + 7);
      } while (uVar8 < uVar6);
      goto LAB_00f2f598;
    }
  }
  uVar6 = 0;
LAB_00f2f598:
  uVar6 = uVar6 + *(byte *)(uVar4 + 8);
  uVar8 = (ulong)*(byte *)(uVar4 + 9) << 1;
  if ((uint)uVar6 < (uint)uVar8) {
    puVar5 = (uint *)(uVar4 + uVar6 * 0xc + 0x13);
    do {
      uVar9 = puVar5[-2];
      if (((((uVar9 & 1) == 0) || (uVar9 != *(uint *)(param_1 + 0xa8))) || ((puVar5[-1] & 1) == 0))
         || (((puVar5[-1] != uVar9 || ((*puVar5 & 1) == 0)) || (*puVar5 != uVar9)))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","val.IsTheHole(isolate)");
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 3;
    } while (uVar6 < uVar8);
  }
  return;
}

