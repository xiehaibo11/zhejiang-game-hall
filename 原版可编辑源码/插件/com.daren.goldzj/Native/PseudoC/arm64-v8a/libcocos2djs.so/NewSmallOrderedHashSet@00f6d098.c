
/* v8::internal::Factory::NewSmallOrderedHashSet(int, v8::internal::AllocationType) */

void __thiscall
v8::internal::Factory::NewSmallOrderedHashSet(Factory *this,undefined4 param_1,undefined4 param_3)

{
  AllocateSmallOrderedHashTable<v8::internal::SmallOrderedHashSet>
            (this,this + 0x280,param_1,param_3);
  return;
}

