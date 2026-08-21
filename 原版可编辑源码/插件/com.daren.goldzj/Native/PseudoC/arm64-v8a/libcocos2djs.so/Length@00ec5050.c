
/* v8::Array::Length() const */

int __thiscall v8::Array::Length(Array *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(ulong *)this + 0xb);
  if ((uVar1 & 1) == 0) {
    return (int)uVar1 >> 1;
  }
  return (int)*(double *)((*(ulong *)this & 0xffffffff00000000 | (ulong)uVar1) + 3);
}

