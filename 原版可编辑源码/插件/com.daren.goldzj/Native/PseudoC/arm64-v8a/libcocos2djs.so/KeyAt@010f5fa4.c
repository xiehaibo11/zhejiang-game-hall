
/* v8::internal::HashTable<v8::internal::StringTable,
   v8::internal::StringTableShape>::KeyAt(v8::internal::Isolate const*, v8::internal::InternalIndex)
    */

long __thiscall
v8::internal::HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::KeyAt
          (HashTable<v8::internal::StringTable,v8::internal::StringTableShape> *this,long param_1,
          int param_3)

{
  return (ulong)*(uint *)(*(long *)this + (long)(param_3 * 4 + 0xc) + 7) + param_1;
}

