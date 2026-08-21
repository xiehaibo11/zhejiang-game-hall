
/* v8::internal::PreParserFormalParameters::ValidateDuplicate(v8::internal::PreParser*) const */

void __thiscall
v8::internal::PreParserFormalParameters::ValidateDuplicate
          (PreParserFormalParameters *this,PreParser *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  
  if (this[0x14] != (PreParserFormalParameters)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 0x80);
    *puVar1 = 1;
    puVar1[2] = 1;
    lVar2 = *(long *)(param_1 + 200);
    lVar3 = *(long *)(lVar2 + 0x18);
    if (*(char *)(lVar3 + 0x30) == '\0') {
      *(undefined4 *)(lVar2 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 0x18);
      *(undefined1 *)(lVar2 + 0x60) = 0x6d;
      *(undefined1 *)(lVar2 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar2 + 0x100) = 0x6d;
      return;
    }
  }
  return;
}

