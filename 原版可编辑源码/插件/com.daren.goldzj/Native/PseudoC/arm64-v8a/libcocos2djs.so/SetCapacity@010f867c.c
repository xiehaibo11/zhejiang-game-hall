
/* v8::internal::HashTable<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::SetCapacity(int) */

void __thiscall
v8::internal::HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
SetCapacity(HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape> *this,
           int param_1)

{
  *(int *)(*(long *)this + 0xf) = param_1 << 1;
  return;
}

