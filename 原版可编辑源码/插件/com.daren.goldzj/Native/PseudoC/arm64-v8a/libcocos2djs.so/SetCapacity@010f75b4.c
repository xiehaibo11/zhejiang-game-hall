
/* v8::internal::HashTable<v8::internal::CompilationCacheTable,
   v8::internal::CompilationCacheShape>::SetCapacity(int) */

void __thiscall
v8::internal::HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>::
SetCapacity(HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape> *this
           ,int param_1)

{
  *(int *)(*(long *)this + 0xf) = param_1 << 1;
  return;
}

