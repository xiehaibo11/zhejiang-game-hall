
/* v8::internal::Expression::ToBooleanIsTrue() const */

undefined8 __thiscall v8::internal::Expression::ToBooleanIsTrue(Expression *this)

{
  undefined8 uVar1;
  
  if ((*(uint *)(this + 4) & 0x3f) == 0x29) {
    uVar1 = Literal::ToBooleanIsTrue((Literal *)this);
    return uVar1;
  }
  return 0;
}

