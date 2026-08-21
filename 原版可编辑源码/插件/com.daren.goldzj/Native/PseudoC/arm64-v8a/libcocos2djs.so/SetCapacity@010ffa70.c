
/* v8::internal::HashTable<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::SetCapacity(int) */

void __thiscall
v8::internal::HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
SetCapacity(HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *this,
           int param_1)

{
  *(int *)(*(long *)this + 0xf) = param_1 << 1;
  return;
}

