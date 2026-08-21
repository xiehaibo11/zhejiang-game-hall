
/* v8::internal::LowLevelLogger::LowLevelLogger(v8::internal::Isolate*, char const*) */

void __thiscall
v8::internal::LowLevelLogger::LowLevelLogger(LowLevelLogger *this,Isolate *param_1,char *param_2)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *pcVar3;
  long *plVar4;
  FILE *__stream;
  ulong uVar5;
  
  *(Isolate **)(this + 8) = param_1;
  puVar1 = operator_new(0x204);
  *puVar1 = 0;
  *(undefined4 **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__LowLevelLogger_01cb2120;
  sVar2 = strlen(param_2);
  uVar5 = (ulong)((int)sVar2 + 4);
  pcVar3 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
  if (pcVar3 == (char *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    pcVar3 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
    if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  MemCopy(pcVar3,param_2,sVar2);
  builtin_strncpy(pcVar3 + sVar2,".ll",4);
  __stream = (FILE *)base::OS::FOpen(pcVar3,"w");
  *(FILE **)(this + 0x18) = __stream;
  setvbuf(__stream,(char *)0x0,1,0);
  fwrite("arm64",1,6,*(FILE **)(this + 0x18));
  operator_delete__(pcVar3);
  return;
}

