
/* v8::internal::BaseNameDictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::IterationIndices(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NameDictionary>) */

ulong * v8::internal::
        BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
        IterationIndices(Factory *param_1,long *param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long local_18;
  
  puVar2 = (ulong *)Factory::NewFixedArray(param_1,*(int *)(*param_2 + 7) >> 1,0);
  local_18 = *param_2;
  if ((int)*(uint *)(local_18 + 0xf) >> 1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar4 = 0;
    iVar7 = 0;
    lVar5 = (long)((ulong)*(uint *)(local_18 + 0xf) << 0x20) >> 0x21;
    lVar6 = 0x1400000000;
    do {
      iVar1 = *(int *)(local_18 + 7 + (lVar6 >> 0x20));
      if ((iVar1 != *(int *)(param_1 + 0xa8)) && (iVar1 != *(int *)(param_1 + 0xa0))) {
        iVar1 = iVar7 << 2;
        iVar7 = iVar7 + 1;
        *(int *)(*puVar2 + (long)iVar1 + 7) = iVar4;
      }
      lVar5 = lVar5 + -1;
      lVar6 = lVar6 + 0xc00000000;
      iVar4 = iVar4 + 2;
    } while (lVar5 != 0);
  }
  std::__ndk1::
  __sort<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
            (*puVar2 + 7,*puVar2 + 7 + (long)iVar7 * 4,&local_18);
  uVar3 = *puVar2;
  if (iVar7 == 0) {
    puVar2 = (ulong *)(uVar3 & 0xffffffff00000000 | 0x168);
  }
  else {
    iVar4 = *(int *)(uVar3 + 3) >> 1;
    iVar1 = iVar4 - iVar7;
    if (iVar1 != 0 && iVar7 <= iVar4) {
      Heap::RightTrimFixedArray((Heap *)(param_1 + 0x8850),uVar3,iVar1);
    }
  }
  return puVar2;
}

