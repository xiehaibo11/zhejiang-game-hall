
/* v8::internal::RegExpParser::IsSyntaxCharacterOrSlash(int) */

undefined8 v8::internal::RegExpParser::IsSyntaxCharacterOrSlash(int param_1)

{
  switch(param_1) {
  case 0x24:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2e:
  case 0x2f:
  case 0x3f:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x7b:
  case 0x7c:
  case 0x7d:
    return 1;
  default:
    return 0;
  }
}

