
/* v8::internal::RegExpParser::ParseUnlimitedLengthHexNumber(int, int*) */

undefined8 __thiscall
v8::internal::RegExpParser::ParseUnlimitedLengthHexNumber
          (RegExpParser *this,int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(int *)(this + 0x38) - 0x30;
  if (9 < uVar1) {
    if (5 < (uVar1 | 0x20) - 0x31) {
      return 0;
    }
    uVar1 = (uVar1 | 0x20) - 0x27;
    if ((int)uVar1 < 0) {
      return 0;
    }
  }
  iVar2 = 0;
  do {
    iVar2 = uVar1 + iVar2 * 0x10;
    if (param_1 < iVar2) {
      return 0;
    }
    Advance(this);
    uVar1 = *(int *)(this + 0x38) - 0x30;
    if (9 < uVar1) {
      if (5 < (uVar1 | 0x20) - 0x31) break;
      uVar1 = (uVar1 | 0x20) - 0x27;
    }
  } while (-1 < (int)uVar1);
  *param_2 = iVar2;
  return 1;
}

