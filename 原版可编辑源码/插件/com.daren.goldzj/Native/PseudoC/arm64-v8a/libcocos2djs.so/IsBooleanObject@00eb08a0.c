
/* v8::Value::IsBooleanObject() const */

bool __thiscall v8::Value::IsBooleanObject(Value *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)this;
  if ((uVar2 & 1) != 0) {
    uVar1 = uVar2 & 0xffffffff00000000 | 7;
    if (((*(short *)(uVar1 + *(uint *)(uVar2 - 1)) == 0x411) && ((*(uint *)(uVar2 + 0xb) & 1) != 0))
       && (uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb),
          *(short *)(uVar1 + *(uint *)(uVar2 - 1)) == 0x43)) {
      return (*(uint *)(uVar2 + 0x17) >> 1 & 0xff) < 2;
    }
  }
  return false;
}

