
/* v8::internal::CompilationCacheEval::Lookup(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::Context>, v8::internal::LanguageMode, int) */

void v8::internal::CompilationCacheEval::Lookup
               (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,uint param_6,undefined4 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  int *piVar5;
  Isolate *pIVar6;
  long lVar7;
  Isolate *pIVar8;
  ulong uVar9;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pIVar8 = (Isolate *)*param_2;
  uVar1 = *(undefined8 *)(pIVar8 + 0x95a0);
  lVar2 = *(long *)(pIVar8 + 0x95a8);
  *(int *)(pIVar8 + 0x95b0) = *(int *)(pIVar8 + 0x95b0) + 1;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar9 = *(ulong *)param_2[2];
  pIVar6 = (Isolate *)*param_2;
  if (((uVar9 & 1) == 0) || ((int)uVar9 != *(int *)(pIVar6 + 0xa0))) {
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar9;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar9);
    }
  }
  else {
    puVar4 = (ulong *)HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>
                      ::New(pIVar6,0x40,0,0);
    *(ulong *)param_2[2] = *puVar4;
  }
  CompilationCacheTable::LookupEval
            ((CompilationCacheTable *)&local_88,puVar4,param_3,param_4,param_5,param_6 & 1,param_7);
  param_1[1] = uStack_80;
  *param_1 = local_88;
  param_1[3] = uStack_70;
  param_1[2] = local_78;
  if (*(int *)(param_1 + 2) == 0) {
    lVar7 = *(long *)(*param_2 + 0x9520);
  }
  else {
    lVar7 = *(long *)(*param_2 + 0x9520);
    if (*(char *)(param_1 + 1) != '\0') {
      if (*(char *)(lVar7 + 0x1918) == '\0') {
        *(char *)(lVar7 + 0x1918) = '\x01';
        piVar5 = (int *)StatsCounterBase::FindLocationInStatsTable
                                  ((StatsCounterBase *)(lVar7 + 0x1900));
        *(int **)(lVar7 + 0x1910) = piVar5;
      }
      else {
        piVar5 = *(int **)(lVar7 + 0x1910);
      }
      goto joined_r0x014df0f0;
    }
  }
  if (*(char *)(lVar7 + 0x1938) == '\0') {
    *(char *)(lVar7 + 0x1938) = '\x01';
    piVar5 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar7 + 0x1920))
    ;
    *(int **)(lVar7 + 0x1930) = piVar5;
  }
  else {
    piVar5 = *(int **)(lVar7 + 0x1930);
  }
joined_r0x014df0f0:
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  if (pIVar8 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar8 + 0x95a0) = uVar1;
    *(int *)(pIVar8 + 0x95b0) = *(int *)(pIVar8 + 0x95b0) + -1;
    if (*(long *)(pIVar8 + 0x95a8) != lVar2) {
      *(long *)(pIVar8 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar8);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

