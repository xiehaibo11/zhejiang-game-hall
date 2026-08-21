
/* v8::internal::RegExpParser::RegExpParser(v8::internal::FlatStringReader*,
   v8::internal::Handle<v8::internal::String>*, v8::base::Flags<v8::internal::JSRegExp::Flag, int>,
   v8::internal::Isolate*, v8::internal::Zone*) */

void __thiscall
v8::internal::RegExpParser::RegExpParser
          (RegExpParser *this,undefined8 param_1,undefined8 param_2,undefined4 param_4,
          undefined8 param_5,undefined8 param_6)

{
  *(undefined8 *)this = param_5;
  *(undefined8 *)(this + 8) = param_6;
  *(undefined8 *)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = param_1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4d) = 0;
  *(undefined4 *)(this + 0x38) = 0x200000;
  *(undefined4 *)(this + 0x3c) = param_4;
  this[0x4c] = (RegExpParser)0x1;
  this[0x51] = (RegExpParser)0x0;
  Advance(this);
  return;
}

