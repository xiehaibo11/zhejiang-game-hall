
/* v8::internal::RegExpParser::Reset(int) */

void __thiscall v8::internal::RegExpParser::Reset(RegExpParser *this,int param_1)

{
  *(int *)(this + 0x40) = param_1;
  this[0x4c] = (RegExpParser)(param_1 < *(int *)(*(long *)(this + 0x30) + 0x24));
  Advance(this);
  return;
}

