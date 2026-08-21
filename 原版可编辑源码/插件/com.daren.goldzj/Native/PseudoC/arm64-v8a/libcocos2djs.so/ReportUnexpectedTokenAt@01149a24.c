
/* v8::internal::Parser::ReportUnexpectedTokenAt(v8::internal::Scanner::Location,
   v8::internal::Token::Value, v8::internal::MessageTemplate) */

void __thiscall
v8::internal::Parser::ReportUnexpectedTokenAt(Parser *this,ulong param_2,byte param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = 0;
  iVar2 = 0x139;
  switch(param_3) {
  case 0:
  case 1:
    uVar1 = 0;
    iVar2 = 0x13f;
    break;
  default:
    uVar1 = *(undefined8 *)(Token::string_ + (ulong)param_3 * 8);
    iVar2 = param_4;
    break;
  case 0xe:
    break;
  case 0x57:
  case 0x58:
  case 0x59:
    uVar1 = 0;
    iVar2 = 0x143;
    break;
  case 0x5a:
    uVar1 = 0;
    iVar2 = 0x144;
    break;
  case 0x5c:
  case 0x6c:
    uVar1 = 0;
    iVar2 = 0x142;
    break;
  case 0x60:
  case 0x66:
    uVar1 = 0;
    iVar2 = 0x13b;
    break;
  case 0x61:
  case 0x62:
  case 99:
  case 100:
    uVar1 = 0;
    iVar2 = 0x142;
    if ((*(byte *)(*(long *)this + 0x81) & 1) != 0) {
      iVar2 = 0x13c;
    }
    break;
  case 0x65:
  case 0x6e:
    uVar1 = 0;
    iVar2 = 0xf9;
    break;
  case 0x6d:
    iVar2 = *(int *)(*(long *)(this + 0xf8) + 0x15c);
    if (iVar2 == 0) {
      uVar1 = 0;
      iVar2 = 0x102;
    }
    else {
      param_2 = *(ulong *)(*(long *)(this + 0xf8) + 0x160);
      uVar1 = 0;
    }
    break;
  case 0x71:
    uVar1 = 0;
    iVar2 = 0x145;
  }
  PendingCompilationErrorHandler::ReportMessageAt
            (*(PendingCompilationErrorHandler **)(this + 0xb0),param_2,param_2 >> 0x20,iVar2,uVar1);
  lVar3 = *(long *)(this + 0x158);
  if (*(char *)(lVar3 + 0x30) == '\0') {
    *(undefined4 *)(this + 0x160) = 0xffffffff;
    *(undefined1 *)(lVar3 + 0x30) = 1;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 0x18);
    this[0x1a0] = (Parser)0x6d;
    this[0x1f0] = (Parser)0x6d;
    this[0x240] = (Parser)0x6d;
  }
  return;
}

