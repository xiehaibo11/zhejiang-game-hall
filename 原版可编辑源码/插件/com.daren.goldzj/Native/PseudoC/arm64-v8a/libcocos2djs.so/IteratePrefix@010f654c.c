
/* v8::internal::HashTable<v8::internal::CompilationCacheTable,
   v8::internal::CompilationCacheShape>::IteratePrefix(v8::internal::ObjectVisitor*) */

void __thiscall
v8::internal::HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>::
IteratePrefix(HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>
              *this,ObjectVisitor *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)this;
                    /* WARNING: Could not recover jumptable at 0x010f6568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar1,lVar1 + -1,lVar1 + 0x13);
  return;
}

