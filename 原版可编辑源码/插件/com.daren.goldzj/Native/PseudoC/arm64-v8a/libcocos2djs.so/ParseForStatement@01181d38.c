
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseForStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*, v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

undefined4 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseForStatement
          (ParserBase<v8::internal::PreParser> *this,ZoneList *param_1,ZoneList *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  ParserBase<v8::internal::PreParser> PVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  ParserBase<v8::internal::PreParser> *pPVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  Scope *pSVar15;
  Zone *pZVar16;
  undefined4 *puVar17;
  Scanner *pSVar18;
  int *piVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  Scope *this_00;
  undefined8 uVar23;
  long lVar24;
  undefined4 local_118 [2];
  long local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 auStack_f8 [16];
  void *local_e8;
  void *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ParserBase<v8::internal::PreParser> *local_c0;
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
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  lVar24 = *(long *)(this + 0x10);
  *(int *)(lVar24 + 0x18) = *(int *)(lVar24 + 0x18) + 1;
  pZVar16 = *(Zone **)(this + 0x88);
  local_110 = *(long *)(pZVar16 + 0x10);
  uVar2 = **(uint **)(*(long *)(this + 200) + 8);
  if ((ulong)(*(long *)(pZVar16 + 0x18) - local_110) < 8) {
    local_110 = Zone::NewExpand(pZVar16,8);
  }
  else {
    *(long *)(pZVar16 + 0x10) = local_110 + 8;
  }
  local_e8 = (void *)0x0;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  local_108 = 1;
  local_100 = 0;
  local_fc = 0xffffffff;
  uStack_c8 = 0xffffffff;
  local_d0 = 0xffffffff;
  Scanner::Next(*(Scanner **)(this + 200));
  uVar12 = Scanner::Next(*(Scanner **)(this + 200));
  if ((uVar12 & 0xff) != 5) {
    ReportUnexpectedToken(this,uVar12);
  }
  puVar17 = *(undefined4 **)(*(long *)(this + 200) + 8);
  cVar4 = *(char *)(puVar17 + 0xe);
  if (cVar4 != 'h') {
    cVar9 = cVar4;
    if (cVar4 == 'b') {
      uVar20 = IsNextLetKeyword(this);
      if ((uVar20 & 1) != 0) goto LAB_01181dfc;
      puVar17 = *(undefined4 **)(*(long *)(this + 200) + 8);
      cVar9 = *(char *)(puVar17 + 0xe);
    }
    if (cVar9 != '\f') {
      if (cVar9 == 'P') {
        ParseVariableDeclarations(this,2,auStack_f8,&local_110);
        pSVar18 = *(Scanner **)(this + 200);
        local_fc = **(undefined4 **)pSVar18;
        piVar19 = *(int **)(pSVar18 + 8);
        if ((char)piVar19[0xe] == '>') {
          uVar13 = 0;
        }
        else {
          if ((((char)piVar19[0xe] != '\\') ||
              (piVar19[6] >> ((*(byte *)(piVar19 + 7) ^ 1) & 0x1f) != piVar19[1] - *piVar19)) ||
             (lVar22 = *(long *)(*(long *)(*(AstValueFactory **)(this + 0x28) + 0x38) + 0x188),
             lVar14 = Scanner::NextSymbol(pSVar18,*(AstValueFactory **)(this + 0x28)),
             lVar14 != lVar22)) goto LAB_01182348;
          pSVar18 = *(Scanner **)(this + 200);
          uVar13 = 1;
        }
        Scanner::Next(pSVar18);
        local_100 = uVar13;
        uVar13 = ParseForEachStatementWithDeclarations
                           (this,uVar2,(ForInfo *)&local_110,param_1,param_2,*(Scope **)this);
        goto joined_r0x01182340;
      }
      uVar13 = *puVar17;
      uVar1 = puVar17[1];
      lStack_b8 = *(long *)(this + 0x90);
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
                  *)(this + 0xb0);
      *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_c0;
      local_a0 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
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
      PVar5 = this[0x100];
      this[0x100] = (ParserBase<v8::internal::PreParser>)0x0;
      local_c0 = this;
      local_98 = local_a0;
      uVar12 = ParseExpressionCoverGrammar(this);
      pSVar18 = *(Scanner **)(this + 200);
      piVar19 = *(int **)(pSVar18 + 8);
      uVar3 = *(undefined4 *)(*(long *)pSVar18 + 4);
      if ((char)piVar19[0xe] == '>') {
        Scanner::Next(pSVar18);
        local_100 = 0;
        uVar11 = local_100;
LAB_011821e0:
        local_100 = uVar11;
        if ((~uVar12 & 6) == 0) {
          ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
          ValidatePattern();
        }
        else {
          uVar12 = ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
                   ValidateAndRewriteReference
                             ((ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>
                               *)&local_c0,uVar12,uVar13,uVar3);
        }
        bVar7 = false;
        bVar8 = true;
      }
      else if ((((char)piVar19[0xe] == '\\') &&
               (piVar19[6] >> ((*(byte *)(piVar19 + 7) ^ 1) & 0x1f) == piVar19[1] - *piVar19)) &&
              (lVar22 = *(long *)(*(long *)(*(AstValueFactory **)(this + 0x28) + 0x38) + 0x188),
              lVar14 = Scanner::NextSymbol(pSVar18,*(AstValueFactory **)(this + 0x28)),
              lVar14 == lVar22)) {
        Scanner::Next(*(Scanner **)(this + 200));
        local_100 = 1;
        uVar11 = local_100;
        local_100 = 1;
        if (cVar4 != 'b') goto LAB_011821e0;
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0x80),uVar13,uVar1,0xec,0);
        lVar14 = *(long *)(this + 200);
        bVar8 = true;
        lVar22 = *(long *)(lVar14 + 0x18);
        if (*(char *)(lVar22 + 0x30) == '\0') {
          *(undefined4 *)(lVar14 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar22 + 0x30) = 1;
          bVar7 = true;
          *(undefined8 *)(lVar22 + 0x10) = *(undefined8 *)(lVar22 + 0x18);
          *(undefined1 *)(lVar14 + 0x60) = 0x6d;
          *(undefined1 *)(lVar14 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar14 + 0x100) = 0x6d;
        }
        else {
          bVar7 = true;
        }
      }
      else {
        pPVar10 = local_c0;
        if ((uint)local_88 <= local_88._4_4_) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(local_c0 + 0x80),local_88 & 0xffffffff,
                     local_88._4_4_,local_90 & 0xffffffff,0);
          lVar14 = *(long *)(pPVar10 + 200);
          lVar22 = *(long *)(lVar14 + 0x18);
          if (*(char *)(lVar22 + 0x30) == '\0') {
            *(undefined4 *)(lVar14 + 0x20) = 0xffffffff;
            bVar8 = false;
            bVar7 = false;
            *(undefined1 *)(lVar22 + 0x30) = 1;
            *(undefined8 *)(lVar22 + 0x10) = *(undefined8 *)(lVar22 + 0x18);
            *(undefined1 *)(lVar14 + 0x60) = 0x6d;
            *(undefined1 *)(lVar14 + 0xb0) = 0x6d;
            *(undefined1 *)(lVar14 + 0x100) = 0x6d;
            goto LAB_011822c0;
          }
        }
        bVar8 = false;
        bVar7 = false;
      }
