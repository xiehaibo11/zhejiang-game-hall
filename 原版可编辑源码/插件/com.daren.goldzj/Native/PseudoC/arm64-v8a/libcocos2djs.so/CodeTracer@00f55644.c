
/* v8::internal::CodeTracer::CodeTracer(int) */

void __thiscall v8::internal::CodeTracer::CodeTracer(CodeTracer *this,int param_1)

{
  internal *piVar1;
  undefined4 uVar2;
  
  piVar1 = (internal *)(this + 0x10);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(internal **)this = piVar1;
  *(undefined8 *)(this + 8) = 0x80;
  if (FLAG_redirect_code_traces != '\0') {
    if (FLAG_redirect_code_traces_to == 0) {
      uVar2 = base::OS::GetCurrentProcessId();
      if (param_1 < 0) {
        SNPrintF(piVar1,0x80,"code-%d.asm",uVar2);
      }
      else {
        SNPrintF(piVar1,0x80,"code-%d-%d.asm",uVar2,param_1);
      }
    }
    else {
      StrNCpy(piVar1,0x80,FLAG_redirect_code_traces_to,0x80);
    }
    WriteChars(*(char **)this,"",0,false);
    return;
  }
  *(code **)(this + 0x90) = waitpid;
  return;
}

