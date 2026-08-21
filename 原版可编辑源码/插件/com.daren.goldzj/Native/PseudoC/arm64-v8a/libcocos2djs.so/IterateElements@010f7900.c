
/* v8::internal::HashTable<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::IterateElements(v8::internal::ObjectVisitor*) */

void __thiscall
v8::internal::HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
IterateElements(HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape> *this,
               ObjectVisitor *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)this;
                    /* WARNING: Could not recover jumptable at 0x010f7930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))
            (param_1,lVar1,lVar1 + 0x13,
             lVar1 + (int)((*(uint *)(lVar1 + 3) & 0x7ffffffe) * 2 + 8) + -1);
  return;
}

