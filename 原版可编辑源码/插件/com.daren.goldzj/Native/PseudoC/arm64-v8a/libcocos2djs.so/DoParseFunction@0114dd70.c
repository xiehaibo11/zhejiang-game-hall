
/* v8::internal::Parser::DoParseFunction(v8::internal::Isolate*, v8::internal::ParseInfo*,
   v8::internal::AstRawString const*) */

void __thiscall
v8::internal::Parser::DoParseFunction
          (Parser *this,Isolate *param_1,ParseInfo *param_2,AstRawString *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  ParseInfo PVar5;
  char cVar6;
  ParseInfo PVar7;
  Parser PVar8;
  ushort uVar9;
  long lVar10;
  DeclarationScope *pDVar11;
  Parser *pPVar12;
  uint uVar13;
  Scanner *pSVar14;
  Expression *pEVar15;
  long lVar16;
  ulong *puVar17;
  Expression *pEVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  long *plVar21;
  ulong *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  Scope *this_00;
  undefined8 uVar25;
  ulong *puVar26;
  long *plVar27;
  Zone *pZVar28;
  long *plVar29;
  FuncNameInferrer *local_170;
  long lStack_168;
  Parser *local_160;
  long lStack_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined8 local_14c;
  DeclarationScope *local_140;
  undefined2 local_138;
  int local_134;
  int local_130;
  ulong local_128;
  ulong *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  Parser *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  Parser *local_e0;
  long local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  Parser *local_c0;
  long lStack_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  Parser *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  FuncNameInferrer::PushEnclosingName((FuncNameInferrer *)(this + 0x20),param_3);
  *(undefined4 *)(this + 0x100) = 0;
  this_00 = *(Scope **)(this + 8);
  uVar2 = *(undefined4 *)(this + 0x2f0);
  *(int *)(this + 0x100) = *(int *)(param_2 + 0x44) + -1;
  *(undefined4 *)(this + 0x2f0) = 1;
  uStack_d0 = Scope::GetClosureScope(this_00);
  uStack_f8 = *(undefined8 *)this;
  local_e0 = this + 0x10;
  *(undefined8 *)this = uStack_d0;
  local_e8 = 0;
  local_f0 = 0;
  local_d8 = *(long *)(this + 0x10);
  local_c8 = 0;
  *(Parser ***)(this + 0x10) = &local_100;
  uVar24 = uStack_d0;
  if (local_d8 != 0) {
    uVar4 = *(undefined1 *)(local_d8 + 0x39);
    *(undefined1 *)(local_d8 + 0x39) = 0;
    *(undefined1 *)(local_d8 + 0x3a) = uVar4;
    uVar24 = *(undefined8 *)this;
  }
  *(Scope **)this = this_00;
  PVar5 = param_2[0x30];
  local_100 = this;
  if ((byte)PVar5 - 9 < 2) {
    if (4 < (byte)PVar5 - 10) {
LAB_0114ded8:
      pZVar28 = *(Zone **)(this + 0xb8);
      local_140 = *(DeclarationScope **)(pZVar28 + 0x10);
      if ((ulong)(*(long *)(pZVar28 + 0x18) - (long)local_140) < 0xe0) {
        local_140 = (DeclarationScope *)Zone::NewExpand(pZVar28,0xe0);
      }
      else {
        *(DeclarationScope **)(pZVar28 + 0x10) = local_140 + 0xe0;
      }
      DeclarationScope::DeclarationScope(local_140,pZVar28,*(undefined8 *)this,2,PVar5);
      *(undefined1 *)(*(long *)(this + 0x10) + 0x3b) = 1;
      *(ushort *)(local_140 + 0x83) = *(ushort *)(local_140 + 0x83) | 0x400;
      uVar13 = *(uint *)(param_2 + 8);
      lVar16 = 0x20;
      if ((uVar13 & 8) != 0) {
        lVar16 = 0x24;
      }
      *(int *)(this + lVar16 + 0x310) = *(int *)(this + lVar16 + 0x310) + 1;
      *(ushort *)(local_140 + 0x81) =
           *(ushort *)(local_140 + 0x81) & 0xfffe | (ushort)(uVar13 >> 3) & 1;
      puVar1 = &local_128;
      *(undefined4 *)(local_140 + 0x70) = *(undefined4 *)(param_2 + 0x38);
      local_138 = 0x100;
      local_134 = 0;
      local_130 = 0;
      local_128 = 0;
      uStack_110 = 0xffffffff;
      local_118 = 0xffffffff;
      local_108 = 0;
      lStack_158 = *(long *)(this + 0xc0);
      local_150 = 0x103;
      local_14e = 0;
      if (lStack_158 != 0) {
        local_14e = *(undefined1 *)(lStack_158 + 0x12);
      }
      *(Parser ***)(this + 0xc0) = &local_160;
      local_14c = 0xffffffff;
      pSVar14 = *(Scanner **)(this + 0xf8);
      uVar25 = *(undefined8 *)this;
      *(DeclarationScope **)this = local_140;
      local_160 = this;
      local_120 = puVar1;
      if (*(char *)(*(long *)(pSVar14 + 8) + 0x38) == '\x05') {
        Scanner::Next(pSVar14);
        ParserBase<v8::internal::Parser>::ParseFormalParameterList
                  ((ParserBase<v8::internal::Parser> *)this,(ParserFormalParameters *)&local_140);
        uVar13 = Scanner::Next(*(Scanner **)(this + 0xf8));
        if ((uVar13 & 0xff) != 6) {
          ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                    ((ParserBase<v8::internal::Parser> *)this,uVar13);
        }
      }
      else {
        uVar20 = *(undefined8 *)(this + 0x110);
        *(DeclarationScope ***)(this + 0x110) = &local_140;
        lStack_168 = *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3;
        *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
        plVar27 = *(long **)(local_140 + 0x60);
        uVar19 = **(undefined4 **)(pSVar14 + 8);
        local_170 = (FuncNameInferrer *)(this + 0x20);
        pEVar18 = (Expression *)
                  ParserBase<v8::internal::Parser>::ParseBindingPattern
                            ((ParserBase<v8::internal::Parser> *)this);
        if ((pEVar18 == (Expression *)0x0) || ((*(uint *)(pEVar18 + 4) & 0x43f) != 0x35)) {
          local_138 = local_138 & 0xff;
        }
        else {
          pEVar15 = pEVar18 + 8;
          if ((*(uint *)(pEVar18 + 4) >> 8 & 1) != 0) {
            pEVar15 = (Expression *)(*(long *)pEVar15 + 8);
          }
          uVar3 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
          if ((*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) == *(long *)pEVar15) ||
             (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == *(long *)pEVar15)) {
            plVar21 = *(long **)(this + 0xc0);
            if (*(byte *)(plVar21 + 2) - 1 < 3) {
              plVar29 = (long *)*plVar21;
              if (*(byte *)(plVar21 + 2) == 3) {
                if ((*(byte *)(*plVar29 + 0x81) & 1) == 0) {
                  lVar16 = plVar29[0x22];
                  *(ulong *)(lVar16 + 0x30) = CONCAT44(uVar3,uVar19);
                  *(undefined4 *)(lVar16 + 0x38) = 0x128;
                }
                else {
                  PendingCompilationErrorHandler::ReportMessageAt
                            ((PendingCompilationErrorHandler *)plVar29[0x16],uVar19,uVar3,0x128,0);
                  lVar16 = plVar29[0x2b];
                  if (*(char *)(lVar16 + 0x30) == '\0') {
                    *(undefined4 *)(plVar29 + 0x2c) = 0xffffffff;
                    *(undefined1 *)(lVar16 + 0x30) = 1;
                    *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
                    *(undefined1 *)(plVar29 + 0x34) = 0x6d;
                    *(undefined1 *)(plVar29 + 0x3e) = 0x6d;
                    *(undefined1 *)(plVar29 + 0x48) = 0x6d;
                  }
                }
              }
              else {
                plVar29[0x23] = CONCAT44(uVar3,uVar19);
                *(undefined4 *)(*plVar21 + 0x120) = 0x128;
              }
            }
          }
        }
        pSVar14 = *(Scanner **)(this + 0xf8);
        if (*(char *)(*(long *)(pSVar14 + 8) + 0x38) == '\x11') {
          Scanner::Next(pSVar14);
          cVar6 = (byte)local_138;
          local_138 = local_138 & 0xff;
          if (cVar6 == '\0') {
            PVar8 = this[0x130];
            this[0x130] = (Parser)0x1;
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
            local_a8 = this + 0xe0;
            *(Parser ***)(this + 0xc0) = &local_c0;
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
            local_c0 = this;
            local_98 = local_a0;
            pEVar15 = (Expression *)
                      ParserBase<v8::internal::Parser>::ParseAssignmentExpressionCoverGrammar
                                ((ParserBase<v8::internal::Parser> *)this);
            pPVar12 = local_c0;
            if ((uint)local_88 <= local_88._4_4_) {
              PendingCompilationErrorHandler::ReportMessageAt
                        (*(PendingCompilationErrorHandler **)(local_c0 + 0xb0),local_88 & 0xffffffff
                         ,local_88._4_4_,local_90 & 0xffffffff,0);
              lVar16 = *(long *)(pPVar12 + 0x158);
              if (*(char *)(lVar16 + 0x30) == '\0') {
                *(undefined4 *)(pPVar12 + 0x160) = 0xffffffff;
                *(undefined1 *)(lVar16 + 0x30) = 1;
                *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
                pPVar12[0x1a0] = (Parser)0x6d;
                pPVar12[0x1f0] = (Parser)0x6d;
                pPVar12[0x240] = (Parser)0x6d;
              }
            }
            uVar23 = *(long *)(local_a8 + 8) - *(long *)local_a8 >> 4;
            if (local_a0 < uVar23 || local_a0 - uVar23 == 0) {
              if (local_a0 < uVar23) {
                *(ulong *)(local_a8 + 8) = *(long *)local_a8 + local_a0 * 0x10;
              }
            }
            else {
              std::__ndk1::
              vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
              ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                          *)local_a8,local_a0 - uVar23);
            }
            local_98 = local_a0;
            *(long *)(local_c0 + 0xc0) = lStack_b8;
            SetFunctionNameFromIdentifierRef(this,pEVar15,pEVar18);
            pSVar14 = *(Scanner **)(this + 0xf8);
            this[0x130] = PVar8;
            goto LAB_0114e2e0;
          }
          ParserBase<v8::internal::Parser>::ReportMessage
                    ((ParserBase<v8::internal::Parser> *)this,0x121);
        }
        else {
          pEVar15 = (Expression *)0x0;
LAB_0114e2e0:
          plVar21 = *(long **)(*(long *)this + 0x60);
          uVar19 = *(undefined4 *)(*(long *)pSVar14 + 4);
          if (plVar27 != plVar21) {
            do {
              lVar16 = *(long *)(*plVar27 + 8);
              if (*(int *)(lVar16 + 0x24) == -1) {
                *(ushort *)(lVar16 + 0x28) = *(ushort *)(lVar16 + 0x28) & 0xbfff;
              }
              *(undefined4 *)(lVar16 + 0x24) = uVar19;
              plVar27 = (long *)(*plVar27 + 0x10);
            } while (plVar27 != plVar21);
            uVar19 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
          }
          if (((pEVar15 == (Expression *)0x0) && ((byte)local_138 == 0)) && (local_134 == local_130)
             ) {
            local_130 = local_134;
            local_134 = local_134 + 1;
          }
          uVar23 = (ulong)(byte)local_138;
          local_130 = local_130 + 1;
          pZVar28 = *(Zone **)local_140;
          puVar17 = *(ulong **)(pZVar28 + 0x10);
          if ((ulong)(*(long *)(pZVar28 + 0x18) - (long)puVar17) < 0x20) {
            puVar17 = (ulong *)Zone::NewExpand(pZVar28,0x20);
          }
          else {
            *(ulong **)(pZVar28 + 0x10) = puVar17 + 4;
          }
          uVar3 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
          *puVar17 = uVar23 | (ulong)pEVar15;
          puVar17[1] = (ulong)pEVar18;
          *(undefined4 *)(puVar17 + 2) = uVar3;
          *(undefined4 *)((long)puVar17 + 0x14) = uVar19;
          puVar17[3] = 0;
          *local_120 = (ulong)puVar17;
          local_120 = puVar17 + 3;
        }
        FuncNameInferrer::State::~State((State *)&local_170);
        puVar17 = local_120;
        pDVar11 = local_140;
        cVar6 = local_138._1_1_;
        if (local_138._1_1_ == '\0') {
          plVar21 = *(long **)(local_140 + 0x20);
          uVar23 = (ulong)*(uint *)(local_140 + 0x28);
          *(ushort *)(local_140 + 0x83) = *(ushort *)(local_140 + 0x83) & 0xfffe;
          plVar27 = plVar21;
          while (plVar29 = plVar27, plVar29 < plVar21 + uVar23 * 3) {
            plVar27 = plVar29 + 3;
            if (*plVar29 != 0) {
              do {
                uVar9 = *(ushort *)(plVar29[1] + 0x28);
                if ((uVar9 & 0x70) == 0x10) {
                  *(ushort *)(plVar29[1] + 0x28) = uVar9 & 0xeff0;
                  plVar21 = *(long **)(local_140 + 0x20);
                  uVar23 = (ulong)*(uint *)(local_140 + 0x28);
                }
                do {
                  plVar29 = plVar29 + 3;
                  if (plVar21 + uVar23 * 3 <= plVar29) goto LAB_0114e460;
                } while (*plVar29 == 0);
              } while( true );
            }
          }
        }
LAB_0114e460:
        if (puVar1 != local_120) {
          uVar19 = 2;
          puVar26 = puVar1;
          if (local_138._1_1_ == '\0') {
            uVar19 = 3;
          }
          do {
            puVar22 = (ulong *)*puVar26;
            if (cVar6 == '\0') {
              plVar27 = (long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
            }
            else {
              uVar23 = puVar22[1];
              if ((*(uint *)(uVar23 + 4) & 0x3f) != 0x35) {
                uVar23 = 0;
              }
              plVar27 = (long *)(uVar23 + 8);
              if ((*(byte *)(uVar23 + 5) & 1) != 0) {
                plVar27 = (long *)(*plVar27 + 8);
              }
            }
            DeclarationScope::DeclareParameter
                      (pDVar11,*plVar27,uVar19,3 < *puVar22,(*puVar22 & 3) != 0,
                       *(undefined8 *)(this + 0x60),(int)puVar22[2]);
            uVar23 = *puVar26;
            puVar26 = (ulong *)(uVar23 + 0x18);
          } while ((ulong *)(uVar23 + 0x18) != puVar17);
        }
        *(undefined8 *)(this + 0x110) = uVar20;
      }
      local_118 = local_14c;
      *(undefined8 *)this = uVar25;
      *(long *)(local_160 + 0xc0) = lStack_158;
      if (*(uint *)(this + 0x100) != *(int *)(param_2 + 0x44) - 1U) {
        if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) != '\0') goto LAB_0114e604;
        AstFunctionLiteralIdReindexer::AstFunctionLiteralIdReindexer
                  ((AstFunctionLiteralIdReindexer *)&local_c0,*(ulong *)(this + 0xa8),
                   *(int *)(param_2 + 0x44) + ~*(uint *)(this + 0x100));
        puVar17 = local_120;
        for (; puVar1 != puVar17; puVar1 = (ulong *)(*puVar1 + 0x18)) {
          puVar26 = (ulong *)*puVar1;
          pEVar18 = (Expression *)puVar26[1];
          if (pEVar18 != (Expression *)0x0) {
            AstFunctionLiteralIdReindexer::Reindex
                      ((AstFunctionLiteralIdReindexer *)&local_c0,pEVar18);
          }
          pEVar18 = (Expression *)(*puVar26 & 0xfffffffffffffffc);
          if (pEVar18 != (Expression *)0x0) {
            AstFunctionLiteralIdReindexer::Reindex
                      ((AstFunctionLiteralIdReindexer *)&local_c0,pEVar18);
          }
        }
        *(undefined4 *)(this + 0x100) = 0;
        *(int *)(this + 0x100) = *(int *)(param_2 + 0x44) + -1;
        AstFunctionLiteralIdReindexer::~AstFunctionLiteralIdReindexer
                  ((AstFunctionLiteralIdReindexer *)&local_c0);
      }
      lVar16 = ParserBase<v8::internal::Parser>::ParseArrowFunctionLiteral
                         ((ParserBase<v8::internal::Parser> *)this,
                          (ParserFormalParameters *)&local_140);
      if (*(int *)(**(long **)(this + 0xf8) + 4) == *(int *)(param_2 + 0x3c)) {
        if ((*(uint *)(lVar16 + 4) & 0x3f) != 0x26) {
          lVar16 = 0;
        }
      }
      else {
        lVar16 = 0;
      }
      goto LAB_0114e5f4;
    }
    if (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) == '_') {
      Scanner::Next(*(Scanner **)(this + 0xf8));
      cVar6 = *(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38);
      if ((cVar6 == '\x05') || ((byte)(cVar6 + 0xa4U) < 10)) goto LAB_0114ded8;
    }
    if (*(char *)(*(long *)(this + 0xb0) + 1) == '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","stack_overflow()");
    }
  }
  else {
    if (((byte)PVar5 & 0xfe) == 4) {
      lVar16 = DefaultConstructor((AstRawString *)this,SUB81(param_3,0),(uint)((byte)PVar5 - 5 < 2),
                                  *(int *)(param_2 + 0x38));
    }
    else {
      PVar7 = param_2[0x31];
      if (PVar7 == (ParseInfo)0x4) {
        uVar25 = PrepareWrappedArguments(this,param_1,param_2,*(Zone **)(this + 0xb8));
        PVar7 = param_2[0x31];
      }
      else {
        uVar25 = 0;
      }
      lVar16 = ParseFunctionLiteral
                         (this,param_3,0xffffffff,1,PVar5,0xffffffff,PVar7,
                          *(uint *)(param_2 + 8) >> 3 & 1,uVar25);
    }
LAB_0114e5f4:
    if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0') {
      uVar13 = *(uint *)(lVar16 + 4) & 0xffe00000 |
               *(uint *)(lVar16 + 4) & 0xfffff | (*(uint *)(param_2 + 8) >> 0xe & 1) << 0x14;
      *(uint *)(lVar16 + 4) = uVar13;
      if (((byte)param_2[0xb] >> 2 & 1) != 0) {
        *(uint *)(lVar16 + 4) = uVar13 | 0x400000;
      }
      goto LAB_0114e608;
    }
  }
LAB_0114e604:
  lVar16 = 0;
LAB_0114e608:
  *(undefined8 *)this = uVar24;
  *(long *)local_e0 = local_d8;
  *(undefined8 *)local_100 = uStack_f8;
  *(undefined4 *)(this + 0x2f0) = uVar2;
  if (*(long *)(lVar10 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar16);
}

