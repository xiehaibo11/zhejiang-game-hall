
/* v8::Value::IsBoolean() const */

bool __thiscall v8::Value::IsBoolean(Value *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (((uVar1 & 1) != 0) &&
     (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x43)) {
    return (*(uint *)(uVar1 + 0x17) >> 1 & 0xff) < 2;
  }
  return false;
}

