
/* v8::Value::IsObject() const */

bool __thiscall v8::Value::IsObject(Value *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if ((uVar1 & 1) == 0) {
    return false;
  }
  return 0xa8 < *(ushort *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1));
}

