
/* v8::internal::HashTable<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::SlotToIndex(unsigned long, unsigned long) */

ulong v8::internal::
      HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::
      SlotToIndex(ulong param_1,ulong param_2)

{
  return (param_2 - param_1) + 0x3fffffff8 >> 2;
}

