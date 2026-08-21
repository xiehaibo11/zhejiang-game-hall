
/* v8::internal::Scope::ResolveVariable(v8::internal::ParseInfo*, v8::internal::VariableProxy*) */

void __thiscall
v8::internal::Scope::ResolveVariable(Scope *this,ParseInfo *param_1,VariableProxy *param_2)

{
  Variable *pVVar1;
  ParseInfo *extraout_x1;
  
  pVVar1 = Lookup<(v8::internal::Scope::ScopeLookupMode)0>
                     (param_2,this,(Scope *)0x0,(Scope *)0x0,false);
  ResolveTo(this,extraout_x1,param_2,pVVar1);
  return;
}

