
/* v8::internal::compiler::Hints::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::Hints const&)
   const */

uint __thiscall v8::internal::compiler::Hints::operator!=(Hints *this,Hints *param_1)

{
  uint uVar1;
  
  uVar1 = operator==(this,param_1);
  return ~uVar1 & 1;
}

