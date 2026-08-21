
/* v8::Integer::Value() const */

long __thiscall v8::Integer::Value(Integer *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if ((uVar1 & 1) == 0) {
    return (long)(uVar1 << 0x20) >> 0x21;
  }
  return (long)*(double *)(uVar1 + 3);
}

