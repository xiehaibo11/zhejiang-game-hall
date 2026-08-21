
/* v8::Value::IsFunction() const */

byte __thiscall v8::Value::IsFunction(Value *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return *(byte *)((uVar1 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar1 - 1)) >> 1 & 1;
}

