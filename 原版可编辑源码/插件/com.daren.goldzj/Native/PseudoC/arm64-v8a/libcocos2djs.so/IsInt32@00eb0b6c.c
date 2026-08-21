
/* v8::Value::IsInt32() const */

bool __thiscall v8::Value::IsInt32(Value *this)

{
  bool bVar1;
  ulong uVar2;
  double dVar3;
  
  uVar2 = *(ulong *)this;
  if ((uVar2 & 1) == 0) {
    return true;
  }
  if (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x42) {
    dVar3 = *(double *)(uVar2 + 3);
    bVar1 = false;
    if (((dVar3 <= 2147483647.0) && (-2147483648.0 <= dVar3)) && (dVar3 != -0.0)) {
      bVar1 = dVar3 == (double)(int)dVar3;
    }
    return bVar1;
  }
  return false;
}

