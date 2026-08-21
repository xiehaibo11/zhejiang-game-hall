
/* v8::internal::ParserBase<v8::internal::PreParser>::ReportUnexpectedToken(v8::internal::Token::Value)
    */

void v8::internal::ParserBase<v8::internal::PreParser>::ReportUnexpectedToken(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 0x80);
  *puVar1 = 1;
  puVar1[2] = 1;
  lVar2 = *(long *)(param_1 + 200);
  lVar3 = *(long *)(lVar2 + 0x18);
  if (*(char *)(lVar3 + 0x30) != '\0') {
    return;
  }
  *(undefined4 *)(lVar2 + 0x20) = 0xffffffff;
  *(undefined1 *)(lVar3 + 0x30) = 1;
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined1 *)(lVar2 + 0x60) = 0x6d;
  *(undefined1 *)(lVar2 + 0xb0) = 0x6d;
  *(undefined1 *)(lVar2 + 0x100) = 0x6d;
  return;
}

