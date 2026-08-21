
/* v8::internal::HashTable<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::KeyAt(v8::internal::InternalIndex) */

ulong __thiscall
v8::internal::HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>::
KeyAt(HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape> *this,
     int param_2)

{
  return *(ulong *)this & 0xffffffff00000000 |
         (ulong)*(uint *)(*(ulong *)this + (long)(param_2 * 8 + 0xc) + 7);
}

