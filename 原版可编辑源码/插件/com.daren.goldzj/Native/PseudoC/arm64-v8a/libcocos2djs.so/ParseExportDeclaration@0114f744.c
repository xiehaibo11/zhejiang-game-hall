
/* WARNING: Removing unreachable block (ram,0x0114fb70) */
/* v8::internal::Parser::ParseExportDeclaration() */

undefined8 __thiscall v8::internal::Parser::ParseExportDeclaration(Parser *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint uVar5;
  Scanner *pSVar6;
  long lVar7;
  long lVar8;
  Zone *this_00;
  int *piVar9;
  long lVar10;
  uint *puVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  SourceTextModuleDescriptor *pSVar15;
  undefined8 *puVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  void *local_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar5 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar5 & 0xff) != 0x69) {
    ParserBase<v8::internal::Parser>::ReportUnexpectedToken
              ((ParserBase<v8::internal::Parser> *)this,uVar5);
  }
  this_00 = *(Zone **)(this + 0xb8);
  local_a8 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)local_a8) < 8) {
    local_a8 = (undefined8 *)Zone::NewExpand(this_00,8);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = local_a8 + 1;
  }
  local_a0 = 1;
  pSVar6 = *(Scanner **)(this + 0xf8);
  uVar5 = (uint)*(byte *)(*(undefined4 **)(pSVar6 + 8) + 0xe);
  if (0x40 < uVar5 - 0x28) {
    if (uVar5 != 8) goto switchD_0114f7d8_caseD_29;
    local_98 = 0xffffffff;
    lVar7 = ParseExportClause(this,(Location *)&local_98);
    piVar9 = *(int **)(*(Scanner **)(this + 0xf8) + 8);
    if ((((char)piVar9[0xe] == '\\') &&
        (piVar9[6] >> ((*(byte *)(piVar9 + 7) ^ 1) & 0x1f) == piVar9[1] - *piVar9)) &&
       (lVar10 = *(long *)(*(long *)(*(AstValueFactory **)(this + 0x60) + 0x38) + 0x120),
       lVar8 = Scanner::NextSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60)),
       lVar8 == lVar10)) {
      Scanner::Next(*(Scanner **)(this + 0xf8));
      uVar12 = **(undefined8 **)(*(Scanner **)(this + 0xf8) + 8);
      uVar5 = Scanner::Next(*(Scanner **)(this + 0xf8));
      if ((uVar5 & 0xff) != 0x5a) {
        ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                  ((ParserBase<v8::internal::Parser> *)this,uVar5);
      }
      lVar8 = Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
      ParserBase<v8::internal::Parser>::ExpectSemicolon((ParserBase<v8::internal::Parser> *)this);
      if (lVar8 != 0) {
        if (*(long *)(lVar7 + 8) == 0) {
          lVar7 = Scope::AsModuleScope();
          SourceTextModuleDescriptor::AddEmptyImport
                    (*(SourceTextModuleDescriptor **)(lVar7 + 0xe0),lVar8,uVar12);
          return *(undefined8 *)(this + 0x78);
        }
        puVar11 = *(uint **)(lVar7 + 0x10);
        puVar17 = *(uint **)(lVar7 + 0x18);
        if (puVar17 == (uint *)0x0) {
          uVar14 = 0;
          puVar17 = puVar11;
LAB_0114fb9c:
          if (uVar14 == 0) goto LAB_0114fba0;
        }
        else {
          uVar14 = (ulong)puVar17[1];
          if (puVar17[1] != *puVar17) goto LAB_0114fb9c;
          puVar17 = *(uint **)(puVar17 + 2);
          uVar14 = 0;
LAB_0114fba0:
          if (puVar17 == puVar11) goto LAB_0114fb00;
        }
        uVar18 = 0;
LAB_0114fbb0:
        do {
          lVar7 = Scope::AsModuleScope();
          SourceTextModuleDescriptor::AddExport
                    (*(SourceTextModuleDescriptor **)(lVar7 + 0xe0),
                     *(undefined8 *)(puVar11 + uVar18 * 6 + 8),
                     *(undefined8 *)(puVar11 + uVar18 * 6 + 6),lVar8,
                     *(undefined8 *)(puVar11 + uVar18 * 6 + 10),uVar12,*(undefined8 *)(this + 0xb8))
          ;
          uVar18 = uVar18 + 1;
          if (uVar18 < *puVar11) {
            if (uVar14 != uVar18) goto LAB_0114fbb0;
          }
          else {
            puVar11 = *(uint **)(puVar11 + 2);
            uVar18 = 0;
            if (uVar14 != 0) goto LAB_0114fbb0;
          }
        } while (puVar17 != puVar11);
        goto LAB_0114fb00;
      }
    }
    else {
      if ((uint)local_98 <= local_98._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0xb0),local_98 & 0xffffffff,
                   local_98._4_4_,0x13b,0);
        lVar7 = *(long *)(this + 0x158);
        if (*(char *)(lVar7 + 0x30) != '\0') {
          return 0;
        }
        *(undefined4 *)(this + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar7 + 0x30) = 1;
        *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + 0x18);
        this[0x1a0] = (Parser)0x6d;
        this[0x1f0] = (Parser)0x6d;
        this[0x240] = (Parser)0x6d;
        return 0;
      }
      ParserBase<v8::internal::Parser>::ExpectSemicolon((ParserBase<v8::internal::Parser> *)this);
    }
    puVar11 = *(uint **)(lVar7 + 0x10);
    puVar17 = *(uint **)(lVar7 + 0x18);
    if (puVar17 == (uint *)0x0) {
      uVar14 = 0;
      puVar17 = puVar11;
    }
    else {
      uVar14 = (ulong)puVar17[1];
      if (puVar17[1] == *puVar17) {
        uVar14 = 0;
        puVar17 = *(uint **)(puVar17 + 2);
      }
    }
    if ((puVar17 != puVar11) || (uVar14 != 0)) {
      uVar18 = 0;
      do {
        lVar7 = Scope::AsModuleScope();
        SourceTextModuleDescriptor::AddExport
                  (*(SourceTextModuleDescriptor **)(lVar7 + 0xe0),
                   *(undefined8 *)(puVar11 + uVar18 * 6 + 8),
                   *(undefined8 *)(puVar11 + uVar18 * 6 + 6),
                   *(undefined8 *)(puVar11 + uVar18 * 6 + 10),*(undefined8 *)(this + 0xb8));
        uVar18 = uVar18 + 1;
        if (*puVar11 <= uVar18) {
          puVar11 = *(uint **)(puVar11 + 2);
          uVar18 = 0;
        }
      } while ((puVar17 != puVar11) || (uVar14 != uVar18));
    }
