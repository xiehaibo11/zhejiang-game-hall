
/* v8::internal::StringConstantBase::GetMaxStringConstantLength() const */

undefined8 __thiscall
v8::internal::StringConstantBase::GetMaxStringConstantLength(StringConstantBase *this)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)this;
  if (iVar1 == 2) {
    uVar2 = StringCons::GetMaxStringConstantLength((StringCons *)this);
    return uVar2;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      return *(undefined8 *)(this + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return 0x12;
}

