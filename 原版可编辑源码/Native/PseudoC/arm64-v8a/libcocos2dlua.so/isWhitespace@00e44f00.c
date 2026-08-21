
/* cocos2d::PUScriptLexer::isWhitespace(char) const */

uint __thiscall cocos2d::PUScriptLexer::isWhitespace(PUScriptLexer *this,char param_1)

{
  if (((byte)param_1 - 9 & 0xff) < 0x18) {
    return 0x800011U >> (ulong)((byte)param_1 - 9 & 0x1f) & 1;
  }
  return 0;
}

