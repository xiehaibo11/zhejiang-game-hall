
/* v8::internal::ParserBase<v8::internal::Parser>::ParseStatementListItem() */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseStatementListItem
          (ParserBase<v8::internal::Parser> *this)

{
  int iVar1;
  char cVar2;
  Scanner *pSVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  DeclarationParsingResult aDStack_58 [16];
  void *local_48;
  void *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  pSVar3 = *(Scanner **)(this + 0xf8);
  switch(*(undefined1 *)(*(long *)(pSVar3 + 8) + 0x38)) {
  case 0x49:
    Scanner::Next(pSVar3);
    pSVar3 = *(Scanner **)(this + 0xf8);
    iVar7 = **(int **)pSVar3;
    if (*(char *)(*(long *)(pSVar3 + 8) + 0x38) == '(') {
      Scanner::Next(pSVar3);
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    break;
  case 0x50:
  case 0x68:
switchD_011501b4_caseD_50:
    local_40 = (void *)0x0;
    uStack_38 = 0;
    local_48 = (void *)0x0;
    uStack_28 = 0xffffffff;
    local_30 = 0xffffffff;
    ParseVariableDeclarations(this,0,aDStack_58,0);
    ExpectSemicolon(this);
    uVar5 = Parser::BuildInitializationBlock((Parser *)this,aDStack_58);
    if (local_48 != (void *)0x0) {
      local_40 = local_48;
      operator_delete(local_48);
    }
    return uVar5;
  case 0x5f:
    cVar2 = Scanner::PeekAhead(pSVar3);
    if ((cVar2 != 'I') ||
       (pSVar3 = *(Scanner **)(this + 0xf8), Scanner::PeekAhead(pSVar3),
       *(char *)(*(long *)(pSVar3 + 0x10) + 0x4c) != '\0')) goto switchD_011501b4_caseD_4a;
    Scanner::Next(*(Scanner **)(this + 0xf8));
    pSVar3 = *(Scanner **)(this + 0xf8);
    piVar6 = *(int **)pSVar3;
    iVar7 = *piVar6;
    iVar1 = (piVar6[1] - iVar7) + -2;
    if ((char)piVar6[0xe] != 'Z') {
      iVar1 = piVar6[1] - iVar7;
    }
    if (piVar6[6] >> ((*(byte *)(piVar6 + 7) ^ 1) & 0x1f) != iVar1) {
      ReportUnexpectedToken(this,0x6e);
      pSVar3 = *(Scanner **)(this + 0xf8);
      iVar7 = **(int **)pSVar3;
    }
    Scanner::Next(pSVar3);
    uVar5 = 2;
    break;
  case 0x62:
    uVar4 = IsNextLetKeyword(this);
    if ((uVar4 & 1) != 0) goto switchD_011501b4_caseD_50;
  default:
switchD_011501b4_caseD_4a:
    uVar5 = ParseStatement(this,0,0,0);
    return uVar5;
  case 0x67:
    Scanner::Next(pSVar3);
    uVar5 = ParseClassDeclaration(this,(ZoneList *)0x0,false);
    return uVar5;
  }
  uVar5 = ParseHoistableDeclaration(this,iVar7,uVar5,0,0);
  return uVar5;
}

