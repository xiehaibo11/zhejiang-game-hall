
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseArrowParametersWithRest(v8::internal::PreParserExpressionList*,
   v8::internal::AccumulationScope<v8::internal::ParserTypes<v8::internal::PreParser> >*, int) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseArrowParametersWithRest
          (ParserBase<v8::internal::PreParser> *this,PreParserExpressionList *param_1,
          AccumulationScope *param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  Scanner *this_00;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  
  Scanner::Next(*(Scanner **)(this + 200));
  uVar2 = **(undefined4 **)(*(long *)(this + 200) + 8);
  uVar5 = ParseBindingPattern(this);
  ClassifyArrowParameter(this,param_2,uVar2,uVar5);
  if (*(byte *)(*(long *)(this + 0x90) + 0x10) - 1 < 2) {
    *(undefined1 *)(*(long *)(this + 0x90) + 0x58) = 0;
  }
  this_00 = *(Scanner **)(this + 200);
  cVar4 = (char)(*(int **)(this_00 + 8))[0xe];
  if (cVar4 == '\x11') {
    uVar6 = 0x121;
  }
  else {
    if (cVar4 != '\x1e') {
      lVar7 = *(long *)(this + 0x90);
      if (*(byte *)(lVar7 + 0x10) < 3) {
        iVar11 = (int)*(undefined8 *)(lVar7 + 0x28) - (int)*(long *)(lVar7 + 0x20);
        if ((iVar11 != 0) && (param_3 < iVar11)) {
          iVar3 = **(int **)(this_00 + 8);
          piVar10 = (int *)(**(long **)(lVar7 + 0x18) +
                            ((long)iVar11 + -1 + *(long *)(lVar7 + 0x20)) * 0x10 + 8);
          if (*piVar10 == -1) {
            lVar9 = (long)iVar11 + -2;
            do {
              *piVar10 = iVar3;
              if (lVar9 + 1 <= (long)param_3) break;
              lVar1 = lVar9 + *(long *)(lVar7 + 0x20);
              lVar9 = lVar9 + -1;
              piVar10 = (int *)(**(long **)(lVar7 + 0x18) + lVar1 * 0x10 + 8);
            } while (*piVar10 == -1);
            this_00 = *(Scanner **)(this + 200);
            cVar4 = *(char *)(*(long *)(this_00 + 8) + 0x38);
          }
        }
      }
      if ((cVar4 == '\x06') && (cVar4 = Scanner::PeekAhead(this_00), cVar4 == '\x0f')) {
        *(int *)param_1 = *(int *)param_1 + 1;
        return 2;
      }
      puVar8 = *(undefined1 **)(this + 0x80);
      *puVar8 = 1;
      puVar8[2] = 1;
      lVar7 = *(long *)(this + 200);
      lVar9 = *(long *)(lVar7 + 0x18);
      if (*(char *)(lVar9 + 0x30) != '\0') {
        return 1;
      }
      *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar9 + 0x30) = 1;
      *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined1 *)(lVar7 + 0x60) = 0x6d;
      *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar7 + 0x100) = 0x6d;
      return 1;
    }
    uVar6 = 0x118;
  }
  ReportMessage(this,uVar6);
  return 1;
}

