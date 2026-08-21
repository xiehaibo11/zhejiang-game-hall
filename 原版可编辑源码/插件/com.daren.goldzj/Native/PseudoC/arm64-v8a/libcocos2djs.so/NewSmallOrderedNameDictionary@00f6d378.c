
/* v8::internal::Factory::NewSmallOrderedNameDictionary(int, v8::internal::AllocationType) */

void __thiscall
v8::internal::Factory::NewSmallOrderedNameDictionary
          (Factory *this,undefined4 param_1,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)AllocateSmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>
                             (this,this + 0x288,param_1,param_3);
  *(undefined4 *)(*plVar1 + 3) = 0;
  return;
}

