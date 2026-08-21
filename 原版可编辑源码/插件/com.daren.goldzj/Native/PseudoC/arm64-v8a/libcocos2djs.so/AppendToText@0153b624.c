
/* v8::internal::RegExpAtom::AppendToText(v8::internal::RegExpText*, v8::internal::Zone*) */

void __thiscall
v8::internal::RegExpAtom::AppendToText(RegExpAtom *this,RegExpText *param_1,Zone *param_2)

{
  RegExpText::AddElement(param_1,0xffffffff,this,param_2);
  return;
}

