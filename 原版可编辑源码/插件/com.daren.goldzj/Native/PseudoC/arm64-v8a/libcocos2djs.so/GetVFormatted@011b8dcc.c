
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011b8e74 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::StringsStorage::GetVFormatted(char const*, std::__va_list) */

char * __thiscall
v8::internal::StringsStorage::GetVFormatted(StringsStorage *this,char *param_1,undefined8 *param_3)

{
  uint uVar1;
  char *pcVar2;
  long *plVar3;
  TemplateHashMapEntry *pTVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined1 auStack_38 [8];
  
  pcVar2 = operator_new__(0x400,(nothrow_t *)&std::nothrow);
  if (pcVar2 == (char *)0x0) {
    plVar3 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar3 + 0x18))();
    pcVar2 = operator_new__(0x400,(nothrow_t *)&std::nothrow);
    if (pcVar2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  uStack_58 = param_3[1];
  local_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  VSNPrintF(pcVar2,0x400,param_1,&local_60);
  if ((int)pcVar2 == -1) {
    operator_delete__(pcVar2);
    pcVar2 = (char *)GetCopy(this,param_1);
  }
  else {
    uVar1 = StringHasher::HashSequentialString<char>(pcVar2,(int)pcVar2,0);
    local_40 = pcVar2;
    pTVar4 = base::
             TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
             ::
             LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                       (pcVar2,&local_40,uVar1,auStack_38);
    if (*(long *)(pTVar4 + 8) == 0) {
      *(char **)pTVar4 = pcVar2;
      *(char **)(pTVar4 + 8) = pcVar2;
    }
    else {
      operator_delete__(pcVar2);
      pcVar2 = *(char **)(pTVar4 + 8);
    }
  }
  return pcVar2;
}

