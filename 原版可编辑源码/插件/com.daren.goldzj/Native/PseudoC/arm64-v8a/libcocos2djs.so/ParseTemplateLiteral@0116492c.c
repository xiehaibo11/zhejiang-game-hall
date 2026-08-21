
/* v8::internal::ParserBase<v8::internal::Parser>::ParseTemplateLiteral(v8::internal::Expression*,
   int, bool) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseTemplateLiteral
          (ParserBase<v8::internal::Parser> *this,Expression *param_1,int param_2,bool param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ParserBase<v8::internal::Parser> PVar6;
  bool bVar7;
  char cVar8;
  Zone *pZVar9;
  Scanner *pSVar10;
  AstRawString *pAVar11;
  AstRawString *pAVar12;
  undefined8 uVar13;
  TemplateLiteral *pTVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined4 *puVar18;
  void *pvVar19;
  int iVar20;
  TemplateLiteral *local_68;
  
  if (param_3) {
    this[0x136] = (ParserBase<v8::internal::Parser>)0x0;
  }
  bVar2 = !param_3;
  cVar8 = *(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  iVar20 = *(int *)**(undefined8 **)(this + 0xf8);
  if (cVar8 == '\x01') {
    pZVar9 = *(Zone **)(this + 0xb8);
    pTVar14 = *(TemplateLiteral **)(pZVar9 + 0x10);
    if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)pTVar14) < 0x38) {
      pTVar14 = (TemplateLiteral *)Zone::NewExpand(pZVar9,0x38);
    }
    else {
      *(TemplateLiteral **)(pZVar9 + 0x10) = pTVar14 + 0x38;
    }
    Parser::TemplateLiteral::TemplateLiteral(pTVar14,*(Zone **)(this + 0xb8),iVar20);
    pSVar10 = *(Scanner **)(this + 0xf8);
    lVar17 = *(long *)pSVar10;
    local_68 = pTVar14;
    if (*(int *)(lVar17 + 0x3c) == 0) {
      bVar2 = true;
    }
    else {
      if (!param_3) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0xb0),*(undefined4 *)(lVar17 + 0x40),
                   *(undefined4 *)(lVar17 + 0x44),*(int *)(lVar17 + 0x3c),0);
        lVar17 = *(long *)(this + 0x158);
        if (*(char *)(lVar17 + 0x30) == '\0') {
          *(undefined4 *)(this + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar17 + 0x30) = 1;
          *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
          this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
      }
      *(undefined4 *)(**(long **)(this + 0xf8) + 0x3c) = 0;
      pSVar10 = *(Scanner **)(this + 0xf8);
      lVar17 = *(long *)pSVar10;
    }
    iVar20 = *(int *)(lVar17 + 4);
    pAVar11 = (AstRawString *)Scanner::CurrentRawSymbol(pSVar10,*(AstValueFactory **)(this + 0x60));
    if (bVar2) {
      pAVar12 = (AstRawString *)
                Scanner::CurrentSymbol
                          (*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
    }
    else {
      pAVar12 = (AstRawString *)0x0;
    }
    Parser::TemplateLiteral::AddTemplateSpan
              (pTVar14,pAVar12,pAVar11,iVar20 + -1,*(Zone **)(this + 0xb8));
    iVar20 = (int)pAVar11;
  }
  else {
    pZVar9 = *(Zone **)(this + 0xb8);
    pTVar14 = *(TemplateLiteral **)(pZVar9 + 0x10);
    if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)pTVar14) < 0x38) {
      pTVar14 = (TemplateLiteral *)Zone::NewExpand(pZVar9,0x38);
    }
    else {
      *(TemplateLiteral **)(pZVar9 + 0x10) = pTVar14 + 0x38;
    }
    Parser::TemplateLiteral::TemplateLiteral(pTVar14,*(Zone **)(this + 0xb8),iVar20);
    pSVar10 = *(Scanner **)(this + 0xf8);
    lVar17 = *(long *)pSVar10;
    local_68 = pTVar14;
    if (*(int *)(lVar17 + 0x3c) == 0) {
      bVar7 = true;
    }
    else {
      if (!param_3) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0xb0),*(undefined4 *)(lVar17 + 0x40),
                   *(undefined4 *)(lVar17 + 0x44),*(int *)(lVar17 + 0x3c),0);
        lVar17 = *(long *)(this + 0x158);
        if (*(char *)(lVar17 + 0x30) == '\0') {
          *(undefined4 *)(this + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar17 + 0x30) = 1;
          *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
          this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
      }
      *(undefined4 *)(**(long **)(this + 0xf8) + 0x3c) = 0;
      pSVar10 = *(Scanner **)(this + 0xf8);
      lVar17 = *(long *)pSVar10;
      bVar7 = bVar2;
    }
    iVar20 = *(int *)(lVar17 + 4);
    pAVar11 = (AstRawString *)Scanner::CurrentRawSymbol(pSVar10,*(AstValueFactory **)(this + 0x60));
    if (bVar7) {
      pAVar12 = (AstRawString *)
                Scanner::CurrentSymbol
                          (*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
    }
    else {
      pAVar12 = (AstRawString *)0x0;
    }
    Parser::TemplateLiteral::AddTemplateSpan
              (pTVar14,pAVar12,pAVar11,iVar20 + -2,*(Zone **)(this + 0xb8));
    PVar6 = this[0x130];
    do {
      uVar4 = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
      this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
      uVar13 = ParseExpressionCoverGrammar(this);
      uVar3 = *(uint *)(pTVar14 + 0x28);
      uVar16 = *(uint *)(pTVar14 + 0x2c);
      if ((int)uVar16 < (int)uVar3) {
        pvVar19 = *(void **)(pTVar14 + 0x20);
      }
      else {
        pZVar9 = *(Zone **)(this + 0xb8);
        uVar1 = uVar3 << 1 | 1;
        uVar15 = -(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        pvVar19 = *(void **)(pZVar9 + 0x10);
        if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)pvVar19) < uVar15) {
          pvVar19 = (void *)Zone::NewExpand(pZVar9,uVar15);
        }
        else {
          *(ulong *)(pZVar9 + 0x10) = (long)pvVar19 + uVar15;
        }
        uVar16 = *(uint *)(pTVar14 + 0x2c);
        if (0 < (int)uVar16) {
          MemCopy(pvVar19,*(void **)(pTVar14 + 0x20),(ulong)uVar16 << 3);
          uVar16 = *(uint *)(pTVar14 + 0x2c);
        }
        *(void **)(pTVar14 + 0x20) = pvVar19;
        *(uint *)(pTVar14 + 0x28) = uVar1;
      }
      *(uint *)(pTVar14 + 0x2c) = uVar16 + 1;
      *(undefined8 *)((long)pvVar19 + (long)(int)uVar16 * 8) = uVar13;
      puVar18 = *(undefined4 **)(*(Scanner **)(this + 0xf8) + 8);
      if (*(char *)(puVar18 + 0xe) != '\r') {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0xb0),uVar4,*puVar18,0x14c,0);
        lVar17 = *(long *)(this + 0x158);
        if (*(char *)(lVar17 + 0x30) == '\0') {
          *(undefined4 *)(this + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar17 + 0x30) = 1;
          *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
          this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
        this[0x130] = PVar6;
        return *(undefined8 *)(this + 0x88);
      }
      cVar8 = Scanner::ScanTemplateSpan(*(Scanner **)(this + 0xf8));
      Scanner::Next(*(Scanner **)(this + 0xf8));
      pSVar10 = *(Scanner **)(this + 0xf8);
      lVar17 = *(long *)pSVar10;
      if (*(int *)(lVar17 + 0x3c) == 0) {
        bVar7 = true;
      }
      else {
        if (!param_3) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(this + 0xb0),
                     *(undefined4 *)(lVar17 + 0x40),*(undefined4 *)(lVar17 + 0x44),
                     *(int *)(lVar17 + 0x3c),0);
          lVar17 = *(long *)(this + 0x158);
          if (*(char *)(lVar17 + 0x30) == '\0') {
            *(undefined4 *)(this + 0x160) = 0xffffffff;
            *(undefined1 *)(lVar17 + 0x30) = 1;
            *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
            this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
            this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
            this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
          }
        }
        *(undefined4 *)(**(long **)(this + 0xf8) + 0x3c) = 0;
        pSVar10 = *(Scanner **)(this + 0xf8);
        lVar17 = *(long *)pSVar10;
        bVar7 = bVar2;
      }
      iVar5 = *(int *)(lVar17 + 4);
      iVar20 = 1;
      if (cVar8 != '\x01') {
        iVar20 = 2;
      }
      pAVar11 = (AstRawString *)
                Scanner::CurrentRawSymbol(pSVar10,*(AstValueFactory **)(this + 0x60));
      if (bVar7) {
        pAVar12 = (AstRawString *)
                  Scanner::CurrentSymbol
                            (*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
        pZVar9 = *(Zone **)(this + 0xb8);
      }
      else {
        pZVar9 = *(Zone **)(this + 0xb8);
        pAVar12 = (AstRawString *)0x0;
      }
      pTVar14 = local_68;
      Parser::TemplateLiteral::AddTemplateSpan(local_68,pAVar12,pAVar11,iVar5 - iVar20,pZVar9);
      iVar20 = (int)pAVar11;
      this[0x130] = PVar6;
    } while (cVar8 == '\0');
  }
  uVar13 = Parser::CloseTemplateLiteral((Parser *)this,&local_68,iVar20,param_1);
  return uVar13;
}

