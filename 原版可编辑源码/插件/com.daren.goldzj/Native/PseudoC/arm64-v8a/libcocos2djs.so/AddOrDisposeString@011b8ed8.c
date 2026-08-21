
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011b8f14 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::StringsStorage::AddOrDisposeString(char*, int) */

char * __thiscall
v8::internal::StringsStorage::AddOrDisposeString(StringsStorage *this,char *param_1,int param_2)

{
  uint uVar1;
  TemplateHashMapEntry *pTVar2;
  char *pcVar3;
  char *local_30;
  undefined1 auStack_28 [8];
  
  uVar1 = StringHasher::HashSequentialString<char>(param_1,param_2,0);
  local_30 = param_1;
  pTVar2 = base::
           TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
           ::
           LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                     (this,&local_30,uVar1,auStack_28);
  pcVar3 = *(char **)(pTVar2 + 8);
  if (pcVar3 == (char *)0x0) {
    *(char **)pTVar2 = param_1;
    *(char **)(pTVar2 + 8) = param_1;
    pcVar3 = param_1;
  }
  else if (param_1 != (char *)0x0) {
    operator_delete__(param_1);
    pcVar3 = *(char **)(pTVar2 + 8);
  }
  return pcVar3;
}

