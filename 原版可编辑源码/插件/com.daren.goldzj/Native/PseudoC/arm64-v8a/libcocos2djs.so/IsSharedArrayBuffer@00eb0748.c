
/* v8::Value::IsSharedArrayBuffer() const */

uint __thiscall v8::Value::IsSharedArrayBuffer(Value *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (((uVar1 & 1) != 0) &&
     (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x424)) {
    return *(uint *)(uVar1 + 0x1b) >> 4 & 1;
  }
  return 0;
}

