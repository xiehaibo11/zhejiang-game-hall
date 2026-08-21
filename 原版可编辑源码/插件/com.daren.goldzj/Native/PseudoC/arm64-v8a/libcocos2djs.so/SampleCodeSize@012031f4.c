
/* v8::internal::wasm::NativeModule::SampleCodeSize(v8::internal::Counters*,
   v8::internal::wasm::NativeModule::CodeSamplingTime) const */

void __thiscall
v8::internal::wasm::NativeModule::SampleCodeSize(NativeModule *this,int param_2,char param_3)

{
  int iVar1;
  
  if ((param_3 == '\x02') || (param_3 == '\x02')) {
    iVar1 = param_2 + 0x738;
    if ((0x1fffff < *(ulong *)(this + 0x98)) && (*(char *)(*(long *)(this + 200) + 0x178) == '\0'))
    {
      Histogram::AddSample(param_2 + 0x7b0);
      Histogram::AddSample(param_2 + 0x7d8);
    }
  }
  else if (param_3 == '\x01') {
    iVar1 = param_2 + 0x788;
  }
  else if (param_3 == '\0') {
    iVar1 = param_2 + 0x760;
  }
  else {
    iVar1 = 0;
  }
  Histogram::AddSample(iVar1);
  return;
}

