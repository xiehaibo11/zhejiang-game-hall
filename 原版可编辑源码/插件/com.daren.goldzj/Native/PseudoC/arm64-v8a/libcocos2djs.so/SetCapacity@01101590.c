
/* v8::internal::HashTable<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::SetCapacity(int) */

void __thiscall
v8::internal::
HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::
SetCapacity(HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
            *this,int param_1)

{
  *(int *)(*(long *)this + 0xf) = param_1 << 1;
  return;
}

