
/* v8::internal::Literal::AsArrayIndex(unsigned int*) const */

bool __thiscall v8::internal::Literal::AsArrayIndex(Literal *this,uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *(uint *)(this + 4) >> 7 & 0xf;
  if (uVar1 == 0) {
    uVar1 = *(uint *)(this + 8);
    dVar3 = (double)(ulong)uVar1;
    if (-1 < (int)uVar1) {
      *param_1 = uVar1;
      goto LAB_01497418;
    }
  }
  else if (uVar1 == 1) {
    dVar4 = *(double *)(this + 8);
    dVar3 = dVar4 + 4503599627370496.0;
    if (((ulong)dVar3 >> 0x20 == 0x43300000) &&
       (*param_1 = SUB84(dVar3,0), dVar4 == (double)((ulong)dVar3 & 0xffffffff))) goto LAB_01497418;
  }
  else if ((uVar1 == 3) &&
          (uVar2 = AstRawString::AsArrayIndex(*(AstRawString **)(this + 8),param_1),
          (uVar2 & 1) != 0)) {
    dVar3 = (double)(ulong)*param_1;
LAB_01497418:
    return SUB84(dVar3,0) != -1;
  }
  return false;
}

