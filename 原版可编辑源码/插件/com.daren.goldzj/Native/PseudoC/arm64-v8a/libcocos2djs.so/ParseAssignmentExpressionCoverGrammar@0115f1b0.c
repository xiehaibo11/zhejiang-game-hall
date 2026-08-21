
/* v8::internal::ParserBase<v8::internal::Parser>::ParseAssignmentExpressionCoverGrammar() */

Expression * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseAssignmentExpressionCoverGrammar
          (ParserBase<v8::internal::Parser> *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  ParserBase<v8::internal::Parser> *pPVar6;
  Expression *pEVar7;
  Expression *pEVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  undefined1 uVar13;
  uint uVar14;
  long *plVar15;
  int iVar16;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  **ppvVar17;
  uint uVar18;
  long lVar19;
  ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>> *this_00;
  int local_d0;
  undefined4 uStack_cc;
  FuncNameInferrer *local_c8;
  long lStack_c0;
  ParserBase<v8::internal::Parser> *local_b8;
  long local_b0;
  undefined4 local_a8;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  *local_a0;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  **local_98;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  **local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar11 = *(long *)(this + 0xf8);
  iVar1 = **(int **)(lVar11 + 8);
  if ((char)(*(int **)(lVar11 + 8))[0xe] == 'a') {
    lVar11 = Scope::AsDeclarationScope();
    if (*(byte *)(lVar11 + 0x85) - 0xd < 4) {
      pEVar7 = (Expression *)ParseYieldExpression(this);
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return pEVar7;
      }
      goto LAB_0115f9c4;
    }
    lVar11 = *(long *)(this + 0xf8);
  }
  lStack_c0 = *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3;
  *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  iVar16 = **(int **)(lVar11 + 8);
  local_c8 = (FuncNameInferrer *)(this + 0x20);
  pEVar7 = (Expression *)ParseLogicalExpression(this);
  plVar12 = *(long **)(this + 0xf8);
  bVar4 = *(byte *)(plVar12[1] + 0x38);
  if (bVar4 == 0xb) {
    pEVar7 = (Expression *)ParseConditionalContinuation(this,pEVar7,iVar16);
    plVar12 = *(long **)(this + 0xf8);
    bVar4 = *(byte *)(plVar12[1] + 0x38);
  }
  uVar18 = (uint)bVar4;
  if (uVar18 - 0xf < 0xf) {
    if (uVar18 == 0xf) {
      uStack_cc = ((undefined4 *)*plVar12)[1];
      local_d0 = iVar1;
      if (((*(uint *)(pEVar7 + 4) >> 6 & 1) == 0) &&
         (pEVar7 == (Expression *)0x0 || (*(uint *)(pEVar7 + 4) & 0x43f) != 0x35)) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0xb0),*(undefined4 *)pEVar7,
                   *(undefined4 *)*plVar12,0x10f,0);
        lVar11 = *(long *)(this + 0x158);
        if (*(char *)(lVar11 + 0x30) == '\0') {
          *(undefined4 *)(this + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar11 + 0x30) = 1;
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
          this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
        pEVar7 = *(Expression **)(this + 0x88);
      }
      else {
        local_b8 = *(ParserBase<v8::internal::Parser> **)(this + 0x128);
        local_98 = &local_a0;
        *(int *)(local_b8 + 0x70) = iVar1;
        local_a8 = 0;
        local_a0 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)0x0;
        local_88 = *(ulong *)(this + 0x118);
        local_90 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    **)&DAT_ffffffff;
        local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(this + 0x120));
        local_b0 = ((ulong)(CONCAT61((int6)((ulong)local_b0 >> 0x10),local_b8[0x83]) & 0xffffff) &
                   0xffffffffffff01) << 8;
        *(undefined8 *)(this + 0x128) = 0;
        *(undefined8 *)(this + 0x118) = 0xffffffff;
        *(undefined4 *)(this + 0x120) = 0;
        Parser::DeclareArrowFunctionFormalParameters
                  ((Parser *)this,(ParserFormalParameters *)&local_b8,pEVar7,(Location *)&local_d0);
        pEVar7 = (Expression *)ParseArrowFunctionLiteral(this,(ParserFormalParameters *)&local_b8);
      }
    }
    else {
      uVar10 = *(uint *)(pEVar7 + 4);
      if ((pEVar7 == (Expression *)0x0) || ((uVar10 & 0x43f) != 0x35)) {
LAB_0115f384:
        if ((uVar10 & 0x3f) == 0x2c) {
          plVar15 = *(long **)(this + 0xc0);
          if (*(byte *)(plVar15 + 2) - 1 < 5) {
            if (*(byte *)(plVar15 + 2) - 3 < 3) {
              lVar19 = *plVar15;
              PendingCompilationErrorHandler::ReportMessageAt
                        (*(PendingCompilationErrorHandler **)(lVar19 + 0xb0),iVar1,
                         *(undefined4 *)(*plVar12 + 4),0xf7,0);
              lVar11 = *(long *)(lVar19 + 0x158);
              if (*(char *)(lVar11 + 0x30) == '\0') {
                *(undefined4 *)(lVar19 + 0x160) = 0xffffffff;
                *(undefined1 *)(lVar11 + 0x30) = 1;
                *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
                *(undefined1 *)(lVar19 + 0x1a0) = 0x6d;
                *(undefined1 *)(lVar19 + 0x1f0) = 0x6d;
                *(undefined1 *)(lVar19 + 0x240) = 0x6d;
              }
            }
            else {
              *(ulong *)((long)plVar15 + 0x4c) = CONCAT44(*(undefined4 *)(*plVar12 + 4),iVar1);
              *(undefined4 *)((long)plVar15 + 0x54) = 0xf7;
            }
          }
          plVar12 = *(long **)(this + 0xc0);
          if (*(byte *)(plVar12 + 2) < 3) {
            if (*(uint *)(plVar12 + 7) <= *(uint *)((long)plVar12 + 0x3c)) {
              lVar19 = *plVar12;
              PendingCompilationErrorHandler::ReportMessageAt
                        (*(PendingCompilationErrorHandler **)(lVar19 + 0xb0),(int)plVar12[7],
                         *(undefined4 *)((long)plVar12 + 0x3c),(int)plVar12[6],0);
              lVar11 = *(long *)(lVar19 + 0x158);
              if (*(char *)(lVar11 + 0x30) == '\0') {
                *(undefined4 *)(lVar19 + 0x160) = 0xffffffff;
                *(undefined1 *)(lVar11 + 0x30) = 1;
                *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
                *(undefined1 *)(lVar19 + 0x1a0) = 0x6d;
                *(undefined1 *)(lVar19 + 0x1f0) = 0x6d;
                *(undefined1 *)(lVar19 + 0x240) = 0x6d;
              }
            }
            *(undefined4 *)((long)plVar12 + 0x34) = 0;
            plVar12[8] = 0xffffffff;
          }
        }
        else if ((uVar18 == 0x11) && ((uVar10 & 0x3e) == 0x16)) {
          if ((uVar10 >> 6 & 1) != 0) {
            if (*(byte *)(*(long *)(this + 0xc0) + 0x10) - 3 < 3) {
              uVar9 = 0xfd;
            }
            else {
              uVar9 = 0xfb;
            }
            PendingCompilationErrorHandler::ReportMessageAt
                      (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar1,
                       *(undefined4 *)(*plVar12 + 4),uVar9,0);
            lVar11 = *(long *)(this + 0x158);
            if (*(char *)(lVar11 + 0x30) == '\0') {
              *(undefined4 *)(this + 0x160) = 0xffffffff;
              *(undefined1 *)(lVar11 + 0x30) = 1;
              *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
              this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
              this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
              this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
            }
          }
          this_00 = *(ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>> **)
                     (this + 0xc0);
          if ((byte)this_00[0x10] < 3) {
            ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>::ValidatePattern
                      (this_00,pEVar7,iVar1,*(int *)(**(long **)(this + 0xf8) + 4));
            *(undefined4 *)(this_00 + 0x30) = 0;
            *(undefined8 *)(this_00 + 0x38) = 0xffffffff;
          }
        }
        else {
          pEVar7 = (Expression *)
                   RewriteInvalidReferenceExpression
                             (this,pEVar7,iVar1,*(undefined4 *)(*plVar12 + 4),0xfb);
        }
      }
      else {
        if ((*(byte *)(*(long *)this + 0x81) & 1) != 0) {
          pEVar8 = pEVar7 + 8;
          if ((uVar10 >> 8 & 1) != 0) {
            pEVar8 = (Expression *)(*(long *)pEVar8 + 8);
          }
          if ((*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) == *(long *)pEVar8) ||
             (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == *(long *)pEVar8))
          goto LAB_0115f384;
        }
        if ((uVar10 >> 6 & 1) != 0) {
          plVar15 = *(long **)(this + 0xc0);
          if (*(byte *)(plVar15 + 2) - 1 < 5) {
            if (*(byte *)(plVar15 + 2) - 3 < 3) {
              lVar19 = *plVar15;
              PendingCompilationErrorHandler::ReportMessageAt
                        (*(PendingCompilationErrorHandler **)(lVar19 + 0xb0),iVar1,
                         *(undefined4 *)(*plVar12 + 4),0xfd,0);
              lVar11 = *(long *)(lVar19 + 0x158);
              if (*(char *)(lVar11 + 0x30) == '\0') {
                *(undefined4 *)(lVar19 + 0x160) = 0xffffffff;
                *(undefined1 *)(lVar11 + 0x30) = 1;
                *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
                *(undefined1 *)(lVar19 + 0x1a0) = 0x6d;
                *(undefined1 *)(lVar19 + 0x1f0) = 0x6d;
                *(undefined1 *)(lVar19 + 0x240) = 0x6d;
              }
            }
            else {
              *(ulong *)((long)plVar15 + 0x4c) = CONCAT44(*(undefined4 *)(*plVar12 + 4),iVar1);
              *(undefined4 *)((long)plVar15 + 0x54) = 0xfd;
            }
          }
        }
        lVar11 = *(long *)(this + 0xc0);
        if (*(byte *)(lVar11 + 0x10) < 3) {
          iVar16 = (int)*(undefined8 *)(lVar11 + 0x28) - (int)*(long *)(lVar11 + 0x20);
          if (iVar16 != 0) {
            lVar11 = *(long *)(**(long **)(lVar11 + 0x18) +
                              (*(long *)(lVar11 + 0x20) + (long)(iVar16 + -1)) * 0x10);
            uVar10 = *(uint *)(lVar11 + 4);
            *(uint *)(lVar11 + 4) = uVar10 | 0x80;
            if ((uVar10 >> 8 & 1) != 0) {
              Variable::SetMaybeAssigned(*(Variable **)(lVar11 + 8));
            }
          }
        }
      }
      Scanner::Next(*(Scanner **)(this + 0xf8));
      uVar2 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
      local_b0 = *(long *)(this + 0xc0);
      if (local_b0 == 0) {
        uVar13 = 0;
        local_a8._0_2_ = 0;
      }
      else {
        local_a8._0_2_ = (ushort)*(byte *)(local_b0 + 0x11) << 8;
        uVar13 = *(undefined1 *)(local_b0 + 0x12);
      }
      local_a8._0_3_ = CONCAT12(uVar13,(short)local_a8);
      local_a0 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)(this + 0xe0);
      *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_b8;
      local_98 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  **)(*(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4);
      local_70 = 0;
      if (local_b0 != 0) {
        if (*(byte *)(local_b0 + 0x10) < 3) {
          local_70 = *(undefined1 *)(local_b0 + 0x48);
        }
        else {
          local_70 = 0;
        }
      }
      local_88 = 0;
      uStack_78 = 0xffffffff;
      local_80 = 0xffffffff;
      local_b8 = this;
      local_90 = local_98;
      pEVar8 = (Expression *)ParseAssignmentExpressionCoverGrammar(this);
      pPVar6 = local_b8;
      if ((uint)local_80 <= local_80._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_b8 + 0xb0),local_80 & 0xffffffff,
                   local_80._4_4_,local_88 & 0xffffffff,0);
        lVar11 = *(long *)(pPVar6 + 0x158);
        if (*(char *)(lVar11 + 0x30) == '\0') {
          *(undefined4 *)(pPVar6 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar11 + 0x30) = 1;
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
          pPVar6[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar6[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar6[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
      }
      ppvVar17 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  **)(*(long *)(local_a0 + 8) - *(long *)local_a0 >> 4);
      if (local_98 < ppvVar17 || (long)local_98 - (long)ppvVar17 == 0) {
        if (local_98 < ppvVar17) {
          *(long *)(local_a0 + 8) = *(long *)local_a0 + (long)local_98 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append(local_a0,(long)local_98 - (long)ppvVar17);
      }
      local_90 = local_98;
      *(long *)(local_b8 + 0xc0) = local_b0;
      if (uVar18 == 0x11) {
        uVar10 = *(uint *)(pEVar7 + 4);
        if (((pEVar7 != (Expression *)0x0) && ((uVar10 & 0x3f) == 0x2c)) &&
           ((*(uint *)(*(long *)(pEVar7 + 8) + 4) & 0x3f) == 0x32)) {
          *(int *)(*(long *)(this + 0x10) + 0x10) = *(int *)(*(long *)(this + 0x10) + 0x10) + 1;
          uVar10 = *(uint *)(pEVar7 + 4);
        }
        uVar14 = *(uint *)(pEVar8 + 4);
        if (((uVar10 & 0x3f) == 0x2c) && ((uVar14 & 0x3f) == 0x26)) {
          uVar14 = uVar14 | 0x400;
          *(uint *)(pEVar8 + 4) = uVar14;
        }
        if ((uVar14 & 0x3e) == 0x1c) {
          if ((*(long *)(this + 0x58) != 0) && (*(long *)(this + 0x40) != *(long *)(this + 0x48))) {
            *(long *)(this + 0x48) = *(long *)(this + 0x48) + -8;
          }
        }
        else if (*(long *)(this + 0x40) != *(long *)(this + 0x48)) {
          FuncNameInferrer::InferFunctionsNames((FuncNameInferrer *)(this + 0x20));
        }
        Parser::SetFunctionNameFromIdentifierRef((Parser *)this,pEVar8,pEVar7);
      }
      else {
        plVar12 = *(long **)(this + 0xc0);
        uVar3 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
        if (*(byte *)(plVar12 + 2) - 3 < 3) {
          lVar19 = *plVar12;
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(lVar19 + 0xb0),iVar1,uVar3,0xfd,0);
          lVar11 = *(long *)(lVar19 + 0x158);
          if (*(char *)(lVar11 + 0x30) != '\0') goto LAB_0115f858;
          *(undefined4 *)(lVar19 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar11 + 0x30) = 1;
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
          *(undefined1 *)(lVar19 + 0x1a0) = 0x6d;
          *(undefined1 *)(lVar19 + 0x1f0) = 0x6d;
          *(undefined1 *)(lVar19 + 0x240) = 0x6d;
          lVar11 = *(long *)(this + 0x58);
        }
        else {
          if (*(uint *)((long)plVar12 + 0x44) < *(uint *)(plVar12 + 8)) {
            *(undefined4 *)((long)plVar12 + 0x34) = 0xfd;
            plVar12[8] = CONCAT44(uVar3,iVar1);
          }
LAB_0115f858:
          lVar11 = *(long *)(this + 0x58);
        }
        if ((lVar11 != 0) && (*(long *)(this + 0x40) != *(long *)(this + 0x48))) {
          *(long *)(this + 0x48) = *(long *)(this + 0x48) + -8;
        }
      }
      pEVar7 = (Expression *)
               AstNodeFactory::NewAssignment
                         ((AstNodeFactory *)(this + 0x68),uVar18,pEVar7,pEVar8,uVar2);
    }
  }
  FuncNameInferrer::State::~State((State *)&local_c8);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return pEVar7;
  }
LAB_0115f9c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

