
/* v8::internal::HashTable<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::ToKey(v8::internal::Isolate*, v8::internal::InternalIndex,
   v8::internal::Object*) */

undefined8 __thiscall
v8::internal::HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::ToKey
          (HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *this,
          long param_1,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  
  lVar1 = (ulong)*(uint *)(*(long *)this + (param_3 * 0xc00000000 + 0x1000000000 >> 0x20) + 7) +
          param_1;
  iVar2 = (int)lVar1;
  if (iVar2 == *(int *)(param_1 + 0xa8)) {
    return 0;
  }
  if (iVar2 == *(int *)(param_1 + 0xa0)) {
    return 0;
  }
  *param_4 = lVar1;
  return 1;
}

