
/* v8::internal::RegExpParser::RegExpParserState::IsInsideCaptureGroup(int) */

undefined8 __thiscall
v8::internal::RegExpParser::RegExpParserState::IsInsideCaptureGroup
          (RegExpParserState *this,int param_1)

{
  do {
    if (this == (RegExpParserState *)0x0) {
      return 0;
    }
    if (*(int *)(this + 0x10) == 1) {
      if (*(int *)(this + 0x18) == param_1) {
        return 1;
      }
      if (*(int *)(this + 0x18) < param_1) {
        return 0;
      }
    }
    this = *(RegExpParserState **)this;
  } while( true );
}

