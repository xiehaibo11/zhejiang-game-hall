
/* v8::internal::compiler::LiveRange::Print(bool) const */

void __thiscall v8::internal::compiler::LiveRange::Print(LiveRange *this,bool param_1)

{
  RegisterConfiguration *pRVar1;
  
  pRVar1 = (RegisterConfiguration *)RegisterConfiguration::Default();
  Print(this,pRVar1,param_1);
  return;
}

