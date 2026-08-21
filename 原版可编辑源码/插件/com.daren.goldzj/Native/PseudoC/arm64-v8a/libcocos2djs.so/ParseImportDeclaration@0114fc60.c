
/* v8::internal::Parser::ParseImportDeclaration() */

void __thiscall v8::internal::Parser::ParseImportDeclaration(Parser *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  Scanner *this_00;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 *puVar11;
  Zone *pZVar12;
  uint *puVar13;
  long lVar14;
  undefined8 uVar15;
  Scope *pSVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong local_80;
  undefined1 auStack_78 [4];
  char local_74 [4];
  char local_70 [4];
  undefined1 auStack_6c [4];
  char local_68 [4];
  char local_64 [4];
  
  iVar1 = **(int **)(*(Scanner **)(this + 0xf8) + 8);
  uVar5 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar5 & 0xff) != 0x6b) {
    ParserBase<v8::internal::Parser>::ReportUnexpectedToken
              ((ParserBase<v8::internal::Parser> *)this,uVar5);
  }
  uVar5 = 0;
  lVar14 = 0;
  bVar4 = true;
  puVar11 = *(undefined8 **)(*(Scanner **)(this + 0xf8) + 8);
  cVar3 = *(char *)(puVar11 + 7);
  if (cVar3 == '\b') {
    local_80 = 0;
LAB_0114fe5c:
    this_00 = *(Scanner **)(this + 0xf8);
    if (*(char *)(*(long *)(this_00 + 8) + 0x38) != '\b') {
      if (*(char *)(*(long *)(this_00 + 8) + 0x38) != '(') {
        ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                  ((ParserBase<v8::internal::Parser> *)this,*(undefined1 *)(*(long *)this_00 + 0x38)
                  );
        return;
      }
      Scanner::Next(this_00);
      ParserBase<v8::internal::Parser>::ExpectContextualKeyword
                ((ParserBase<v8::internal::Parser> *)this,
                 *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x78),(char *)0x0,-1)
      ;
      lVar8 = ParserBase<v8::internal::Parser>::ParseNonRestrictedIdentifier
                        ((ParserBase<v8::internal::Parser> *)this);
      pZVar12 = *(Zone **)(this + 0x68);
      pSVar16 = *(Scope **)this;
      piVar10 = *(int **)(pZVar12 + 0x10);
      uVar19 = *(ulong *)**(long **)(this + 0xf8);
      iVar2 = *(int *)(**(long **)(this + 0xf8) + 4);
      if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)piVar10) < 0x18) {
        piVar10 = (int *)Zone::NewExpand(pZVar12,0x18);
      }
      else {
        *(int **)(pZVar12 + 0x10) = piVar10 + 6;
      }
      piVar10[4] = 0;
      piVar10[5] = 0;
      *piVar10 = iVar1;
      piVar10[1] = 0;
      local_64[0] = '\x01';
      local_68[0] = '\0';
      Scope::DeclareVariable(pSVar16,piVar10,lVar8,iVar1,1,0,1,auStack_6c,local_68,local_64);
      if (local_64[0] == '\0') {
        if (iVar2 == -1) {
          iVar2 = iVar1 + 1;
        }
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar1,iVar2,0xb0,
                   *(undefined8 *)(*(long *)(piVar10 + 2) + 8));
        lVar9 = *(long *)(this + 0x158);
        if (*(char *)(lVar9 + 0x30) == '\0') {
          *(undefined4 *)(this + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar9 + 0x30) = 1;
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
          this[0x1a0] = (Parser)0x6d;
          this[0x1f0] = (Parser)0x6d;
          this[0x240] = (Parser)0x6d;
        }
      }
      else if (local_68[0] != '\0') {
        *(int *)(this + 0x368) = *(int *)(this + 0x368) + 1;
      }
      puVar11 = (undefined8 *)0x0;
      uVar18 = uVar19 & 0xffffffff00000000;
      uVar19 = uVar19 & 0xffffffff;
      goto LAB_0114ffe8;
    }
    puVar11 = (undefined8 *)ParseNamedImports((int)this);
  }
  else {
    local_80 = 0;
    if (cVar3 == '(') goto LAB_0114fe5c;
    if (cVar3 == 'Z') {
      uVar15 = *puVar11;
      uVar5 = Scanner::Next(*(Scanner **)(this + 0xf8));
      if ((uVar5 & 0xff) != 0x5a) {
        ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                  ((ParserBase<v8::internal::Parser> *)this,uVar5);
      }
      uVar7 = Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
      ParserBase<v8::internal::Parser>::ExpectSemicolon((ParserBase<v8::internal::Parser> *)this);
      lVar14 = Scope::AsModuleScope();
      SourceTextModuleDescriptor::AddEmptyImport
                (*(SourceTextModuleDescriptor **)(lVar14 + 0xe0),uVar7,uVar15);
      return;
    }
    lVar14 = ParserBase<v8::internal::Parser>::ParseNonRestrictedIdentifier
                       ((ParserBase<v8::internal::Parser> *)this);
    pZVar12 = *(Zone **)(this + 0x68);
    pSVar16 = *(Scope **)this;
    puVar13 = (uint *)**(undefined8 **)(this + 0xf8);
    piVar10 = *(int **)(pZVar12 + 0x10);
    uVar5 = *puVar13;
    local_80 = (ulong)puVar13[1];
    uVar6 = puVar13[1];
    if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)piVar10) < 0x18) {
      piVar10 = (int *)Zone::NewExpand(pZVar12,0x18);
    }
    else {
      *(int **)(pZVar12 + 0x10) = piVar10 + 6;
    }
    piVar10[4] = 0;
    piVar10[5] = 0;
    *piVar10 = iVar1;
    piVar10[1] = 0;
    local_70[0] = '\x01';
    local_74[0] = '\0';
    Scope::DeclareVariable(pSVar16,piVar10,lVar14,iVar1,1,0,0,auStack_78,local_74,local_70);
    if (local_70[0] == '\0') {
      if (uVar6 == 0xffffffff) {
        uVar6 = iVar1 + 1;
      }
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar1,uVar6,0xb0,
                 *(undefined8 *)(*(long *)(piVar10 + 2) + 8));
      lVar8 = *(long *)(this + 0x158);
      if (*(char *)(lVar8 + 0x30) == '\0') {
        *(undefined4 *)(this + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar8 + 0x30) = 1;
        *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
        this[0x1a0] = (Parser)0x6d;
        this[0x1f0] = (Parser)0x6d;
        this[0x240] = (Parser)0x6d;
      }
    }
    else if (local_74[0] != '\0') {
      *(int *)(this + 0x368) = *(int *)(this + 0x368) + 1;
    }
    if (lVar14 == 0) {
      bVar4 = true;
      goto LAB_0114fe5c;
    }
    if (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) == '\x1e') {
      Scanner::Next(*(Scanner **)(this + 0xf8));
      bVar4 = false;
      goto LAB_0114fe5c;
    }
    bVar4 = false;
    puVar11 = (undefined8 *)0x0;
  }
  uVar19 = 0;
  uVar18 = 0;
  lVar8 = 0;
