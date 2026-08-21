
/* v8::internal::CompilationCacheEval::Put(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::Context>, v8::internal::Handle<v8::internal::FeedbackCell>,
   int) */

void __thiscall
v8::internal::CompilationCacheEval::Put
          (CompilationCacheEval *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  
  pIVar6 = *(Isolate **)this;
  uVar1 = *(undefined8 *)(pIVar6 + 0x95a0);
  lVar2 = *(long *)(pIVar6 + 0x95a8);
  *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + 1;
  pIVar3 = *(Isolate **)this;
  uVar7 = **(ulong **)(this + 0x10);
  if (((uVar7 & 1) == 0) || ((int)uVar7 != *(int *)(pIVar3 + 0xa0))) {
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar7);
    }
  }
  else {
    puVar4 = (ulong *)HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>
                      ::New(pIVar3,0x40,0,0);
    **(ulong **)(this + 0x10) = *puVar4;
  }
  puVar5 = (undefined8 *)
           CompilationCacheTable::PutEval(puVar4,param_2,param_3,param_4,param_5,param_6,param_7);
  **(undefined8 **)(this + 0x10) = *puVar5;
  if (pIVar6 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar6 + 0x95a0) = uVar1;
    *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + -1;
    if (*(long *)(pIVar6 + 0x95a8) != lVar2) {
      *(long *)(pIVar6 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar6);
      return;
    }
  }
  return;
}

