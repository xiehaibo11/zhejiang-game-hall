
/* v8::internal::RegExpParser::RegExpParserState::IsInsideCaptureGroup(v8::internal::ZoneVector<unsigned
   short> const*) */

undefined8 __thiscall
v8::internal::RegExpParser::RegExpParserState::IsInsideCaptureGroup
          (RegExpParserState *this,ZoneVector *param_1)

{
  short *psVar1;
  short *psVar2;
  long *plVar3;
  
  do {
    if (this == (RegExpParserState *)0x0) {
      return 0;
    }
    plVar3 = *(long **)(this + 0x20);
    if (plVar3 != (long *)0x0) {
      psVar1 = (short *)*plVar3;
      psVar2 = *(short **)param_1;
      if (plVar3[1] - (long)psVar1 == *(long *)(param_1 + 8) - (long)psVar2) {
        while( true ) {
          if (psVar1 == (short *)plVar3[1]) {
            return 1;
          }
          if (*psVar1 != *psVar2) break;
          psVar1 = psVar1 + 1;
          psVar2 = psVar2 + 1;
        }
      }
    }
    this = *(RegExpParserState **)this;
  } while( true );
}

