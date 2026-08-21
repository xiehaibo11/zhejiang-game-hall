
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::Rehash(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedHashSet>, int) */

ulong * v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::Rehash
                  (Factory *param_1,ulong *param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong local_68;
  
  puVar5 = (ulong *)Factory::NewSmallOrderedHashSet
                              (param_1,param_3,
                               (*(ulong *)((*param_2 & 0xfffffffffffc0000) + 8) & 0x18) == 0);
  uVar6 = *param_2;
  bVar3 = *(byte *)(uVar6 + 3);
  lVar1 = (ulong)*(byte *)(uVar6 + 4) + (ulong)bVar3;
  if ((int)lVar1 != 0) {
    iVar11 = 0;
    lVar12 = 4;
    while( true ) {
      uVar2 = *(uint *)(uVar6 + lVar12 + 3);
      if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa8))) {
        uVar8 = uVar6 & 0xffffffff00000000 | (ulong)uVar2;
        uVar6 = Object::GetSimpleHash(uVar8);
        if ((uVar6 & 1) != 0) {
          local_68 = uVar8;
          uVar6 = JSReceiver::GetIdentityHash((JSReceiver *)&local_68);
        }
        uVar8 = (ulong)*(byte *)(*puVar5 + 5);
        lVar10 = (uVar8 - 1 & (long)(uVar6 << 0x20) >> 0x21) + uVar8 * 8 + *puVar5;
        uVar4 = *(undefined1 *)(lVar10 + 7);
        *(char *)(lVar10 + 7) = (char)iVar11;
        *(undefined1 *)(*puVar5 + (long)(int)(iVar11 + (uint)*(byte *)(*puVar5 + 5) * 9 + 8) + -1) =
             uVar4;
        uVar6 = *param_2;
        uVar8 = *puVar5;
        uVar2 = *(uint *)(lVar12 + uVar6 + 3);
        lVar10 = uVar8 + (long)(iVar11 * 4 + 8);
        *(uint *)(lVar10 + -1) = uVar2;
        if ((uVar2 & 1) != 0) {
          uVar6 = uVar6 & 0xffffffff00000000;
          uVar9 = uVar6 | uVar2;
          uVar6 = uVar6 | (ulong)uVar2 & 0xfffffffffffc0000;
          uVar7 = *(ulong *)(uVar6 + 8);
          lVar10 = lVar10 + -1;
          if (((uint)uVar7 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar8,lVar10,uVar9);
            uVar7 = *(ulong *)(uVar6 | 8);
          }
          if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar8,lVar10,uVar9);
          }
        }
        iVar11 = iVar11 + 1;
      }
      if (lVar1 * 4 - lVar12 == 0) break;
      uVar6 = *param_2;
      lVar12 = lVar12 + 4;
    }
  }
  *(byte *)(*puVar5 + 3) = bVar3;
  return puVar5;
}

