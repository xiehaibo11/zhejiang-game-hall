
/* v8::internal::Factory::NewSmallOrderedHashMap(int, v8::internal::AllocationType) */

void __thiscall
v8::internal::Factory::NewSmallOrderedHashMap(Factory *this,undefined4 param_1,undefined4 param_3)

{
  AllocateSmallOrderedHashTable<v8::internal::SmallOrderedHashMap>
            (this,this + 0x278,param_1,param_3);
  return;
}

