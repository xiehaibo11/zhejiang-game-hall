
/* v8::internal::HashTable<v8::internal::CompilationCacheTable,
   v8::internal::CompilationCacheShape>::SlotToIndex(unsigned long, unsigned long) */

ulong v8::internal::
      HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>::
      SlotToIndex(ulong param_1,ulong param_2)

{
  return (param_2 - param_1) + 0x3fffffff8 >> 2;
}