LAB_011822c0:
      this[0x100] = PVar5;
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
      *(long *)(local_c0 + 0x90) = lStack_b8;
      if (bVar7) {
        uVar13 = 0;
        goto joined_r0x01182340;
      }
      if (bVar8) {
        uVar13 = ParseForEachStatementWithoutDeclarations
                           (this,uVar2,uVar12,uVar13,uVar3,&local_110,param_1,param_2);
        goto joined_r0x01182340;
      }
    }
LAB_01182348:
    uVar12 = Scanner::Next(*(Scanner **)(this + 200));
    if ((uVar12 & 0xff) != 0xc) {
      ReportUnexpectedToken(this,uVar12);
    }
    local_c0 = (ParserBase<v8::internal::PreParser> *)((ulong)local_c0 & 0xffffffff00000000);
    local_118[0] = 0;
    uVar13 = ParseStandardForLoop
                       ((int)this,(ZoneList *)(ulong)uVar2,param_1,param_2,
                        (PreParserStatement *)&local_c0,(PreParserStatement *)local_118);
    if (*(char *)(*(long *)(*(long *)(this + 200) + 0x18) + 0x30) != '\0') {
      uVar13 = 0;
    }
    goto joined_r0x01182340;
  }
LAB_01181dfc:
  pZVar16 = *(Zone **)(this + 0x88);
  pSVar15 = *(Scope **)(pZVar16 + 0x10);
  if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pSVar15) < 0x88) {
    pSVar15 = (Scope *)Zone::NewExpand(pZVar16,0x88);
  }
  else {
    *(Scope **)(pZVar16 + 0x10) = pSVar15 + 0x88;
  }
  Scope::Scope(pSVar15,pZVar16,*(undefined8 *)this,6);
  uVar23 = *(undefined8 *)this;
  *(Scope **)this = pSVar15;
  *(undefined4 *)(pSVar15 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 200);
  uVar20 = *(ulong *)(this + 0x10);
  cVar4 = *(char *)(uVar20 + 0x3b);
  *(undefined1 *)(uVar20 + 0x3b) = 0;
  pZVar16 = *(Zone **)(this + 0x88);
  uVar21 = *(undefined8 *)this;
  pSVar15 = *(Scope **)(pZVar16 + 0x10);
  if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pSVar15) < 0x88) {
    pSVar15 = (Scope *)Zone::NewExpand(pZVar16,0x88);
  }
  else {
    *(Scope **)(pZVar16 + 0x10) = pSVar15 + 0x88;
  }
  Scope::Scope(pSVar15,*(undefined8 *)(this + 0x88),uVar21,6);
  uVar21 = *(undefined8 *)this;
  *(Scope **)this = pSVar15;
  ParseVariableDeclarations(this,2,auStack_f8,&local_110);
  pSVar18 = *(Scanner **)(this + 200);
  *(undefined8 *)this = uVar21;
  local_fc = **(undefined4 **)pSVar18;
  piVar19 = *(int **)(pSVar18 + 8);
  if ((char)piVar19[0xe] == '>') {
    uVar13 = 0;
LAB_01181ed8:
    Scanner::Next(pSVar18);
    *(ushort *)(*(long *)this + 0x81) = *(ushort *)(*(long *)this + 0x81) | 0x10;
    local_100 = uVar13;
    uVar13 = ParseForEachStatementWithDeclarations
                       (this,uVar2,(ForInfo *)&local_110,param_1,param_2,pSVar15);
  }
  else {
    if (((char)piVar19[0xe] == '\\') &&
       (piVar19[6] >> ((*(byte *)(piVar19 + 7) ^ 1) & 0x1f) == piVar19[1] - *piVar19)) {
      lVar22 = *(long *)(*(long *)(*(AstValueFactory **)(this + 0x28) + 0x38) + 0x188);
      lVar14 = Scanner::NextSymbol(pSVar18,*(AstValueFactory **)(this + 0x28));
      pSVar18 = *(Scanner **)(this + 200);
      if (lVar14 == lVar22) {
        uVar13 = 1;
        goto LAB_01181ed8;
      }
    }
    uVar12 = Scanner::Next(pSVar18);
    if ((uVar12 & 0xff) != 0xc) {
      ReportUnexpectedToken(this,uVar12);
    }
    *(undefined4 *)(pSVar15 + 0x70) = *(undefined4 *)(*(long *)this + 0x70);
    this_00 = *(Scope **)this;
    *(Scope **)this = pSVar15;
    uVar13 = ParseStandardForLoopWithLexicalDeclarations(this,uVar2,2,&local_110,param_1,param_2);
    *(Scope **)this = this_00;
    Scope::FinalizeBlockScope(this_00);
  }
  if (*(char *)((uVar20 & 0xfffffffffffffff8) + 0x3b) == '\0') {
    *(bool *)((uVar20 & 0xfffffffffffffff8) + 0x3b) = (uVar20 & 7) != 0 || cVar4 != '\0';
  }
  *(undefined8 *)this = uVar23;
joined_r0x01182340:
  if (local_e8 != (void *)0x0) {
    local_e0 = local_e8;
    operator_delete(local_e8);
  }
  *(int *)(lVar24 + 0x18) = *(int *)(lVar24 + 0x18) + -1;
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

