
/* v8::internal::BaseNameDictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::CollectKeysTo(v8::internal::Handle<v8::internal::NameDictionary>,
   v8::internal::KeyAccumulator*) */

undefined8
v8::internal::BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
CollectKeysTo(ulong *param_1,KeyAccumulator *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  Factory *pFVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  uint local_6c;
  ulong local_68;
  
  pFVar9 = *(Factory **)param_2;
  plVar5 = (long *)Factory::NewFixedArray(pFVar9,*(int *)(*param_1 + 7) >> 1,0);
  local_68 = *param_1;
  if ((int)*(uint *)(local_68 + 0xf) >> 1 == 0) {
    local_6c = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x24);
    uVar8 = local_68 & 0xffffffff00000000;
    iVar12 = 0;
    lVar13 = (long)((ulong)*(uint *)(local_68 + 0xf) << 0x20) >> 0x21;
    lVar10 = local_68 + 7;
    lVar11 = 0x1800000000;
    lVar14 = 0x1c00000000;
    lVar7 = 0x1400000000;
    local_6c = 0;
    do {
      uVar2 = *(uint *)(lVar10 + (lVar7 >> 0x20));
      if ((uVar2 == *(uint *)(pFVar9 + 0xa8)) || (uVar2 == *(uint *)(pFVar9 + 0xa0)))
      goto LAB_010fbebc;
      uVar6 = uVar8 | uVar2;
      if ((uVar2 & 1) == 0) {
        bVar4 = false;
        if (uVar1 == 0x40) goto LAB_010fbf34;
LAB_010fbf08:
        if (!bVar4) {
          if ((uVar1 >> 3 & 1) != 0) goto LAB_010fbebc;
          goto LAB_010fbf48;
        }
        if (((uVar1 >> 4 & 1) == 0) && ((*(byte *)(uVar6 + 7) & 1) == 0)) goto LAB_010fbf48;
      }
      else {
        bVar4 = *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x40;
        if (uVar1 != 0x40) goto LAB_010fbf08;
LAB_010fbf34:
        if ((bVar4) && ((*(byte *)(uVar6 + 7) >> 4 & 1) != 0)) {
LAB_010fbf48:
          uVar2 = *(uint *)(lVar10 + (lVar14 >> 0x20));
          if ((uVar1 & 7 & uVar2 >> 4) == 0) {
            if (((uVar1 >> 5 & 1) == 0) ||
               (((((uVar2 >> 1 & 1) != 0 &&
                  (uVar2 = *(uint *)(lVar10 + (lVar11 >> 0x20)), (uVar2 & 1) != 0)) &&
                 (uVar6 = uVar8 | uVar2,
                 *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x51)) &&
                ((*(byte *)(uVar6 + 7) >> 1 & 1) != 0)))) {
              iVar3 = local_6c << 2;
              local_6c = local_6c + 1;
              *(int *)(*plVar5 + (long)iVar3 + 7) = iVar12;
            }
          }
          else {
            KeyAccumulator::AddShadowingKey(param_2);
          }
        }
      }
LAB_010fbebc:
      lVar13 = lVar13 + -1;
      lVar11 = lVar11 + 0xc00000000;
      lVar14 = lVar14 + 0xc00000000;
      lVar7 = lVar7 + 0xc00000000;
      iVar12 = iVar12 + 2;
    } while (lVar13 != 0);
  }
  std::__ndk1::
  __sort<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
            (*plVar5 + 7,*plVar5 + 7 + (long)(int)local_6c * 4,&local_68);
  if (0 < (int)local_6c) {
    lVar10 = 0;
    bVar4 = false;
    do {
      uVar1 = *(uint *)(*param_1 +
                        (((long)((ulong)*(uint *)(*plVar5 + (long)(int)lVar10 + 7) << 0x20) >> 0x21)
                         * 0xc00000000 + 0x1400000000 >> 0x20) + 7);
      uVar6 = *param_1 & 0xffffffff00000000;
      uVar8 = uVar6 | uVar1;
      if (((uVar1 & 1) == 0) || (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x40)) {
        uVar8 = KeyAccumulator::AddKey(param_2,uVar8,0);
        if ((uVar8 & 1) == 0) {
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
        uVar1 = *(uint *)(*param_1 +
                          (((long)((ulong)*(uint *)(*plVar5 + (long)(int)lVar10 + 7) << 0x20) >>
                           0x21) * 0xc00000000 + 0x1400000000 >> 0x20) + 7);
        if ((((uVar1 & 1) != 0) &&
            (uVar6 = *param_1 & 0xffffffff00000000, uVar8 = uVar6 | uVar1,
            *(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x40)) &&
           (uVar8 = KeyAccumulator::AddKey(param_2,uVar8,0), (uVar8 & 1) == 0)) {
          return 0;
        }
        lVar10 = lVar10 + 4;
      } while ((ulong)local_6c * 4 - lVar10 != 0);
    }
  }
  return 1;
}

