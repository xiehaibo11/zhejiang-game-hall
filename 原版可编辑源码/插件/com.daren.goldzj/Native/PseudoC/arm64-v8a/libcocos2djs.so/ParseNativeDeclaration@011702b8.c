
/* v8::internal::ParserBase<v8::internal::Parser>::ParseNativeDeclaration() */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseNativeDeclaration
          (ParserBase<v8::internal::Parser> *this)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  AstRawString *pAVar6;
  Scanner *this_00;
  
  *(undefined1 *)(*(long *)(this + 0x10) + 0x38) = 8;
  iVar1 = **(int **)(*(Scanner **)(this + 0xf8) + 8);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  lVar5 = Scope::AsDeclarationScope();
  cVar2 = *(char *)(lVar5 + 0x85);
  bVar3 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((bVar3 & 0xfc) == 0x5c) {
LAB_0117030c:
    pAVar6 = (AstRawString *)
             Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
  }
  else {
    if (bVar3 == 0x61) {
      if (3 < (byte)(cVar2 - 0xdU)) {
LAB_011704d0:
        if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_0117030c;
      }
    }
    else if (bVar3 == 0x60) {
      if ((4 < (byte)(cVar2 - 10U)) && (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0))
      goto LAB_0117030c;
    }
    else if ((byte)(bVar3 + 0x9f) < 5) goto LAB_011704d0;
    ReportUnexpectedToken(this);
    pAVar6 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
  }
  uVar4 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar4 & 0xff) != 5) {
    ReportUnexpectedToken(this,uVar4);
  }
  this_00 = *(Scanner **)(this + 0xf8);
  if (*(char *)(*(long *)(this_00 + 8) + 0x38) == '\x06') {
LAB_01170400:
    uVar4 = Scanner::Next(this_00);
    if ((uVar4 & 0xff) != 6) {
      ReportUnexpectedToken(this,uVar4);
    }
    uVar4 = Scanner::Next(*(Scanner **)(this + 0xf8));
    if ((uVar4 & 0xff) != 0xc) {
      ReportUnexpectedToken(this,uVar4);
    }
    Parser::DeclareNative((Parser *)this,pAVar6,iVar1);
    return;
  }
  do {
    lVar5 = Scope::AsDeclarationScope();
    cVar2 = *(char *)(lVar5 + 0x85);
    bVar3 = Scanner::Next(*(Scanner **)(this + 0xf8));
    if ((bVar3 & 0xfc) == 0x5c) {
LAB_01170368:
      Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
    }
    else {
      if (bVar3 == 0x61) {
        if (3 < (byte)(cVar2 - 0xdU)) {
LAB_011703f0:
          if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_01170368;
        }
      }
      else if (bVar3 == 0x60) {
        if ((4 < (byte)(cVar2 - 10U)) && (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0))
        goto LAB_01170368;
      }
      else if ((byte)(bVar3 + 0x9f) < 5) goto LAB_011703f0;
      ReportUnexpectedToken(this);
    }
    this_00 = *(Scanner **)(this + 0xf8);
    if (*(char *)(*(long *)(this_00 + 8) + 0x38) != '\x1e') goto LAB_01170400;
    Scanner::Next(this_00);
  } while( true );
}

