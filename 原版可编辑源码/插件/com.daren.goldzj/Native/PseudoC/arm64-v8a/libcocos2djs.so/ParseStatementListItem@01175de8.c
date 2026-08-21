
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseStatementListItem() */

undefined4 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseStatementListItem
          (ParserBase<v8::internal::PreParser> *this)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  Scanner *pSVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_58 [16];
  void *local_48;
  void *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  pSVar4 = *(Scanner **)(this + 200);
  switch(*(undefined1 *)(*(long *)(pSVar4 + 8) + 0x38)) {
  case 0x49:
    Scanner::Next(pSVar4);
    pSVar4 = *(Scanner **)(this + 200);
    iVar8 = **(int **)pSVar4;
    if (*(char *)(*(long *)(pSVar4 + 8) + 0x38) == '(') {
      Scanner::Next(pSVar4);
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    break;
  case 0x50:
  case 0x68:
switchD_01175e28_caseD_50:
    local_40 = (void *)0x0;
    uStack_38 = 0;
    local_48 = (void *)0x0;
    uStack_28 = 0xffffffff;
    local_30 = 0xffffffff;
    ParseVariableDeclarations(this,0,auStack_58,0);
    ExpectSemicolon(this);
    if (local_48 != (void *)0x0) {
      local_40 = local_48;
      operator_delete(local_48);
    }
    return 2;
  case 0x5f:
    cVar2 = Scanner::PeekAhead(pSVar4);
    if ((cVar2 != 'I') ||
       (pSVar4 = *(Scanner **)(this + 200), Scanner::PeekAhead(pSVar4),
       *(char *)(*(long *)(pSVar4 + 0x10) + 0x4c) != '\0')) goto switchD_01175e28_caseD_4a;
    Scanner::Next(*(Scanner **)(this + 200));
    pSVar4 = *(Scanner **)(this + 200);
    piVar7 = *(int **)pSVar4;
    iVar8 = *piVar7;
    iVar1 = (piVar7[1] - iVar8) + -2;
    if ((char)piVar7[0xe] != 'Z') {
      iVar1 = piVar7[1] - iVar8;
    }
    if (piVar7[6] >> ((*(byte *)(piVar7 + 7) ^ 1) & 0x1f) != iVar1) {
      ReportUnexpectedToken(this,0x6e);
      pSVar4 = *(Scanner **)(this + 200);
      iVar8 = **(int **)pSVar4;
    }
    Scanner::Next(pSVar4);
    uVar6 = 2;
    break;
  case 0x62:
    uVar5 = IsNextLetKeyword(this);
    if ((uVar5 & 1) != 0) goto switchD_01175e28_caseD_50;
  default:
switchD_01175e28_caseD_4a:
    uVar3 = ParseStatement(this,0,0,0);
    return uVar3;
  case 0x67:
    Scanner::Next(pSVar4);
    uVar3 = ParseClassDeclaration(this,(ZoneList *)0x0,false);
    return uVar3;
  }
  uVar3 = ParseHoistableDeclaration(this,iVar8,uVar6,0,0);
  return uVar3;
}

