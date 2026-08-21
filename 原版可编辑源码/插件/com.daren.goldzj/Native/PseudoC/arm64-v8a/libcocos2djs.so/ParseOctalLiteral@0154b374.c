
/* v8::internal::RegExpParser::ParseOctalLiteral() */

int __thiscall v8::internal::RegExpParser::ParseOctalLiteral(RegExpParser *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x38) + -0x30;
  Advance(this);
  if ((*(uint *)(this + 0x38) & 0xfffffff8) == 0x30) {
    iVar1 = *(uint *)(this + 0x38) + iVar1 * 8 + -0x30;
    Advance(this);
    if ((iVar1 < 0x20) && ((*(uint *)(this + 0x38) & 0xfffffff8) == 0x30)) {
      iVar1 = *(uint *)(this + 0x38) + iVar1 * 8 + -0x30;
      Advance(this);
    }
  }
  return iVar1;
}

