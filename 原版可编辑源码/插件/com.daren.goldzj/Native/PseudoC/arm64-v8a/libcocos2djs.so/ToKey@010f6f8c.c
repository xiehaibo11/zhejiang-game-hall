
/* v8::internal::HashTable<v8::internal::CompilationCacheTable,
   v8::internal::CompilationCacheShape>::ToKey(v8::internal::ReadOnlyRoots,
   v8::internal::InternalIndex, v8::internal::Object*) */

undefined8 __thiscall
v8::internal::HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>::
ToKey(HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape> *this,
     long param_2,long param_3,ulong *param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(ulong *)this + (param_3 * 0xc00000000 + 0xc00000000 >> 0x20) + 7);
  if (uVar1 == *(uint *)(param_2 + 0x28)) {
    return 0;
  }
  if (uVar1 == *(uint *)(param_2 + 0x20)) {
    return 0;
  }
  *param_4 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar1;
  return 1;
}

