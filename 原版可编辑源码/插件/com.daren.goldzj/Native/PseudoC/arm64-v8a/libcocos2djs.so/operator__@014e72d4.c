
/* v8::internal::StringConstantBase::TEMPNAMEPLACEHOLDERVALUE(v8::internal::StringConstantBase
   const&) const */

bool __thiscall
v8::internal::StringConstantBase::operator==(StringConstantBase *this,StringConstantBase *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)param_1) {
    return false;
  }
  if (((iVar1 != 2) && (iVar1 != 1)) && (iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return this == param_1;
}

