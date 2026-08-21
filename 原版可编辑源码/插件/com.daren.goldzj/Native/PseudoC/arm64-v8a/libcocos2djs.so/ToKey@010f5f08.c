
/* v8::internal::HashTable<v8::internal::StringTable,
   v8::internal::StringTableShape>::ToKey(v8::internal::ReadOnlyRoots, v8::internal::InternalIndex,
   v8::internal::Object*) */

undefined8 __thiscall
v8::internal::HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::ToKey
          (HashTable<v8::internal::StringTable,v8::internal::StringTableShape> *this,long param_2,
          int param_3,ulong *param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(ulong *)this + (long)(param_3 * 4 + 0xc) + 7);
  if (uVar1 == *(uint *)(param_2 + 0x28)) {
    return 0;
  }
  if (uVar1 == *(uint *)(param_2 + 0x20)) {
    return 0;
  }
  *param_4 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar1;
  return 1;
}

