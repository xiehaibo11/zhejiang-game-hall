
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseMemberWithPresentNewPrefixesExpression()
    */

undefined4 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseMemberWithPresentNewPrefixesExpression
          (ParserBase<v8::internal::PreParser> *this)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  Scanner *this_00;
  PendingCompilationErrorHandler *pPVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 local_8;
  undefined1 auStack_4 [4];
  
  Scanner::Next(*(Scanner **)(this + 200));
  uVar4 = GetCurrentStackPosition();
  if (uVar4 < *(ulong *)(this + 0x78)) {
    lVar7 = *(long *)(this + 200);
    lVar9 = *(long *)(lVar7 + 0x18);
    if (*(char *)(lVar9 + 0x30) == '\0') {
      *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar9 + 0x30) = 1;
      *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined1 *)(lVar7 + 0x60) = 0x6d;
      *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar7 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0x80) = 0x101;
  }
  this_00 = *(Scanner **)(this + 200);
  cVar2 = *(char *)(*(long *)(this_00 + 8) + 0x38);
  if (cVar2 == '[') {
    ParseSuperExpression(this,true);
  }
  else {
    if ((cVar2 == 'k') && (this[0x102] != (ParserBase<v8::internal::PreParser>)0x0)) {
      if (this[0x103] != (ParserBase<v8::internal::PreParser>)0x0) {
        cVar2 = Scanner::PeekAhead(this_00);
        this_00 = *(Scanner **)(this + 200);
        if (cVar2 != '\x05') {
          cVar2 = *(char *)(*(long *)(this_00 + 8) + 0x38);
          goto LAB_01179ffc;
        }
      }
      pPVar5 = *(PendingCompilationErrorHandler **)(this + 0x80);
      uVar6 = 0x39;
      uVar3 = **(undefined4 **)(this_00 + 8);
      uVar1 = (*(undefined4 **)(this_00 + 8))[1];
      goto LAB_01179fb0;
    }
LAB_01179ffc:
    if (cVar2 == '\x02') {
      uVar3 = ParseNewTargetExpression(this);
      if (*(byte *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) < 4) {
        uVar3 = DoParseMemberExpressionContinuation(this);
      }
      return uVar3;
    }
    uVar3 = ParsePrimaryExpression(this);
    if (*(byte *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) < 4) {
      DoParseMemberExpressionContinuation(this,uVar3);
    }
  }
  puVar8 = *(undefined4 **)(*(long *)(this + 200) + 8);
  if (*(char *)(puVar8 + 0xe) != '\x04') {
    if (*(char *)(puVar8 + 0xe) == '\x05') {
      local_8 = 0;
      ParseArguments(this,&local_8,auStack_4,0);
      if (*(byte *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) < 4) {
        uVar3 = DoParseMemberExpressionContinuation(this,2);
        return uVar3;
      }
    }
    return 2;
  }
  uVar3 = *puVar8;
  uVar1 = puVar8[1];
  pPVar5 = *(PendingCompilationErrorHandler **)(this + 0x80);
  uVar6 = 0x178;
LAB_01179fb0:
  PendingCompilationErrorHandler::ReportMessageAt(pPVar5,uVar3,uVar1,uVar6,0);
  lVar7 = *(long *)(this + 200);
  lVar9 = *(long *)(lVar7 + 0x18);
  if (*(char *)(lVar9 + 0x30) == '\0') {
    *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
    *(undefined1 *)(lVar9 + 0x30) = 1;
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
    *(undefined1 *)(lVar7 + 0x60) = 0x6d;
    *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
    *(undefined1 *)(lVar7 + 0x100) = 0x6d;
  }
  return 1;
}

