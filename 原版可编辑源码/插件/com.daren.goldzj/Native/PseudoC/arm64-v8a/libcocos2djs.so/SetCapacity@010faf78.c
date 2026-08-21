
/* v8::internal::HashTable<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::SetCapacity(int) */

void __thiscall
v8::internal::HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>::
SetCapacity(HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape> *this,
           int param_1)

{
  *(int *)(*(long *)this + 0xf) = param_1 << 1;
  return;
}

