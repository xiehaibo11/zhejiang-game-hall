
/* v8::internal::RegExpStackScope::RegExpStackScope(v8::internal::Isolate*) */

void __thiscall
v8::internal::RegExpStackScope::RegExpStackScope(RegExpStackScope *this,Isolate *param_1)

{
  RegExpStack *this_00;
  
  this_00 = *(RegExpStack **)(param_1 + 0xb618);
  *(RegExpStack **)this = this_00;
  RegExpStack::EnsureCapacity(this_00,0);
  return;
}

