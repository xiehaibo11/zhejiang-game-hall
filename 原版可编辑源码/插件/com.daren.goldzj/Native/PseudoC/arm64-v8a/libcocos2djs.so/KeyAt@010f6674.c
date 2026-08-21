
/* v8::internal::HashTable<v8::internal::CompilationCacheTable,
   v8::internal::CompilationCacheShape>::KeyAt(v8::internal::InternalIndex) */

ulong __thiscall
v8::internal::HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>::
KeyAt(HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape> *this,
     long param_2)

{
  return *(ulong *)this & 0xffffffff00000000 |
         (ulong)*(uint *)(*(ulong *)this + (param_2 * 0xc00000000 + 0xc00000000 >> 0x20) + 7);
}

