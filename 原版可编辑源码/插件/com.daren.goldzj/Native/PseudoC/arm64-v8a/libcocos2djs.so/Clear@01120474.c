
/* v8::internal::OrderedHashTable<v8::internal::OrderedHashSet, 1>::Clear(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::OrderedHashSet>) */

ulong * v8::internal::OrderedHashTable<v8::internal::OrderedHashSet,1>::Clear
                  (undefined8 param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *(ulong *)((*param_2 & 0xfffffffffffc0000) + 8);
  iVar3 = base::bits::RoundUpToPowerOfTwo32(4);
  if (iVar3 < 0x1999999) {
    iVar2 = iVar3;
    if (iVar3 < 0) {
      iVar2 = iVar3 + 1;
    }
    uVar1 = iVar2 >> 1;
    uVar7 = (ulong)uVar1;
    puVar4 = (ulong *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>
                                (param_1,0x36,uVar1 + iVar3 * 2 + 3,(uVar6 & 0x18) == 0);
    uVar6 = *puVar4;
    if (1 < iVar3) {
      iVar3 = 0xc;
      do {
        *(undefined4 *)(uVar6 + (long)iVar3 + 7) = 0xfffffffe;
        uVar6 = *puVar4;
        uVar7 = uVar7 - 1;
        iVar3 = iVar3 + 4;
      } while (uVar7 != 0);
    }
    *(uint *)(uVar6 + 0xf) = uVar1 << 1;
    *(undefined4 *)(*puVar4 + 7) = 0;
    *(undefined4 *)(*puVar4 + 0xb) = 0;
    if (puVar4 != (ulong *)0x0) {
      uVar7 = *param_2;
      uVar6 = *puVar4;
      *(int *)(uVar7 + 7) = (int)uVar6;
      if ((uVar6 & 1) != 0) {
        uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,uVar7 + 7,uVar6);
          uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,uVar7 + 7,uVar6);
        }
      }
      *(undefined4 *)(*param_2 + 0xb) = 0xfffffffe;
      return puVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

