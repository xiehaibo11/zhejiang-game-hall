
/* v8::internal::BaseNameDictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::CollectKeysTo(v8::internal::Handle<v8::internal::GlobalDictionary>,
   v8::internal::KeyAccumulator*) */

undefined8
v8::internal::BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
::CollectKeysTo(ulong *param_1,KeyAccumulator *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  Factory *pFVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint local_6c;
  ulong local_68;
  
  pFVar8 = *(Factory **)param_2;
  plVar5 = (long *)Factory::NewFixedArray(pFVar8,*(int *)(*param_1 + 7) >> 1,0);
  local_68 = *param_1;
  if ((int)*(uint *)(local_68 + 0xf) >> 1 == 0) {
    local_6c = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x24);
    lVar12 = (long)((ulong)*(uint *)(local_68 + 0xf) << 0x20) >> 0x21;
    uVar13 = local_68 & 0xffffffff00000000;
    iVar11 = 0;
    lVar10 = local_68 + 7;
    iVar6 = 0x14;
    local_6c = 0;
    do {
      lVar9 = (long)iVar6;
      if ((*(uint *)(lVar10 + lVar9) == *(uint *)(pFVar8 + 0xa0)) ||
         (uVar7 = uVar13 | *(uint *)(lVar10 + lVar9),
         *(int *)(uVar7 + 0xb) == *(int *)(pFVar8 + 0xa8))) goto LAB_010fca64;
      uVar2 = *(uint *)(uVar7 + 3);
      uVar7 = uVar13 | uVar2;
      if ((uVar2 & 1) == 0) {
        bVar4 = false;
        if (uVar1 == 0x40) goto LAB_010fcae0;
LAB_010fcab4:
        if (!bVar4) {
          if ((uVar1 >> 3 & 1) != 0) goto LAB_010fca64;
          goto LAB_010fcaf4;
        }
        if (((uVar1 >> 4 & 1) == 0) && ((*(byte *)(uVar7 + 7) & 1) == 0)) goto LAB_010fcaf4;
      }
      else {
        bVar4 = *(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x40;
        if (uVar1 != 0x40) goto LAB_010fcab4;
LAB_010fcae0:
        if ((bVar4) && ((*(byte *)(uVar7 + 7) >> 4 & 1) != 0)) {
LAB_010fcaf4:
          uVar2 = *(uint *)((uVar13 | *(uint *)(lVar9 + lVar10)) + 7);
          if ((uVar1 & 7 & uVar2 >> 4) == 0) {
            if (((uVar1 >> 5 & 1) == 0) ||
               (((((uVar2 >> 1 & 1) != 0 &&
                  (uVar2 = *(uint *)((uVar13 | 0xb) + (ulong)*(uint *)(lVar9 + lVar10)),
                  (uVar2 & 1) != 0)) &&
                 (uVar7 = uVar13 | uVar2,
                 *(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x51)) &&
                ((*(byte *)(uVar7 + 7) >> 1 & 1) != 0)))) {
              iVar3 = local_6c << 2;
              local_6c = local_6c + 1;
              *(int *)(*plVar5 + (long)iVar3 + 7) = iVar11;
            }
          }
          else {
            KeyAccumulator::AddShadowingKey(param_2);
          }
        }
      }
LAB_010fca64:
      lVar12 = lVar12 + -1;
      iVar11 = iVar11 + 2;
      iVar6 = iVar6 + 4;
    } while (lVar12 != 0);
  }
  std::__ndk1::
  __sort<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
            (*plVar5 + 7,*plVar5 + 7 + (long)(int)local_6c * 4,&local_68);
  if (0 < (int)local_6c) {
    lVar10 = 0;
    bVar4 = false;
    do {
      uVar7 = *param_1 & 0xffffffff00000000;
      uVar1 = *(uint *)((uVar7 | 3) +
                       (ulong)*(uint *)(*param_1 +
                                        (long)(int)((*(uint *)(*plVar5 + (long)(int)lVar10 + 7) &
                                                    0x7ffffffe) * 2 + 0x14) + 7));
      uVar13 = uVar7 | uVar1;
      if (((uVar1 & 1) == 0) || (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x40)) {
        uVar13 = KeyAccumulator::AddKey(param_2,uVar13,0);
        if ((uVar13 & 1) == 0) {
          return 0;
        }
      }
      else {
        bVar4 = true;
      }
      lVar10 = lVar10 + 4;
    } while ((ulong)local_6c * 4 - lVar10 != 0);
    if (bVar4) {
      lVar10 = 0;
      do {
        uVar13 = *param_1 & 0xffffffff00000000;
        uVar1 = *(uint *)((uVar13 | 3) +
                         (ulong)*(uint *)(*param_1 +
                                          (long)(int)((*(uint *)(*plVar5 + (long)(int)lVar10 + 7) &
                                                      0x7ffffffe) * 2 + 0x14) + 7));
        if ((((uVar1 & 1) != 0) &&
            (uVar7 = uVar13 | uVar1, *(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x40)
            ) && (uVar13 = KeyAccumulator::AddKey(param_2,uVar7,0), (uVar13 & 1) == 0)) {
          return 0;
        }
        lVar10 = lVar10 + 4;
      } while ((ulong)local_6c * 4 - lVar10 != 0);
    }
  }
  return 1;
}

