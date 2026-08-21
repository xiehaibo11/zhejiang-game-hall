
/* v8::internal::Expression::ToBooleanIsFalse() const */

uint __thiscall v8::internal::Expression::ToBooleanIsFalse(Expression *this)

{
  uint uVar1;
  
  if ((*(uint *)(this + 4) & 0x3f) == 0x29) {
    uVar1 = Literal::ToBooleanIsTrue((Literal *)this);
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}

