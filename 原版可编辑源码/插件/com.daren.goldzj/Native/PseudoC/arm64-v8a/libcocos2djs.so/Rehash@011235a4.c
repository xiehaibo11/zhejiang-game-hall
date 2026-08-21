
/* v8::internal::OrderedHashTable<v8::internal::OrderedHashMap, 2>::Rehash(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::OrderedHashMap>, int) */

ulong * v8::internal::OrderedHashTable<v8::internal::OrderedHashMap,2>::Rehash
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
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  int local_84;
  ulong local_68;
  
  uVar12 = *(ulong *)((*param_2 & 0xfffffffffffc0000) + 8);
  if ((int)param_3 < 5) {
    param_3 = 4;
  }
  iVar7 = base::bits::RoundUpToPowerOfTwo32(param_3);
  if (iVar7 < 0x1249249) {
    iVar15 = iVar7;
    if (iVar7 < 0) {
      iVar15 = iVar7 + 1;
    }
    uVar2 = iVar15 >> 1;
    uVar14 = (ulong)uVar2;
    puVar13 = (ulong *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>
                                 (param_1,0x35,uVar2 + iVar7 * 3 + 3,(uVar12 & 0x18) == 0);
    uVar12 = *puVar13;
    if (1 < iVar7) {
      iVar7 = 0xc;
      do {
        *(undefined4 *)(uVar12 + (long)iVar7 + 7) = 0xfffffffe;
        uVar12 = *puVar13;
        uVar14 = uVar14 - 1;
        iVar7 = iVar7 + 4;
      } while (uVar14 != 0);
    }
    *(uint *)(uVar12 + 0xf) = uVar2 << 1;
    *(undefined4 *)(*puVar13 + 7) = 0;
    *(undefined4 *)(*puVar13 + 0xb) = 0;
    if (puVar13 != (ulong *)0x0) {
      uVar12 = *param_2;
      uVar2 = *(uint *)(uVar12 + 7);
      uVar14 = *puVar13;
      uVar3 = *(uint *)(uVar14 + 0xf);
      iVar7 = (*(int *)(uVar12 + 0xb) >> 1) + ((int)uVar2 >> 1);
      if (0 < iVar7) {
        iVar11 = 0;
        iVar15 = 0;
        iVar17 = 3;
        local_84 = 0;
        while( true ) {
          iVar7 = iVar7 + -1;
          uVar8 = *(uint *)(uVar12 + 7 + (long)(int)((iVar17 + (*(uint *)(uVar12 + 0xf) >> 1)) * 4))
          ;
          if (((uVar8 & 1) == 0) || (uVar8 != *(uint *)(param_1 + 0xa8))) {
            uVar12 = uVar12 & 0xffffffff00000000 | (ulong)uVar8;
            uVar8 = Object::GetSimpleHash(uVar12);
            if ((uVar8 & 1) != 0) {
              local_68 = uVar12;
              uVar8 = JSReceiver::GetIdentityHash((JSReceiver *)&local_68);
            }
            uVar14 = *puVar13;
            lVar1 = uVar14 + (long)(int)(((uVar3 >> 1) + 0x3fffffff & uVar8 >> 1) * 4 + 0xc);
            uVar8 = *(uint *)(lVar1 + 7);
            *(int *)(lVar1 + 7) = iVar15 * 2;
            uVar9 = *puVar13;
            uVar12 = *param_2;
            iVar5 = (iVar15 * 3 + (*(int *)(uVar9 + 0xf) >> 1) + 3) * 4;
            iVar6 = (iVar17 + (*(uint *)(uVar12 + 0xf) >> 1)) * 4;
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
            uVar12 = *puVar13;
            lVar1 = uVar12 + (long)(iVar5 + 8);
            *(uint *)(lVar1 + 7) = uVar8;
            if ((uVar8 & 1) != 0) {
              uVar14 = uVar14 & 0xffffffff00000000;
              uVar10 = uVar14 | uVar8;
              uVar14 = uVar14 | (ulong)uVar8 & 0xfffffffffffc0000;
              uVar9 = *(ulong *)(uVar14 + 8);
              lVar1 = lVar1 + 7;
              if (((uint)uVar9 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar12,lVar1,uVar10);
                uVar9 = *(ulong *)(uVar14 | 8);
              }
              if (((uVar9 & 0x18) != 0) &&
                 ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar10);
              }
            }
            iVar15 = iVar15 + 1;
          }
          else {
            iVar5 = local_84 * 4;
            local_84 = local_84 + 1;
            *(int *)(uVar12 + 7 + (long)(iVar5 + 0xc)) = iVar11;
          }
          if (iVar7 == 0) break;
          uVar12 = *param_2;
          iVar11 = iVar11 + 2;
          iVar17 = iVar17 + 3;
        }
        uVar14 = *puVar13;
      }
      *(uint *)(uVar14 + 7) = uVar2 & 0xfffffffe;
      uVar14 = *param_2;
      uVar12 = *puVar13;
      *(int *)(uVar14 + 7) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 7,uVar12);
          uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 7,uVar12);
        }
      }
    }
  }
  else {
    puVar13 = (ulong *)0x0;
  }
  return puVar13;
}

