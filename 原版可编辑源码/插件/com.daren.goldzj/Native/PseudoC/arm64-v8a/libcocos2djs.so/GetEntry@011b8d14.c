
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011b8d50 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::StringsStorage::GetEntry(char const*, int) */

void __thiscall
v8::internal::StringsStorage::GetEntry(StringsStorage *this,char *param_1,int param_2)

{
  uint uVar1;
  char *local_30;
  undefined1 auStack_28 [8];
  
  uVar1 = StringHasher::HashSequentialString<char>(param_1,param_2,0);
  local_30 = param_1;
  base::
  TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
  ::
  LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
            (this,&local_30,uVar1,auStack_28);
  return;
}

