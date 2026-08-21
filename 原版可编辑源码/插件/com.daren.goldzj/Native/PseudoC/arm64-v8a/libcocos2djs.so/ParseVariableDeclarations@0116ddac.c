
/* v8::internal::ParserBase<v8::internal::Parser>::ParseVariableDeclarations(v8::internal::ParserBase<v8::internal::Parser>::VariableDeclarationContext,
   v8::internal::ParserBase<v8::internal::Parser>::DeclarationParsingResult*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseVariableDeclarations
          (ParserBase<v8::internal::Parser> *this,int param_2,byte *param_3,undefined8 param_4)

{
  bool bVar1;
  FuncNameInferrer *this_00;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  ParserBase<v8::internal::Parser> PVar9;
  ushort uVar10;
  long lVar11;
  ParserBase<v8::internal::Parser> *pPVar12;
  uint uVar13;
  Scanner *pSVar14;
  AstRawString *pAVar15;
  ulong uVar16;
  long lVar17;
  Expression *pEVar18;
  Zone *this_01;
  PendingCompilationErrorHandler *pPVar19;
  int iVar20;
  undefined8 uVar21;
  char *pcVar22;
  int *piVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  byte bVar27;
  long lVar28;
  Scope *this_02;
  VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::Parser>> *this_03;
  Expression *pEVar29;
  undefined4 uVar30;
  long *plVar31;
  FuncNameInferrer *local_f0;
  long lStack_e8;
  ParserBase<v8::internal::Parser> *local_e0;
  long local_d8;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  byte local_cd;
  undefined8 uStack_c8;
  ParserBase<v8::internal::Parser> *local_c0;
  Expression *pEStack_b8;
  undefined1 local_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined4 uStack_ac;
  ParserBase<v8::internal::Parser> *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_70;
  
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 4) = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
  *(undefined4 *)(param_3 + 8) = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
  cVar8 = *(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38);
  if (cVar8 == 'P') {
    *param_3 = 2;
    Scanner::Next(*(Scanner **)(this + 0xf8));
    local_cd = *param_3;
    if (1 < local_cd) {
      local_d0 = 4;
      goto LAB_0116de4c;
    }
  }
  else {
    if (cVar8 == 'h') {
      bVar27 = 1;
    }
    else {
      if (cVar8 != 'b') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      bVar27 = 0;
    }
    Scanner::Next(*(Scanner **)(this + 0xf8));
    *param_3 = bVar27;
    local_cd = bVar27;
  }
  local_d0 = 5;
LAB_0116de4c:
  local_d8 = *(long *)(this + 0xc0);
  if (local_d8 == 0) {
    local_ce = 0;
    local_cf = 0;
  }
  else {
    local_cf = *(undefined1 *)(local_d8 + 0x11);
    local_ce = *(undefined1 *)(local_d8 + 0x12);
  }
  *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_e0;
  this_02 = *(Scope **)this;
  local_e0 = this;
  uStack_c8 = param_4;
  if (1 < *param_3) {
    this_02 = (Scope *)Scope::GetDeclarationScope(this_02);
  }
  pSVar14 = *(Scanner **)(this + 0xf8);
  this_00 = (FuncNameInferrer *)(this + 0x20);
  uVar4 = **(undefined4 **)(pSVar14 + 8);
  plVar31 = *(long **)(this_02 + 0x60);
  do {
    lStack_e8 = *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3;
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
    iVar20 = **(int **)(pSVar14 + 8);
    local_f0 = this_00;
    if (*(byte *)(*(int **)(pSVar14 + 8) + 0xe) - 0x5c < 10) {
      uVar13 = Scanner::Next(pSVar14);
      if ((uVar13 & 0xfc) == 0x5c) {
        pAVar15 = (AstRawString *)
                  Scanner::CurrentSymbol
                            (*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
        if ((*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == pAVar15) &&
           (uVar16 = Scope::ShouldBanArguments(*(Scope **)this), (uVar16 & 1) != 0)) {
          ReportMessage(this,0xc);
          lVar17 = *(long *)(this + 0x60);
LAB_0116e528:
          pAVar15 = *(AstRawString **)(*(long *)(lVar17 + 0x38) + 0x110);
        }
      }
      else {
        uVar10 = *(ushort *)(*(long *)this + 0x81);
        lVar17 = Scope::AsDeclarationScope();
        cVar8 = *(char *)(lVar17 + 0x85);
        if (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0) {
          lVar17 = Scope::AsDeclarationScope();
          bVar1 = 4 < *(byte *)(lVar17 + 0x85) - 10;
        }
        else {
          bVar1 = false;
        }
        if ((uVar13 & 0xff) == 0x61) {
          if (((uVar10 & 1) != 0) || ((byte)(cVar8 - 0xdU) < 4)) goto LAB_0116e510;
        }
        else if ((uVar13 & 0xff) == 0x60) {
          if (!bVar1) {
LAB_0116e510:
            ReportUnexpectedToken(this,uVar13);
            lVar17 = *(long *)(this + 0x60);
            goto LAB_0116e528;
          }
        }
        else if ((4 < (uVar13 - 0x61 & 0xff)) || ((uVar10 & 1) != 0)) goto LAB_0116e510;
        pSVar14 = *(Scanner **)(this + 0xf8);
        plVar24 = *(long **)(this + 0xc0);
        plVar25 = *(long **)pSVar14;
        bVar27 = *(byte *)(plVar24 + 2);
        if ((uVar13 & 0xff) == 0x60) {
          if (bVar27 < 3) {
            cVar8 = (char)plVar24[9];
            plVar26 = plVar24;
            while (cVar8 != '\0') {
              if ((char)plVar26[2] == '\x02') {
                lVar17 = *plVar25;
                *(undefined4 *)((long)plVar26 + 0x54) = 0x130;
                *(long *)((long)plVar26 + 0x4c) = lVar17;
              }
              plVar26 = (long *)plVar26[1];
              if (plVar26 == (long *)0x0) break;
              cVar8 = (char)plVar24[9];
            }
            goto LAB_0116e5e8;
          }
        }
        else {
          if (bVar27 - 1 < 3) {
            plVar26 = (long *)*plVar24;
            if (bVar27 == 3) {
              if ((*(byte *)(*plVar26 + 0x81) & 1) == 0) {
                lVar17 = plVar26[0x22];
                *(long *)(lVar17 + 0x30) = *plVar25;
                *(undefined4 *)(lVar17 + 0x38) = 0x13c;
              }
              else {
                PendingCompilationErrorHandler::ReportMessageAt
                          ((PendingCompilationErrorHandler *)plVar26[0x16],(int)*plVar25,
                           *(undefined4 *)((long)plVar25 + 4),0x13c,0);
                lVar17 = plVar26[0x2b];
                if (*(char *)(lVar17 + 0x30) == '\0') {
                  *(undefined4 *)(plVar26 + 0x2c) = 0xffffffff;
                  *(undefined1 *)(lVar17 + 0x30) = 1;
                  *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
                  *(undefined1 *)(plVar26 + 0x34) = 0x6d;
                  *(undefined1 *)(plVar26 + 0x3e) = 0x6d;
                  *(undefined1 *)(plVar26 + 0x48) = 0x6d;
                }
              }
            }
            else {
              plVar26[0x23] = *plVar25;
              *(undefined4 *)(*plVar24 + 0x120) = 0x13c;
            }
          }
LAB_0116e5e8:
          pSVar14 = *(Scanner **)(this + 0xf8);
        }
        pAVar15 = (AstRawString *)Scanner::CurrentSymbol(pSVar14,*(AstValueFactory **)(this + 0x60))
        ;
      }
      if (((*(byte *)(*(long *)this + 0x81) & 1) == 0) ||
         ((*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) != pAVar15 &&
          (*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) != pAVar15)))) {
        piVar23 = *(int **)(*(Scanner **)(this + 0xf8) + 8);
        cVar8 = (char)piVar23[0xe];
        if ((cVar8 == '\x11') ||
           (((param_2 == 2 &&
             ((cVar8 == '>' ||
              (((cVar8 == '\\' &&
                (piVar23[6] >> ((*(byte *)(piVar23 + 7) ^ 1) & 0x1f) == piVar23[1] - *piVar23)) &&
               (lVar28 = *(long *)(*(long *)(*(AstValueFactory **)(this + 0x60) + 0x38) + 0x188),
               lVar17 = Scanner::NextSymbol(*(Scanner **)(this + 0xf8),
                                            *(AstValueFactory **)(this + 0x60)), lVar17 == lVar28)))
              ))) || (*param_3 == 0)))) {
          FuncNameInferrer::PushVariableName(this_00,pAVar15);
          pEVar29 = (Expression *)
                    ExpressionScope<v8::internal::ParserTypes<v8::internal::Parser>>::NewVariable
                              (*(ExpressionScope<v8::internal::ParserTypes<v8::internal::Parser>> **
                                )(this + 0xc0),pAVar15,iVar20);
        }
        else {
          this_03 = *(VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>
                      **)(this + 0xc0);
          if (this_03[0x10] ==
              (VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>)0x3)
          {
            Parser::DeclareVariable
                      (*(Parser **)this_03,pAVar15,1,2,1,*(undefined8 *)*(Parser **)this_03,
                       &local_c0,iVar20,0xffffffff);
            if ((*(uint *)(this_03 + 0x18) < *(uint *)(this_03 + 0x14)) &&
               (local_c0._0_1_ == (Declaration)0x0)) {
              iVar5 = *(int *)(pAVar15 + 0x10);
              iVar2 = iVar5;
              if (iVar5 < 0) {
                iVar2 = iVar5 + 1;
              }
              iVar2 = iVar2 >> 1;
              if (pAVar15[0x1c] != (AstRawString)0x0) {
                iVar2 = iVar5;
              }
              *(ulong *)(this_03 + 0x14) = CONCAT44(iVar2 + iVar20,iVar20);
            }
            pEVar29 = (Expression *)0x0;
          }
          else {
            VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>::
            Declare(this_03,pAVar15,iVar20);
            pEVar29 = (Expression *)0x0;
          }
        }
        goto LAB_0116e094;
      }
      pPVar19 = *(PendingCompilationErrorHandler **)(this + 0xb0);
      uVar21 = 0x128;
      iVar20 = *(int *)**(undefined8 **)(this + 0xf8);
      iVar2 = ((int *)**(undefined8 **)(this + 0xf8))[1];
      pcVar22 = (char *)0x0;
LAB_0116e668:
      PendingCompilationErrorHandler::ReportMessageAt(pPVar19,iVar20,iVar2,uVar21,pcVar22);
      lVar17 = *(long *)(this + 0x158);
      if (*(char *)(lVar17 + 0x30) == '\0') {
        *(undefined4 *)(this + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar17 + 0x30) = 1;
        *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
        this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
      FuncNameInferrer::State::~State((State *)&local_f0);
      goto LAB_0116e6a8;
    }
    pEVar29 = (Expression *)ParseBindingPattern(this);
    pAVar15 = (AstRawString *)0x0;
LAB_0116e094:
    pSVar14 = *(Scanner **)(this + 0xf8);
    piVar23 = *(int **)(pSVar14 + 8);
    cVar8 = (char)piVar23[0xe];
    if (cVar8 == '\x11') {
      uVar6 = **(undefined4 **)pSVar14;
      Scanner::Next(pSVar14);
      PVar9 = this[0x130];
      uVar30 = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
      this[0x130] = (ParserBase<v8::internal::Parser>)(param_2 != 2);
      pEStack_b8 = *(Expression **)(this + 0xc0);
      local_b0 = 0;
      if (pEStack_b8 == (Expression *)0x0) {
        uStack_ae = 0;
        uStack_af = 0;
      }
      else {
        uStack_af = *(undefined1 *)((long)pEStack_b8 + 0x11);
        uStack_ae = *(undefined1 *)((long)pEStack_b8 + 0x12);
      }
      *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_c0;
      local_a0 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
      local_78 = 0;
      if (pEStack_b8 != (Expression *)0x0) {
        if (*(byte *)((long)pEStack_b8 + 0x10) < 3) {
          local_78 = *(undefined1 *)((long)pEStack_b8 + 0x48);
        }
        else {
          local_78 = 0;
        }
      }
      local_90 = 0;
      uStack_80 = 0xffffffff;
      local_88 = 0xffffffff;
      local_c0 = this;
      local_a8 = this + 0xe0;
      local_98 = local_a0;
      pEVar18 = (Expression *)ParseAssignmentExpressionCoverGrammar(this);
      pPVar12 = local_c0;
      if ((uint)local_88 <= local_88._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_c0 + 0xb0),local_88 & 0xffffffff,
                   local_88._4_4_,local_90 & 0xffffffff,0);
        lVar17 = *(long *)(pPVar12 + 0x158);
        if (*(char *)(lVar17 + 0x30) == '\0') {
          *(undefined4 *)(pPVar12 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar17 + 0x30) = 1;
          *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
          pPVar12[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar12[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar12[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
      }
      uVar16 = *(long *)(local_a8 + 8) - *(long *)local_a8 >> 4;
      if (local_a0 < uVar16 || local_a0 - uVar16 == 0) {
        if (local_a0 < uVar16) {
          *(ulong *)(local_a8 + 8) = *(long *)local_a8 + local_a0 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)local_a8,local_a0 - uVar16);
      }
      local_98 = local_a0;
      *(Expression **)(local_c0 + 0xc0) = pEStack_b8;
      this[0x130] = PVar9;
      if (*(uint *)(param_3 + 0x2c) < *(uint *)(param_3 + 0x28)) {
        uVar7 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
        *(undefined4 *)(param_3 + 0x28) = uVar6;
        *(undefined4 *)(param_3 + 0x2c) = uVar7;
      }
      if ((pEVar29 != (Expression *)0x0) && ((*(uint *)(pEVar29 + 4) & 0x43f) == 0x35)) {
        if ((*(uint *)(pEVar18 + 4) & 0x3e) == 0x1c) {
          if ((*(long *)(this + 0x58) != 0) && (*(long *)(this + 0x40) != *(long *)(this + 0x48))) {
            *(long *)(this + 0x48) = *(long *)(this + 0x48) + -8;
          }
        }
        else if (*(long *)(this + 0x40) != *(long *)(this + 0x48)) {
          FuncNameInferrer::InferFunctionsNames(this_00);
        }
      }
      Parser::SetFunctionNameFromIdentifierRef((Parser *)this,pEVar18,pEVar29);
    }
    else {
      if ((param_2 == 2) &&
         ((cVar8 == '>' ||
          (((cVar8 == '\\' &&
            (piVar23[6] >> ((*(byte *)(piVar23 + 7) ^ 1) & 0x1f) == piVar23[1] - *piVar23)) &&
           (lVar28 = *(long *)(*(long *)(*(AstValueFactory **)(this + 0x60) + 0x38) + 0x188),
           lVar17 = Scanner::NextSymbol(pSVar14,*(AstValueFactory **)(this + 0x60)),
           lVar17 == lVar28)))))) {
LAB_0116e154:
        pEVar18 = (Expression *)0x0;
      }
      else {
        if ((pAVar15 == (AstRawString *)0x0) || (*param_3 == 1)) {
          pPVar19 = *(PendingCompilationErrorHandler **)(this + 0xb0);
          uVar21 = 0x2f;
          iVar2 = *(int *)(**(long **)(this + 0xf8) + 4);
          pcVar22 = "destructuring";
          if (pAVar15 != (AstRawString *)0x0) {
            pcVar22 = "const";
          }
          goto LAB_0116e668;
        }
        if (*param_3 != 0) goto LAB_0116e154;
        this_01 = *(Zone **)(this + 0x68);
        pEVar18 = *(Expression **)(this_01 + 0x10);
        uVar30 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
        if ((ulong)(*(long *)(this_01 + 0x18) - (long)pEVar18) < 0x10) {
          pEVar18 = (Expression *)Zone::NewExpand(this_01,0x10);
        }
        else {
          *(Expression **)(this_01 + 0x10) = pEVar18 + 0x10;
        }
        *(undefined4 *)pEVar18 = uVar30;
        *(undefined4 *)(pEVar18 + 4) = 0x329;
      }
      uVar30 = 0xffffffff;
    }
    plVar24 = *(long **)(this_02 + 0x60);
    plVar25 = plVar31;
    if (plVar31 != plVar24) {
      uVar6 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
      do {
        *(undefined4 *)(*(long *)(*plVar31 + 8) + 0x24) = uVar6;
        plVar31 = (long *)(*plVar31 + 0x10);
        plVar25 = plVar24;
      } while (plVar31 != plVar24);
    }
    local_b0 = (undefined1)uVar30;
    uStack_af = (undefined1)((uint)uVar30 >> 8);
    uStack_ae = (undefined1)((uint)uVar30 >> 0x10);
    uStack_ad = (undefined1)((uint)uVar30 >> 0x18);
    puVar3 = *(undefined8 **)(param_3 + 0x18);
    local_c0 = (ParserBase<v8::internal::Parser> *)pEVar29;
    pEStack_b8 = pEVar18;
    if (puVar3 == *(undefined8 **)(param_3 + 0x20)) {
      std::__ndk1::
      vector<v8::internal::ParserBase<v8::internal::Parser>::DeclarationParsingResult::Declaration,std::__ndk1::allocator<v8::internal::ParserBase<v8::internal::Parser>::DeclarationParsingResult::Declaration>>
      ::
      __push_back_slow_path<v8::internal::ParserBase<v8::internal::Parser>::DeclarationParsingResult::Declaration_const&>
                ((vector<v8::internal::ParserBase<v8::internal::Parser>::DeclarationParsingResult::Declaration,std::__ndk1::allocator<v8::internal::ParserBase<v8::internal::Parser>::DeclarationParsingResult::Declaration>>
                  *)(param_3 + 0x10),(Declaration *)&local_c0);
    }
    else {
      puVar3[2] = CONCAT44(uStack_ac,uVar30);
      puVar3[1] = pEVar18;
      *puVar3 = pEVar29;
      *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 0x18;
    }
    FuncNameInferrer::State::~State((State *)&local_f0);
    pSVar14 = *(Scanner **)(this + 0xf8);
    if (*(char *)(*(long *)(pSVar14 + 8) + 0x38) != '\x1e') {
      *(ulong *)(param_3 + 0x30) = CONCAT44(*(undefined4 *)(*(long *)pSVar14 + 4),uVar4);
LAB_0116e6a8:
      *(long *)(local_e0 + 0xc0) = local_d8;
      if (*(long *)(lVar11 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Scanner::Next(pSVar14);
    pSVar14 = *(Scanner **)(this + 0xf8);
    plVar31 = plVar25;
  } while( true );
}

