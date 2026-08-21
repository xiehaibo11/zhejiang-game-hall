
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011b8fec */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::StringsStorage::GetName(v8::internal::Name) */

char * __thiscall v8::internal::StringsStorage::GetName(StringsStorage *this,ulong param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  TemplateHashMapEntry *pTVar4;
  ulong uVar5;
  char *pcVar6;
  char *local_48;
  int local_3c;
  ulong local_38;
  char *local_30;
  undefined1 auStack_28 [8];
  
  uVar5 = param_2 & 0xffffffff00000000 | 7;
  if (*(ushort *)(uVar5 + *(uint *)(param_2 - 1)) < 0x40) {
    iVar1 = FLAG_heap_snapshot_string_limit;
    if (*(int *)(param_2 + 7) <= FLAG_heap_snapshot_string_limit) {
      iVar1 = *(int *)(param_2 + 7);
    }
    local_3c = 0;
    local_38 = param_2;
    String::ToCString(&local_48,&local_38,1,0,0,iVar1,&local_3c);
    pcVar2 = local_48;
    local_48 = (char *)0x0;
    uVar3 = StringHasher::HashSequentialString<char>(pcVar2,local_3c,0);
    local_30 = pcVar2;
    pTVar4 = base::
             TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
             ::
             LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                       (this,&local_30,uVar3,auStack_28);
    pcVar6 = *(char **)(pTVar4 + 8);
    if (pcVar6 == (char *)0x0) {
      *(char **)pTVar4 = pcVar2;
      *(char **)(pTVar4 + 8) = pcVar2;
      pcVar6 = pcVar2;
    }
    else if (pcVar2 != (char *)0x0) {
      operator_delete__(pcVar2);
      pcVar6 = *(char **)(pTVar4 + 8);
    }
    pcVar2 = local_48;
    local_48 = (char *)0x0;
    if (pcVar2 != (char *)0x0) {
      operator_delete__(pcVar2);
    }
  }
  else {
    pcVar6 = "<symbol>";
    if (*(short *)(uVar5 + *(uint *)(param_2 - 1)) != 0x40) {
      pcVar6 = "";
    }
  }
  return pcVar6;
}

