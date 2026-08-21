
/* v8::Value::IsArrayBuffer() const */

bool __thiscall v8::Value::IsArrayBuffer(Value *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (((uVar1 & 1) != 0) &&
     (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x424)) {
    return (*(uint *)(uVar1 + 0x1b) & 0x10) == 0;
  }
  return false;
}

