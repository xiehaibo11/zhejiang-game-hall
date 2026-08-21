
/* v8::internal::BaseNameDictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::EnsureCapacity(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NameDictionary>, int) */

void v8::internal::
     BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
     EnsureCapacity(undefined8 param_1,long *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  
  if (0x7fffff < (uint)(param_3 + (*(int *)(*param_2 + 0x13) >> 1))) {
    uVar2 = *(uint *)(*param_2 + 7);
    plVar4 = (long *)IterationIndices(param_1,param_2);
    if (1 < (int)uVar2) {
      iVar5 = 0;
      uVar6 = 0;
      uVar7 = 0x200;
      do {
        uVar6 = uVar6 + 1;
        lVar1 = (long)iVar5;
        iVar5 = iVar5 + 4;
        lVar1 = *param_2 +
                (((long)((ulong)*(uint *)(*plVar4 + lVar1 + 7) << 0x20) >> 0x21) * 0xc00000000 +
                 0x1c00000000 >> 0x20);
        uVar3 = *(uint *)(lVar1 + 7) & 0x1fe | uVar7;
        uVar7 = uVar7 + 0x200;
        *(uint *)(lVar1 + 7) = uVar3;
      } while (uVar6 < uVar2 >> 1);
    }
    *(uint *)(*param_2 + 0x13) = uVar2 + 2 & 0xfffffffe;
  }
  HashTable<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::EnsureCapacity
            (param_1,param_2,param_3,0);
  return;
}

