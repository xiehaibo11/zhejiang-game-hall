
/* v8::internal::HashTable<v8::internal::StringTable,
   v8::internal::StringTableShape>::SetCapacity(int) */

void __thiscall
v8::internal::HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::SetCapacity
          (HashTable<v8::internal::StringTable,v8::internal::StringTableShape> *this,int param_1)

{
  *(int *)(*(long *)this + 0xf) = param_1 << 1;
  return;
}

