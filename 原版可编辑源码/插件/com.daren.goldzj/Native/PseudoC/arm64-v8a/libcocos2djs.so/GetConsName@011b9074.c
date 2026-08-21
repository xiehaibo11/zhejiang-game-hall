
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011b9178 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::StringsStorage::GetConsName(char const*, v8::internal::Name) */

char * __thiscall
v8::internal::StringsStorage::GetConsName(undefined8 param_1_00,char *param_1,ulong param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  size_t sVar4;
  char *pcVar5;
  long *plVar6;
  TemplateHashMapEntry *pTVar7;
  ulong uVar8;
  void *local_58;
  int local_4c;
  ulong local_48;
  char *local_40;
  undefined1 auStack_38 [8];
  
  uVar8 = param_3 & 0xffffffff00000000 | 7;
  if (*(ushort *)(uVar8 + *(uint *)(param_3 - 1)) < 0x40) {
    iVar1 = FLAG_heap_snapshot_string_limit;
    if (*(int *)(param_3 + 7) <= FLAG_heap_snapshot_string_limit) {
      iVar1 = *(int *)(param_3 + 7);
    }
    local_4c = 0;
    local_48 = param_3;
    String::ToCString(&local_58,&local_48,1,0,0,iVar1,&local_4c);
    iVar1 = local_4c;
    sVar4 = strlen(param_1);
    iVar1 = iVar1 + (int)sVar4 + 1;
    uVar8 = (ulong)iVar1;
    pcVar5 = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
    if (pcVar5 == (char *)0x0) {
      plVar6 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar6 + 0x18))();
      pcVar5 = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
      if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
    }
    FUN_011b91f4(pcVar5,0xffffffffffffffff,uVar8);
    uVar3 = StringHasher::HashSequentialString<char>(pcVar5,iVar1,0);
    local_40 = pcVar5;
    pTVar7 = base::
             TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
             ::
             LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                       (pcVar5,&local_40,uVar3,auStack_38);
    if (*(long *)(pTVar7 + 8) == 0) {
      *(char **)pTVar7 = pcVar5;
      *(char **)(pTVar7 + 8) = pcVar5;
    }
    else {
      operator_delete__(pcVar5);
      pcVar5 = *(char **)(pTVar7 + 8);
    }
    pvVar2 = local_58;
    local_58 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  else {
    pcVar5 = "<symbol>";
    if (*(short *)(uVar8 + *(uint *)(param_3 - 1)) != 0x40) {
      pcVar5 = "";
    }
  }
  return pcVar5;
}

