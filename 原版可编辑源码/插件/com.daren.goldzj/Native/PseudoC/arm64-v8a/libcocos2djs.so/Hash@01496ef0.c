
/* v8::internal::Literal::Hash() */

uint __thiscall v8::internal::Literal::Hash(Literal *this)

{
  uint uVar1;
  ulong uVar2;
  double dVar3;
  
  if ((*(uint *)(this + 4) & 0x780) == 0x180) {
    return *(uint *)(*(long *)(this + 8) + 0x18) >> 3;
  }
  uVar1 = *(uint *)(this + 4) >> 7 & 0xf;
  if (uVar1 == 1) {
    dVar3 = *(double *)(this + 8);
  }
  else {
    if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    dVar3 = (double)(long)*(int *)(this + 8);
  }
  uVar2 = ~(ulong)dVar3 + (long)dVar3 * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uVar2 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  return ((uint)(uVar2 >> 0x16) ^ (uint)uVar2) & 0x3fffffff;
}

