
/* v8::internal::HashTable<v8::internal::ObjectHashSet,
   v8::internal::ObjectHashSetShape>::KeyAt(v8::internal::InternalIndex) */

ulong __thiscall
v8::internal::HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape>::KeyAt
          (HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape> *this,int param_2
          )

{
  return *(ulong *)this & 0xffffffff00000000 |
         (ulong)*(uint *)(*(ulong *)this + (long)(param_2 * 4 + 0xc) + 7);
}

