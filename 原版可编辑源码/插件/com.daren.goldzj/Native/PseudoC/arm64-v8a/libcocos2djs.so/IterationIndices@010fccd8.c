
/* v8::internal::BaseNameDictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::IterationIndices(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::GlobalDictionary>) */

ulong * v8::internal::
        BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
        IterationIndices(Factory *param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulong local_18;
  
  puVar3 = (ulong *)Factory::NewFixedArray(param_1,*(int *)(*param_2 + 7) >> 1,0);
  local_18 = *param_2;
  if ((int)*(uint *)(local_18 + 0xf) >> 1 == 0) {
    iVar8 = 0;
  }
  else {
    iVar5 = 0;
    iVar8 = 0;
    lVar6 = (long)((ulong)*(uint *)(local_18 + 0xf) << 0x20) >> 0x21;
    iVar7 = 0x14;
    do {
      uVar1 = *(uint *)(local_18 + 7 + (long)iVar7);
      if ((uVar1 != *(uint *)(param_1 + 0xa0)) &&
         (*(int *)((local_18 & 0xffffffff00000000 | (ulong)uVar1) + 0xb) != *(int *)(param_1 + 0xa8)
         )) {
        iVar2 = iVar8 << 2;
        iVar8 = iVar8 + 1;
        *(int *)(*puVar3 + (long)iVar2 + 7) = iVar5;
      }
      lVar6 = lVar6 + -1;
      iVar5 = iVar5 + 2;
      iVar7 = iVar7 + 4;
    } while (lVar6 != 0);
  }
  std::__ndk1::
  __sort<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
            (*puVar3 + 7,*puVar3 + 7 + (long)iVar8 * 4,&local_18);
  uVar4 = *puVar3;
  if (iVar8 == 0) {
    puVar3 = (ulong *)(uVar4 & 0xffffffff00000000 | 0x168);
  }
  else {
    iVar5 = *(int *)(uVar4 + 3) >> 1;
    iVar7 = iVar5 - iVar8;
    if (iVar7 != 0 && iVar8 <= iVar5) {
      Heap::RightTrimFixedArray((Heap *)(param_1 + 0x8850),uVar4,iVar7);
    }
  }
  return puVar3;
}

