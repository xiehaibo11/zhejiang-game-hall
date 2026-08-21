
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseForAwaitStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*, v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

long v8::internal::ParserBase<v8::internal::PreParser>::ParseForAwaitStatement
               (ZoneList *param_1,ZoneList *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  ZoneList ZVar5;
  long lVar6;
  bool bVar7;
  ZoneList *pZVar8;
  uint uVar9;
  ulong uVar10;
  PendingCompilationErrorHandler *pPVar11;
  Scope *pSVar12;
  Zone *pZVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  Scope *this;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  byte local_f0 [16];
  void *local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ZoneList *local_b8;
  long lStack_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  ZoneList *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar19 = *(long *)(param_1 + 0x10);
  *(int *)(lVar19 + 0x18) = *(int *)(lVar19 + 0x18) + 1;
  pZVar13 = *(Zone **)(param_1 + 0x88);
  local_108 = *(undefined8 **)(pZVar13 + 0x10);
  if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)local_108) < 8) {
    local_108 = (undefined8 *)Zone::NewExpand(pZVar13,8);
  }
  else {
    *(undefined8 **)(pZVar13 + 0x10) = local_108 + 1;
  }
  uStack_c0 = 0xffffffff;
  local_c8 = 0xffffffff;
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_e0 = (void *)0x0;
  local_f8 = 0xffffffff00000001;
  local_100 = 1;
  pZVar13 = *(Zone **)(param_1 + 0x88);
  pSVar12 = *(Scope **)(pZVar13 + 0x10);
  if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pSVar12) < 0x88) {
    pSVar12 = (Scope *)Zone::NewExpand(pZVar13,0x88);
  }
  else {
    *(Scope **)(pZVar13 + 0x10) = pSVar12 + 0x88;
  }
  Scope::Scope(pSVar12,pZVar13,*(undefined8 *)param_1,6);
  uVar20 = *(undefined8 *)param_1;
  *(Scope **)param_1 = pSVar12;
  uVar9 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((uVar9 & 0xff) != 0x48) {
    ReportUnexpectedToken(param_1,uVar9);
  }
  uVar9 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((uVar9 & 0xff) != 0x60) {
    ReportUnexpectedToken(param_1,uVar9);
  }
  uVar9 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((uVar9 & 0xff) != 5) {
    ReportUnexpectedToken(param_1,uVar9);
  }
  *(undefined4 *)(*(long *)param_1 + 0x70) = *(undefined4 *)**(undefined8 **)(param_1 + 200);
  *(ushort *)(*(long *)param_1 + 0x81) = *(ushort *)(*(long *)param_1 + 0x81) | 0x10;
  *(int *)(*(long *)(param_1 + 0x10) + 0x14) = *(int *)(*(long *)(param_1 + 0x10) + 0x14) + 1;
  *(int *)(*(long *)(param_1 + 0x10) + 0x14) = *(int *)(*(long *)(param_1 + 0x10) + 0x14) + 1;
  pZVar13 = *(Zone **)(param_1 + 0x88);
  uVar18 = *(undefined8 *)param_1;
  pSVar12 = *(Scope **)(pZVar13 + 0x10);
  if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pSVar12) < 0x88) {
    pSVar12 = (Scope *)Zone::NewExpand(pZVar13,0x88);
  }
  else {
    *(Scope **)(pZVar13 + 0x10) = pSVar12 + 0x88;
  }
  Scope::Scope(pSVar12,*(undefined8 *)(param_1 + 0x88),uVar18,6);
  cVar3 = *(char *)(*(undefined4 **)(*(long *)(param_1 + 200) + 8) + 0xe);
  if ((cVar3 == 'P') || (cVar3 == 'h')) {
LAB_011817e4:
    uVar18 = *(undefined8 *)param_1;
    *(Scope **)param_1 = pSVar12;
    ParseVariableDeclarations((ParserBase<v8::internal::PreParser> *)param_1,2,local_f0,&local_108);
    *(undefined8 *)param_1 = uVar18;
    local_f8 = CONCAT44(*(undefined4 *)**(undefined8 **)(param_1 + 200),(undefined4)local_f8);
    if ((long)local_d8 - (long)local_e0 == 0xc) {
      if (local_c8._4_4_ < (uint)local_c8) {
        bVar7 = true;
        goto LAB_01181a30;
      }
      pPVar11 = *(PendingCompilationErrorHandler **)(param_1 + 0x80);
      uVar18 = 0xeb;
      uVar9 = (uint)local_c8;
      uVar1 = local_c8._4_4_;
    }
    else {
      pPVar11 = *(PendingCompilationErrorHandler **)(param_1 + 0x80);
      uVar18 = 0xed;
      uVar9 = (uint)uStack_c0;
      uVar1 = uStack_c0._4_4_;
    }
    PendingCompilationErrorHandler::ReportMessageAt(pPVar11,uVar9,uVar1,uVar18,"for-await-of");
    lVar17 = *(long *)(param_1 + 200);
    lVar16 = *(long *)(lVar17 + 0x18);
    if (*(char *)(lVar16 + 0x30) != '\0') {
      lVar15 = 0;
      goto LAB_01181c6c;
    }
  }
  else {
    if (cVar3 != 'b') {
      uVar2 = **(undefined4 **)(*(long *)(param_1 + 200) + 8);
      uVar18 = *(undefined8 *)param_1;
      lStack_b0 = *(long *)(param_1 + 0x90);
      *(Scope **)param_1 = pSVar12;
      local_a8 = 0;
      if (lStack_b0 == 0) {
        local_a6 = 0;
        local_a7 = 0;
      }
      else {
        local_a7 = *(undefined1 *)(lStack_b0 + 0x11);
        local_a6 = *(undefined1 *)(lStack_b0 + 0x12);
      }
      local_a0 = param_1 + 0xb0;
      *(ZoneList ***)(param_1 + 0x90) = &local_b8;
      local_98 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4;
      local_70 = 0;
      if (lStack_b0 != 0) {
        if (*(byte *)(lStack_b0 + 0x10) < 3) {
          local_70 = *(undefined1 *)(lStack_b0 + 0x48);
        }
        else {
          local_70 = 0;
        }
      }
      local_88 = 0;
      uStack_78 = 0xffffffff;
      local_80 = 0xffffffff;
      local_b8 = param_1;
      local_90 = local_98;
      uVar9 = ParsePrimaryExpression((ParserBase<v8::internal::PreParser> *)param_1);
      plVar14 = *(long **)(param_1 + 200);
      bVar4 = *(byte *)(plVar14[1] + 0x38);
      if (bVar4 < 4) {
        uVar9 = DoParseMemberExpressionContinuation((ParserBase<v8::internal::PreParser> *)param_1);
        plVar14 = *(long **)(param_1 + 200);
        bVar4 = *(byte *)(plVar14[1] + 0x38);
      }
      if (bVar4 < 6) {
        uVar9 = ParseLeftHandSideContinuation((ParserBase<v8::internal::PreParser> *)param_1);
        plVar14 = *(long **)(param_1 + 200);
      }
      if ((~uVar9 & 6) == 0) {
        ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::ValidatePattern
                  ();
      }
      else {
        ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
        ValidateAndRewriteReference
                  ((ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>> *)
                   &local_b8,uVar9,uVar2,*(undefined4 *)(*plVar14 + 4));
      }
      uVar10 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
      if (local_98 < uVar10 || local_98 - uVar10 == 0) {
        if (local_98 < uVar10) {
          *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)local_a0,local_98 - uVar10);
      }
      bVar7 = false;
      local_90 = local_98;
      *(long *)(local_b8 + 0x90) = lStack_b0;
      *(undefined8 *)param_1 = uVar18;
LAB_01181a30:
      ExpectContextualKeyword
                ((ParserBase<v8::internal::PreParser> *)param_1,
                 *(AstRawString **)(*(long *)(*(long *)(param_1 + 0x28) + 0x38) + 0x188),(char *)0x0
                 ,-1);
      ZVar5 = param_1[0x100];
      param_1[0x100] = (ZoneList)0x1;
      lStack_b0 = *(long *)(param_1 + 0x90);
      local_a8 = 0;
      if (lStack_b0 == 0) {
        local_a6 = 0;
        local_a7 = 0;
      }
      else {
        local_a7 = *(undefined1 *)(lStack_b0 + 0x11);
        local_a6 = *(undefined1 *)(lStack_b0 + 0x12);
      }
      local_a0 = param_1 + 0xb0;
      *(ZoneList ***)(param_1 + 0x90) = &local_b8;
      local_98 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4;
      local_70 = 0;
      if (lStack_b0 != 0) {
        if (*(byte *)(lStack_b0 + 0x10) < 3) {
          local_70 = *(undefined1 *)(lStack_b0 + 0x48);
        }
        else {
          local_70 = 0;
        }
      }
      local_88 = 0;
      uStack_78 = 0xffffffff;
      local_80 = 0xffffffff;
      local_b8 = param_1;
      local_90 = local_98;
      ParseAssignmentExpressionCoverGrammar((ParserBase<v8::internal::PreParser> *)param_1);
      pZVar8 = local_b8;
      if ((uint)local_80 <= local_80._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_b8 + 0x80),local_80 & 0xffffffff,
                   local_80._4_4_,local_88 & 0xffffffff,0);
        lVar15 = *(long *)(pZVar8 + 200);
        lVar17 = *(long *)(lVar15 + 0x18);
        if (*(char *)(lVar17 + 0x30) == '\0') {
          *(undefined4 *)(lVar15 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar17 + 0x30) = 1;
          *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
          *(undefined1 *)(lVar15 + 0x60) = 0x6d;
          *(undefined1 *)(lVar15 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar15 + 0x100) = 0x6d;
        }
      }
      uVar10 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
      if (local_98 < uVar10 || local_98 - uVar10 == 0) {
        if (local_98 < uVar10) {
          *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)local_a0,local_98 - uVar10);
      }
      local_90 = local_98;
      *(long *)(local_b8 + 0x90) = lStack_b0;
      param_1[0x100] = ZVar5;
      uVar9 = Scanner::Next(*(Scanner **)(param_1 + 200));
      if ((uVar9 & 0xff) != 6) {
        ReportUnexpectedToken(param_1,uVar9);
      }
      this = *(Scope **)param_1;
      *(Scope **)param_1 = pSVar12;
      *(undefined4 *)(pSVar12 + 0x70) = *(undefined4 *)**(undefined8 **)(param_1 + 200);
      ParseStatement((ParserBase<v8::internal::PreParser> *)param_1,0,0,1);
      *(undefined4 *)(*(long *)param_1 + 0x74) = *(undefined4 *)(**(long **)(param_1 + 200) + 4);
      Scope::FinalizeBlockScope(*(Scope **)param_1);
      *(Scope **)param_1 = this;
      if (bVar7) {
        if (local_f0[0] < 2) {
          if (local_100._4_4_ == 0) {
            lVar17 = 2;
          }
          else {
            lVar15 = (long)local_100._4_4_ << 3;
            lVar17 = 2;
            puVar21 = local_108;
            do {
              PreParser::DeclareVariableName
                        ((PreParser *)param_1,*puVar21,0,this,&local_b8,0xffffffff,0);
              this = *(Scope **)param_1;
              lVar15 = lVar15 + -8;
              puVar21 = puVar21 + 1;
            } while (lVar15 != 0);
          }
        }
        else {
          lVar17 = 0;
        }
        *(undefined4 *)(this + 0x74) = *(undefined4 *)(**(long **)(param_1 + 200) + 4);
        Scope::FinalizeBlockScope(*(Scope **)param_1);
        lVar15 = 2;
        if (lVar17 != 0) {
          lVar15 = lVar17;
        }
      }
      else {
        Scope::FinalizeBlockScope(this);
        lVar15 = 2;
      }
      goto LAB_01181c6c;
    }
    uVar10 = IsNextLetKeyword((ParserBase<v8::internal::PreParser> *)param_1);
    if ((uVar10 & 1) != 0) goto LAB_011817e4;
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(param_1 + 0x80),
               **(undefined4 **)(*(long *)(param_1 + 200) + 8),
               (*(undefined4 **)(*(long *)(param_1 + 200) + 8))[1],0xec,0);
    lVar17 = *(long *)(param_1 + 200);
    lVar16 = *(long *)(lVar17 + 0x18);
    lVar15 = 0;
    if (*(char *)(lVar16 + 0x30) != '\0') goto LAB_01181c6c;
  }
  *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
  *(undefined1 *)(lVar16 + 0x30) = 1;
  *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
  *(undefined1 *)(lVar17 + 0x60) = 0x6d;
  *(undefined1 *)(lVar17 + 0xb0) = 0x6d;
  *(undefined1 *)(lVar17 + 0x100) = 0x6d;
  lVar15 = 0;
LAB_01181c6c:
  *(undefined8 *)param_1 = uVar20;
  if (local_e0 != (void *)0x0) {
    local_d8 = local_e0;
    operator_delete(local_e0);
  }
  *(int *)(lVar19 + 0x18) = *(int *)(lVar19 + 0x18) + -1;
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar15;
}

