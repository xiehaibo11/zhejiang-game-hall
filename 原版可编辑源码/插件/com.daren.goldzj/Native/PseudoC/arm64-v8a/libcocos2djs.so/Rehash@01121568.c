
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::Rehash(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedHashMap>, int) */

ulong * v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::Rehash
                  (Factory *param_1,ulong *param_2,undefined4 param_3)

{
  uint *puVar1;
  long lVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong local_68;
  
  puVar5 = (ulong *)Factory::NewSmallOrderedHashMap
                              (param_1,param_3,
                               (*(ulong *)((*param_2 & 0xfffffffffffc0000) + 8) & 0x18) == 0);
  uVar6 = *param_2;
  bVar3 = *(byte *)(uVar6 + 3);
  lVar2 = (ulong)*(byte *)(uVar6 + 4) + (ulong)bVar3;
  if ((int)lVar2 != 0) {
    lVar12 = 0;
    iVar13 = 0;
    while( true ) {
      uVar8 = *(uint *)(uVar6 + lVar12 + 7);
      if (((uVar8 & 1) == 0) || (uVar8 != *(uint *)(param_1 + 0xa8))) {
        uVar9 = uVar6 & 0xffffffff00000000 | (ulong)uVar8;
        uVar6 = Object::GetSimpleHash(uVar9);
        if ((uVar6 & 1) != 0) {
          local_68 = uVar9;
          uVar6 = JSReceiver::GetIdentityHash((JSReceiver *)&local_68);
        }
        uVar9 = (ulong)*(byte *)(*puVar5 + 5);
        lVar11 = *puVar5 + (uVar9 << 4 | 8) + (uVar9 - 1 & (long)(uVar6 << 0x20) >> 0x21);
        uVar4 = *(undefined1 *)(lVar11 + -1);
        *(char *)(lVar11 + -1) = (char)iVar13;
        uVar8 = (uint)*(byte *)(*puVar5 + 5);
        *(undefined1 *)(*puVar5 + (long)(int)(iVar13 + uVar8 + (uVar8 << 4 | 8)) + -1) = uVar4;
        uVar6 = *param_2;
        uVar9 = *puVar5;
        uVar8 = *(uint *)(lVar12 + uVar6 + 7);
        lVar11 = uVar9 + (long)(iVar13 * 8 + 8);
        *(uint *)(lVar11 + -1) = uVar8;
        if ((uVar8 & 1) != 0) {
          uVar6 = uVar6 & 0xffffffff00000000;
          uVar10 = uVar6 | uVar8;
          uVar6 = uVar6 | (ulong)uVar8 & 0xfffffffffffc0000;
          uVar7 = *(ulong *)(uVar6 + 8);
          lVar11 = lVar11 + -1;
          if (((uint)uVar7 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar9,lVar11,uVar10);
            uVar7 = *(ulong *)(uVar6 | 8);
          }
          if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar9,lVar11,uVar10);
          }
        }
        uVar6 = *param_2;
        uVar9 = *puVar5;
        uVar8 = *(uint *)(lVar12 + uVar6 + 0xb);
        puVar1 = (uint *)(uVar9 + (long)(iVar13 * 8 + 0xb));
        *puVar1 = uVar8;
        if ((uVar8 & 1) != 0) {
          uVar6 = uVar6 & 0xffffffff00000000;
          uVar10 = uVar6 | uVar8;
          uVar6 = uVar6 | (ulong)uVar8 & 0xfffffffffffc0000;
          uVar7 = *(ulong *)(uVar6 + 8);
          if (((uint)uVar7 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar9,puVar1,uVar10);
            uVar7 = *(ulong *)(uVar6 | 8);
          }
          if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar9,puVar1,uVar10);
          }
        }
        iVar13 = iVar13 + 1;
      }
      if (lVar2 * 8 + -8 == lVar12) break;
      uVar6 = *param_2;
      lVar12 = lVar12 + 8;
    }
  }
  *(byte *)(*puVar5 + 3) = bVar3;
  return puVar5;
}

