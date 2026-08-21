
/* v8::internal::PreParser::ParseStatementListAndLogFunction(v8::internal::PreParserFormalParameters*)
    */

void __thiscall
v8::internal::PreParser::ParseStatementListAndLogFunction
          (PreParser *this,PreParserFormalParameters *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar7 = *(ulong **)(*(long *)(this + 200) + 8);
  cVar3 = (char)puVar7[7];
  while (cVar3 == 'Z') {
    uVar10 = *puVar7;
    if ((((*(char *)((long)puVar7 + 0x1c) == '\0') ||
         (*(int *)((long)puVar7 + 4) - (int)uVar10 != 0xc)) || ((int)puVar7[3] != 10)) ||
       (iVar5 = strncmp("use strict",(char *)puVar7[1],10), iVar5 != 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    iVar5 = ParserBase<v8::internal::PreParser>::ParseStatementListItem
                      ((ParserBase<v8::internal::PreParser> *)this);
    if (iVar5 != 4) {
      if (iVar5 == 0) goto LAB_01174c30;
      break;
    }
    if (bVar4) {
      *(ushort *)(*(long *)this + 0x81) = *(ushort *)(*(long *)this + 0x81) | 1;
      uVar6 = Scope::HasSimpleParameters(*(Scope **)this);
      if ((uVar6 & 1) == 0) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0x80),uVar10 & 0xffffffff,
                   uVar10 >> 0x20,0xf3,"use strict");
        lVar8 = *(long *)(this + 200);
        lVar9 = *(long *)(lVar8 + 0x18);
        if (*(char *)(lVar9 + 0x30) == '\0') {
          *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar9 + 0x30) = 1;
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
          *(undefined1 *)(lVar8 + 0x60) = 0x6d;
          *(undefined1 *)(lVar8 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar8 + 0x100) = 0x6d;
        }
        goto LAB_01174c30;
      }
    }
    puVar7 = *(ulong **)(*(long *)(this + 200) + 8);
    cVar3 = (char)puVar7[7];
  }
  do {
    if (*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) == '\r') break;
    iVar5 = ParserBase<v8::internal::PreParser>::ParseStatementListItem
                      ((ParserBase<v8::internal::PreParser> *)this);
  } while (iVar5 != 0);
LAB_01174c30:
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(*(long *)(*(long *)(this + 200) + 8) + 4);
  *(uint *)(this + 0x114) = *(int *)(param_1 + 0x10) - (uint)(byte)param_1[8];
  *(undefined4 *)(this + 0x118) = uVar1;
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(this + 0xd0);
  *(undefined4 *)(this + 0x110) = uVar2;
  return;
}

