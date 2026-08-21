
/* v8::internal::BaseNameDictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::CopyEnumKeysTo(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::GlobalDictionary>,
   v8::internal::Handle<v8::internal::FixedArray>, v8::internal::KeyCollectionMode,
   v8::internal::KeyAccumulator*) */

void v8::internal::
     BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
     CopyEnumKeysTo(long param_1,ulong *param_2,ulong *param_3,int param_4,KeyAccumulator *param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  ulong local_68;
  
  uVar5 = *param_2;
  iVar13 = *(int *)(*param_3 + 3);
  iVar2 = iVar13 >> 1;
  if ((int)*(uint *)(uVar5 + 0xf) >> 1 == 0) {
    iVar10 = 0;
  }
  else {
    lVar16 = (long)((ulong)*(uint *)(uVar5 + 0xf) << 0x20) >> 0x21;
    iVar15 = 0;
    iVar10 = 0;
    iVar11 = 0x14;
    while( true ) {
      lVar16 = lVar16 + -1;
      uVar3 = *(uint *)((long)iVar11 + 7 + uVar5);
      if (uVar3 != *(uint *)(param_1 + 0xa0)) {
        uVar8 = uVar5 & 0xffffffff00000000;
        uVar9 = uVar8 | uVar3;
        if ((*(int *)(uVar9 + 0xb) != *(int *)(param_1 + 0xa8)) &&
           ((uVar3 = *(uint *)(uVar9 + 3), (uVar3 & 1) == 0 ||
            (*(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar3) - 1)) != 0x40)))) {
          if ((*(byte *)((uVar8 | *(uint *)(uVar5 + (long)iVar11 + 7)) + 7) >> 5 & 1) == 0) {
            iVar4 = iVar10 << 2;
            iVar10 = iVar10 + 1;
            *(int *)(*param_3 + (long)iVar4 + 7) = iVar15;
            if ((param_4 == 0) && (iVar10 == iVar2)) goto LAB_010fcf1c;
          }
          else if (param_4 == 1) {
            KeyAccumulator::AddShadowingKey(param_5);
          }
        }
      }
      if (lVar16 == 0) break;
      uVar5 = *param_2;
      iVar15 = iVar15 + 2;
      iVar11 = iVar11 + 4;
    }
  }
  if (iVar2 != iVar10) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","length == properties");
  }
LAB_010fcf1c:
  uVar5 = *param_3;
  uVar8 = *param_2;
  lVar16 = uVar5 + 7;
  local_68 = uVar8;
  std::__ndk1::
  __sort<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
            (lVar16,lVar16 + (long)iVar2 * 4,&local_68);
  if (1 < iVar13) {
    uVar9 = uVar8 & 0xffffffff00000000;
    iVar13 = 0;
    lVar14 = 0;
    do {
      puVar1 = (uint *)(lVar16 + iVar13);
      uVar3 = *(uint *)((uVar9 | 3) +
                       (ulong)*(uint *)(uVar8 + 7 + (long)(int)((*puVar1 & 0x7ffffffe) * 2 + 0x14)))
      ;
      *puVar1 = uVar3;
      if ((uVar3 & 1) != 0) {
        uVar12 = uVar9 | uVar3;
        uVar7 = uVar9 | (ulong)uVar3 & 0xfffffffffffc0000;
        uVar6 = *(ulong *)(uVar7 + 8);
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar5,puVar1,uVar12);
          uVar6 = *(ulong *)(uVar7 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)(uVar5 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar5,puVar1,uVar12);
        }
      }
      lVar14 = lVar14 + 1;
      iVar13 = iVar13 + 4;
    } while (lVar14 < iVar2);
  }
  return;
}

