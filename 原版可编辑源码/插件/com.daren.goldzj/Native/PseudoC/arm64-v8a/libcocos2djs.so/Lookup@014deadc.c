
/* v8::internal::CompilationCacheScript::Lookup(v8::internal::Handle<v8::internal::String>,
   v8::internal::MaybeHandle<v8::internal::Object>, int, int, v8::ScriptOriginOptions,
   v8::internal::Handle<v8::internal::Context>, v8::internal::LanguageMode) */

ulong * __thiscall
v8::internal::CompilationCacheScript::Lookup
          (CompilationCacheScript *this,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7,uint param_8)

{
  Isolate *pIVar1;
  long lVar2;
  ulong *puVar3;
  int *piVar4;
  Isolate *pIVar5;
  long lVar6;
  Logger *this_00;
  Isolate *pIVar7;
  ulong uVar8;
  
  pIVar7 = *(Isolate **)this;
  pIVar1 = pIVar7 + 0x95a0;
  lVar6 = *(long *)pIVar1;
  lVar2 = *(long *)(pIVar7 + 0x95a8);
  *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + 1;
  uVar8 = **(ulong **)(this + 0x10);
  pIVar5 = *(Isolate **)this;
  if (((uVar8 & 1) == 0) || ((int)uVar8 != *(int *)(pIVar5 + 0xa0))) {
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar8;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar8);
    }
  }
  else {
    puVar3 = (ulong *)HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>
                      ::New(pIVar5,0x40,0,0);
    **(ulong **)(this + 0x10) = *puVar3;
  }
  puVar3 = (ulong *)CompilationCacheTable::LookupScript(puVar3,param_2,param_7,param_8 & 1);
  if ((puVar3 == (ulong *)0x0) ||
     (uVar8 = HasOrigin(this,puVar3,param_3,param_4,param_5,param_6), (uVar8 & 1) == 0)) {
    if (pIVar7 != (Isolate *)0x0) {
      *(long *)pIVar1 = lVar6;
      *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
      if (*(long *)(pIVar7 + 0x95a8) != lVar2) {
        *(long *)(pIVar7 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(pIVar7);
      }
    }
  }
  else {
    uVar8 = *puVar3;
    *(long *)pIVar1 = lVar6;
    *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
    if (*(long *)(pIVar7 + 0x95a8) != lVar2) {
      *(long *)(pIVar7 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar7);
    }
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar7);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar8;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar8);
    }
    if (puVar3 != (ulong *)0x0) {
      lVar6 = *(long *)(*(long *)this + 0x9520);
      if (*(char *)(lVar6 + 0x1918) == '\0') {
        *(char *)(lVar6 + 0x1918) = '\x01';
        piVar4 = (int *)StatsCounterBase::FindLocationInStatsTable
                                  ((StatsCounterBase *)(lVar6 + 0x1900));
        *(int **)(lVar6 + 0x1910) = piVar4;
      }
      else {
        piVar4 = *(int **)(lVar6 + 0x1910);
      }
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + 1;
      }
      this_00 = *(Logger **)(*(long *)this + 0x9558);
      uVar8 = Logger::is_logging(this_00);
      if ((uVar8 & 1) == 0) {
        return puVar3;
      }
      Logger::CompilationCacheEvent(this_00,&DAT_01a41f94,"script",*puVar3);
      return puVar3;
    }
  }
  lVar6 = *(long *)(*(long *)this + 0x9520);
  if (*(char *)(lVar6 + 0x1938) == '\0') {
    *(char *)(lVar6 + 0x1938) = '\x01';
    piVar4 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar6 + 0x1920))
    ;
    *(int **)(lVar6 + 0x1930) = piVar4;
  }
  else {
    piVar4 = *(int **)(lVar6 + 0x1930);
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  return (ulong *)0x0;
}

