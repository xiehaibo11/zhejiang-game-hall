
/* v8::internal::CompilationSubCache::GetTable(int) */

ulong * __thiscall
v8::internal::CompilationSubCache::GetTable(CompilationSubCache *this,int param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  
  pIVar1 = *(Isolate **)this;
  uVar3 = *(ulong *)(*(long *)(this + 0x10) + (long)param_1 * 8);
  if (((uVar3 & 1) == 0) || ((int)uVar3 != *(int *)(pIVar1 + 0xa0))) {
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
    }
  }
  else {
    puVar2 = (ulong *)HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>
                      ::New(pIVar1,0x40,0,0);
    *(ulong *)(*(long *)(this + 0x10) + (long)param_1 * 8) = *puVar2;
  }
  return puVar2;
}

