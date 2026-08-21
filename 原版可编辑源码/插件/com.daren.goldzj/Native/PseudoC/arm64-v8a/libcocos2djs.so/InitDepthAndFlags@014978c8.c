
/* v8::internal::ArrayLiteral::InitDepthAndFlags() */

uint __thiscall v8::internal::ArrayLiteral::InitDepthAndFlags(ArrayLiteral *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ArrayLiteral *this_00;
  uint uVar6;
  long lVar7;
  
  uVar4 = *(uint *)(this + 8);
  if ((int)(uVar4 * 2) < 1) {
    uVar6 = *(uint *)(this + 0xc);
    uVar3 = uVar6;
    if ((int)uVar6 < 0) {
      uVar3 = *(uint *)(this + 0x24);
    }
    uVar6 = uVar6 >> 0x1f;
    if ((int)uVar3 < 1) {
      uVar5 = 1;
    }
    else {
      lVar7 = 0;
      uVar5 = 1;
      do {
        this_00 = *(ArrayLiteral **)(*(long *)(this + 0x18) + lVar7);
        uVar4 = *(uint *)(this_00 + 4);
        if ((this_00 != (ArrayLiteral *)0x0) && ((uVar4 + 0x2b & 0x3f) < 3)) {
          if ((uVar4 & 0x3f) == 0x16) {
            iVar2 = ObjectLiteral::InitDepthAndFlags((ObjectLiteral *)this_00);
          }
          else if ((uVar4 & 0x3f) == 0x17) {
            iVar2 = InitDepthAndFlags(this_00);
          }
          else {
            iVar2 = 1;
          }
          uVar4 = *(uint *)(this_00 + 4);
          if ((int)uVar5 <= iVar2) {
            uVar5 = iVar2 + 1;
          }
        }
        uVar1 = uVar4 & 0x3f;
        if ((uVar1 != 0x29) &&
           ((2 < (uVar4 + 0x2b & 0x3f) ||
            (((uVar1 != 0x16 && (uVar1 != 0x17)) || ((uVar4 >> 8 & 1) == 0)))))) {
          uVar6 = 0;
        }
        lVar7 = lVar7 + 8;
      } while ((ulong)uVar3 * 8 - lVar7 != 0);
      uVar4 = *(uint *)(this + 8);
    }
    *(uint *)(this + 8) = uVar4 & 0x80000000 | uVar5 & 0x7fffffff;
    uVar4 = 0x180;
    if (uVar6 == 0) {
      uVar4 = 0x80;
    }
    *(uint *)(this + 4) = uVar4 | *(uint *)(this + 4) & 0xfffffe7f;
  }
  else {
    uVar5 = uVar4 & 0x7fffffff;
  }
  return uVar5;
}

