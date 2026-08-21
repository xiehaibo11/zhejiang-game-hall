
/* v8::internal::OrderedHashTable<v8::internal::OrderedHashSet, 1>::Rehash(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::OrderedHashSet>, int) */

ulong * v8::internal::OrderedHashTable<v8::internal::OrderedHashSet,1>::Rehash
                  (long param_1,ulong *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  int local_7c;
  ulong local_68;
  
  uVar10 = *(ulong *)((*param_2 & 0xfffffffffffc0000) + 8);
  if ((int)param_3 < 5) {
    param_3 = 4;
  }
  iVar6 = base::bits::RoundUpToPowerOfTwo32(param_3);
  if (iVar6 < 0x1999999) {
    iVar12 = iVar6;
    if (iVar6 < 0) {
      iVar12 = iVar6 + 1;
    }
    uVar2 = iVar12 >> 1;
    uVar13 = (ulong)uVar2;
    puVar11 = (ulong *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>
                                 (param_1,0x36,uVar2 + iVar6 * 2 + 3,(uVar10 & 0x18) == 0);
    uVar10 = *puVar11;
    if (1 < iVar6) {
      iVar6 = 0xc;
      do {
        *(undefined4 *)(uVar10 + (long)iVar6 + 7) = 0xfffffffe;
        uVar10 = *puVar11;
        uVar13 = uVar13 - 1;
        iVar6 = iVar6 + 4;
      } while (uVar13 != 0);
    }
    *(uint *)(uVar10 + 0xf) = uVar2 << 1;
    *(undefined4 *)(*puVar11 + 7) = 0;
    *(undefined4 *)(*puVar11 + 0xb) = 0;
    if (puVar11 != (ulong *)0x0) {
      uVar10 = *param_2;
      uVar2 = *(uint *)(uVar10 + 7);
      uVar13 = *puVar11;
      uVar3 = *(uint *)(uVar13 + 0xf);
      iVar6 = (*(int *)(uVar10 + 0xb) >> 1) + ((int)uVar2 >> 1);
      if (0 < iVar6) {
        iVar12 = 0;
        iVar14 = 3;
        local_7c = 0;
        while( true ) {
          iVar6 = iVar6 + -1;
          uVar7 = *(uint *)(uVar10 + 7 + (long)(int)((iVar14 + (*(uint *)(uVar10 + 0xf) >> 1)) * 4))
          ;
          if (((uVar7 & 1) == 0) || (uVar7 != *(uint *)(param_1 + 0xa8))) {
            uVar10 = uVar10 & 0xffffffff00000000 | (ulong)uVar7;
            uVar7 = Object::GetSimpleHash(uVar10);
            if ((uVar7 & 1) != 0) {
              local_68 = uVar10;
              uVar7 = JSReceiver::GetIdentityHash((JSReceiver *)&local_68);
            }
            uVar13 = *puVar11;
            lVar1 = uVar13 + (long)(int)(((uVar3 >> 1) + 0x3fffffff & uVar7 >> 1) * 4 + 0xc);
            uVar7 = *(uint *)(lVar1 + 7);
            *(int *)(lVar1 + 7) = iVar12 * 2;
            uVar8 = *puVar11;
            uVar10 = *param_2;
            iVar5 = (iVar12 * 2 + (*(uint *)(uVar8 + 0xf) >> 1)) * 4;
            lVar1 = uVar8 + (long)(iVar5 + 0xc);
            uVar4 = *(uint *)(uVar10 + (long)(int)((iVar14 + (*(uint *)(uVar10 + 0xf) >> 1)) * 4) +
                             7);
            *(uint *)(lVar1 + 7) = uVar4;
            if ((uVar4 & 1) != 0) {
              uVar15 = uVar10 & 0xffffffff00000000 | (ulong)uVar4;
              uVar9 = uVar10 & 0xffffffff00000000 | (ulong)uVar4 & 0xfffffffffffc0000;
              uVar10 = *(ulong *)(uVar9 + 8);
              lVar1 = lVar1 + 7;
              if (((uint)uVar10 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar8,lVar1,uVar15);
                uVar10 = *(ulong *)(uVar9 | 8);
              }
              if (((uVar10 & 0x18) != 0) &&
                 ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar8,lVar1,uVar15);
              }
            }
            uVar10 = *puVar11;
            lVar1 = uVar10 + (long)(iVar5 + 0x10);
            *(uint *)(lVar1 + 7) = uVar7;
            if ((uVar7 & 1) != 0) {
              uVar13 = uVar13 & 0xffffffff00000000;
              uVar9 = uVar13 | uVar7;
              uVar13 = uVar13 | (ulong)uVar7 & 0xfffffffffffc0000;
              uVar8 = *(ulong *)(uVar13 + 8);
              lVar1 = lVar1 + 7;
              if (((uint)uVar8 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar10,lVar1,uVar9);
                uVar8 = *(ulong *)(uVar13 | 8);
              }
              if (((uVar8 & 0x18) != 0) &&
                 ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar10,lVar1,uVar9);
              }
            }
            iVar12 = iVar12 + 1;
          }
          else {
            iVar5 = local_7c * 4;
            local_7c = local_7c + 1;
            *(int *)(uVar10 + 7 + (long)(iVar5 + 0xc)) = iVar14 + -3;
          }
          if (iVar6 == 0) break;
          uVar10 = *param_2;
          iVar14 = iVar14 + 2;
        }
        uVar13 = *puVar11;
      }
      *(uint *)(uVar13 + 7) = uVar2 & 0xfffffffe;
      uVar13 = *param_2;
      uVar10 = *puVar11;
      *(int *)(uVar13 + 7) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar8 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar8 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar13,uVar13 + 7,uVar10);
          uVar8 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar13,uVar13 + 7,uVar10);
        }
      }
    }
  }
  else {
    puVar11 = (ulong *)0x0;
  }
  return puVar11;
}

