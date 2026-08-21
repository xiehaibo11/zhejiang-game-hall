
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseArguments(v8::internal::PreParserExpressionList*,
   bool*, v8::internal::ParsingArrowHeadFlag) */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseArguments
          (ParserBase<v8::internal::PreParser> *this,int *param_1,undefined1 *param_2,int param_4)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  ParserBase<v8::internal::PreParser> PVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  Scanner *this_00;
  long lVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  *param_2 = 0;
  Scanner::Next(*(Scanner **)(this + 200));
  lVar10 = *(long *)(this + 0x90);
  local_80 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (*(byte *)(lVar10 + 0x10) < 3) {
    local_78 = *(undefined8 *)(lVar10 + 0x30);
    uStack_68 = *(ulong *)(lVar10 + 0x40);
    local_70 = *(ulong *)(lVar10 + 0x38);
    *(undefined8 *)(lVar10 + 0x30) = 0;
    *(undefined8 *)(lVar10 + 0x40) = 0xffffffff;
    *(undefined8 *)(lVar10 + 0x38) = 0xffffffff;
    local_80 = lVar10;
  }
  iVar21 = 0;
  do {
    this_00 = *(Scanner **)(this + 200);
    puVar11 = *(undefined4 **)(this_00 + 8);
    if (*(char *)(puVar11 + 0xe) == '\n') {
      Scanner::Next(this_00);
      bVar1 = true;
      puVar11 = *(undefined4 **)(*(long *)(this + 200) + 8);
    }
    else {
      if (*(char *)(puVar11 + 0xe) == '\x06') goto LAB_0117bb44;
      bVar1 = false;
    }
    uVar3 = *puVar11;
    PVar5 = this[0x100];
    this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
    uVar9 = ParseAssignmentExpressionCoverGrammar(this);
    if (param_4 == 1) {
      ClassifyArrowParameter(this,&local_80,uVar3,uVar9);
      if (bVar1) {
        if (*(byte *)(*(long *)(this + 0x90) + 0x10) - 1 < 2) {
          *(undefined1 *)(*(long *)(this + 0x90) + 0x58) = 0;
        }
        if (((uVar9 & 0xf7) == 0x92) &&
           (lVar10 = *(long *)(this + 0x90), *(byte *)(lVar10 + 0x10) < 3)) {
          puVar13 = (undefined8 *)**(undefined8 **)(this + 200);
          cVar6 = *(char *)(lVar10 + 0x48);
          lVar20 = lVar10;
          while (cVar6 != '\0') {
            if (*(char *)(lVar20 + 0x10) == '\x02') {
              uVar16 = *puVar13;
              *(undefined4 *)(lVar20 + 0x54) = 0x121;
              *(undefined8 *)(lVar20 + 0x4c) = uVar16;
            }
            lVar20 = *(long *)(lVar20 + 8);
            if (lVar20 == 0) break;
            cVar6 = *(char *)(lVar10 + 0x48);
          }
        }
        puVar13 = *(undefined8 **)(*(long *)(this + 200) + 8);
        if ((*(char *)(puVar13 + 7) == '\x1e') &&
           (lVar10 = *(long *)(this + 0x90), *(byte *)(lVar10 + 0x10) < 3)) {
          cVar6 = *(char *)(lVar10 + 0x48);
          lVar20 = lVar10;
          while (cVar6 != '\0') {
            if (*(char *)(lVar20 + 0x10) == '\x02') {
              uVar16 = *puVar13;
              *(undefined4 *)(lVar20 + 0x54) = 0x118;
              *(undefined8 *)(lVar20 + 0x4c) = uVar16;
            }
            lVar20 = *(long *)(lVar20 + 8);
            if (lVar20 == 0) break;
            cVar6 = *(char *)(lVar10 + 0x48);
          }
        }
        goto LAB_0117b968;
      }
    }
    else {
LAB_0117b968:
      if (bVar1) {
        *param_2 = 1;
      }
    }
    *param_1 = *param_1 + 1;
    lVar10 = *(long *)(this + 0x90);
    this_00 = *(Scanner **)(this + 200);
    piVar12 = *(int **)(this_00 + 8);
    iVar7 = iVar21;
    if (*(byte *)(lVar10 + 0x10) < 3) {
      iVar18 = (int)*(undefined8 *)(lVar10 + 0x28) - (int)*(long *)(lVar10 + 0x20);
      if (iVar18 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar18 + -1;
        if (iVar21 < iVar18) {
          iVar4 = *piVar12;
          piVar15 = (int *)(**(long **)(lVar10 + 0x18) +
                            ((long)iVar18 + -1 + *(long *)(lVar10 + 0x20)) * 0x10 + 8);
          if (*piVar15 == -1) {
            lVar20 = (long)iVar18 + -2;
            do {
              *piVar15 = iVar4;
              if (lVar20 + 1 <= (long)iVar21) break;
              lVar2 = lVar20 + *(long *)(lVar10 + 0x20);
              lVar20 = lVar20 + -1;
              piVar15 = (int *)(**(long **)(lVar10 + 0x18) + lVar2 * 0x10 + 8);
            } while (*piVar15 == -1);
            this_00 = *(Scanner **)(this + 200);
            piVar12 = *(int **)(this_00 + 8);
          }
        }
      }
    }
    iVar21 = iVar7;
    if ((char)piVar12[0xe] != '\x1e') {
      this[0x100] = PVar5;
LAB_0117bb44:
      if (*param_1 < 0xffff) {
        if (*(char *)(*(long *)(this_00 + 8) + 0x38) == '\x06') {
          Scanner::Next(this_00);
          uVar17 = local_70;
          uVar8 = uStack_68;
        }
        else {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(this + 0x80),**(ulong **)this_00,
                     **(ulong **)this_00 >> 0x20,0x149,0);
          lVar10 = *(long *)(this + 200);
          lVar20 = *(long *)(lVar10 + 0x18);
          uVar17 = local_70;
          uVar8 = uStack_68;
          if (*(char *)(lVar20 + 0x30) == '\0') {
            *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
            *(undefined1 *)(lVar20 + 0x30) = 1;
            *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
            *(undefined1 *)(lVar10 + 0x60) = 0x6d;
            *(undefined1 *)(lVar10 + 0xb0) = 0x6d;
            *(undefined1 *)(lVar10 + 0x100) = 0x6d;
          }
        }
      }
      else {
        ReportMessage(this,0x132);
        uVar17 = local_70;
        uVar8 = uStack_68;
      }
      if (local_80 != 0) {
        local_70._0_4_ = (uint)uVar17;
        uVar14 = uVar17 & 0xffffffff;
        local_70._4_4_ = (uint)(uVar17 >> 0x20);
        bVar1 = local_70._4_4_ < (uint)local_70;
        uVar9 = local_70._4_4_;
        local_70 = uVar17;
        if (bVar1) {
          local_78._4_4_ = (undefined4)((ulong)local_78 >> 0x20);
          local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(local_80 + 0x30));
          uVar14 = *(ulong *)(local_80 + 0x38);
          uVar9 = (uint)(uVar14 >> 0x20);
          local_70 = uVar14;
        }
        *(undefined4 *)(local_80 + 0x30) = 0;
        *(undefined8 *)(local_80 + 0x38) = 0xffffffff;
        uStack_68._0_4_ = (uint)uVar8;
        uVar17 = uVar8 & 0xffffffff;
        uStack_68._4_4_ = (uint)(uVar8 >> 0x20);
        bVar1 = uStack_68._4_4_ < (uint)uStack_68;
        uVar19 = uStack_68._4_4_;
        uStack_68 = uVar8;
        if (bVar1) {
          local_78 = CONCAT44(*(undefined4 *)(local_80 + 0x34),(undefined4)local_78);
          uVar17 = *(ulong *)(local_80 + 0x40);
          uVar19 = (uint)(uVar17 >> 0x20);
          uStack_68 = uVar17;
        }
        *(undefined4 *)(local_80 + 0x34) = 0;
        *(undefined8 *)(local_80 + 0x40) = 0xffffffff;
        if ((uint)uVar14 <= uVar9) {
          *(undefined4 *)(local_80 + 0x30) = (undefined4)local_78;
          *(ulong *)(local_80 + 0x38) = local_70;
        }
        if ((uint)uVar17 <= uVar19) {
          *(undefined4 *)(local_80 + 0x34) = local_78._4_4_;
          *(ulong *)(local_80 + 0x40) = uStack_68;
        }
      }
      return;
    }
    Scanner::Next(this_00);
    this[0x100] = PVar5;
  } while( true );
}

