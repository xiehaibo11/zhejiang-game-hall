
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Rehash(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedNameDictionary>, int) */

ulong * v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Rehash
                  (Factory *param_1,ulong *param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong local_68;
  
  puVar6 = (ulong *)Factory::NewSmallOrderedNameDictionary
                              (param_1,param_3,
                               (*(ulong *)((*param_2 & 0xfffffffffffc0000) + 8) & 0x18) == 0);
  uVar7 = *param_2;
  bVar3 = *(byte *)(uVar7 + 7);
  lVar1 = (ulong)*(byte *)(uVar7 + 8) + (ulong)bVar3;
  if ((int)lVar1 != 0) {
    lVar12 = 0;
    iVar13 = 0;
    while( true ) {
      uVar2 = *(uint *)(uVar7 + lVar12 + 0xb);
      if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa8))) {
        uVar9 = uVar7 & 0xffffffff00000000 | (ulong)uVar2;
        uVar7 = Object::GetSimpleHash(uVar9);
        if ((uVar7 & 1) != 0) {
          local_68 = uVar9;
          uVar7 = JSReceiver::GetIdentityHash((JSReceiver *)&local_68);
        }
        uVar9 = (ulong)*(byte *)(*puVar6 + 9);
        lVar11 = (uVar9 - 1 & (long)(uVar7 << 0x20) >> 0x21) + uVar9 * 0x18 + *puVar6;
        uVar4 = *(undefined1 *)(lVar11 + 0xb);
        *(char *)(lVar11 + 0xb) = (char)iVar13;
        *(undefined1 *)
         (*puVar6 + (long)(int)(iVar13 + (uint)*(byte *)(*puVar6 + 9) * 0x19 + 0xc) + -1) = uVar4;
        uVar7 = *param_2;
        uVar9 = *puVar6;
        iVar5 = iVar13 * 0xc;
        uVar2 = *(uint *)(lVar12 + uVar7 + 0xb);
        lVar11 = uVar9 + (long)(iVar5 + 0xc);
        *(uint *)(lVar11 + -1) = uVar2;
        if ((uVar2 & 1) != 0) {
          uVar7 = uVar7 & 0xffffffff00000000;
          uVar10 = uVar7 | uVar2;
          uVar7 = uVar7 | (ulong)uVar2 & 0xfffffffffffc0000;
          uVar8 = *(ulong *)(uVar7 + 8);
          lVar11 = lVar11 + -1;
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar9,lVar11,uVar10);
            uVar8 = *(ulong *)(uVar7 | 8);
          }
          if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar9,lVar11,uVar10);
          }
        }
        uVar7 = *param_2;
        uVar9 = *puVar6;
        uVar2 = *(uint *)(lVar12 + uVar7 + 0xf);
        lVar11 = uVar9 + (long)(iVar5 + 0x10);
        *(uint *)(lVar11 + -1) = uVar2;
        if ((uVar2 & 1) != 0) {
          uVar7 = uVar7 & 0xffffffff00000000;
          uVar10 = uVar7 | uVar2;
          uVar7 = uVar7 | (ulong)uVar2 & 0xfffffffffffc0000;
          uVar8 = *(ulong *)(uVar7 + 8);
          lVar11 = lVar11 + -1;
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar9,lVar11,uVar10);
            uVar8 = *(ulong *)(uVar7 | 8);
          }
          if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar9,lVar11,uVar10);
          }
        }
        uVar7 = *param_2;
        uVar9 = *puVar6;
        uVar2 = *(uint *)(lVar12 + uVar7 + 0x13);
        lVar11 = uVar9 + (long)(iVar5 + 0x14);
        *(uint *)(lVar11 + -1) = uVar2;
        if ((uVar2 & 1) != 0) {
          uVar7 = uVar7 & 0xffffffff00000000;
          uVar10 = uVar7 | uVar2;
          uVar7 = uVar7 | (ulong)uVar2 & 0xfffffffffffc0000;
          uVar8 = *(ulong *)(uVar7 + 8);
          lVar11 = lVar11 + -1;
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar9,lVar11,uVar10);
            uVar8 = *(ulong *)(uVar7 | 8);
          }
          if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar9,lVar11,uVar10);
          }
        }
        iVar13 = iVar13 + 1;
      }
      if (lVar1 * 0xc + -0xc == lVar12) break;
      uVar7 = *param_2;
      lVar12 = lVar12 + 0xc;
    }
  }
  *(byte *)(*puVar6 + 7) = bVar3;
  return puVar6;
}

