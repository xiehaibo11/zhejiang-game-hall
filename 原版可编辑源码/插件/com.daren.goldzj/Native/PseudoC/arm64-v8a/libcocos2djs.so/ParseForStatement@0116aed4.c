
/* v8::internal::ParserBase<v8::internal::Parser>::ParseForStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*, v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

long __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseForStatement
          (ParserBase<v8::internal::Parser> *this,ZoneList *param_1,ZoneList *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  ParserBase<v8::internal::Parser> PVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  Expression *pEVar11;
  uint uVar12;
  long lVar13;
  Statement *pSVar14;
  Expression *pEVar15;
  Scope *pSVar16;
  Zone *pZVar17;
  int *piVar18;
  Scanner *pSVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  long lVar23;
  Scope *this_00;
  undefined8 uVar24;
  long lVar25;
  Statement *local_120;
  Statement *pSStack_118;
  long local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  DeclarationParsingResult aDStack_f8 [16];
  void *local_e8;
  void *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  Expression *local_c0;
  long lStack_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  lVar25 = *(long *)(this + 0x10);
  *(int *)(lVar25 + 0x18) = *(int *)(lVar25 + 0x18) + 1;
  pZVar17 = *(Zone **)(this + 0xb8);
  local_110 = *(long *)(pZVar17 + 0x10);
  iVar3 = **(int **)(*(long *)(this + 0xf8) + 8);
  if ((ulong)(*(long *)(pZVar17 + 0x18) - local_110) < 8) {
    local_110 = Zone::NewExpand(pZVar17,8);
  }
  else {
    *(long *)(pZVar17 + 0x10) = local_110 + 8;
  }
  local_e8 = (void *)0x0;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  local_108 = 1;
  local_100 = 0;
  local_fc = 0xffffffff;
  uStack_c8 = 0xffffffff;
  local_d0 = 0xffffffff;
  Scanner::Next(*(Scanner **)(this + 0xf8));
  uVar12 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar12 & 0xff) != 5) {
    ReportUnexpectedToken(this,uVar12);
  }
  piVar18 = *(int **)(*(long *)(this + 0xf8) + 8);
  cVar5 = (char)piVar18[0xe];
  if (cVar5 != 'h') {
    cVar10 = cVar5;
    if (cVar5 == 'b') {
      uVar20 = IsNextLetKeyword(this);
      if ((uVar20 & 1) != 0) goto LAB_0116af98;
      piVar18 = *(int **)(*(long *)(this + 0xf8) + 8);
      cVar10 = (char)piVar18[0xe];
    }
    if (cVar10 == '\f') {
      piVar18 = (int *)0x0;
    }
    else {
      if (cVar10 == 'P') {
        ParseVariableDeclarations(this,2,aDStack_f8,&local_110);
        pSVar19 = *(Scanner **)(this + 0xf8);
        local_fc = **(undefined4 **)pSVar19;
        piVar18 = *(int **)(pSVar19 + 8);
        if ((char)piVar18[0xe] == '>') {
          uVar21 = 0;
        }
        else {
          if ((((char)piVar18[0xe] != '\\') ||
              (piVar18[6] >> ((*(byte *)(piVar18 + 7) ^ 1) & 0x1f) != piVar18[1] - *piVar18)) ||
             (lVar23 = *(long *)(*(long *)(*(AstValueFactory **)(this + 0x60) + 0x38) + 0x188),
             lVar13 = Scanner::NextSymbol(pSVar19,*(AstValueFactory **)(this + 0x60)),
             lVar13 != lVar23)) {
            piVar18 = (int *)Parser::BuildInitializationBlock((Parser *)this,aDStack_f8);
            goto LAB_0116b4e0;
          }
          pSVar19 = *(Scanner **)(this + 0xf8);
          uVar21 = 1;
        }
        Scanner::Next(pSVar19);
        local_100 = uVar21;
        lVar13 = ParseForEachStatementWithDeclarations
                           (this,iVar3,(ForInfo *)&local_110,param_1,param_2,*(Scope **)this);
        goto joined_r0x0116b548;
      }
      iVar1 = *piVar18;
      iVar2 = piVar18[1];
      lStack_b8 = *(long *)(this + 0xc0);
      local_b0 = 0;
      if (lStack_b8 == 0) {
        local_ae = 0;
        local_af = 0;
      }
      else {
        local_af = *(undefined1 *)(lStack_b8 + 0x11);
        local_ae = *(undefined1 *)(lStack_b8 + 0x12);
      }
      local_a8 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)(this + 0xe0);
      *(Expression ***)(this + 0xc0) = &local_c0;
      local_a0 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
      local_78 = 0;
      if (lStack_b8 != 0) {
        if (*(byte *)(lStack_b8 + 0x10) < 3) {
          local_78 = *(undefined1 *)(lStack_b8 + 0x48);
        }
        else {
          local_78 = 0;
        }
      }
      local_90 = 0;
      uStack_80 = 0xffffffff;
      local_88 = 0xffffffff;
      PVar6 = this[0x130];
      this[0x130] = (ParserBase<v8::internal::Parser>)0x0;
      local_c0 = (Expression *)this;
      local_98 = local_a0;
      pEVar15 = (Expression *)ParseExpressionCoverGrammar(this);
      pSVar19 = *(Scanner **)(this + 0xf8);
      piVar18 = *(int **)(pSVar19 + 8);
      iVar4 = *(int *)(*(long *)pSVar19 + 4);
      if ((char)piVar18[0xe] == '>') {
        Scanner::Next(pSVar19);
        local_100 = 0;
        uVar21 = local_100;
LAB_0116b360:
        local_100 = uVar21;
        if ((*(uint *)(pEVar15 + 4) & 0x3e) == 0x16) {
          ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>::ValidatePattern
                    ((ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>> *)
                     &local_c0,pEVar15,iVar1,iVar4);
        }
        else {
          pEVar15 = (Expression *)
                    ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>::
                    ValidateAndRewriteReference
                              ((ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>
                                *)&local_c0,pEVar15,iVar1,iVar4);
        }
        bVar8 = false;
        bVar9 = true;
      }
      else if ((((char)piVar18[0xe] == '\\') &&
               (piVar18[6] >> ((*(byte *)(piVar18 + 7) ^ 1) & 0x1f) == piVar18[1] - *piVar18)) &&
              (lVar23 = *(long *)(*(long *)(*(AstValueFactory **)(this + 0x60) + 0x38) + 0x188),
              lVar13 = Scanner::NextSymbol(pSVar19,*(AstValueFactory **)(this + 0x60)),
              lVar13 == lVar23)) {
        Scanner::Next(*(Scanner **)(this + 0xf8));
        local_100 = 1;
        uVar21 = local_100;
        local_100 = 1;
        if (cVar5 != 'b') goto LAB_0116b360;
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar1,iVar2,0xec,0);
        lVar13 = *(long *)(this + 0x158);
        bVar9 = true;
        if (*(char *)(lVar13 + 0x30) == '\0') {
          *(undefined4 *)(this + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar13 + 0x30) = 1;
          bVar8 = true;
          *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
          this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
        else {
          bVar8 = true;
        }
      }
      else {
        pEVar11 = local_c0;
        if ((uint)local_88 <= local_88._4_4_) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(local_c0 + 0xb0),local_88 & 0xffffffff,
                     local_88._4_4_,local_90 & 0xffffffff,0);
          lVar13 = *(long *)(pEVar11 + 0x158);
          if (*(char *)(lVar13 + 0x30) == '\0') {
            *(undefined4 *)(pEVar11 + 0x160) = 0xffffffff;
            bVar9 = false;
            bVar8 = false;
            *(undefined1 *)(lVar13 + 0x30) = 1;
            *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
            *(ParserBase<v8::internal::Parser> *)(pEVar11 + 0x1a0) =
                 (ParserBase<v8::internal::Parser>)0x6d;
            *(ParserBase<v8::internal::Parser> *)(pEVar11 + 0x1f0) =
                 (ParserBase<v8::internal::Parser>)0x6d;
            *(ParserBase<v8::internal::Parser> *)(pEVar11 + 0x240) =
                 (ParserBase<v8::internal::Parser>)0x6d;
            goto LAB_0116b424;
          }
        }
        bVar9 = false;
        bVar8 = false;
      }
LAB_0116b424:
      this[0x130] = PVar6;
      uVar20 = *(long *)(local_a8 + 8) - *(long *)local_a8 >> 4;
      if (local_a0 < uVar20 || local_a0 - uVar20 == 0) {
        if (local_a0 < uVar20) {
          *(ulong *)(local_a8 + 8) = *(long *)local_a8 + local_a0 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append(local_a8,local_a0 - uVar20);
      }
      local_98 = local_a0;
      *(long *)(local_c0 + 0xc0) = lStack_b8;
      if (bVar8) {
        lVar13 = 0;
        goto joined_r0x0116b548;
      }
      if (bVar9) {
        lVar13 = ParseForEachStatementWithoutDeclarations
                           (this,iVar3,pEVar15,iVar1,iVar4,(ForInfo *)&local_110,param_1,param_2);
        goto joined_r0x0116b548;
      }
      pZVar17 = *(Zone **)(this + 0x68);
      piVar18 = *(int **)(pZVar17 + 0x10);
      if ((ulong)(*(long *)(pZVar17 + 0x18) - (long)piVar18) < 0x10) {
        piVar18 = (int *)Zone::NewExpand(pZVar17,0x10);
      }
      else {
        *(int **)(pZVar17 + 0x10) = piVar18 + 4;
      }
      *(Expression **)(piVar18 + 2) = pEVar15;
      *piVar18 = iVar1;
      piVar18[1] = 9;
    }
LAB_0116b4e0:
    uVar12 = Scanner::Next(*(Scanner **)(this + 0xf8));
    if ((uVar12 & 0xff) != 0xc) {
      ReportUnexpectedToken(this,uVar12);
    }
    local_c0 = (Expression *)0x0;
    local_120 = (Statement *)0x0;
    pSStack_118 = (Statement *)0x0;
    lVar23 = ParseStandardForLoop(this,iVar3,param_1,param_2,&local_c0,&pSStack_118,&local_120);
    lVar13 = 0;
    if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0') {
      *(Statement **)(lVar23 + 0x18) = local_120;
      *(int **)(lVar23 + 0x20) = piVar18;
      *(Expression **)(lVar23 + 0x28) = local_c0;
      *(Statement **)(lVar23 + 0x30) = pSStack_118;
      lVar13 = lVar23;
    }
    goto joined_r0x0116b548;
  }
LAB_0116af98:
  pZVar17 = *(Zone **)(this + 0xb8);
  pSVar16 = *(Scope **)(pZVar17 + 0x10);
  if ((ulong)(*(long *)(pZVar17 + 0x18) - (long)pSVar16) < 0x88) {
    pSVar16 = (Scope *)Zone::NewExpand(pZVar17,0x88);
  }
  else {
    *(Scope **)(pZVar17 + 0x10) = pSVar16 + 0x88;
  }
  Scope::Scope(pSVar16,pZVar17,*(undefined8 *)this,6);
  uVar24 = *(undefined8 *)this;
  *(Scope **)this = pSVar16;
  *(undefined4 *)(pSVar16 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  uVar20 = *(ulong *)(this + 0x10);
  cVar5 = *(char *)(uVar20 + 0x3b);
  *(undefined1 *)(uVar20 + 0x3b) = 0;
  pZVar17 = *(Zone **)(this + 0xb8);
  uVar22 = *(undefined8 *)this;
  pSVar16 = *(Scope **)(pZVar17 + 0x10);
  if ((ulong)(*(long *)(pZVar17 + 0x18) - (long)pSVar16) < 0x88) {
    pSVar16 = (Scope *)Zone::NewExpand(pZVar17,0x88);
  }
  else {
    *(Scope **)(pZVar17 + 0x10) = pSVar16 + 0x88;
  }
  Scope::Scope(pSVar16,*(undefined8 *)(this + 0xb8),uVar22,6);
  uVar22 = *(undefined8 *)this;
  *(Scope **)this = pSVar16;
  ParseVariableDeclarations(this,2,aDStack_f8,&local_110);
  pSVar19 = *(Scanner **)(this + 0xf8);
  *(undefined8 *)this = uVar22;
  local_fc = **(undefined4 **)pSVar19;
  piVar18 = *(int **)(pSVar19 + 8);
  if ((char)piVar18[0xe] == '>') {
    uVar21 = 0;
LAB_0116b07c:
    Scanner::Next(pSVar19);
    *(ushort *)(*(long *)this + 0x81) = *(ushort *)(*(long *)this + 0x81) | 0x10;
    local_100 = uVar21;
    lVar13 = ParseForEachStatementWithDeclarations
                       (this,iVar3,(ForInfo *)&local_110,param_1,param_2,pSVar16);
  }
  else {
    if (((char)piVar18[0xe] == '\\') &&
       (piVar18[6] >> ((*(byte *)(piVar18 + 7) ^ 1) & 0x1f) == piVar18[1] - *piVar18)) {
      lVar23 = *(long *)(*(long *)(*(AstValueFactory **)(this + 0x60) + 0x38) + 0x188);
      lVar13 = Scanner::NextSymbol(pSVar19,*(AstValueFactory **)(this + 0x60));
      pSVar19 = *(Scanner **)(this + 0xf8);
      if (lVar13 == lVar23) {
        uVar21 = 1;
        goto LAB_0116b07c;
      }
    }
    uVar12 = Scanner::Next(pSVar19);
    if ((uVar12 & 0xff) != 0xc) {
      ReportUnexpectedToken(this,uVar12);
    }
    *(undefined4 *)(pSVar16 + 0x70) = *(undefined4 *)(*(long *)this + 0x70);
    this_00 = *(Scope **)this;
    *(Scope **)this = pSVar16;
    pSVar14 = (Statement *)Parser::BuildInitializationBlock((Parser *)this,aDStack_f8);
    lVar13 = ParseStandardForLoopWithLexicalDeclarations
                       (this,iVar3,pSVar14,(ForInfo *)&local_110,param_1,param_2);
    *(Scope **)this = this_00;
    Scope::FinalizeBlockScope(this_00);
  }
  if (*(char *)((uVar20 & 0xfffffffffffffff8) + 0x3b) == '\0') {
    *(bool *)((uVar20 & 0xfffffffffffffff8) + 0x3b) = (uVar20 & 7) != 0 || cVar5 != '\0';
  }
  *(undefined8 *)this = uVar24;
joined_r0x0116b548:
  if (local_e8 != (void *)0x0) {
    local_e0 = local_e8;
    operator_delete(local_e8);
  }
  *(int *)(lVar25 + 0x18) = *(int *)(lVar25 + 0x18) + -1;
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return lVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

