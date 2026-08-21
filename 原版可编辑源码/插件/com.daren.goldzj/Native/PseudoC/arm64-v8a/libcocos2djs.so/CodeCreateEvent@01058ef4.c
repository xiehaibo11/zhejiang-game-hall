
/* v8::internal::CodeEventLogger::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, char const*) */

void __thiscall
v8::internal::CodeEventLogger::CodeCreateEvent
          (CodeEventLogger *this,ulong param_2,undefined8 param_3,char *param_4)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  char *__s;
  int *piVar5;
  
  piVar5 = *(int **)(this + 0x10);
  __s = (&PTR_s_code_creation_01cb2338)[param_2 & 0xffffffff];
  *piVar5 = 0;
  sVar3 = strlen(__s);
  iVar4 = (int)sVar3;
  if (0x1ff < (int)sVar3) {
    iVar4 = 0x200;
  }
  MemCopy(piVar5 + 1,__s,(long)iVar4);
  lVar1 = (long)iVar4 + (long)*piVar5;
  iVar4 = (int)lVar1;
  *piVar5 = iVar4;
  if (iVar4 < 0x200) {
    *piVar5 = iVar4 + 1;
    *(undefined1 *)((long)piVar5 + lVar1 + 4) = 0x3a;
  }
  piVar5 = *(int **)(this + 0x10);
  sVar3 = strlen(param_4);
  iVar2 = 0x200 - *piVar5;
  iVar4 = (int)sVar3;
  if (iVar2 <= (int)sVar3) {
    iVar4 = iVar2;
  }
  MemCopy((void *)((long)piVar5 + (long)*piVar5 + 4),param_4,(long)iVar4);
  *piVar5 = iVar4 + *piVar5;
                    /* WARNING: Could not recover jumptable at 0x01058fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x90))
            (this,param_3,0,*(undefined4 **)(this + 0x10) + 1,**(undefined4 **)(this + 0x10));
  return;
}

