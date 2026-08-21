
/* v8::internal::Parser::ContainsLabel(v8::internal::ZoneList<v8::internal::AstRawString const*>*,
   v8::internal::AstRawString const*) */

undefined8 __thiscall
v8::internal::Parser::ContainsLabel(Parser *this,ZoneList *param_1,AstRawString *param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != (ZoneList *)0x0) {
    lVar2 = (long)*(int *)(param_1 + 0xc);
    while (0 < lVar2) {
      lVar1 = lVar2 * 8;
      lVar2 = lVar2 + -1;
      if (*(AstRawString **)(*(long *)param_1 + lVar1 + -8) == param_2) {
        return 1;
      }
    }
  }
  return 0;
}

