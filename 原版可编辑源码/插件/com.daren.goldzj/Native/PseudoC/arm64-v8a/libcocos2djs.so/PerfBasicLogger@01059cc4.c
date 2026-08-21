
/* v8::internal::PerfBasicLogger::PerfBasicLogger(v8::internal::Isolate*) */

void __thiscall
v8::internal::PerfBasicLogger::PerfBasicLogger(PerfBasicLogger *this,Isolate *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  long *plVar5;
  FILE *__stream;
  
  *(Isolate **)(this + 8) = param_1;
  puVar3 = operator_new(0x204);
  *puVar3 = 0;
  *(undefined4 **)(this + 0x10) = puVar3;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__PerfBasicLogger_01cb1fd0;
  pcVar4 = operator_new__(0x21,(nothrow_t *)&std::nothrow);
  if (pcVar4 == (char *)0x0) {
    plVar5 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar5 + 0x18))();
    pcVar4 = operator_new__(0x21,(nothrow_t *)&std::nothrow);
    if (pcVar4 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  uVar1 = base::OS::GetCurrentProcessId();
  iVar2 = SNPrintF(pcVar4,0x21,"/tmp/perf-%d.map",uVar1);
  if (iVar2 != -1) {
    __stream = (FILE *)base::OS::FOpen(pcVar4,"w");
    *(FILE **)(this + 0x18) = __stream;
    if (__stream != (FILE *)0x0) {
      setvbuf(__stream,(char *)0x0,1,0);
      operator_delete__(pcVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(perf_output_handle_) != nullptr");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","size != -1");
}

