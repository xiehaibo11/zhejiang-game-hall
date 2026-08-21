
/* v8::Value::IsTrue() const */

bool __thiscall v8::Value::IsTrue(Value *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if ((uVar1 & 1) == 0) {
    return false;
  }
  return (int)uVar1 == *(int *)((uVar1 & 0xffffffff00000000) + 0xb8);
}

