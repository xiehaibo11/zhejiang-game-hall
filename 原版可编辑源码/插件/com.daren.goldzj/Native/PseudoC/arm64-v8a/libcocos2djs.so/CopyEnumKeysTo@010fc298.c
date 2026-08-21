
/* v8::internal::BaseNameDictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::CopyEnumKeysTo(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NameDictionary>,
   v8::internal::Handle<v8::internal::FixedArray>, v8::internal::KeyCollectionMode,
   v8::internal::KeyAccumulator*) */

void v8::internal::
     BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
     CopyEnumKeysTo(long param_1,ulong *param_2,ulong *param_3,int param_4,KeyAccumulator *param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong local_68;
  
  uVar5 = *param_2;
  iVar12 = *(int *)(*param_3 + 3);
  iVar2 = iVar12 >> 1;
  if ((int)*(uint *)(uVar5 + 0xf) >> 1 == 0) {
    iVar8 = 0;
  }
  else {
    lVar13 = (long)((ulong)*(uint *)(uVar5 + 0xf) << 0x20) >> 0x21;
    iVar14 = 0;
    iVar8 = 0;
    lVar15 = 0x1c00000000;
    lVar10 = 0x1400000000;
    while( true ) {
      lVar13 = lVar13 + -1;
      uVar3 = *(uint *)(uVar5 + 7 + (lVar10 >> 0x20));
      if ((uVar3 != *(uint *)(param_1 + 0xa8)) && (uVar3 != *(uint *)(param_1 + 0xa0))) {
        if (((uVar3 & 1) == 0) ||
           (*(short *)((uVar5 & 0xffffffff00000000 | 7) +
                      (ulong)*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)uVar3) - 1)) != 0x40)) {
          if ((*(uint *)(uVar5 + 7 + (lVar15 >> 0x20)) >> 5 & 1) == 0) {
            iVar4 = iVar8 << 2;
            iVar8 = iVar8 + 1;
            *(int *)(*param_3 + (long)iVar4 + 7) = iVar14;
            if ((param_4 == 0) && (iVar8 == iVar2)) goto LAB_010fc3cc;
          }
          else if (param_4 == 1) {
            KeyAccumulator::AddShadowingKey(param_5);
          }
        }
      }
      if (lVar13 == 0) break;
      uVar5 = *param_2;
      lVar15 = lVar15 + 0xc00000000;
      lVar10 = lVar10 + 0xc00000000;
      iVar14 = iVar14 + 2;
    }
  }
  if (iVar2 != iVar8) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","length == properties");
  }
LAB_010fc3cc:
  uVar5 = *param_3;
  uVar9 = *param_2;
  lVar15 = uVar5 + 7;
  local_68 = uVar9;
  std::__ndk1::
  __sort<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
            (lVar15,lVar15 + (long)iVar2 * 4,&local_68);
  if (1 < iVar12) {
    iVar12 = 0;
    lVar10 = 0;
    do {
      puVar1 = (uint *)(lVar15 + iVar12);
      uVar3 = *(uint *)(uVar9 + 7 +
                       (((long)((ulong)*puVar1 << 0x20) >> 0x21) * 0xc00000000 + 0x1400000000 >>
                       0x20));
      *puVar1 = uVar3;
      if ((uVar3 & 1) != 0) {
        uVar11 = uVar9 & 0xffffffff00000000 | (ulong)uVar3;
        uVar7 = uVar9 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
        uVar6 = *(ulong *)(uVar7 + 8);
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar5,puVar1,uVar11);
          uVar6 = *(ulong *)(uVar7 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)(uVar5 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar5,puVar1,uVar11);
        }
      }
      lVar10 = lVar10 + 1;
      iVar12 = iVar12 + 4;
    } while (lVar10 < iVar2);
  }
  return;
}

