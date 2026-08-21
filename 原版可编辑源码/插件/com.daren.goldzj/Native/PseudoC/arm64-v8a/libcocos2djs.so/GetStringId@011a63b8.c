
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011a6404 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::HeapSnapshotJSONSerializer::GetStringId(char const*) */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::GetStringId
          (HeapSnapshotJSONSerializer *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  TemplateHashMapEntry *pTVar4;
  char *local_38;
  undefined1 auStack_18 [8];
  
  local_38 = param_1;
  sVar3 = strlen(param_1);
  uVar2 = StringHasher::HashSequentialString<char>(param_1,(int)sVar3,0);
  pTVar4 = base::
           TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
           ::
           LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                     (sVar3,&local_38,uVar2,auStack_18);
  if (*(long *)(pTVar4 + 8) == 0) {
    iVar1 = *(int *)(this + 0x24);
    *(int *)(this + 0x24) = iVar1 + 1;
    *(long *)(pTVar4 + 8) = (long)iVar1;
  }
  return;
}

