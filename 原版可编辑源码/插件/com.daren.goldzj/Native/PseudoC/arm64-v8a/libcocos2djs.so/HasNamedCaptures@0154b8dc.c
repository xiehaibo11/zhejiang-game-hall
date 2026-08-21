
/* v8::internal::RegExpParser::HasNamedCaptures() */

bool __thiscall v8::internal::RegExpParser::HasNamedCaptures(RegExpParser *this)

{
  bool bVar1;
  
  if (this[0x50] == (RegExpParser)0x0) {
    if (this[0x4f] == (RegExpParser)0x0) {
      ScanForCaptures(this);
      bVar1 = this[0x50] != (RegExpParser)0x0;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

