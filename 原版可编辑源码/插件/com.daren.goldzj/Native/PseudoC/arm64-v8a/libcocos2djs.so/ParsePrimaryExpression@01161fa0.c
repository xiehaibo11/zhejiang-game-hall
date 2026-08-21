
/* v8::internal::ParserBase<v8::internal::Parser>::ParsePrimaryExpression() */

int * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParsePrimaryExpression
          (ParserBase<v8::internal::Parser> *this)

{
  ParserBase<v8::internal::Parser> PVar1;
  ushort uVar2;
  long lVar3;
  ParserBase<v8::internal::Parser> *pPVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  ulong uVar9;
  Scanner *pSVar10;
  AstRawString *pAVar11;
  Scope *pSVar12;
  Scope *pSVar13;
  undefined8 uVar14;
  DeclarationScope *pDVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  int *piVar21;
  long *plVar22;
  byte bVar23;
  int *piVar24;
  long *plVar25;
  uint uVar26;
  Zone *pZVar27;
  undefined8 *puVar28;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ParserBase<v8::internal::Parser> *local_b8;
  undefined8 *local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  ParserBase<v8::internal::Parser> *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined2 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar9 = GetCurrentStackPosition();
  if (uVar9 < *(ulong *)(this + 0xa8)) {
    lVar17 = *(long *)(this + 0xf8);
    lVar20 = *(long *)(lVar17 + 0x18);
    if (*(char *)(lVar20 + 0x30) == '\0') {
      *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar20 + 0x30) = 1;
      *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
      *(undefined1 *)(lVar17 + 0x60) = 0x6d;
      *(undefined1 *)(lVar17 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar17 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0xb0) = 0x101;
  }
  pSVar10 = *(Scanner **)(this + 0xf8);
  bVar23 = *(byte *)(*(int **)(pSVar10 + 8) + 0xe);
  uVar26 = (uint)bVar23;
  iVar19 = **(int **)(pSVar10 + 8);
  if (bVar23 - 0x5c < 10) {
    Scanner::Next(pSVar10);
    if (bVar23 == 0x5f) {
      pSVar10 = *(Scanner **)(this + 0xf8);
      if (*(char *)(*(long *)(pSVar10 + 8) + 0x4c) != '\0') {
LAB_0116208c:
        uVar26 = 0x5f;
        goto LAB_01162090;
      }
      piVar21 = *(int **)pSVar10;
      iVar16 = (piVar21[1] - *piVar21) + -2;
      if ((char)piVar21[0xe] != 'Z') {
        iVar16 = piVar21[1] - *piVar21;
      }
      if (piVar21[6] >> ((*(byte *)(piVar21 + 7) ^ 1) & 0x1f) != iVar16) goto LAB_0116208c;
      uVar26 = (uint)*(byte *)(*(long *)(pSVar10 + 8) + 0x38);
      if (uVar26 == 0x49) {
        piVar21 = (int *)ParseAsyncFunctionLiteral(this);
        goto LAB_01162120;
      }
      if ((9 < uVar26 - 0x5c) || (cVar7 = Scanner::PeekAhead(pSVar10), cVar7 != '\x0f'))
      goto LAB_0116208c;
      uVar26 = Scanner::Next(*(Scanner **)(this + 0xf8));
      iVar19 = *(int *)**(undefined8 **)(this + 0xf8);
      iVar16 = 10;
    }
    else {
LAB_01162090:
      iVar16 = 9;
    }
    pSVar10 = *(Scanner **)(this + 0xf8);
    if (*(char *)(*(long *)(pSVar10 + 8) + 0x38) == '\x0f') {
      local_a6 = 1;
      bVar23 = 1;
      if (iVar16 != 9) {
        bVar23 = 2;
      }
      local_b0 = *(undefined8 **)(this + 0xc0);
      if ((byte)(bVar23 - 1) < 3) {
        local_a8 = CONCAT11(1,bVar23);
      }
      else if (local_b0 == (undefined8 *)0x0) {
        local_a6 = 0;
        local_a8 = (ushort)bVar23;
      }
      else {
        local_a8 = CONCAT11(*(undefined1 *)((long)local_b0 + 0x11),bVar23);
        local_a6 = *(undefined1 *)((long)local_b0 + 0x12);
      }
      local_a0 = this + 0xe0;
      *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_b8;
      local_98 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
      local_70 = 1;
      if (iVar16 == 9) {
        if ((local_b0 == (undefined8 *)0x0) || (2 < *(byte *)(local_b0 + 2))) {
          local_70 = 0;
        }
        else {
          local_70 = *(undefined1 *)(local_b0 + 9);
        }
      }
      local_88 = 0;
      local_64 = 0;
      uStack_78 = 0xffffffff;
      local_80 = 0xffffffff;
      local_6c = 0xffffffff;
      local_60 = 1;
      local_90 = local_98;
      if ((uVar26 & 0xfc) == 0x5c) {
        local_b8 = this;
        pAVar11 = (AstRawString *)Scanner::CurrentSymbol(pSVar10,*(AstValueFactory **)(this + 0x60))
        ;
        if ((*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == pAVar11) &&
           (uVar9 = Scope::ShouldBanArguments(*(Scope **)this), (uVar9 & 1) != 0)) {
          ReportMessage(this,0xc);
LAB_01162ed4:
          pAVar11 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
        }
      }
      else {
        uVar2 = *(ushort *)(*(long *)this + 0x81);
        local_b8 = this;
        lVar17 = Scope::AsDeclarationScope();
        cVar7 = *(char *)(lVar17 + 0x85);
        if (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0) {
          lVar17 = Scope::AsDeclarationScope();
          bVar6 = 4 < *(byte *)(lVar17 + 0x85) - 10;
        }
        else {
          bVar6 = false;
        }
        if ((uVar26 & 0xff) == 0x61) {
          if (((uVar2 & 1) != 0) || ((byte)(cVar7 - 0xdU) < 4)) goto LAB_01162ec8;
        }
        else if ((uVar26 & 0xff) == 0x60) {
          if (!bVar6) {
LAB_01162ec8:
            ReportUnexpectedToken(this,uVar26);
            goto LAB_01162ed4;
          }
        }
        else if ((4 < (uVar26 - 0x61 & 0xff)) || ((uVar2 & 1) != 0)) goto LAB_01162ec8;
        pSVar10 = *(Scanner **)(this + 0xf8);
        plVar22 = *(long **)(this + 0xc0);
        plVar18 = *(long **)pSVar10;
        bVar23 = *(byte *)(plVar22 + 2);
        if ((uVar26 & 0xff) == 0x60) {
          if (bVar23 < 3) {
            cVar7 = (char)plVar22[9];
            plVar25 = plVar22;
            while (cVar7 != '\0') {
              if ((char)plVar25[2] == '\x02') {
                lVar17 = *plVar18;
                *(undefined4 *)((long)plVar25 + 0x54) = 0x130;
                *(long *)((long)plVar25 + 0x4c) = lVar17;
              }
              plVar25 = (long *)plVar25[1];
              if (plVar25 == (long *)0x0) break;
              cVar7 = (char)plVar22[9];
            }
            goto LAB_01162f80;
          }
        }
        else {
          if (bVar23 - 1 < 3) {
            plVar25 = (long *)*plVar22;
            if (bVar23 == 3) {
              if ((*(byte *)(*plVar25 + 0x81) & 1) == 0) {
                lVar20 = plVar25[0x22];
                lVar17 = *plVar18;
                *(undefined4 *)(lVar20 + 0x38) = 0x13c;
                *(long *)(lVar20 + 0x30) = lVar17;
              }
              else {
                PendingCompilationErrorHandler::ReportMessageAt
                          ((PendingCompilationErrorHandler *)plVar25[0x16],(int)*plVar18,
                           *(undefined4 *)((long)plVar18 + 4),0x13c,0);
                lVar17 = plVar25[0x2b];
                if (*(char *)(lVar17 + 0x30) == '\0') {
                  *(undefined4 *)(plVar25 + 0x2c) = 0xffffffff;
                  *(undefined1 *)(lVar17 + 0x30) = 1;
                  *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
                  *(undefined1 *)(plVar25 + 0x34) = 0x6d;
                  *(undefined1 *)(plVar25 + 0x3e) = 0x6d;
                  *(undefined1 *)(plVar25 + 0x48) = 0x6d;
                }
              }
            }
            else {
              plVar25[0x23] = *plVar18;
              *(undefined4 *)(*plVar22 + 0x120) = 0x13c;
            }
          }
LAB_01162f80:
          pSVar10 = *(Scanner **)(this + 0xf8);
        }
        pAVar11 = (AstRawString *)Scanner::CurrentSymbol(pSVar10,*(AstValueFactory **)(this + 0x60))
        ;
      }
      uVar8 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
      if ((*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) == pAVar11) ||
         (*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == pAVar11)) {
        plVar18 = *(long **)(this + 0xc0);
        if (*(byte *)(plVar18 + 2) - 1 < 3) {
          plVar22 = (long *)*plVar18;
          if (*(byte *)(plVar18 + 2) == 3) {
            if ((*(byte *)(*plVar22 + 0x81) & 1) == 0) {
              lVar17 = plVar22[0x22];
              *(ulong *)(lVar17 + 0x30) = CONCAT44(uVar8,iVar19);
              *(undefined4 *)(lVar17 + 0x38) = 0x128;
            }
            else {
              PendingCompilationErrorHandler::ReportMessageAt
                        ((PendingCompilationErrorHandler *)plVar22[0x16],iVar19,uVar8,0x128,0);
              lVar17 = plVar22[0x2b];
              if (*(char *)(lVar17 + 0x30) == '\0') {
                *(undefined4 *)(plVar22 + 0x2c) = 0xffffffff;
                *(undefined1 *)(lVar17 + 0x30) = 1;
                *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
                *(undefined1 *)(plVar22 + 0x34) = 0x6d;
                *(undefined1 *)(plVar22 + 0x3e) = 0x6d;
                *(undefined1 *)(plVar22 + 0x48) = 0x6d;
              }
            }
          }
          else {
            plVar22[0x23] = CONCAT44(uVar8,iVar19);
            *(undefined4 *)(*plVar18 + 0x120) = 0x128;
          }
        }
      }
      piVar21 = (int *)ExpressionScope<v8::internal::ParserTypes<v8::internal::Parser>>::NewVariable
                                 (*(ExpressionScope<v8::internal::ParserTypes<v8::internal::Parser>>
                                    **)(this + 0xc0),pAVar11,iVar19);
      iVar19 = (int)local_90 - (int)local_98;
      if (0 < iVar19) {
        iVar16 = **(int **)(*(long *)(this + 0xf8) + 8);
        piVar24 = (int *)(*(long *)local_a0 + ((long)iVar19 + -1 + local_98) * 0x10 + 8);
        if (*piVar24 == -1) {
          lVar17 = (long)iVar19 + -2;
          do {
            *piVar24 = iVar16;
            if (lVar17 + 1 < 1) break;
            lVar20 = lVar17 + local_98;
            lVar17 = lVar17 + -1;
            piVar24 = (int *)(*(long *)local_a0 + lVar20 * 0x10 + 8);
          } while (*piVar24 == -1);
        }
      }
      uVar14 = ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>::
               ValidateAndCreateScope
                         ((ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>> *)
                          &local_b8);
      *(undefined8 *)(this + 0x128) = uVar14;
      uVar9 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
      if (local_98 < uVar9 || local_98 - uVar9 == 0) {
        if (local_98 < uVar9) {
          *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)local_a0,local_98 - uVar9);
      }
      local_90 = local_98;
      *(undefined8 **)(local_b8 + 0xc0) = local_b0;
      goto LAB_01162480;
    }
    if ((uVar26 & 0xfc) == 0x5c) {
      pAVar11 = (AstRawString *)Scanner::CurrentSymbol(pSVar10,*(AstValueFactory **)(this + 0x60));
      if ((*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == pAVar11) &&
         (uVar9 = Scope::ShouldBanArguments(*(Scope **)this), (uVar9 & 1) != 0)) {
        ReportMessage(this,0xc);
LAB_01162850:
        pAVar11 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
      }
    }
    else {
      uVar2 = *(ushort *)(*(long *)this + 0x81);
      lVar17 = Scope::AsDeclarationScope();
      cVar7 = *(char *)(lVar17 + 0x85);
      if (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0) {
        lVar17 = Scope::AsDeclarationScope();
        bVar6 = 4 < *(byte *)(lVar17 + 0x85) - 10;
      }
      else {
        bVar6 = false;
      }
      if ((uVar26 & 0xff) == 0x61) {
        if (((uVar2 & 1) != 0) || ((byte)(cVar7 - 0xdU) < 4)) goto LAB_01162844;
      }
      else if ((uVar26 & 0xff) == 0x60) {
        if (!bVar6) {
LAB_01162844:
          ReportUnexpectedToken(this,uVar26);
          goto LAB_01162850;
        }
      }
      else if ((4 < (uVar26 - 0x61 & 0xff)) || ((uVar2 & 1) != 0)) goto LAB_01162844;
      pSVar10 = *(Scanner **)(this + 0xf8);
      plVar22 = *(long **)(this + 0xc0);
      plVar18 = *(long **)pSVar10;
      bVar23 = *(byte *)(plVar22 + 2);
      if ((uVar26 & 0xff) == 0x60) {
        if (bVar23 < 3) {
          cVar7 = (char)plVar22[9];
          plVar25 = plVar22;
          while (cVar7 != '\0') {
            if ((char)plVar25[2] == '\x02') {
              lVar17 = *plVar18;
              *(undefined4 *)((long)plVar25 + 0x54) = 0x130;
              *(long *)((long)plVar25 + 0x4c) = lVar17;
            }
            plVar25 = (long *)plVar25[1];
            if (plVar25 == (long *)0x0) break;
            cVar7 = (char)plVar22[9];
          }
          goto LAB_01162bb0;
        }
      }
      else {
        if (bVar23 - 1 < 3) {
          plVar25 = (long *)*plVar22;
          if (bVar23 == 3) {
            if ((*(byte *)(*plVar25 + 0x81) & 1) == 0) {
              lVar20 = plVar25[0x22];
              lVar17 = *plVar18;
              *(undefined4 *)(lVar20 + 0x38) = 0x13c;
              *(long *)(lVar20 + 0x30) = lVar17;
            }
            else {
              PendingCompilationErrorHandler::ReportMessageAt
                        ((PendingCompilationErrorHandler *)plVar25[0x16],(int)*plVar18,
                         *(undefined4 *)((long)plVar18 + 4),0x13c,0);
              lVar17 = plVar25[0x2b];
              if (*(char *)(lVar17 + 0x30) == '\0') {
                *(undefined4 *)(plVar25 + 0x2c) = 0xffffffff;
                *(undefined1 *)(lVar17 + 0x30) = 1;
                *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
                *(undefined1 *)(plVar25 + 0x34) = 0x6d;
                *(undefined1 *)(plVar25 + 0x3e) = 0x6d;
                *(undefined1 *)(plVar25 + 0x48) = 0x6d;
              }
            }
          }
          else {
            plVar25[0x23] = *plVar18;
            *(undefined4 *)(*plVar22 + 0x120) = 0x13c;
          }
        }
LAB_01162bb0:
        pSVar10 = *(Scanner **)(this + 0xf8);
      }
      pAVar11 = (AstRawString *)Scanner::CurrentSymbol(pSVar10,*(AstValueFactory **)(this + 0x60));
    }
    FuncNameInferrer::PushVariableName((FuncNameInferrer *)(this + 0x20),pAVar11);
    piVar21 = (int *)ExpressionScope<v8::internal::ParserTypes<v8::internal::Parser>>::NewVariable
                               (*(ExpressionScope<v8::internal::ParserTypes<v8::internal::Parser>>
                                  **)(this + 0xc0),pAVar11,iVar19);
    goto LAB_01162120;
  }
  if (bVar23 - 0x54 < 7) {
    uVar8 = Scanner::Next(pSVar10);
    piVar21 = (int *)Parser::ExpressionFromLiteral((Parser *)this,uVar8,iVar19);
    goto LAB_01162120;
  }
  switch(uVar26) {
  case 0:
  case 1:
    piVar21 = (int *)ParseTemplateLiteral(this,(Expression *)0x0,iVar19,false);
    break;
  default:
switchD_01162168_caseD_2:
    uVar8 = Scanner::Next(pSVar10);
    ReportUnexpectedToken(this,uVar8);
    piVar21 = *(int **)(this + 0x88);
    goto LAB_01162480;
  case 3:
    piVar21 = (int *)ParseArrayLiteral(this);
    break;
  case 5:
    Scanner::Next(pSVar10);
    if (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) == '\x06') {
      Scanner::Next(*(Scanner **)(this + 0xf8));
      if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) != '\x0f') {
        ReportUnexpectedToken(this,6);
      }
      pZVar27 = *(Zone **)(this + 0xb8);
      pDVar15 = *(DeclarationScope **)(pZVar27 + 0x10);
      if ((ulong)(*(long *)(pZVar27 + 0x18) - (long)pDVar15) < 0xe0) {
        pDVar15 = (DeclarationScope *)Zone::NewExpand(pZVar27,0xe0);
      }
      else {
        *(DeclarationScope **)(pZVar27 + 0x10) = pDVar15 + 0xe0;
      }
      DeclarationScope::DeclarationScope(pDVar15,pZVar27,*(undefined8 *)this,2,9);
      *(undefined1 *)(*(long *)(this + 0x10) + 0x3b) = 1;
      pZVar27 = *(Zone **)(this + 0x68);
      *(DeclarationScope **)(this + 0x128) = pDVar15;
      piVar21 = *(int **)(pZVar27 + 0x10);
      if ((ulong)(*(long *)(pZVar27 + 0x18) - (long)piVar21) < 8) {
        piVar21 = (int *)Zone::NewExpand(pZVar27,8);
      }
      else {
        *(int **)(pZVar27 + 0x10) = piVar21 + 2;
      }
      *piVar21 = iVar19;
      piVar21[1] = 0x65;
    }
    else {
      pSVar12 = *(Scope **)this;
      local_d8 = (ulong)(*(ushort *)(pSVar12 + 0x81) >> 1) & 1 | (ulong)pSVar12;
      local_d0 = *(undefined8 *)(pSVar12 + 0x10);
      local_c8 = *(undefined8 *)(pSVar12 + 0x50);
      lVar17 = Scope::GetClosureScope(pSVar12);
      local_c0 = *(undefined8 *)(lVar17 + 0x40);
      *(ushort *)(((ulong)pSVar12 & 0xfffffffffffffffe) + 0x81) =
           *(ushort *)(((ulong)pSVar12 & 0xfffffffffffffffe) + 0x81) & 0xfff9;
      local_b0 = *(undefined8 **)(this + 0xc0);
      local_a8 = 0x101;
      local_a0 = this + 0xe0;
      local_a6 = 1;
      *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_b8;
      local_98 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
      local_70 = 0;
      if (local_b0 != (undefined8 *)0x0) {
        if (*(byte *)(local_b0 + 2) < 3) {
          local_70 = *(undefined1 *)(local_b0 + 9);
        }
        else {
          local_70 = 0;
        }
      }
      local_88 = 0;
      local_64 = 0;
      uStack_78 = 0xffffffff;
      local_80 = 0xffffffff;
      local_6c = 0xffffffff;
      local_60 = 1;
      cVar7 = *(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38);
      local_b8 = this;
      local_90 = local_98;
      if ((cVar7 == 'I') ||
         ((cVar7 == '_' && (cVar7 = Scanner::PeekAhead(*(Scanner **)(this + 0xf8)), cVar7 == 'I'))))
      {
        *(byte *)(*(long *)(this + 0x10) + 0x39) = FLAG_max_lazy ^ 1;
      }
      PVar1 = this[0x130];
      this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
      piVar21 = (int *)ParseExpressionCoverGrammar(this);
      piVar21[1] = piVar21[1] | 0x40;
      uVar26 = Scanner::Next(*(Scanner **)(this + 0xf8));
      if ((uVar26 & 0xff) != 6) {
        ReportUnexpectedToken(this,uVar26);
      }
      pPVar4 = local_b8;
      if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) == '\x0f') {
        pDVar15 = (DeclarationScope *)
                  ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>::
                  ValidateAndCreateScope
                            ((ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>
                              *)&local_b8);
        *(DeclarationScope **)(this + 0x128) = pDVar15;
        Scope::Snapshot::Reparent((Snapshot *)&local_d8,pDVar15);
      }
      else {
        *(undefined8 *)(local_b8 + 0x118) = 0xffffffff;
        *(undefined4 *)(local_b8 + 0x120) = 0;
        if ((uint)local_80 <= local_80._4_4_) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(local_b8 + 0xb0),local_80 & 0xffffffff,
                     local_80._4_4_,local_88 & 0xffffffff,0);
          lVar17 = *(long *)(pPVar4 + 0x158);
          if (*(char *)(lVar17 + 0x30) == '\0') {
            *(undefined4 *)(pPVar4 + 0x160) = 0xffffffff;
            *(undefined1 *)(lVar17 + 0x30) = 1;
            *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
            pPVar4[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
            pPVar4[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
            pPVar4[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
          }
        }
        puVar5 = local_b0;
        if (*(byte *)(local_b0 + 2) < 3) {
          if ((4 < *(byte *)(local_b0 + 2) - 1) && (local_98 != local_90)) {
            lVar17 = local_90 * 0x10 + local_98 * -0x10;
            puVar28 = (undefined8 *)(*(long *)local_a0 + local_98 * 0x10);
            do {
              Scope::AddUnresolved(*(Scope **)*puVar5,(VariableProxy *)*puVar28);
              lVar17 = lVar17 + -0x10;
              puVar28 = puVar28 + 2;
            } while (lVar17 != 0);
          }
          puVar5[5] = local_90;
          local_98 = local_90;
        }
      }
      this[0x130] = PVar1;
      uVar9 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
      if (local_98 < uVar9 || local_98 - uVar9 == 0) {
        if (local_98 < uVar9) {
          *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)local_a0,local_98 - uVar9);
      }
      local_90 = local_98;
      *(undefined8 **)(local_b8 + 0xc0) = local_b0;
      if ((1 < local_d8) && ((local_d8 & 1) != 0)) {
        pSVar12 = (Scope *)(local_d8 & 0xfffffffffffffffe);
        *(ushort *)(pSVar12 + 0x81) = *(ushort *)(pSVar12 + 0x81) | 2;
        lVar17 = Scope::GetDeclarationScope(pSVar12);
        uVar2 = *(ushort *)(lVar17 + 0x81);
        *(ushort *)(lVar17 + 0x81) = uVar2 | 2;
        if (((uVar2 & 1) == 0) &&
           ((*(char *)(lVar17 + 0x80) != '\x01' && (*(char *)(lVar17 + 0x80) != '\x04')))) {
          *(ushort *)(lVar17 + 0x81) = uVar2 | 6;
          *(undefined4 *)(lVar17 + 0x7c) = 3;
        }
        lVar17 = *(long *)(pSVar12 + 8);
        *(ushort *)(pSVar12 + 0x81) = *(ushort *)(pSVar12 + 0x81) | 0x40;
        while ((lVar17 != 0 && ((*(ushort *)(lVar17 + 0x81) >> 6 & 1) == 0))) {
          *(ushort *)(lVar17 + 0x81) = *(ushort *)(lVar17 + 0x81) | 0x40;
          lVar17 = *(long *)(lVar17 + 8);
        }
      }
    }
    goto LAB_01162480;
  case 8:
    piVar21 = (int *)ParseObjectLiteral(this);
    break;
  case 0x19:
  case 0x29:
    piVar21 = (int *)ParseRegExpLiteral(this);
    break;
  case 0x2a:
    if ((this[0x131] == (ParserBase<v8::internal::Parser>)0x0) && (*(long *)(this + 0x18) == 0))
    goto switchD_01162168_caseD_2;
    piVar21 = (int *)ParseV8Intrinsic(this);
    break;
  case 0x49:
    piVar21 = (int *)ParseFunctionExpression(this);
    break;
  case 0x4b:
    piVar21 = (int *)ParseMemberWithPresentNewPrefixesExpression(this);
    break;
  case 0x53:
    Scanner::Next(pSVar10);
    pSVar12 = (Scope *)Scope::GetClosureScope(*(Scope **)this);
    pSVar13 = (Scope *)Scope::GetReceiverScope(pSVar12);
    lVar17 = *(long *)(pSVar13 + 0xb0);
    *(ushort *)(lVar17 + 0x28) = *(ushort *)(lVar17 + 0x28) | 0x800;
    if (pSVar12 == pSVar13) {
      lVar17 = *(long *)(this + 0xc0);
      do {
        if (*(byte *)(lVar17 + 0x10) - 1 < 2) {
          *(undefined1 *)(lVar17 + 0x59) = 1;
        }
        lVar17 = *(long *)(lVar17 + 8);
      } while (lVar17 != 0);
    }
    else {
      *(ushort *)(pSVar12 + 0x83) = *(ushort *)(pSVar12 + 0x83) | 0x800;
      *(ushort *)(lVar17 + 0x28) = *(ushort *)(lVar17 + 0x28) | 0x400;
    }
    *(uint *)(*(long *)(this + 0x80) + 4) = *(uint *)(*(long *)(this + 0x80) + 4) & 0xffffffbf;
    piVar21 = *(int **)(this + 0x80);
