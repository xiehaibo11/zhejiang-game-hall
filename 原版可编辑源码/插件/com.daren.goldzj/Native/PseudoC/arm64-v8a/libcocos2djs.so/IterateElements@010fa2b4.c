
/* v8::internal::HashTable<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::IterateElements(v8::internal::ObjectVisitor*) */

void __thiscall
v8::internal::HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>::
IterateElements(HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                *this,ObjectVisitor *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)this;
                    /* WARNING: Could not recover jumptable at 0x010fa2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))
            (param_1,lVar1,lVar1 + 0x13,
             lVar1 + (int)((*(uint *)(lVar1 + 3) & 0x7ffffffe) * 2 + 8) + -1);
  return;
}

