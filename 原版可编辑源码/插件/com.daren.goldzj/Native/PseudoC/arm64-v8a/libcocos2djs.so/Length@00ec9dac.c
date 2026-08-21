
/* v8::TypedArray::Length() */

undefined8 __thiscall v8::TypedArray::Length(TypedArray *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if ((*(uint *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xb)) + 0x1b) >> 2 & 1) == 0
     ) {
    return *(undefined8 *)(uVar1 + 0x1f);
  }
  return 0;
}

