
/* v8::internal::Literal::ToUint32(unsigned int*) const */

ulong __thiscall v8::internal::Literal::ToUint32(Literal *this,uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *(uint *)(this + 4) >> 7 & 0xf;
  if (uVar1 == 0) {
    if (-1 < (int)*(uint *)(this + 8)) {
      *param_1 = *(uint *)(this + 8);
      return 1;
    }
  }
  else if (uVar1 == 1) {
    dVar3 = *(double *)(this + 8);
    dVar4 = dVar3 + 4503599627370496.0;
    if ((ulong)dVar4 >> 0x20 == 0x43300000) {
      *param_1 = SUB84(dVar4,0);
      return (ulong)(dVar3 == (double)((ulong)dVar4 & 0xffffffff));
    }
  }
  else if (uVar1 == 3) {
    uVar2 = AstRawString::AsArrayIndex(*(AstRawString **)(this + 8),param_1);
    return uVar2;
  }
  return 0;
}

