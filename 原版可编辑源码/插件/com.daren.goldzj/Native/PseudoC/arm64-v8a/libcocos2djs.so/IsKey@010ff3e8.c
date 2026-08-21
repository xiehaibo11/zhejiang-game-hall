
/* v8::internal::HashTable<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::IsKey(v8::internal::ReadOnlyRoots, v8::internal::Object) */

bool v8::internal::HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
     IsKey(long param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x28)) {
    return false;
  }
  return param_2 != *(int *)(param_1 + 0x20);
}

