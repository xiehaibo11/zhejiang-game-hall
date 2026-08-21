
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseVariableDeclarations(v8::internal::ParserBase<v8::internal::PreParser>::VariableDeclarationContext,
   v8::internal::ParserBase<v8::internal::PreParser>::DeclarationParsingResult*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseVariableDeclarations
          (ParserBase<v8::internal::PreParser> *this,int param_2,byte *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  ParserBase<v8::internal::PreParser> PVar8;
  ushort uVar9;
  long lVar10;
  ParserBase<v8::internal::PreParser> *pPVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  Scanner *pSVar16;
  AstRawString *pAVar17;
  long lVar18;
  PendingCompilationErrorHandler *pPVar19;
  undefined8 uVar20;
  char *pcVar21;
  int *piVar22;
  uint *puVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  undefined4 uVar27;
  byte bVar28;
  long lVar29;
  Scope *this_00;
  VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>> *this_01;
  long *plVar30;
  ParserBase<v8::internal::PreParser> *local_e0;
  long local_d8;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  byte local_cd;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
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
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 4) = **(undefined4 **)(*(long *)(this + 200) + 8);
  *(undefined4 *)(param_3 + 8) = **(undefined4 **)(*(long *)(this + 200) + 8);
  cVar7 = *(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38);
  if (cVar7 == 'P') {
    *param_3 = 2;
    Scanner::Next(*(Scanner **)(this + 200));
    local_cd = *param_3;
    if (1 < local_cd) {
      local_d0 = 4;
      goto LAB_01180378;
    }
  }
  else {
    if (cVar7 == 'h') {
      bVar28 = 1;
    }
    else {
      if (cVar7 != 'b') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      bVar28 = 0;
    }
    Scanner::Next(*(Scanner **)(this + 200));
    *param_3 = bVar28;
    local_cd = bVar28;
  }
  local_d0 = 5;
LAB_01180378:
  local_d8 = *(long *)(this + 0x90);
  if (local_d8 == 0) {
    local_ce = 0;
    local_cf = 0;
  }
  else {
    local_cf = *(undefined1 *)(local_d8 + 0x11);
    local_ce = *(undefined1 *)(local_d8 + 0x12);
  }
  *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_e0;
  this_00 = *(Scope **)this;
  local_e0 = this;
  uStack_c8 = param_4;
  if (1 < *param_3) {
    this_00 = (Scope *)Scope::GetDeclarationScope(this_00);
  }
  pSVar16 = *(Scanner **)(this + 200);
  piVar22 = *(int **)(pSVar16 + 8);
  iVar3 = *piVar22;
  plVar30 = *(long **)(this_00 + 0x60);
  iVar15 = iVar3;
  do {
    if (*(byte *)(piVar22 + 0xe) - 0x5c < 10) {
      uVar13 = Scanner::Next(pSVar16);
      if ((uVar13 & 0xfc) == 0x5c) {
        pAVar17 = (AstRawString *)
                  Scanner::CurrentSymbol
                            (*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
        piVar22 = (int *)**(undefined8 **)(this + 200);
        cVar7 = (char)piVar22[0xe];
        if (cVar7 == 'l') {
LAB_01180788:
          uVar13 = 8;
        }
        else if (cVar7 == '`') {
LAB_0118067c:
          uVar13 = 5;
        }
        else if (cVar7 == '_') {
LAB_01180464:
          uVar13 = 6;
        }
        else {
          lVar18 = *(long *)(*(long *)(this + 0x28) + 0x38);
          if (*(AstRawString **)(lVar18 + 0xb0) == pAVar17) {
LAB_01180790:
            uVar13 = 4;
          }
          else if (*(AstRawString **)(lVar18 + 0x158) == pAVar17) {
LAB_01180798:
            uVar13 = 7;
          }
          else {
            iVar1 = (piVar22[1] - *piVar22) + -2;
            if (cVar7 != 'Z') {
              iVar1 = piVar22[1] - *piVar22;
            }
            if (piVar22[6] >> ((*(byte *)(piVar22 + 7) ^ 1) & 0x1f) == iVar1) {
              if (*(AstRawString **)(lVar18 + 0x118) == pAVar17) {
LAB_011807a0:
                uVar13 = 2;
              }
              else {
                if (*(AstRawString **)(lVar18 + 0x70) != pAVar17) goto LAB_011804d0;
                uVar26 = Scope::ShouldBanArguments(*(Scope **)this);
                if ((uVar26 & 1) != 0) {
                  ReportMessage(this,0xc);
                  goto LAB_01180600;
                }
                uVar13 = 3;
              }
            }
            else {
LAB_011804d0:
              uVar13 = 1;
            }
          }
        }
      }
      else {
        uVar9 = *(ushort *)(*(long *)this + 0x81);
        lVar18 = Scope::AsDeclarationScope();
        cVar7 = *(char *)(lVar18 + 0x85);
        if (this[0x71] == (ParserBase<v8::internal::PreParser>)0x0) {
          lVar18 = Scope::AsDeclarationScope();
          bVar12 = *(byte *)(lVar18 + 0x85) - 10 < 5;
        }
        else {
          bVar12 = true;
        }
        if ((uVar13 & 0xff) == 0x61) {
          if (((uVar9 & 1) == 0) && (3 < (byte)(cVar7 - 0xdU))) goto LAB_01180590;
        }
        else if ((uVar13 & 0xff) == 0x60) {
          if (!bVar12) {
LAB_01180590:
            pSVar16 = *(Scanner **)(this + 200);
            plVar25 = *(long **)(this + 0x90);
            puVar23 = *(uint **)pSVar16;
            bVar28 = *(byte *)(plVar25 + 2);
            if ((uVar13 & 0xff) == 0x60) {
              if (bVar28 < 3) {
                cVar7 = (char)plVar25[9];
                plVar24 = plVar25;
                while (cVar7 != '\0') {
                  if ((char)plVar24[2] == '\x02') {
                    uVar20 = *(undefined8 *)puVar23;
                    *(undefined4 *)((long)plVar24 + 0x54) = 0x130;
                    *(undefined8 *)((long)plVar24 + 0x4c) = uVar20;
                  }
                  plVar24 = (long *)plVar24[1];
                  if (plVar24 == (long *)0x0) break;
                  cVar7 = (char)plVar25[9];
                }
                pSVar16 = *(Scanner **)(this + 200);
              }
              pAVar17 = (AstRawString *)
                        Scanner::CurrentSymbol(pSVar16,*(AstValueFactory **)(this + 0x28));
              piVar22 = (int *)**(undefined8 **)(this + 200);
              cVar7 = (char)piVar22[0xe];
            }
            else {
              if (bVar28 - 1 < 3) {
                plVar24 = (long *)*plVar25;
                if (bVar28 == 3) {
                  if ((*(byte *)(*plVar24 + 0x81) & 1) == 0) {
                    *(bool *)(plVar24[0x1c] + 0x15) = *puVar23 <= puVar23[1];
                  }
                  else {
                    PendingCompilationErrorHandler::ReportMessageAt
                              ((PendingCompilationErrorHandler *)plVar24[0x10],*puVar23,puVar23[1],
                               0x13c,0);
                    lVar18 = plVar24[0x19];
                    lVar29 = *(long *)(lVar18 + 0x18);
                    if (*(char *)(lVar29 + 0x30) == '\0') {
                      *(undefined4 *)(lVar18 + 0x20) = 0xffffffff;
                      *(undefined1 *)(lVar29 + 0x30) = 1;
                      *(undefined8 *)(lVar29 + 0x10) = *(undefined8 *)(lVar29 + 0x18);
                      *(undefined1 *)(lVar18 + 0x60) = 0x6d;
                      *(undefined1 *)(lVar18 + 0xb0) = 0x6d;
                      *(undefined1 *)(lVar18 + 0x100) = 0x6d;
                    }
                  }
                }
                else {
                  plVar24[0x1d] = *(long *)puVar23;
                  *(undefined4 *)(*plVar25 + 0xf0) = 0x13c;
                }
              }
              pAVar17 = (AstRawString *)
                        Scanner::CurrentSymbol
                                  (*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
              piVar22 = (int *)**(undefined8 **)(this + 200);
              cVar7 = (char)piVar22[0xe];
            }
            if (cVar7 != 'l') {
              if (cVar7 != '`') {
                if (cVar7 != '_') {
                  lVar18 = *(long *)(*(long *)(this + 0x28) + 0x38);
                  if (*(AstRawString **)(lVar18 + 0xb0) != pAVar17) {
                    if (*(AstRawString **)(lVar18 + 0x158) != pAVar17) {
                      iVar1 = (piVar22[1] - *piVar22) + -2;
                      if (cVar7 != 'Z') {
                        iVar1 = piVar22[1] - *piVar22;
                      }
                      if (piVar22[6] >> ((*(byte *)(piVar22 + 7) ^ 1) & 0x1f) == iVar1) {
                        if (*(AstRawString **)(lVar18 + 0x118) != pAVar17) {
                          uVar13 = 3;
                          if (*(AstRawString **)(lVar18 + 0x70) != pAVar17) {
                            uVar13 = 1;
                          }
                          goto LAB_011807a4;
                        }
                        goto LAB_011807a0;
                      }
                      goto LAB_011804d0;
                    }
                    goto LAB_01180798;
                  }
                  goto LAB_01180790;
                }
                goto LAB_01180464;
              }
              goto LAB_0118067c;
            }
            goto LAB_01180788;
          }
        }
        else if (((uVar13 - 0x61 & 0xff) < 5) && ((uVar9 & 1) == 0)) goto LAB_01180590;
        ReportUnexpectedToken(this,uVar13);
LAB_01180600:
        uVar13 = 1;
        pAVar17 = *(AstRawString **)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x110);
      }
LAB_011807a4:
      if (((uVar13 & 0xe) != 2) || ((*(ushort *)(*(long *)this + 0x81) & 1) == 0)) {
        piVar22 = *(int **)(*(Scanner **)(this + 200) + 8);
        cVar7 = (char)piVar22[0xe];
        if ((cVar7 == '\x11') ||
           (((param_2 == 2 &&
             ((cVar7 == '>' ||
              (((cVar7 == '\\' &&
                (piVar22[6] >> ((*(byte *)(piVar22 + 7) ^ 1) & 0x1f) == piVar22[1] - *piVar22)) &&
               (lVar29 = *(long *)(*(long *)(*(AstValueFactory **)(this + 0x28) + 0x38) + 0x188),
               lVar18 = Scanner::NextSymbol(*(Scanner **)(this + 200),
                                            *(AstValueFactory **)(this + 0x28)), lVar18 == lVar29)))
              ))) || (*param_3 == 0)))) {
          ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>>::NewVariable
                    (*(ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>> **)
                      (this + 0x90),pAVar17,iVar15);
          uVar14 = uVar13 << 4 | 3;
        }
        else {
          this_01 = *(VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>
                      **)(this + 0x90);
          if (this_01[0x10] ==
              (VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>)
              0x3) {
            PreParser::DeclareVariableName
                      (*(PreParser **)this_01,pAVar17,2,*(undefined8 *)*(PreParser **)this_01,
                       &local_c0,iVar15,1);
            if ((*(uint *)(this_01 + 0x18) < *(uint *)(this_01 + 0x14)) &&
               (local_c0._0_1_ == (Declaration)0x0)) {
              iVar4 = *(int *)(pAVar17 + 0x10);
              iVar1 = iVar4;
              if (iVar4 < 0) {
                iVar1 = iVar4 + 1;
              }
              iVar1 = iVar1 >> 1;
              if (pAVar17[0x1c] != (AstRawString)0x0) {
                iVar1 = iVar4;
              }
              *(ulong *)(this_01 + 0x14) = CONCAT44(iVar1 + iVar15,iVar15);
            }
            uVar14 = 0;
          }
          else {
            VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
            Declare(this_01,pAVar17,iVar15);
            uVar14 = 0;
          }
        }
        goto LAB_011808b8;
      }
      pPVar19 = *(PendingCompilationErrorHandler **)(this + 0x80);
      uVar20 = 0x128;
      iVar15 = *(int *)**(undefined8 **)(this + 200);
      iVar3 = ((int *)**(undefined8 **)(this + 200))[1];
      pcVar21 = (char *)0x0;
LAB_01180c48:
      PendingCompilationErrorHandler::ReportMessageAt(pPVar19,iVar15,iVar3,uVar20,pcVar21);
      lVar18 = *(long *)(this + 200);
      lVar29 = *(long *)(lVar18 + 0x18);
      if (*(char *)(lVar29 + 0x30) == '\0') {
        *(undefined4 *)(lVar18 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar29 + 0x30) = 1;
        *(undefined8 *)(lVar29 + 0x10) = *(undefined8 *)(lVar29 + 0x18);
        *(undefined1 *)(lVar18 + 0x60) = 0x6d;
        *(undefined1 *)(lVar18 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar18 + 0x100) = 0x6d;
      }
      goto LAB_01180bb8;
    }
    uVar14 = ParseBindingPattern(this);
    uVar13 = 0;
LAB_011808b8:
    pSVar16 = *(Scanner **)(this + 200);
    piVar22 = *(int **)(pSVar16 + 8);
    cVar7 = (char)piVar22[0xe];
    if (cVar7 == '\x11') {
      uVar5 = **(undefined4 **)pSVar16;
      Scanner::Next(pSVar16);
      PVar8 = this[0x100];
      uVar27 = **(undefined4 **)(*(long *)(this + 200) + 8);
      this[0x100] = (ParserBase<v8::internal::PreParser>)(param_2 != 2);
      local_b8 = *(long *)(this + 0x90);
      local_b0 = 0;
      if (local_b8 == 0) {
        local_ae = 0;
        local_af = 0;
      }
      else {
        local_af = *(undefined1 *)(local_b8 + 0x11);
        local_ae = *(undefined1 *)(local_b8 + 0x12);
      }
      *(undefined8 **)(this + 0x90) = &local_c0;
      local_a0 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
      local_78 = 0;
      if (local_b8 != 0) {
        if (*(byte *)(local_b8 + 0x10) < 3) {
          local_78 = *(undefined1 *)(local_b8 + 0x48);
        }
        else {
          local_78 = 0;
        }
      }
      local_90 = 0;
      uStack_80 = 0xffffffff;
      local_88 = 0xffffffff;
      local_c0 = this;
      local_a8 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)(this + 0xb0);
      local_98 = local_a0;
      iVar15 = ParseAssignmentExpressionCoverGrammar(this);
      pPVar11 = local_c0;
      if ((uint)local_88 <= local_88._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_c0 + 0x80),local_88 & 0xffffffff,
                   local_88._4_4_,local_90 & 0xffffffff,0);
        lVar18 = *(long *)(pPVar11 + 200);
        lVar29 = *(long *)(lVar18 + 0x18);
        if (*(char *)(lVar29 + 0x30) == '\0') {
          *(undefined4 *)(lVar18 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar29 + 0x30) = 1;
          *(undefined8 *)(lVar29 + 0x10) = *(undefined8 *)(lVar29 + 0x18);
          *(undefined1 *)(lVar18 + 0x60) = 0x6d;
          *(undefined1 *)(lVar18 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar18 + 0x100) = 0x6d;
        }
      }
      uVar26 = *(long *)(local_a8 + 8) - *(long *)local_a8 >> 4;
      if (local_a0 < uVar26 || local_a0 - uVar26 == 0) {
        if (local_a0 < uVar26) {
          *(ulong *)(local_a8 + 8) = *(long *)local_a8 + local_a0 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append(local_a8,local_a0 - uVar26);
      }
      local_98 = local_a0;
      *(long *)(local_c0 + 0x90) = local_b8;
      this[0x100] = PVar8;
      if (*(uint *)(param_3 + 0x2c) < *(uint *)(param_3 + 0x28)) {
        uVar6 = *(undefined4 *)(**(long **)(this + 200) + 4);
        *(undefined4 *)(param_3 + 0x28) = uVar5;
        *(undefined4 *)(param_3 + 0x2c) = uVar6;
      }
    }
    else {
      if ((param_2 == 2) &&
         ((cVar7 == '>' ||
          (((cVar7 == '\\' &&
            (piVar22[6] >> ((*(byte *)(piVar22 + 7) ^ 1) & 0x1f) == piVar22[1] - *piVar22)) &&
           (lVar29 = *(long *)(*(long *)(*(AstValueFactory **)(this + 0x28) + 0x38) + 0x188),
           lVar18 = Scanner::NextSymbol(pSVar16,*(AstValueFactory **)(this + 0x28)),
           lVar18 == lVar29)))))) {
        iVar15 = 0;
      }
      else {
        if ((uVar13 == 0) || (*param_3 == 1)) {
          pPVar19 = *(PendingCompilationErrorHandler **)(this + 0x80);
          uVar20 = 0x2f;
          iVar3 = *(int *)(**(long **)(this + 200) + 4);
          pcVar21 = "destructuring";
          if (uVar13 != 0) {
            pcVar21 = "const";
          }
          goto LAB_01180c48;
        }
        iVar15 = (uint)(*param_3 == 0) << 1;
      }
      uVar27 = 0xffffffff;
    }
    plVar24 = *(long **)(this_00 + 0x60);
    plVar25 = plVar30;
    if (plVar30 != plVar24) {
      uVar5 = *(undefined4 *)(**(long **)(this + 200) + 4);
      do {
        *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x24) = uVar5;
        plVar30 = (long *)(*plVar30 + 0x10);
        plVar25 = plVar24;
      } while (plVar30 != plVar24);
    }
    local_c0 = (ParserBase<v8::internal::PreParser> *)CONCAT44(iVar15,uVar14);
    local_b8 = CONCAT44(local_b8._4_4_,uVar27);
    puVar2 = *(undefined8 **)(param_3 + 0x18);
    if (puVar2 == *(undefined8 **)(param_3 + 0x20)) {
      std::__ndk1::
      vector<v8::internal::ParserBase<v8::internal::PreParser>::DeclarationParsingResult::Declaration,std::__ndk1::allocator<v8::internal::ParserBase<v8::internal::PreParser>::DeclarationParsingResult::Declaration>>
      ::
      __push_back_slow_path<v8::internal::ParserBase<v8::internal::PreParser>::DeclarationParsingResult::Declaration_const&>
                ((vector<v8::internal::ParserBase<v8::internal::PreParser>::DeclarationParsingResult::Declaration,std::__ndk1::allocator<v8::internal::ParserBase<v8::internal::PreParser>::DeclarationParsingResult::Declaration>>
                  *)(param_3 + 0x10),(Declaration *)&local_c0);
    }
    else {
      *(undefined4 *)(puVar2 + 1) = uVar27;
      *puVar2 = local_c0;
      *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 0xc;
    }
    pSVar16 = *(Scanner **)(this + 200);
    if (*(char *)(*(long *)(pSVar16 + 8) + 0x38) != '\x1e') {
      *(ulong *)(param_3 + 0x30) = CONCAT44(*(undefined4 *)(*(long *)pSVar16 + 4),iVar3);
LAB_01180bb8:
      *(long *)(local_e0 + 0x90) = local_d8;
      if (*(long *)(lVar10 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    Scanner::Next(pSVar16);
    pSVar16 = *(Scanner **)(this + 200);
    piVar22 = *(int **)(pSVar16 + 8);
    iVar15 = *piVar22;
    plVar30 = plVar25;
  } while( true );
}