LAB_0114ffe8:
  ParserBase<v8::internal::Parser>::ExpectContextualKeyword
            ((ParserBase<v8::internal::Parser> *)this,
             *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x120),(char *)0x0,-1);
  uVar15 = **(undefined8 **)(*(Scanner **)(this + 0xf8) + 8);
  uVar6 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar6 & 0xff) != 0x5a) {
    ParserBase<v8::internal::Parser>::ReportUnexpectedToken
              ((ParserBase<v8::internal::Parser> *)this,uVar6);
  }
  uVar7 = Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
  ParserBase<v8::internal::Parser>::ExpectSemicolon((ParserBase<v8::internal::Parser> *)this);
  if (lVar8 != 0) {
    lVar9 = Scope::AsModuleScope();
    SourceTextModuleDescriptor::AddStarImport
              (*(SourceTextModuleDescriptor **)(lVar9 + 0xe0),lVar8,uVar7,uVar19 | uVar18,uVar15,
               *(undefined8 *)(this + 0xb8));
  }
  if (!bVar4) {
    lVar8 = Scope::AsModuleScope();
    SourceTextModuleDescriptor::AddImport
              (*(SourceTextModuleDescriptor **)(lVar8 + 0xe0),
               *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xb8),lVar14,uVar7,
               (ulong)uVar5 | local_80 << 0x20,uVar15,*(undefined8 *)(this + 0xb8));
  }
  if (puVar11 != (undefined8 *)0x0) {
    if (*(int *)((long)puVar11 + 0xc) == 0) {
      lVar14 = Scope::AsModuleScope();
      SourceTextModuleDescriptor::AddEmptyImport
                (*(SourceTextModuleDescriptor **)(lVar14 + 0xe0),uVar7,uVar15);
    }
    else {
      lVar14 = (long)*(int *)((long)puVar11 + 0xc) << 3;
      puVar11 = (undefined8 *)*puVar11;
      do {
        puVar17 = (undefined8 *)*puVar11;
        lVar8 = Scope::AsModuleScope();
        SourceTextModuleDescriptor::AddImport
                  (*(SourceTextModuleDescriptor **)(lVar8 + 0xe0),*puVar17,puVar17[1],uVar7,
                   puVar17[2],uVar15,*(undefined8 *)(this + 0xb8));
        lVar14 = lVar14 + -8;
        puVar11 = puVar11 + 1;
      } while (lVar14 != 0);
    }
  }
  return;
}