LAB_0114fb00:
    return *(undefined8 *)(this + 0x78);
  }
  uVar2 = **(undefined4 **)(pSVar6 + 8);
  switch(uVar5) {
  case 0x28:
    ParseExportStar(this);
    return *(undefined8 *)(this + 0x78);
  default:
switchD_0114f7d8_caseD_29:
    ParserBase<v8::internal::Parser>::ReportUnexpectedToken
              ((ParserBase<v8::internal::Parser> *)this,*(undefined1 *)(*(long *)pSVar6 + 0x38));
    return 0;
  case 0x44:
    uVar12 = ParseExportDefault(this);
    return uVar12;
  case 0x49:
    Scanner::Next(pSVar6);
    pSVar6 = *(Scanner **)(this + 0xf8);
    iVar13 = **(int **)pSVar6;
    uVar4 = *(char *)(*(long *)(pSVar6 + 8) + 0x38) == '(';
    if ((bool)uVar4) {
      Scanner::Next(pSVar6);
    }
    break;
  case 0x50:
  case 0x62:
  case 0x68:
    local_80 = (void *)0x0;
    uStack_78 = 0;
    local_88 = (void *)0x0;
    uStack_68 = 0xffffffff;
    local_70 = 0xffffffff;
    ParserBase<v8::internal::Parser>::ParseVariableDeclarations
              ((ParserBase<v8::internal::Parser> *)this,0,&local_98,&local_a8);
    ParserBase<v8::internal::Parser>::ExpectSemicolon((ParserBase<v8::internal::Parser> *)this);
    uVar12 = BuildInitializationBlock(this,(DeclarationParsingResult *)&local_98);
    if (local_88 != (void *)0x0) {
      local_80 = local_88;
      operator_delete(local_88);
    }
    goto LAB_0114f990;
  case 0x5f:
    Scanner::Next(pSVar6);
    pSVar6 = *(Scanner **)(this + 0xf8);
    if ((*(char *)(*(long *)(pSVar6 + 8) + 0x38) != 'I') ||
       (*(char *)(*(long *)(pSVar6 + 8) + 0x4c) != '\0')) goto switchD_0114f7d8_caseD_29;
    piVar9 = *(int **)pSVar6;
    iVar13 = *piVar9;
    iVar1 = (piVar9[1] - iVar13) + -2;
    if ((char)piVar9[0xe] != 'Z') {
      iVar1 = piVar9[1] - iVar13;
    }
    if (piVar9[6] >> ((*(byte *)(piVar9 + 7) ^ 1) & 0x1f) != iVar1) {
      ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                ((ParserBase<v8::internal::Parser> *)this,0x6e);
      pSVar6 = *(Scanner **)(this + 0xf8);
      iVar13 = **(int **)pSVar6;
    }
    Scanner::Next(pSVar6);
    uVar4 = 2;
    break;
  case 0x67:
    Scanner::Next(pSVar6);
    uVar12 = ParserBase<v8::internal::Parser>::ParseClassDeclaration
                       ((ParserBase<v8::internal::Parser> *)this,(ZoneList *)&local_a8,false);
    goto LAB_0114f990;
  }
  uVar12 = ParserBase<v8::internal::Parser>::ParseHoistableDeclaration
                     ((ParserBase<v8::internal::Parser> *)this,iVar13,uVar4,&local_a8,0);
LAB_0114f990:
  uVar3 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
  lVar7 = Scope::AsModuleScope();
  if (local_a0._4_4_ != 0) {
    pSVar15 = *(SourceTextModuleDescriptor **)(lVar7 + 0xe0);
    lVar7 = (long)local_a0._4_4_ << 3;
    puVar16 = local_a8;
    do {
      SourceTextModuleDescriptor::AddExport
                (pSVar15,*puVar16,*puVar16,CONCAT44(uVar3,uVar2),*(undefined8 *)(this + 0xb8));
      lVar7 = lVar7 + -8;
      puVar16 = puVar16 + 1;
    } while (lVar7 != 0);
  }
  return uVar12;
}

