
/* v8::internal::AsmJsCompilationJob::RecordHistograms(v8::internal::Isolate*) */

void __thiscall
v8::internal::AsmJsCompilationJob::RecordHistograms(AsmJsCompilationJob *this,Isolate *param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x9520);
  Histogram::AddSample(iVar1 + 0xba0);
  Histogram::AddSample(iVar1 + 0x5f8);
  Histogram::AddSample(iVar1 + 0x648);
  Histogram::AddSample(iVar1 + 0x670);
  return;
}

