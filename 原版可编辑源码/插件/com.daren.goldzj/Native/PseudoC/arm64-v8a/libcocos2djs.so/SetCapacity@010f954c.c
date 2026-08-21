
/* v8::internal::HashTable<v8::internal::ObjectHashSet,
   v8::internal::ObjectHashSetShape>::SetCapacity(int) */

void __thiscall
v8::internal::HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape>::SetCapacity
          (HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape> *this,int param_1
          )

{
  *(int *)(*(long *)this + 0xf) = param_1 << 1;
  return;
}

