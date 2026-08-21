
/* v8::internal::Parser::ParseNamedImports(int) */

long * v8::internal::Parser::ParseNamedImports(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ParserBase<v8::internal::Parser> *pPVar6;
  Zone *pZVar7;
  Scanner *pSVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  AstValueFactory *pAVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  int *piVar18;
  void *pvVar19;
  long lVar20;
  Scope *pSVar21;
  long lVar22;
  undefined1 auStack_6c [4];
  char local_68 [4];
  char local_64 [4];
  
  pPVar6 = (ParserBase<v8::internal::Parser> *)(ulong)(uint)param_1;
  uVar5 = Scanner::Next(*(Scanner **)(pPVar6 + 0xf8));
  if ((uVar5 & 0xff) != 8) {
    ParserBase<v8::internal::Parser>::ReportUnexpectedToken(pPVar6,uVar5);
  }
  pZVar7 = *(Zone **)(pPVar6 + 0xb8);
  plVar13 = *(long **)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)plVar13) < 0x10) {
    plVar13 = (long *)Zone::NewExpand(pZVar7,0x10);
  }
  else {
    *(long **)(pZVar7 + 0x10) = plVar13 + 2;
  }
  pZVar7 = *(Zone **)(pPVar6 + 0xb8);
  lVar10 = *(long *)(pZVar7 + 0x10);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - lVar10) < 8) {
    lVar10 = Zone::NewExpand(pZVar7,8);
  }
  else {
    *(long *)(pZVar7 + 0x10) = lVar10 + 8;
  }
  *plVar13 = lVar10;
  plVar13[1] = 1;
  pSVar8 = *(Scanner **)(pPVar6 + 0xf8);
  cVar4 = *(char *)(*(long *)(pSVar8 + 8) + 0x38);
  while (cVar4 != '\r') {
    uVar9 = Scanner::Next(pSVar8);
    if (((byte)Token::token_flags[uVar9 & 0xff] >> 1 & 1) == 0) {
      ParserBase<v8::internal::Parser>::ReportUnexpectedToken(pPVar6);
      pAVar14 = *(AstValueFactory **)(pPVar6 + 0x60);
      lVar17 = *(long *)(pAVar14 + 0x38);
      lVar10 = *(long *)(lVar17 + 0x110);
    }
    else {
      lVar10 = Scanner::CurrentSymbol
                         (*(Scanner **)(pPVar6 + 0xf8),*(AstValueFactory **)(pPVar6 + 0x60));
      pAVar14 = *(AstValueFactory **)(pPVar6 + 0x60);
      lVar17 = *(long *)(pAVar14 + 0x38);
    }
    pSVar8 = *(Scanner **)(pPVar6 + 0xf8);
    piVar18 = *(int **)(pSVar8 + 8);
    lVar22 = **(long **)pSVar8;
    lVar11 = lVar10;
    if ((((char)piVar18[0xe] == '\\') &&
        (piVar18[6] >> ((*(byte *)(piVar18 + 7) ^ 1) & 0x1f) == piVar18[1] - *piVar18)) &&
       (lVar20 = *(long *)(lVar17 + 0x78), lVar17 = Scanner::NextSymbol(pSVar8,pAVar14),
       lVar17 == lVar20)) {
      Scanner::Next(*(Scanner **)(pPVar6 + 0xf8));
      uVar9 = Scanner::Next(*(Scanner **)(pPVar6 + 0xf8));
      if (((byte)Token::token_flags[uVar9 & 0xff] >> 1 & 1) == 0) {
        ParserBase<v8::internal::Parser>::ReportUnexpectedToken(pPVar6);
        lVar11 = *(long *)(*(long *)(*(long *)(pPVar6 + 0x60) + 0x38) + 0x110);
      }
      else {
        lVar11 = Scanner::CurrentSymbol
                           (*(Scanner **)(pPVar6 + 0xf8),*(AstValueFactory **)(pPVar6 + 0x60));
      }
    }
    piVar18 = (int *)**(undefined8 **)(pPVar6 + 0xf8);
    if (((*(byte *)(piVar18 + 0xe) & 0xfc) != 0x5c) &&
       ((*(byte *)(piVar18 + 0xe) != 0x60 || (pPVar6[0xa1] != (ParserBase<v8::internal::Parser>)0x0)
        ))) {
      uVar15 = 0x13b;
LAB_01150b20:
      ParserBase<v8::internal::Parser>::ReportMessage(pPVar6,uVar15);
      return (long *)0x0;
    }
    if ((*(long *)(*(long *)(*(long *)(pPVar6 + 0x60) + 0x38) + 0x118) == lVar11) ||
       (*(long *)(*(long *)(*(long *)(pPVar6 + 0x60) + 0x38) + 0x70) == lVar11)) {
      uVar15 = 0x128;
      goto LAB_01150b20;
    }
    pZVar7 = *(Zone **)(pPVar6 + 0x68);
    pSVar21 = *(Scope **)pPVar6;
    iVar2 = *piVar18;
    iVar3 = piVar18[1];
    piVar18 = *(int **)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)piVar18) < 0x18) {
      piVar18 = (int *)Zone::NewExpand(pZVar7,0x18);
    }
    else {
      *(int **)(pZVar7 + 0x10) = piVar18 + 6;
    }
    piVar18[4] = 0;
    piVar18[5] = 0;
    *piVar18 = iVar2;
    piVar18[1] = 0;
    local_64[0] = '\x01';
    local_68[0] = '\0';
    Scope::DeclareVariable(pSVar21,piVar18,lVar11,iVar2,1,0,0,auStack_6c,local_68,local_64);
    if (local_64[0] == '\0') {
      if (iVar3 == -1) {
        iVar3 = iVar2 + 1;
      }
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(pPVar6 + 0xb0),iVar2,iVar3,0xb0,
                 *(undefined8 *)(*(long *)(piVar18 + 2) + 8));
      lVar17 = *(long *)(pPVar6 + 0x158);
      if (*(char *)(lVar17 + 0x30) == '\0') {
        *(undefined4 *)(pPVar6 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar17 + 0x30) = 1;
        *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
        pPVar6[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar6[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar6[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
    }
    else if (local_68[0] != '\0') {
      *(int *)(pPVar6 + 0x368) = *(int *)(pPVar6 + 0x368) + 1;
    }
    pZVar7 = *(Zone **)(pPVar6 + 0xb8);
    plVar12 = *(long **)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)plVar12) < 0x18) {
      plVar12 = (long *)Zone::NewExpand(pZVar7,0x18);
    }
    else {
      *(long **)(pZVar7 + 0x10) = plVar12 + 3;
    }
    *plVar12 = lVar10;
    plVar12[1] = lVar11;
    plVar12[2] = lVar22;
    uVar5 = *(uint *)(plVar13 + 1);
    uVar16 = *(uint *)((long)plVar13 + 0xc);
    if ((int)uVar16 < (int)uVar5) {
      pvVar19 = (void *)*plVar13;
    }
    else {
      pZVar7 = *(Zone **)(pPVar6 + 0xb8);
      uVar1 = uVar5 << 1 | 1;
      uVar9 = -(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      pvVar19 = *(void **)(pZVar7 + 0x10);
      if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pvVar19) < uVar9) {
        pvVar19 = (void *)Zone::NewExpand(pZVar7,uVar9);
      }
      else {
        *(ulong *)(pZVar7 + 0x10) = (long)pvVar19 + uVar9;
      }
      uVar16 = *(uint *)((long)plVar13 + 0xc);
      if (0 < (int)uVar16) {
        MemCopy(pvVar19,(void *)*plVar13,(ulong)uVar16 << 3);
        uVar16 = *(uint *)((long)plVar13 + 0xc);
      }
      *plVar13 = (long)pvVar19;
      *(uint *)(plVar13 + 1) = uVar1;
    }
    *(uint *)((long)plVar13 + 0xc) = uVar16 + 1;
    *(long **)((long)pvVar19 + (long)(int)uVar16 * 8) = plVar12;
    pSVar8 = *(Scanner **)(pPVar6 + 0xf8);
    if (*(char *)(*(long *)(pSVar8 + 8) + 0x38) == '\r') break;
    uVar5 = Scanner::Next(pSVar8);
    if ((uVar5 & 0xff) != 0x1e) {
      ParserBase<v8::internal::Parser>::ReportUnexpectedToken(pPVar6,uVar5);
    }
    pSVar8 = *(Scanner **)(pPVar6 + 0xf8);
    cVar4 = *(char *)(*(long *)(pSVar8 + 8) + 0x38);
  }
  uVar5 = Scanner::Next(pSVar8);
  if ((uVar5 & 0xff) != 0xd) {
    ParserBase<v8::internal::Parser>::ReportUnexpectedToken(pPVar6,uVar5);
  }
  return plVar13;
}

