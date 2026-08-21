
/* v8::Int32::Value() const */

int __thiscall v8::Int32::Value(Int32 *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if ((uVar1 & 1) == 0) {
    return (int)uVar1 >> 1;
  }
  return (int)*(double *)(uVar1 + 3);
}

