
/* v8::internal::RegExpParser::Advance(int) */

void __thiscall v8::internal::RegExpParser::Advance(RegExpParser *this,int param_1)

{
  *(int *)(this + 0x40) = param_1 + *(int *)(this + 0x40) + -1;
  Advance(this);
  return;
}

