
/* v8::internal::compiler::LocationOperand::IsCompatible(v8::internal::compiler::LocationOperand*)
    */

byte __thiscall
v8::internal::compiler::LocationOperand::IsCompatible
          (LocationOperand *this,LocationOperand *param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)this & 0x1c | 8;
  uVar2 = (uint)(*(ulong *)this >> 5);
  if ((uVar3 == 0xc) && ((uVar2 & 0xff) < 0xb)) {
    uVar4 = *(ulong *)param_1;
    uVar3 = uVar4 & 0x1c;
    if ((uVar3 == 4) && (((uint)(uVar4 >> 5) & 0xff) < 0xb)) {
      return 1;
    }
    bVar1 = ((uint)uVar4 >> 5 & 0xff) < 0xb;
  }
  else {
    if (uVar3 != 0xc) {
      return 0;
    }
    if ((uVar2 & 0xff) < 0xb) {
      return 0;
    }
    uVar4 = *(ulong *)param_1;
    uVar3 = uVar4 & 0x1c;
    if ((uVar3 == 4) && (10 < ((uint)(uVar4 >> 5) & 0xff))) {
      return 1;
    }
    bVar1 = 10 < ((uint)uVar4 >> 5 & 0xff);
  }
  return uVar3 == 0xc & bVar1;
}

