
/* v8::internal::CompilationCache::LookupEval(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::Context>, v8::internal::LanguageMode, int) */

void v8::internal::CompilationCache::LookupEval
               (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
               ulong *param_5,uint param_6,undefined4 param_7)

{
  char *pcVar1;
  char cVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  Logger *this;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  cVar2 = FLAG_compilation_cache;
  puVar9 = param_1 + 2;
  *puVar9 = 0;
  param_1[3] = 0;
  if ((cVar2 != '\0') && ((char)param_2[0x11] != '\0')) {
    uVar5 = *param_5;
    uVar6 = uVar5 & 0xffffffff00000000;
    if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x8f) {
      CompilationCacheEval::Lookup(param_1,param_2 + 4,param_3,param_4,param_5,param_6 & 1,param_7);
      pcVar1 = "eval-global";
      uVar8 = *puVar9;
      iVar7 = (int)uVar8;
    }
    else {
      pIVar3 = (Isolate *)*param_2;
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
      CompilationCacheEval::Lookup(param_1,param_2 + 7,param_3,param_4,puVar4,param_6 & 1,param_7);
      pcVar1 = "eval-contextual";
      uVar8 = *puVar9;
      iVar7 = (int)uVar8;
    }
    if ((iVar7 != 0) && (*(char *)(param_1 + 1) != '\0')) {
      this = *(Logger **)(*param_2 + 0x9558);
      uVar5 = Logger::is_logging(this);
      if ((uVar5 & 1) != 0) {
        Logger::CompilationCacheEvent(this,&DAT_01a41f94,pcVar1,uVar8);
        return;
      }
    }
  }
  return;
}

