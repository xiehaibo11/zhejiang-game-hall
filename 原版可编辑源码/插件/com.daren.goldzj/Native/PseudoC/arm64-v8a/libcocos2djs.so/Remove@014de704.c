
/* v8::internal::CompilationSubCache::Remove(v8::internal::Handle<v8::internal::SharedFunctionInfo>)
    */

void __thiscall
v8::internal::CompilationSubCache::Remove(CompilationSubCache *this,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  ulong uVar6;
  long lVar7;
  ulong local_68;
  
  pIVar5 = *(Isolate **)this;
  uVar1 = *(undefined8 *)(pIVar5 + 0x95a0);
  lVar2 = *(long *)(pIVar5 + 0x95a8);
  *(int *)(pIVar5 + 0x95b0) = *(int *)(pIVar5 + 0x95b0) + 1;
  if (0 < *(int *)(this + 8)) {
    lVar7 = 0;
    do {
      pIVar3 = *(Isolate **)this;
      uVar6 = *(ulong *)(*(long *)(this + 0x10) + lVar7 * 8);
      if (((uVar6 & 1) == 0) || ((int)uVar6 != *(int *)(pIVar3 + 0xa0))) {
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)(pIVar3 + 0x95a0);
          if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(pIVar3);
          }
          *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
          *puVar4 = uVar6;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar6);
        }
      }
      else {
        puVar4 = (ulong *)HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>
                          ::New(pIVar3,0x40,0,0);
        *(ulong *)(*(long *)(this + 0x10) + lVar7 * 8) = *puVar4;
      }
      local_68 = *puVar4;
      CompilationCacheTable::Remove((CompilationCacheTable *)&local_68,*param_2);
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(this + 8));
  }
  if (pIVar5 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar5 + 0x95a0) = uVar1;
    *(int *)(pIVar5 + 0x95b0) = *(int *)(pIVar5 + 0x95b0) + -1;
    if (*(long *)(pIVar5 + 0x95a8) != lVar2) {
      *(long *)(pIVar5 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar5);
    }
  }
  return;
}

