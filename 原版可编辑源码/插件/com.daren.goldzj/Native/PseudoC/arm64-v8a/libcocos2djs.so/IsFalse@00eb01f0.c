
/* v8::Value::IsFalse() const */

bool __thiscall v8::Value::IsFalse(Value *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if ((uVar1 & 1) == 0) {
    return false;
  }
  return (int)uVar1 == *(int *)((uVar1 & 0xffffffff00000000) + 0xc0);
}

