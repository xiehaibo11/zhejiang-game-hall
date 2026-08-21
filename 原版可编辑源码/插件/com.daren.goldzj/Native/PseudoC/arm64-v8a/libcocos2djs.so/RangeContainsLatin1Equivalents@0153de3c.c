
/* v8::internal::RangeContainsLatin1Equivalents(v8::internal::CharacterRange) */

byte v8::internal::RangeContainsLatin1Equivalents(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_1;
  iVar5 = (int)((ulong)param_1 >> 0x20);
  if (iVar4 < 0x39d) {
    if (0x39b < iVar5) {
      return 1;
    }
    bVar1 = iVar4 < 0x179;
    bVar2 = SBORROW4(iVar5,0x177);
    iVar4 = iVar5 + -0x177;
    bVar3 = iVar5 == 0x177;
  }
  else {
    bVar1 = iVar4 < 0x3bd;
    bVar2 = SBORROW4(iVar5,0x3bb);
    iVar4 = iVar5 + -0x3bb;
    bVar3 = iVar5 == 0x3bb;
  }
  return bVar1 & (!bVar3 && iVar4 < 0 == bVar2);
}

