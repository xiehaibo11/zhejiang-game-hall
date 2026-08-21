
/* spine::RTTI::instanceOf(spine::RTTI const&) const */

undefined8 __thiscall spine::RTTI::instanceOf(RTTI *this,RTTI *param_1)

{
  int iVar1;
  char *__s2;
  
  if (this != (RTTI *)0x0) {
    __s2 = *(char **)(param_1 + 8);
    do {
      iVar1 = strcmp(*(char **)(this + 8),__s2);
      if (iVar1 == 0) {
        return 1;
      }
      this = *(RTTI **)(this + 0x10);
    } while (this != (RTTI *)0x0);
  }
  return 0;
}

