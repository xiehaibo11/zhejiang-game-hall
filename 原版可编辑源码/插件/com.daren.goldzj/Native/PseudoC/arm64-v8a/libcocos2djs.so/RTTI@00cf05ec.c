
/* spine::RTTI::RTTI(char const*, spine::RTTI const&) */

void __thiscall spine::RTTI::RTTI(RTTI *this,char *param_1,RTTI *param_2)

{
  *(RTTI **)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__SpineObject_01c8f258;
  *(char **)(this + 8) = param_1;
  return;
}

