
/* v8::Value::IsUint32() const */

uint __thiscall v8::Value::IsUint32(Value *this)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = *(ulong *)this;
  if ((uVar2 & 1) == 0) {
    return ~(uint)uVar2 >> 0x1f;
  }
  if (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x42) {
    dVar4 = *(double *)(uVar2 + 3);
    uVar1 = 0;
    if (((dVar4 <= 4294967295.0) && (0.0 <= dVar4)) && (dVar4 != -0.0)) {
      dVar5 = -dVar4;
      if (0.0 <= dVar4) {
        dVar5 = dVar4;
      }
      uVar3 = SUB84(dVar5 + 4503599627370496.0,0);
      uVar1 = -uVar3;
      if (0.0 <= dVar4) {
        uVar1 = uVar3;
      }
      dVar6 = (double)uVar1;
      if (4503599627370496.0 <= dVar5) {
        dVar6 = 2147483648.0;
      }
      uVar1 = (uint)(dVar4 == dVar6);
    }
    return uVar1;
  }
  return 0;
}

