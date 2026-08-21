
/* v8::internal::CodeEventLogger::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, v8::internal::Name) */

void __thiscall
v8::internal::CodeEventLogger::CodeCreateEvent
          (CodeEventLogger *this,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *__s;
  int *piVar4;
  
  piVar4 = *(int **)(this + 0x10);
  __s = (&PTR_s_code_creation_01cb2338)[param_2 & 0xffffffff];
  *piVar4 = 0;
  sVar3 = strlen(__s);
  iVar2 = (int)sVar3;
  if (0x1ff < iVar2) {
    iVar2 = 0x200;
  }
  MemCopy(piVar4 + 1,__s,(long)iVar2);
  lVar1 = (long)iVar2 + (long)*piVar4;
  iVar2 = (int)lVar1;
  *piVar4 = iVar2;
  if (iVar2 < 0x200) {
    *piVar4 = iVar2 + 1;
    *(undefined1 *)((long)piVar4 + lVar1 + 4) = 0x3a;
  }
  NameBuffer::AppendName(*(NameBuffer **)(this + 0x10),param_4);
                    /* WARNING: Could not recover jumptable at 0x010590b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x90))
            (this,param_3,0,*(undefined4 **)(this + 0x10) + 1,**(undefined4 **)(this + 0x10));
  return;
}