LAB_01162480:
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return piVar21;
    }
    goto LAB_01162f94;
  case 0x5b:
    piVar21 = (int *)ParseSuperExpression(this,false);
    break;
  case 0x67:
    Scanner::Next(pSVar10);
    pSVar10 = *(Scanner **)(this + 0xf8);
    uVar8 = **(undefined4 **)pSVar10;
    if (*(byte *)(*(long *)(pSVar10 + 8) + 0x38) - 0x5c < 10) {
      uVar26 = Scanner::Next(pSVar10);
      if ((uVar26 & 0xfc) == 0x5c) {
        lVar17 = Scanner::CurrentSymbol
                           (*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
        if ((*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == lVar17) &&
           (uVar9 = Scope::ShouldBanArguments(*(Scope **)this), (uVar9 & 1) != 0)) {
          ReportMessage(this,0xc);
LAB_01162d08:
          lVar17 = *(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
        }
      }
      else {
        uVar2 = *(ushort *)(*(long *)this + 0x81);
        lVar17 = Scope::AsDeclarationScope();
        cVar7 = *(char *)(lVar17 + 0x85);
        if (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0) {
          lVar17 = Scope::AsDeclarationScope();
          bVar6 = 4 < *(byte *)(lVar17 + 0x85) - 10;
        }
        else {
          bVar6 = false;
        }
        if ((uVar26 & 0xff) == 0x61) {
          if (((uVar2 & 1) != 0) || ((byte)(cVar7 - 0xdU) < 4)) goto LAB_01162cfc;
        }
        else if ((uVar26 & 0xff) == 0x60) {
          if (!bVar6) {
LAB_01162cfc:
            ReportUnexpectedToken(this,uVar26);
            goto LAB_01162d08;
          }
        }
        else if ((4 < (uVar26 - 0x61 & 0xff)) || ((uVar2 & 1) != 0)) goto LAB_01162cfc;
        pSVar10 = *(Scanner **)(this + 0xf8);
        plVar22 = *(long **)(this + 0xc0);
        plVar18 = *(long **)pSVar10;
        bVar23 = *(byte *)(plVar22 + 2);
        if ((uVar26 & 0xff) == 0x60) {
          if (bVar23 < 3) {
            cVar7 = (char)plVar22[9];
            plVar25 = plVar22;
            while (cVar7 != '\0') {
              if ((char)plVar25[2] == '\x02') {
                lVar17 = *plVar18;
                *(undefined4 *)((long)plVar25 + 0x54) = 0x130;
                *(long *)((long)plVar25 + 0x4c) = lVar17;
              }
              plVar25 = (long *)plVar25[1];
              if (plVar25 == (long *)0x0) break;
              cVar7 = (char)plVar22[9];
            }
            goto LAB_01162db4;
          }
        }
        else {
          if (bVar23 - 1 < 3) {
            plVar25 = (long *)*plVar22;
            if (bVar23 == 3) {
              if ((*(byte *)(*plVar25 + 0x81) & 1) == 0) {
                lVar20 = plVar25[0x22];
                lVar17 = *plVar18;
                *(undefined4 *)(lVar20 + 0x38) = 0x13c;
                *(long *)(lVar20 + 0x30) = lVar17;
              }
              else {
                PendingCompilationErrorHandler::ReportMessageAt
                          ((PendingCompilationErrorHandler *)plVar25[0x16],(int)*plVar18,
                           *(undefined4 *)((long)plVar18 + 4),0x13c,0);
                lVar17 = plVar25[0x2b];
                if (*(char *)(lVar17 + 0x30) == '\0') {
                  *(undefined4 *)(plVar25 + 0x2c) = 0xffffffff;
                  *(undefined1 *)(lVar17 + 0x30) = 1;
                  *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
                  *(undefined1 *)(plVar25 + 0x34) = 0x6d;
                  *(undefined1 *)(plVar25 + 0x3e) = 0x6d;
                  *(undefined1 *)(plVar25 + 0x48) = 0x6d;
                }
              }
            }
            else {
              plVar25[0x23] = *plVar18;
              *(undefined4 *)(*plVar22 + 0x120) = 0x13c;
            }
          }
LAB_01162db4:
          pSVar10 = *(Scanner **)(this + 0xf8);
        }
        lVar17 = Scanner::CurrentSymbol(pSVar10,*(AstValueFactory **)(this + 0x60));
      }
      uVar14 = *(undefined8 *)**(undefined8 **)(this + 0xf8);
      bVar6 = *(byte *)((undefined8 *)**(undefined8 **)(this + 0xf8) + 7) - 0x61 < 5;
    }
    else {
      lVar17 = 0;
      bVar6 = false;
      uVar14 = 0xffffffff;
    }
    piVar21 = (int *)ParseClassLiteral(this,lVar17,uVar14,bVar6,uVar8);
    break;
  case 0x6b:
    if (this[0x132] == (ParserBase<v8::internal::Parser>)0x0) goto switchD_01162168_caseD_2;
    piVar21 = (int *)ParseImportExpressions(this);
  }
LAB_01162120:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return piVar21;
  }
LAB_01162f94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

