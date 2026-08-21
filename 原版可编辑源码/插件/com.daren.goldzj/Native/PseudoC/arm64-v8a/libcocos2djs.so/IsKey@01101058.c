
/* v8::internal::HashTable<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::IsKey(v8::internal::ReadOnlyRoots,
   v8::internal::Object) */

bool v8::internal::
     HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::
     IsKey(long param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x28)) {
    return false;
  }
  return param_2 != *(int *)(param_1 + 0x20);
}

