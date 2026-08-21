
/* v8::internal::compiler::PipelineImpl::RunPrintAndVerify(char const*, bool) */

void __thiscall
v8::internal::compiler::PipelineImpl::RunPrintAndVerify
          (PipelineImpl *this,char *param_1,bool param_2)

{
  bool local_24 [4];
  char *local_8;
  
  local_24[0] = param_2;
  local_8 = param_1;
  if ((*(byte *)(*(long *)(*(long *)this + 0x18) + 1) & 0x60) != 0) {
    Run<v8::internal::compiler::PrintGraphPhase,char_const*&>(this,&local_8);
  }
  if (FLAG_turbo_verify != '\0') {
    Run<v8::internal::compiler::VerifyGraphPhase,bool&>(this,local_24);
  }
  return;
}

