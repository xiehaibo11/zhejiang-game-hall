
/* v8::internal::RegExpParser::ParseHexEscape(int, int*) */

undefined8 __thiscall
v8::internal::RegExpParser::ParseHexEscape(RegExpParser *this,int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 1) {
    iVar3 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x40);
    iVar3 = 0;
    do {
      uVar2 = *(int *)(this + 0x38) - 0x30;
      if ((9 < uVar2) &&
         ((5 < (uVar2 | 0x20) - 0x31 || (uVar2 = (uVar2 | 0x20) - 0x27, (int)uVar2 < 0)))) {
        *(int *)(this + 0x40) = iVar1 + -1;
        this[0x4c] = (RegExpParser)(iVar1 <= *(int *)(*(long *)(this + 0x30) + 0x24));
        Advance(this);
        return 0;
      }
      iVar3 = uVar2 + iVar3 * 0x10;
      Advance(this);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  *param_2 = iVar3;
  return 1;
}

