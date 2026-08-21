
/* v8::internal::RegExpText::AppendToText(v8::internal::RegExpText*, v8::internal::Zone*) */

void __thiscall
v8::internal::RegExpText::AppendToText(RegExpText *this,RegExpText *param_1,Zone *param_2)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0x14)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      AddElement(param_1,*(undefined8 *)(*(long *)(this + 8) + lVar1),
                 ((undefined8 *)(*(long *)(this + 8) + lVar1))[1],param_2);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < *(int *)(this + 0x14));
  }
  return;
}

