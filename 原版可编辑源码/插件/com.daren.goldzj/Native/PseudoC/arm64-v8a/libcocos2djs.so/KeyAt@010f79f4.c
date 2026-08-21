
/* v8::internal::HashTable<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::KeyAt(v8::internal::InternalIndex) */

ulong __thiscall
v8::internal::HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::KeyAt
          (HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape> *this,
          int param_2)

{
  return *(ulong *)this & 0xffffffff00000000 |
         (ulong)*(uint *)(*(ulong *)this + (long)(param_2 * 8 + 0xc) + 7);
}

