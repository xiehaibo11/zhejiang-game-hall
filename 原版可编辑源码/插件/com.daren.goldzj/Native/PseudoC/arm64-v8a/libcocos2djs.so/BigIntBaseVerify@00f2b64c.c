
/* v8::internal::BigIntBase::BigIntBaseVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::BigIntBase::BigIntBaseVerify(BigIntBase *this,Isolate *param_1)

{
  TorqueGeneratedClassVerifiers::BigIntBaseVerify(*(undefined8 *)this);
  if (((*(uint *)(*(long *)this + 3) & 0x7ffffffe) == 0) &&
     ((*(uint *)(*(long *)this + 3) & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","is_zero() implies !sign()");
  }
  return;
}

