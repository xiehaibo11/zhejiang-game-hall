
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011b8c6c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::StringsStorage::GetCopy(char const*) */

internal * __thiscall v8::internal::StringsStorage::GetCopy(StringsStorage *this,char *param_1)

{
  uint uVar1;
  size_t sVar2;
  TemplateHashMapEntry *pTVar3;
  long *plVar4;
  ulong uVar5;
  internal *piVar6;
  long lVar7;
  char *local_48;
  undefined1 auStack_28 [8];
  
  sVar2 = strlen(param_1);
  uVar1 = StringHasher::HashSequentialString<char>(param_1,(int)sVar2,0);
  local_48 = param_1;
  pTVar3 = base::
           TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
           ::
           LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                     (sVar2,&local_48,uVar1,auStack_28);
  piVar6 = *(internal **)(pTVar3 + 8);
  if (piVar6 == (internal *)0x0) {
    uVar5 = (long)((sVar2 << 0x20) + 0x100000000) >> 0x20;
    piVar6 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
    if (piVar6 == (internal *)0x0) {
      plVar4 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar4 + 0x18))();
      piVar6 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
      if (piVar6 == (internal *)0x0) {
                    /* WARNING: Subroutine does not return */
        FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
    }
    lVar7 = (long)(sVar2 << 0x20) >> 0x20;
    StrNCpy(piVar6,uVar5,param_1,lVar7);
    piVar6[lVar7] = (internal)0x0;
    *(internal **)pTVar3 = piVar6;
    *(internal **)(pTVar3 + 8) = piVar6;
  }
  return piVar6;
}

