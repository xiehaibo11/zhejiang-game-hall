
/* v8::Value::IsGeneratorFunction() const */

bool __thiscall v8::Value::IsGeneratorFunction(Value *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (((uVar1 & 1) != 0) &&
     (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x439)) {
    return ((*(uint *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xb)) + 0x1b) & 0x1f)
            - 0xd & 0xff) < 4;
  }
  return false;
}

