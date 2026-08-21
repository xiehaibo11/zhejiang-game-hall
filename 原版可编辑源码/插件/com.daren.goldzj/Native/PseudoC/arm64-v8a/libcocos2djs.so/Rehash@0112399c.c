
/* v8::internal::OrderedHashTable<v8::internal::OrderedNameDictionary,
   3>::Rehash(v8::internal::Isolate*, v8::internal::Handle<v8::internal::OrderedNameDictionary>,
   int) */

ulong * v8::internal::OrderedHashTable<v8::internal::OrderedNameDictionary,3>::Rehash
                  (long param_1,ulong *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong *puVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  int local_84;
  ulong local_68;
  
  uVar12 = *(ulong *)((*param_2 & 0xfffffffffffc0000) + 8);
  if ((int)param_3 < 5) {
    param_3 = 4;
  }
  iVar7 = base::bits::RoundUpToPowerOfTwo32(param_3);
  if (iVar7 < 0xe38e39) {
    iVar14 = iVar7;
    if (iVar7 < 0) {
      iVar14 = iVar7 + 1;
    }
    uVar2 = iVar14 >> 1;
    uVar15 = (ulong)uVar2;
    puVar13 = (ulong *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>
                                 (param_1,0x37,uVar2 + iVar7 * 4 + 4,(uVar12 & 0x18) == 0);
    uVar12 = *puVar13;
    if (1 < iVar7) {
      iVar7 = 0x10;
      do {
        *(undefined4 *)(uVar12 + (long)iVar7 + 7) = 0xfffffffe;
        uVar12 = *puVar13;
        uVar15 = uVar15 - 1;
        iVar7 = iVar7 + 4;
      } while (uVar15 != 0);
    }
    *(uint *)(uVar12 + 0x13) = uVar2 << 1;
    *(undefined4 *)(*puVar13 + 0xb) = 0;
    *(undefined4 *)(*puVar13 + 0xf) = 0;
    if (puVar13 != (ulong *)0x0) {
      *(undefined4 *)(*puVar13 + 7) = 0;
      uVar12 = *param_2;
      uVar2 = *(uint *)(uVar12 + 0xb);
      uVar15 = *puVar13;
      uVar3 = *(uint *)(uVar15 + 0x13);
      iVar7 = (*(int *)(uVar12 + 0xf) >> 1) + ((int)uVar2 >> 1);
      if (0 < iVar7) {
        iVar11 = 0;
        iVar14 = 0;
        iVar17 = 4;
        local_84 = 0;
        while( true ) {
          iVar7 = iVar7 + -1;
          uVar8 = *(uint *)(uVar12 + 7 + (long)(int)((iVar17 + (*(uint *)(uVar12 + 0x13) >> 1)) * 4)
                           );
          if (((uVar8 & 1) == 0) || (uVar8 != *(uint *)(param_1 + 0xa8))) {
            uVar12 = uVar12 & 0xffffffff00000000 | (ulong)uVar8;
            uVar8 = Object::GetSimpleHash(uVar12);
            if ((uVar8 & 1) != 0) {
              local_68 = uVar12;
              uVar8 = JSReceiver::GetIdentityHash((JSReceiver *)&local_68);
            }
            uVar15 = *puVar13;
            lVar1 = uVar15 + (long)(int)(((uVar3 >> 1) + 0x3fffffff & uVar8 >> 1) * 4 + 0x10);
            uVar8 = *(uint *)(lVar1 + 7);
            *(int *)(lVar1 + 7) = iVar14 << 1;
            uVar9 = *puVar13;
            uVar12 = *param_2;
            iVar5 = (iVar14 * 4 + (*(int *)(uVar9 + 0x13) >> 1) + 4) * 4;
            iVar6 = (iVar17 + (*(uint *)(uVar12 + 0x13) >> 1)) * 4;
            uVar4 = *(uint *)(uVar12 + (long)iVar6 + 7);
            *(uint *)(uVar9 + (long)iVar5 + 7) = uVar4;
            if ((uVar4 & 1) != 0) {
              uVar16 = uVar12 & 0xffffffff00000000 | (ulong)uVar4;
              uVar10 = uVar12 & 0xffffffff00000000 | (ulong)uVar4 & 0xfffffffffffc0000;
              uVar12 = *(ulong *)(uVar10 + 8);
              lVar1 = uVar9 + (long)iVar5 + 7;
              if (((uint)uVar12 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar9,lVar1,uVar16);
                uVar12 = *(ulong *)(uVar10 | 8);
              }
              if (((uVar12 & 0x18) != 0) &&
                 ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar16);
              }
            }
            uVar12 = *param_2;
            uVar4 = *(uint *)(uVar12 + (long)(iVar6 + 4) + 7);
            uVar9 = *puVar13;
            lVar1 = uVar9 + (long)(iVar5 + 4);
            *(uint *)(lVar1 + 7) = uVar4;
            if ((uVar4 & 1) != 0) {
              uVar12 = uVar12 & 0xffffffff00000000;
              uVar16 = uVar12 | uVar4;
              uVar12 = uVar12 | (ulong)uVar4 & 0xfffffffffffc0000;
              uVar10 = *(ulong *)(uVar12 + 8);
              lVar1 = lVar1 + 7;
              if (((uint)uVar10 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar9,lVar1,uVar16);
                uVar10 = *(ulong *)(uVar12 | 8);
              }
              if (((uVar10 & 0x18) != 0) &&
                 ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar16);
              }
            }
            uVar12 = *param_2;
            uVar4 = *(uint *)(uVar12 + (long)(iVar6 + 8) + 7);
            uVar9 = *puVar13;
            lVar1 = uVar9 + (long)(iVar5 + 8);
            *(uint *)(lVar1 + 7) = uVar4;
            if ((uVar4 & 1) != 0) {
              uVar12 = uVar12 & 0xffffffff00000000;
              uVar16 = uVar12 | uVar4;
              uVar12 = uVar12 | (ulong)uVar4 & 0xfffffffffffc0000;
              uVar10 = *(ulong *)(uVar12 + 8);
              lVar1 = lVar1 + 7;
              if (((uint)uVar10 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar9,lVar1,uVar16);
                uVar10 = *(ulong *)(uVar12 | 8);
              }
              if (((uVar10 & 0x18) != 0) &&
                 ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar16);
              }
            }
            uVar12 = *puVar13;
            lVar1 = uVar12 + (long)(iVar5 + 0xc);
            *(uint *)(lVar1 + 7) = uVar8;
            if ((uVar8 & 1) != 0) {
              uVar15 = uVar15 & 0xffffffff00000000;
              uVar10 = uVar15 | uVar8;
              uVar15 = uVar15 | (ulong)uVar8 & 0xfffffffffffc0000;
              uVar9 = *(ulong *)(uVar15 + 8);
              lVar1 = lVar1 + 7;
              if (((uint)uVar9 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar12,lVar1,uVar10);
                uVar9 = *(ulong *)(uVar15 | 8);
              }
              if (((uVar9 & 0x18) != 0) &&
                 ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar10);
              }
            }
            iVar14 = iVar14 + 1;
          }
          else {
            iVar5 = local_84 * 4;
            local_84 = local_84 + 1;
            *(int *)(uVar12 + 7 + (long)(iVar5 + 0x10)) = iVar11;
          }
          if (iVar7 == 0) break;
          uVar12 = *param_2;
          iVar11 = iVar11 + 2;
          iVar17 = iVar17 + 4;
        }
        uVar15 = *puVar13;
      }
      *(uint *)(uVar15 + 0xb) = uVar2 & 0xfffffffe;
      uVar15 = *param_2;
      uVar12 = *puVar13;
      *(int *)(uVar15 + 0xb) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar15,uVar15 + 0xb,uVar12);
          uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0xb,uVar12);
        }
      }
    }
  }
  else {
    puVar13 = (ulong *)0x0;
  }
  return puVar13;
}

