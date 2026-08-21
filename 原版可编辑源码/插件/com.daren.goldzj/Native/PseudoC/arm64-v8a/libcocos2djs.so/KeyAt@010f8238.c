
/* v8::internal::HashTable<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::KeyAt(v8::internal::Isolate const*,
   v8::internal::InternalIndex) */

long __thiscall
v8::internal::HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::KeyAt
          (HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape> *this,
          long param_1,int param_3)

{
  return (ulong)*(uint *)(*(long *)this + (long)(param_3 * 8 + 0xc) + 7) + param_1;
}

