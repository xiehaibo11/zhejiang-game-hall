
/* v8::internal::RegExpCharacterClass::AppendToText(v8::internal::RegExpText*, v8::internal::Zone*)
    */

void __thiscall
v8::internal::RegExpCharacterClass::AppendToText
          (RegExpCharacterClass *this,RegExpText *param_1,Zone *param_2)

{
  RegExpText::AddElement(param_1,0x1ffffffff,this,param_2);
  return;
}

