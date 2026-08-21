
/* spine::RTTI::isExactly(spine::RTTI const&) const */

bool __thiscall spine::RTTI::isExactly(RTTI *this,RTTI *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
  return iVar1 == 0;
}

