
/* v8::internal::CompilationCacheRegExp::Lookup(v8::internal::Handle<v8::internal::String>,
   v8::base::Flags<v8::internal::JSRegExp::Flag, int>) */

ulong * __thiscall
v8::internal::CompilationCacheRegExp::Lookup
          (CompilationCacheRegExp *this,undefined8 param_2,undefined4 param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  int *piVar6;
  Isolate *pIVar7;
  ulong uVar8;
  long lVar9;
  ulong local_68;
  
  pIVar7 = *(Isolate **)this;
  pIVar1 = pIVar7 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(pIVar7 + 0x95a8);
  *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + 1;
  pIVar4 = *(Isolate **)this;
  if (*(int *)(this + 8) < 1) {
    pIVar4 = pIVar4 + 0xa0;
    uVar8 = *(ulong *)pIVar4;
    if ((uVar8 & 1) == 0) goto LAB_014df55c;
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    while( true ) {
      uVar8 = *(ulong *)(*(long *)(this + 0x10) + lVar9 * 8);
      if (((uVar8 & 1) == 0) || ((int)uVar8 != *(int *)(pIVar4 + 0xa0))) {
        if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)(pIVar4 + 0x95a0);
          if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(pIVar4);
          }
          *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
          *puVar5 = uVar8;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar8);
        }
      }
      else {
        puVar5 = (ulong *)HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>
                          ::New(pIVar4,0x40,0,0);
        *(ulong *)(*(long *)(this + 0x10) + lVar9 * 8) = *puVar5;
      }
      local_68 = *puVar5;
      pIVar4 = (Isolate *)
               CompilationCacheTable::LookupRegExp
                         ((CompilationCacheTable *)&local_68,param_2,param_3);
      uVar8 = *(ulong *)pIVar4;
      if (((uVar8 & 1) != 0) &&
         (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) - 0x76 < 0xf))
      goto LAB_014df4b8;
      lVar9 = lVar9 + 1;
      if (*(int *)(this + 8) <= lVar9) break;
      pIVar4 = *(Isolate **)this;
    }
    if ((uVar8 & 1) == 0) goto LAB_014df55c;
    lVar9 = 1;
  }
LAB_014df4b8:
  if (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) - 0x76 < 0xf) {
    if ((int)lVar9 != 0) {
      Put(this,param_2,param_3,pIVar4);
    }
    lVar9 = *(long *)(*(long *)this + 0x9520);
    if (*(char *)(lVar9 + 0x1918) == '\0') {
      *(char *)(lVar9 + 0x1918) = '\x01';
      piVar6 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar9 + 0x1900));
      *(int **)(lVar9 + 0x1910) = piVar6;
    }
    else {
      piVar6 = *(int **)(lVar9 + 0x1910);
    }
    if (piVar6 != (int *)0x0) {
      *piVar6 = *piVar6 + 1;
    }
    uVar8 = *(ulong *)pIVar4;
    *(long *)pIVar1 = lVar2;
    *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
    if (*(long *)(pIVar7 + 0x95a8) != lVar3) {
      *(long *)(pIVar7 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar7);
    }
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar8);
      return puVar5;
    }
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar8;
    return puVar5;
  }
LAB_014df55c:
  lVar9 = *(long *)(*(long *)this + 0x9520);
  if (*(char *)(lVar9 + 0x1938) == '\0') {
    *(char *)(lVar9 + 0x1938) = '\x01';
    piVar6 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar9 + 0x1920))
    ;
    *(int **)(lVar9 + 0x1930) = piVar6;
  }
  else {
    piVar6 = *(int **)(lVar9 + 0x1930);
  }
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  if (pIVar7 != (Isolate *)0x0) {
    *(long *)pIVar1 = lVar2;
    *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
    if (*(long *)(pIVar7 + 0x95a8) != lVar3) {
      *(long *)(pIVar7 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar7);
    }
  }
  return (ulong *)0x0;
}

