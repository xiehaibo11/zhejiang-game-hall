
/* v8::internal::CompilationCache::PutEval(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::Context>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::FeedbackCell>, int) */

void __thiscall
v8::internal::CompilationCache::PutEval
          (CompilationCache *this,undefined8 param_2,undefined8 param_3,ulong *param_4,
          undefined8 *param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  Isolate *pIVar7;
  Logger *this_00;
  char *pcVar8;
  
  if ((FLAG_compilation_cache != '\0') && (this[0x88] != (CompilationCache)0x0)) {
    pIVar7 = *(Isolate **)this;
    uVar1 = *(undefined8 *)(pIVar7 + 0x95a0);
    lVar2 = *(long *)(pIVar7 + 0x95a8);
    *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + 1;
    uVar5 = *param_4;
    uVar6 = uVar5 & 0xffffffff00000000;
    if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x8f) {
      CompilationCacheEval::Put
                ((CompilationCacheEval *)(this + 0x20),param_2,param_3,param_5,param_4,param_6,
                 param_7);
      pcVar8 = "eval-global";
    }
    else {
      pIVar3 = *(Isolate **)this;
      uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(uVar5 - 1)) + 0x13);
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
      CompilationCacheEval::Put
                ((CompilationCacheEval *)(this + 0x38),param_2,param_3,param_5,puVar4,param_6,
                 param_7);
      pcVar8 = "eval-contextual";
    }
    this_00 = *(Logger **)(*(long *)this + 0x9558);
    uVar5 = Logger::is_logging(this_00);
    if ((uVar5 & 1) != 0) {
      Logger::CompilationCacheEvent(this_00,"put",pcVar8,*param_5);
    }
    if (pIVar7 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar7 + 0x95a0) = uVar1;
      *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
      if (*(long *)(pIVar7 + 0x95a8) != lVar2) {
        *(long *)(pIVar7 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(pIVar7);
        return;
      }
    }
  }
  return;
}

