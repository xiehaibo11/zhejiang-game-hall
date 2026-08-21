
/* v8::Value::IsGeneratorObject() const */

bool __thiscall v8::Value::IsGeneratorObject(Value *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if ((uVar1 & 1) == 0) {
    return false;
  }
  return *(ushort *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) - 0x417 < 3;
}

