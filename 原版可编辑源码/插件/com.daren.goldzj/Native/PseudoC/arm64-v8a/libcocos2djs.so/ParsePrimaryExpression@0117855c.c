
/* v8::internal::ParserBase<v8::internal::PreParser>::ParsePrimaryExpression() */

uint __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParsePrimaryExpression
          (ParserBase<v8::internal::PreParser> *this)

{
  uint uVar1;
  int iVar2;
  ParserBase<v8::internal::PreParser> PVar3;
  ushort uVar4;
  long lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  Scanner *pSVar11;
  AstRawString *pAVar12;
  Scope *pSVar13;
  Scope *pSVar14;
  DeclarationScope *pDVar15;
  undefined8 uVar16;
  long lVar17;
  uint *puVar18;
  int iVar19;
  long lVar20;
  int *piVar21;
  long *plVar22;
  byte bVar23;
  long *plVar24;
  undefined8 uVar25;
  Zone *this_00;
  uint uVar26;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ParserBase<v8::internal::PreParser> *local_a8;
  long local_a0;
  undefined2 local_98;
  undefined1 local_96;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  *local_90;
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined2 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar10 = GetCurrentStackPosition();
  if (uVar10 < *(ulong *)(this + 0x78)) {
    lVar17 = *(long *)(this + 200);
    lVar20 = *(long *)(lVar17 + 0x18);
    if (*(char *)(lVar20 + 0x30) == '\0') {
      *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar20 + 0x30) = 1;
      *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
      *(undefined1 *)(lVar17 + 0x60) = 0x6d;
      *(undefined1 *)(lVar17 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar17 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0x80) = 0x101;
  }
  pSVar11 = *(Scanner **)(this + 200);
  bVar23 = (byte)(*(uint **)(pSVar11 + 8))[0xe];
  uVar26 = (uint)bVar23;
  uVar8 = **(uint **)(pSVar11 + 8);
  if (bVar23 - 0x5c < 10) {
    Scanner::Next(pSVar11);
    if (bVar23 == 0x5f) {
      pSVar11 = *(Scanner **)(this + 200);
      if (*(char *)(*(long *)(pSVar11 + 8) + 0x4c) != '\0') {
LAB_01178644:
        uVar26 = 0x5f;
        goto LAB_01178648;
      }
      piVar21 = *(int **)pSVar11;
      iVar19 = (piVar21[1] - *piVar21) + -2;
      if ((char)piVar21[0xe] != 'Z') {
        iVar19 = piVar21[1] - *piVar21;
      }
      if (piVar21[6] >> ((*(byte *)(piVar21 + 7) ^ 1) & 0x1f) != iVar19) goto LAB_01178644;
      uVar26 = (uint)*(byte *)(*(long *)(pSVar11 + 8) + 0x38);
      if (uVar26 == 0x49) {
        uVar26 = ParseAsyncFunctionLiteral(this);
        goto LAB_01179600;
      }
      if ((9 < uVar26 - 0x5c) || (cVar7 = Scanner::PeekAhead(pSVar11), cVar7 != '\x0f'))
      goto LAB_01178644;
      uVar26 = Scanner::Next(*(Scanner **)(this + 200));
      uVar8 = *(uint *)**(undefined8 **)(this + 200);
      iVar19 = 10;
    }
    else {
LAB_01178648:
      iVar19 = 9;
    }
    pSVar11 = *(Scanner **)(this + 200);
    if (*(char *)(*(long *)(pSVar11 + 8) + 0x38) != '\x0f') {
      if ((uVar26 & 0xfc) == 0x5c) {
        pAVar12 = (AstRawString *)Scanner::CurrentSymbol(pSVar11,*(AstValueFactory **)(this + 0x28))
        ;
        piVar21 = (int *)**(undefined8 **)(this + 200);
        cVar7 = (char)piVar21[0xe];
        if (cVar7 == 'l') {
LAB_01179104:
          uVar26 = 0x80;
        }
        else if (cVar7 == '`') {
LAB_01178fa8:
          uVar26 = 0x50;
        }
        else if (cVar7 == '_') {
LAB_0117869c:
          uVar26 = 0x60;
        }
        else {
          lVar17 = *(long *)(*(long *)(this + 0x28) + 0x38);
          if (*(AstRawString **)(lVar17 + 0xb0) == pAVar12) {
LAB_0117910c:
            uVar26 = 0x40;
          }
          else if (*(AstRawString **)(lVar17 + 0x158) == pAVar12) {
LAB_01179114:
            uVar26 = 0x70;
          }
          else {
            iVar19 = (piVar21[1] - *piVar21) + -2;
            if (cVar7 != 'Z') {
              iVar19 = piVar21[1] - *piVar21;
            }
            if (piVar21[6] >> ((*(byte *)(piVar21 + 7) ^ 1) & 0x1f) == iVar19) {
              if (*(AstRawString **)(lVar17 + 0x118) == pAVar12) {
LAB_0117911c:
                uVar26 = 0x20;
              }
              else {
                if (*(AstRawString **)(lVar17 + 0x70) != pAVar12) goto LAB_01178768;
                uVar10 = Scope::ShouldBanArguments(*(Scope **)this);
                if ((uVar10 & 1) != 0) {
                  ReportMessage(this,0xc);
                  goto LAB_01178dd4;
                }
                uVar26 = 0x30;
              }
            }
            else {
LAB_01178768:
              uVar26 = 0x10;
            }
          }
        }
      }
      else {
        uVar4 = *(ushort *)(*(long *)this + 0x81);
        lVar17 = Scope::AsDeclarationScope();
        cVar7 = *(char *)(lVar17 + 0x85);
        if (this[0x71] == (ParserBase<v8::internal::PreParser>)0x0) {
          lVar17 = Scope::AsDeclarationScope();
          bVar6 = *(byte *)(lVar17 + 0x85) - 10 < 5;
        }
        else {
          bVar6 = true;
        }
        if ((uVar26 & 0xff) == 0x61) {
          if (((uVar4 & 1) == 0) && (3 < (byte)(cVar7 - 0xdU))) goto LAB_01178d64;
        }
        else if ((uVar26 & 0xff) == 0x60) {
          if (!bVar6) {
LAB_01178d64:
            pSVar11 = *(Scanner **)(this + 200);
            plVar22 = *(long **)(this + 0x90);
            puVar18 = *(uint **)pSVar11;
            bVar23 = *(byte *)(plVar22 + 2);
            if ((uVar26 & 0xff) == 0x60) {
              if (bVar23 < 3) {
                cVar7 = (char)plVar22[9];
                plVar24 = plVar22;
                while (cVar7 != '\0') {
                  if ((char)plVar24[2] == '\x02') {
                    uVar25 = *(undefined8 *)puVar18;
                    *(undefined4 *)((long)plVar24 + 0x54) = 0x130;
                    *(undefined8 *)((long)plVar24 + 0x4c) = uVar25;
                  }
                  plVar24 = (long *)plVar24[1];
                  if (plVar24 == (long *)0x0) break;
                  cVar7 = (char)plVar22[9];
                }
                pSVar11 = *(Scanner **)(this + 200);
              }
              pAVar12 = (AstRawString *)
                        Scanner::CurrentSymbol(pSVar11,*(AstValueFactory **)(this + 0x28));
              piVar21 = (int *)**(undefined8 **)(this + 200);
              cVar7 = (char)piVar21[0xe];
            }
            else {
              if (bVar23 - 1 < 3) {
                plVar24 = (long *)*plVar22;
                if (bVar23 == 3) {
                  if ((*(byte *)(*plVar24 + 0x81) & 1) == 0) {
                    *(bool *)(plVar24[0x1c] + 0x15) = *puVar18 <= puVar18[1];
                  }
                  else {
                    PendingCompilationErrorHandler::ReportMessageAt
                              ((PendingCompilationErrorHandler *)plVar24[0x10],*puVar18,puVar18[1],
                               0x13c,0);
                    lVar17 = plVar24[0x19];
                    lVar20 = *(long *)(lVar17 + 0x18);
                    if (*(char *)(lVar20 + 0x30) == '\0') {
                      *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
                      *(undefined1 *)(lVar20 + 0x30) = 1;
                      *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
                      *(undefined1 *)(lVar17 + 0x60) = 0x6d;
                      *(undefined1 *)(lVar17 + 0xb0) = 0x6d;
                      *(undefined1 *)(lVar17 + 0x100) = 0x6d;
                    }
                  }
                }
                else {
                  plVar24[0x1d] = *(long *)puVar18;
                  *(undefined4 *)(*plVar22 + 0xf0) = 0x13c;
                }
              }
              pAVar12 = (AstRawString *)
                        Scanner::CurrentSymbol
                                  (*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
              piVar21 = (int *)**(undefined8 **)(this + 200);
              cVar7 = (char)piVar21[0xe];
            }
            if (cVar7 != 'l') {
              if (cVar7 != '`') {
                if (cVar7 != '_') {
                  lVar17 = *(long *)(*(long *)(this + 0x28) + 0x38);
                  if (*(AstRawString **)(lVar17 + 0xb0) != pAVar12) {
                    if (*(AstRawString **)(lVar17 + 0x158) != pAVar12) {
                      iVar19 = (piVar21[1] - *piVar21) + -2;
                      if (cVar7 != 'Z') {
                        iVar19 = piVar21[1] - *piVar21;
                      }
                      if (piVar21[6] >> ((*(byte *)(piVar21 + 7) ^ 1) & 0x1f) == iVar19) {
                        if (*(AstRawString **)(lVar17 + 0x118) != pAVar12) {
                          uVar26 = 0x30;
                          if (*(AstRawString **)(lVar17 + 0x70) != pAVar12) {
                            uVar26 = 0x10;
                          }
                          goto LAB_01179120;
                        }
                        goto LAB_0117911c;
                      }
                      goto LAB_01178768;
                    }
                    goto LAB_01179114;
                  }
                  goto LAB_0117910c;
                }
                goto LAB_0117869c;
              }
              goto LAB_01178fa8;
            }
            goto LAB_01179104;
          }
        }
        else if (((uVar26 - 0x61 & 0xff) < 5) && ((uVar4 & 1) == 0)) goto LAB_01178d64;
        ReportUnexpectedToken(this,uVar26);
LAB_01178dd4:
        uVar26 = 0x10;
        pAVar12 = *(AstRawString **)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x110);
      }
LAB_01179120:
      ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>>::NewVariable
                (*(ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>> **)
                  (this + 0x90),pAVar12,uVar8);
      uVar26 = uVar26 | 3;
      goto LAB_01179600;
    }
    local_96 = 1;
    bVar23 = 1;
    if (iVar19 != 9) {
      bVar23 = 2;
    }
    local_a0 = *(long *)(this + 0x90);
    if ((byte)(bVar23 - 1) < 3) {
      local_98 = CONCAT11(1,bVar23);
    }
    else if (local_a0 == 0) {
      local_96 = 0;
      local_98 = (ushort)bVar23;
    }
    else {
      local_98 = CONCAT11(*(undefined1 *)(local_a0 + 0x11),bVar23);
      local_96 = *(undefined1 *)(local_a0 + 0x12);
    }
    local_90 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)(this + 0xb0);
    *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_a8;
    local_88 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
    local_60 = 1;
    if (iVar19 == 9) {
      if ((local_a0 == 0) || (2 < *(byte *)(local_a0 + 0x10))) {
        local_60 = 0;
      }
      else {
        local_60 = *(undefined1 *)(local_a0 + 0x48);
      }
    }
    local_78 = 0;
    local_54 = 0;
    uStack_68 = 0xffffffff;
    local_70 = 0xffffffff;
    local_5c = 0xffffffff;
    local_50 = 1;
    local_80 = local_88;
    if ((uVar26 & 0xfc) == 0x5c) {
      local_a8 = this;
      pAVar12 = (AstRawString *)Scanner::CurrentSymbol(pSVar11,*(AstValueFactory **)(this + 0x28));
      piVar21 = (int *)**(undefined8 **)(this + 200);
      cVar7 = (char)piVar21[0xe];
      if (cVar7 == 'l') {
        uVar26 = 8;
      }
      else if (cVar7 == '`') {
        uVar26 = 5;
      }
      else if (cVar7 == '_') {
        uVar26 = 6;
      }
      else {
        lVar17 = *(long *)(*(long *)(this + 0x28) + 0x38);
        if (*(AstRawString **)(lVar17 + 0xb0) == pAVar12) {
          uVar26 = 4;
        }
        else if (*(AstRawString **)(lVar17 + 0x158) == pAVar12) {
          uVar26 = 7;
        }
        else {
          iVar19 = (piVar21[1] - *piVar21) + -2;
          if (cVar7 != 'Z') {
            iVar19 = piVar21[1] - *piVar21;
          }
          if (piVar21[6] >> ((*(byte *)(piVar21 + 7) ^ 1) & 0x1f) == iVar19) {
            if (*(AstRawString **)(lVar17 + 0x118) != pAVar12) {
              if (*(AstRawString **)(lVar17 + 0x70) != pAVar12) goto LAB_01178f74;
              uVar10 = Scope::ShouldBanArguments(*(Scope **)this);
              if ((uVar10 & 1) == 0) {
                uVar26 = 3;
                goto LAB_011791a8;
              }
              ReportMessage(this,0xc);
              goto LAB_01179738;
            }
            uVar26 = 2;
          }
          else {
LAB_01178f74:
            uVar26 = 1;
          }
        }
      }
    }
    else {
      uVar4 = *(ushort *)(*(long *)this + 0x81);
      local_a8 = this;
      lVar17 = Scope::AsDeclarationScope();
      cVar7 = *(char *)(lVar17 + 0x85);
      if (this[0x71] == (ParserBase<v8::internal::PreParser>)0x0) {
        lVar17 = Scope::AsDeclarationScope();
        bVar6 = *(byte *)(lVar17 + 0x85) - 10 < 5;
      }
      else {
        bVar6 = true;
      }
      if ((uVar26 & 0xff) == 0x61) {
        if (((uVar4 & 1) != 0) || ((byte)(cVar7 - 0xdU) < 4)) goto LAB_0117972c;
      }
      else if ((uVar26 & 0xff) == 0x60) {
        if (bVar6) {
LAB_0117972c:
          ReportUnexpectedToken(this,uVar26);
LAB_01179738:
          uVar26 = 1;
          pAVar12 = *(AstRawString **)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x110);
          goto LAB_011791a8;
        }
      }
      else if ((4 < (uVar26 - 0x61 & 0xff)) || ((uVar4 & 1) != 0)) goto LAB_0117972c;
      pSVar11 = *(Scanner **)(this + 200);
      plVar22 = *(long **)(this + 0x90);
      puVar18 = *(uint **)pSVar11;
      bVar23 = *(byte *)(plVar22 + 2);
      if ((uVar26 & 0xff) == 0x60) {
        if (bVar23 < 3) {
          cVar7 = (char)plVar22[9];
          plVar24 = plVar22;
          while (cVar7 != '\0') {
            if ((char)plVar24[2] == '\x02') {
              uVar25 = *(undefined8 *)puVar18;
              *(undefined4 *)((long)plVar24 + 0x54) = 0x130;
              *(undefined8 *)((long)plVar24 + 0x4c) = uVar25;
            }
            plVar24 = (long *)plVar24[1];
            if (plVar24 == (long *)0x0) break;
            cVar7 = (char)plVar22[9];
          }
          pSVar11 = *(Scanner **)(this + 200);
        }
        pAVar12 = (AstRawString *)Scanner::CurrentSymbol(pSVar11,*(AstValueFactory **)(this + 0x28))
        ;
        piVar21 = (int *)**(undefined8 **)(this + 200);
        cVar7 = (char)piVar21[0xe];
        if (cVar7 == 'l') {
LAB_01179854:
          uVar26 = 8;
        }
        else {
          if (cVar7 != '`') goto LAB_01179844;
LAB_011797b0:
          uVar26 = 5;
        }
      }
      else {
        if (bVar23 - 1 < 3) {
          plVar24 = (long *)*plVar22;
          if (bVar23 == 3) {
            if ((*(byte *)(*plVar24 + 0x81) & 1) == 0) {
              *(bool *)(plVar24[0x1c] + 0x15) = *puVar18 <= puVar18[1];
            }
            else {
              PendingCompilationErrorHandler::ReportMessageAt
                        ((PendingCompilationErrorHandler *)plVar24[0x10],*puVar18,puVar18[1],0x13c,0
                        );
              lVar17 = plVar24[0x19];
              lVar20 = *(long *)(lVar17 + 0x18);
              if (*(char *)(lVar20 + 0x30) == '\0') {
                *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
                *(undefined1 *)(lVar20 + 0x30) = 1;
                *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
                *(undefined1 *)(lVar17 + 0x60) = 0x6d;
                *(undefined1 *)(lVar17 + 0xb0) = 0x6d;
                *(undefined1 *)(lVar17 + 0x100) = 0x6d;
              }
            }
          }
          else {
            plVar24[0x1d] = *(long *)puVar18;
            *(undefined4 *)(*plVar22 + 0xf0) = 0x13c;
          }
        }
        pAVar12 = (AstRawString *)
                  Scanner::CurrentSymbol
                            (*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
        piVar21 = (int *)**(undefined8 **)(this + 200);
        cVar7 = (char)piVar21[0xe];
        if (cVar7 == 'l') goto LAB_01179854;
        if (cVar7 == '`') goto LAB_011797b0;
LAB_01179844:
        if (cVar7 == '_') {
          uVar26 = 6;
        }
        else {
          lVar17 = *(long *)(*(long *)(this + 0x28) + 0x38);
          if (*(AstRawString **)(lVar17 + 0xb0) == pAVar12) {
            uVar26 = 4;
          }
          else if (*(AstRawString **)(lVar17 + 0x158) == pAVar12) {
            uVar26 = 7;
          }
          else {
            iVar19 = (piVar21[1] - *piVar21) + -2;
            if (cVar7 != 'Z') {
              iVar19 = piVar21[1] - *piVar21;
            }
            if (piVar21[6] >> ((*(byte *)(piVar21 + 7) ^ 1) & 0x1f) == iVar19) {
              if (*(AstRawString **)(lVar17 + 0x118) == pAVar12) {
                uVar26 = 2;
              }
              else {
                uVar26 = 3;
                if (*(AstRawString **)(lVar17 + 0x70) != pAVar12) {
                  uVar26 = 1;
                }
              }
            }
            else {
              uVar26 = 1;
            }
          }
        }
      }
    }
LAB_011791a8:
    if ((uVar26 & 0xe) == 2) {
      plVar22 = *(long **)(this + 0x90);
      if (*(byte *)(plVar22 + 2) - 1 < 3) {
        plVar24 = (long *)*plVar22;
        uVar1 = *(uint *)(**(long **)(this + 200) + 4);
        if (*(byte *)(plVar22 + 2) == 3) {
          if ((*(byte *)(*plVar24 + 0x81) & 1) == 0) {
            *(bool *)(plVar24[0x1c] + 0x15) = uVar8 <= uVar1;
          }
          else {
            PendingCompilationErrorHandler::ReportMessageAt
                      ((PendingCompilationErrorHandler *)plVar24[0x10],uVar8,uVar1,0x128,0);
            lVar17 = plVar24[0x19];
            lVar20 = *(long *)(lVar17 + 0x18);
            if (*(char *)(lVar20 + 0x30) == '\0') {
              *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
              *(undefined1 *)(lVar20 + 0x30) = 1;
              *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
              *(undefined1 *)(lVar17 + 0x60) = 0x6d;
              *(undefined1 *)(lVar17 + 0xb0) = 0x6d;
              *(undefined1 *)(lVar17 + 0x100) = 0x6d;
            }
          }
        }
        else {
          plVar24[0x1d] = CONCAT44(uVar1,uVar8);
          *(undefined4 *)(*plVar22 + 0xf0) = 0x128;
        }
      }
    }
    ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>>::NewVariable
              (*(ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>> **)
                (this + 0x90),pAVar12,uVar8);
    iVar19 = (int)local_80 - (int)local_88;
    if (0 < iVar19) {
      iVar2 = **(int **)(*(long *)(this + 200) + 8);
      piVar21 = (int *)(*(long *)local_90 + ((long)iVar19 + -1 + local_88) * 0x10 + 8);
      if (*piVar21 == -1) {
        lVar17 = (long)iVar19 + -2;
        do {
          *piVar21 = iVar2;
          if (lVar17 + 1 < 1) break;
          lVar20 = lVar17 + local_88;
          lVar17 = lVar17 + -1;
          piVar21 = (int *)(*(long *)local_90 + lVar20 * 0x10 + 8);
        } while (*piVar21 == -1);
      }
    }
    uVar26 = uVar26 << 4 | 3;
    uVar25 = ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
             ValidateAndCreateScope
                       ((ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>> *
                        )&local_a8);
    *(undefined8 *)(this + 0xf8) = uVar25;
    uVar10 = *(long *)(local_90 + 8) - *(long *)local_90 >> 4;
    if (local_88 < uVar10 || local_88 - uVar10 == 0) {
      if (local_88 < uVar10) {
        *(ulong *)(local_90 + 8) = *(long *)local_90 + local_88 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append(local_90,local_88 - uVar10);
    }
    local_80 = local_88;
    *(long *)(local_a8 + 0x90) = local_a0;
    goto LAB_01179600;
  }
  if (bVar23 - 0x54 < 7) {
    cVar7 = Scanner::Next(pSVar11);
    uVar26 = 4;
    if (cVar7 != 'Z') {
      uVar26 = 2;
    }
    goto LAB_01179600;
  }
  switch(uVar26) {
  case 0:
  case 1:
    uVar26 = ParseTemplateLiteral(this,0,uVar8,0);
    break;
  default:
    goto switchD_011786e8_caseD_2;
  case 3:
    uVar26 = ParseArrayLiteral(this);
    break;
  case 5:
    Scanner::Next(pSVar11);
    if (*(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) == '\x06') {
      Scanner::Next(*(Scanner **)(this + 200));
      if (*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) != '\x0f') {
        ReportUnexpectedToken(this,6);
      }
      this_00 = *(Zone **)(this + 0x88);
      pDVar15 = *(DeclarationScope **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)pDVar15) < 0xe0) {
        pDVar15 = (DeclarationScope *)Zone::NewExpand(this_00,0xe0);
      }
      else {
        *(DeclarationScope **)(this_00 + 0x10) = pDVar15 + 0xe0;
      }
      DeclarationScope::DeclarationScope(pDVar15,this_00,*(undefined8 *)this,2,9);
      uVar26 = 10;
      *(undefined1 *)(*(long *)(this + 0x10) + 0x3b) = 1;
      *(DeclarationScope **)(this + 0xf8) = pDVar15;
    }
    else {
      pSVar13 = *(Scope **)this;
      local_c8 = (ulong)(*(ushort *)(pSVar13 + 0x81) >> 1) & 1 | (ulong)pSVar13;
      local_c0 = *(undefined8 *)(pSVar13 + 0x10);
      local_b8 = *(undefined8 *)(pSVar13 + 0x50);
      lVar17 = Scope::GetClosureScope(pSVar13);
      local_b0 = *(undefined8 *)(lVar17 + 0x40);
      *(ushort *)(((ulong)pSVar13 & 0xfffffffffffffffe) + 0x81) =
           *(ushort *)(((ulong)pSVar13 & 0xfffffffffffffffe) + 0x81) & 0xfff9;
      local_a0 = *(long *)(this + 0x90);
      local_98 = 0x101;
      local_90 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)(this + 0xb0);
      local_96 = 1;
      *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_a8;
      local_88 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
      local_60 = 0;
      if (local_a0 != 0) {
        if (*(byte *)(local_a0 + 0x10) < 3) {
          local_60 = *(undefined1 *)(local_a0 + 0x48);
        }
        else {
          local_60 = 0;
        }
      }
      local_78 = 0;
      local_54 = 0;
      uStack_68 = 0xffffffff;
      local_70 = 0xffffffff;
      local_5c = 0xffffffff;
      local_50 = 1;
      cVar7 = *(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38);
      local_a8 = this;
      local_80 = local_88;
      if ((cVar7 == 'I') ||
         ((cVar7 == '_' && (cVar7 = Scanner::PeekAhead(*(Scanner **)(this + 200)), cVar7 == 'I'))))
      {
        *(byte *)(*(long *)(this + 0x10) + 0x39) = FLAG_max_lazy ^ 1;
      }
      PVar3 = this[0x100];
      this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
      uVar26 = ParseExpressionCoverGrammar(this);
      uVar8 = Scanner::Next(*(Scanner **)(this + 200));
      if ((uVar8 & 0xff) != 6) {
        ReportUnexpectedToken(this,uVar8);
      }
      if (*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) == '\x0f') {
        pDVar15 = (DeclarationScope *)
                  ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
                  ValidateAndCreateScope
                            ((ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>
                              *)&local_a8);
        *(DeclarationScope **)(this + 0xf8) = pDVar15;
        Scope::Snapshot::Reparent((Snapshot *)&local_c8,pDVar15);
      }
      else {
        ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
        ValidateExpression((ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>
                            *)&local_a8);
      }
      this[0x100] = PVar3;
      uVar10 = *(long *)(local_90 + 8) - *(long *)local_90 >> 4;
      if (local_88 < uVar10 || local_88 - uVar10 == 0) {
        if (local_88 < uVar10) {
          *(ulong *)(local_90 + 8) = *(long *)local_90 + local_88 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append(local_90,local_88 - uVar10);
      }
      uVar26 = uVar26 | 8;
      local_80 = local_88;
      *(long *)(local_a8 + 0x90) = local_a0;
      if ((1 < local_c8) && ((local_c8 & 1) != 0)) {
        pSVar13 = (Scope *)(local_c8 & 0xfffffffffffffffe);
        *(ushort *)(pSVar13 + 0x81) = *(ushort *)(pSVar13 + 0x81) | 2;
        lVar17 = Scope::GetDeclarationScope(pSVar13);
        uVar4 = *(ushort *)(lVar17 + 0x81);
        *(ushort *)(lVar17 + 0x81) = uVar4 | 2;
        if (((uVar4 & 1) == 0) &&
           ((*(char *)(lVar17 + 0x80) != '\x01' && (*(char *)(lVar17 + 0x80) != '\x04')))) {
          *(ushort *)(lVar17 + 0x81) = uVar4 | 6;
          *(undefined4 *)(lVar17 + 0x7c) = 3;
        }
        lVar17 = *(long *)(pSVar13 + 8);
        *(ushort *)(pSVar13 + 0x81) = *(ushort *)(pSVar13 + 0x81) | 0x40;
        while ((lVar17 != 0 && ((*(ushort *)(lVar17 + 0x81) >> 6 & 1) == 0))) {
          *(ushort *)(lVar17 + 0x81) = *(ushort *)(lVar17 + 0x81) | 0x40;
          lVar17 = *(long *)(lVar17 + 8);
        }
      }
    }
    break;
  case 8:
    uVar26 = ParseObjectLiteral(this);
    break;
  case 0x19:
  case 0x29:
    uVar10 = Scanner::ScanRegExpPattern(pSVar11);
    if ((uVar10 & 1) == 0) {
      Scanner::Next(*(Scanner **)(this + 200));
      uVar25 = 0x14a;
    }
    else {
      cVar7 = Scanner::ScanRegExpFlags(*(Scanner **)(this + 200));
      Scanner::Next(*(Scanner **)(this + 200));
      if (cVar7 != '\0') {
        uVar26 = 2;
        break;
      }
      uVar25 = 0x111;
    }
    ReportMessage(this,uVar25);
    goto LAB_01178a2c;
  case 0x2a:
    if ((this[0x101] != (ParserBase<v8::internal::PreParser>)0x0) || (*(long *)(this + 0x18) != 0))
    {
      uVar26 = ParseV8Intrinsic(this);
      break;
    }
    goto switchD_011786e8_caseD_2;
  case 0x49:
    uVar26 = ParseFunctionExpression(this);
    break;
  case 0x4b:
    uVar26 = ParseMemberWithPresentNewPrefixesExpression(this);
    break;
  case 0x53:
    Scanner::Next(pSVar11);
    pSVar13 = (Scope *)Scope::GetClosureScope(*(Scope **)this);
    pSVar14 = (Scope *)Scope::GetReceiverScope(pSVar13);
    lVar17 = *(long *)(pSVar14 + 0xb0);
    *(ushort *)(lVar17 + 0x28) = *(ushort *)(lVar17 + 0x28) | 0x800;
    if (pSVar13 == pSVar14) {
      lVar17 = *(long *)(this + 0x90);
      uVar26 = 2;
      do {
        if (*(byte *)(lVar17 + 0x10) - 1 < 2) {
          *(undefined1 *)(lVar17 + 0x59) = 1;
        }
        lVar17 = *(long *)(lVar17 + 8);
      } while (lVar17 != 0);
    }
    else {
      *(ushort *)(pSVar13 + 0x83) = *(ushort *)(pSVar13 + 0x83) | 0x800;
      uVar26 = 2;
      *(ushort *)(lVar17 + 0x28) = *(ushort *)(lVar17 + 0x28) | 0x400;
    }
    break;
  case 0x5b:
    uVar26 = ParseSuperExpression(this,false);
    break;
  case 0x67:
    Scanner::Next(pSVar11);
    pSVar11 = *(Scanner **)(this + 200);
    uVar9 = **(undefined4 **)pSVar11;
    if (*(byte *)(*(long *)(pSVar11 + 8) + 0x38) - 0x5c < 10) {
      uVar8 = Scanner::Next(pSVar11);
      if ((uVar8 & 0xfc) == 0x5c) {
        lVar17 = Scanner::CurrentSymbol
                           (*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
        piVar21 = (int *)**(undefined8 **)(this + 200);
        cVar7 = (char)piVar21[0xe];
        if (cVar7 == 'l') {
LAB_011795b4:
          uVar25 = 8;
        }
        else if (cVar7 == '`') {
LAB_011794a8:
          uVar25 = 5;
        }
        else if (cVar7 == '_') {
LAB_01178934:
          uVar25 = 6;
        }
        else {
          lVar20 = *(long *)(*(long *)(this + 0x28) + 0x38);
          if (*(long *)(lVar20 + 0xb0) == lVar17) {
LAB_011795bc:
            uVar25 = 4;
          }
          else if (*(long *)(lVar20 + 0x158) == lVar17) {
LAB_011795c4:
            uVar25 = 7;
          }
          else {
            iVar19 = (piVar21[1] - *piVar21) + -2;
            if (cVar7 != 'Z') {
              iVar19 = piVar21[1] - *piVar21;
            }
            if (piVar21[6] >> ((*(byte *)(piVar21 + 7) ^ 1) & 0x1f) == iVar19) {
              if (*(long *)(lVar20 + 0x118) == lVar17) {
LAB_011795cc:
                uVar25 = 2;
              }
              else {
                if (*(long *)(lVar20 + 0x70) != lVar17) goto LAB_01178c78;
                uVar10 = Scope::ShouldBanArguments(*(Scope **)this);
                if ((uVar10 & 1) != 0) {
                  ReportMessage(this,0xc);
                  goto LAB_0117942c;
                }
                uVar25 = 3;
              }
            }
            else {
LAB_01178c78:
              uVar25 = 1;
            }
          }
        }
      }
      else {
        uVar4 = *(ushort *)(*(long *)this + 0x81);
        lVar17 = Scope::AsDeclarationScope();
        cVar7 = *(char *)(lVar17 + 0x85);
        if (this[0x71] == (ParserBase<v8::internal::PreParser>)0x0) {
          lVar17 = Scope::AsDeclarationScope();
          bVar6 = *(byte *)(lVar17 + 0x85) - 10 < 5;
        }
        else {
          bVar6 = true;
        }
        if ((uVar8 & 0xff) == 0x61) {
          if (((uVar4 & 1) == 0) && (3 < (byte)(cVar7 - 0xdU))) goto LAB_011793bc;
        }
        else if ((uVar8 & 0xff) == 0x60) {
          if (!bVar6) {
LAB_011793bc:
            pSVar11 = *(Scanner **)(this + 200);
            plVar22 = *(long **)(this + 0x90);
            puVar18 = *(uint **)pSVar11;
            bVar23 = *(byte *)(plVar22 + 2);
            if ((uVar8 & 0xff) == 0x60) {
              if (bVar23 < 3) {
                cVar7 = (char)plVar22[9];
                plVar24 = plVar22;
                while (cVar7 != '\0') {
                  if ((char)plVar24[2] == '\x02') {
                    uVar25 = *(undefined8 *)puVar18;
                    *(undefined4 *)((long)plVar24 + 0x54) = 0x130;
                    *(undefined8 *)((long)plVar24 + 0x4c) = uVar25;
                  }
                  plVar24 = (long *)plVar24[1];
                  if (plVar24 == (long *)0x0) break;
                  cVar7 = (char)plVar22[9];
                }
                pSVar11 = *(Scanner **)(this + 200);
              }
              lVar17 = Scanner::CurrentSymbol(pSVar11,*(AstValueFactory **)(this + 0x28));
              piVar21 = (int *)**(undefined8 **)(this + 200);
              cVar7 = (char)piVar21[0xe];
            }
            else {
              if (bVar23 - 1 < 3) {
                plVar24 = (long *)*plVar22;
                if (bVar23 == 3) {
                  if ((*(byte *)(*plVar24 + 0x81) & 1) == 0) {
                    *(bool *)(plVar24[0x1c] + 0x15) = *puVar18 <= puVar18[1];
                  }
                  else {
                    PendingCompilationErrorHandler::ReportMessageAt
                              ((PendingCompilationErrorHandler *)plVar24[0x10],*puVar18,puVar18[1],
                               0x13c,0);
                    lVar17 = plVar24[0x19];
                    lVar20 = *(long *)(lVar17 + 0x18);
                    if (*(char *)(lVar20 + 0x30) == '\0') {
                      *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
                      *(undefined1 *)(lVar20 + 0x30) = 1;
                      *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
                      *(undefined1 *)(lVar17 + 0x60) = 0x6d;
                      *(undefined1 *)(lVar17 + 0xb0) = 0x6d;
                      *(undefined1 *)(lVar17 + 0x100) = 0x6d;
                    }
                  }
                }
                else {
                  plVar24[0x1d] = *(long *)puVar18;
                  *(undefined4 *)(*plVar22 + 0xf0) = 0x13c;
                }
              }
              lVar17 = Scanner::CurrentSymbol
                                 (*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
              piVar21 = (int *)**(undefined8 **)(this + 200);
              cVar7 = (char)piVar21[0xe];
            }
            if (cVar7 != 'l') {
              if (cVar7 != '`') {
                if (cVar7 != '_') {
                  lVar20 = *(long *)(*(long *)(this + 0x28) + 0x38);
                  if (*(long *)(lVar20 + 0xb0) != lVar17) {
                    if (*(long *)(lVar20 + 0x158) != lVar17) {
                      iVar19 = (piVar21[1] - *piVar21) + -2;
                      if (cVar7 != 'Z') {
                        iVar19 = piVar21[1] - *piVar21;
                      }
                      if (piVar21[6] >> ((*(byte *)(piVar21 + 7) ^ 1) & 0x1f) == iVar19) {
                        if (*(long *)(lVar20 + 0x118) != lVar17) {
                          uVar25 = 3;
                          if (*(long *)(lVar20 + 0x70) != lVar17) {
                            uVar25 = 1;
                          }
                          goto LAB_011795d0;
                        }
                        goto LAB_011795cc;
                      }
                      goto LAB_01178c78;
                    }
                    goto LAB_011795c4;
                  }
                  goto LAB_011795bc;
                }
                goto LAB_01178934;
              }
              goto LAB_011794a8;
            }
            goto LAB_011795b4;
          }
        }
        else if (((uVar8 - 0x61 & 0xff) < 5) && ((uVar4 & 1) == 0)) goto LAB_011793bc;
        ReportUnexpectedToken(this,uVar8);
LAB_0117942c:
        uVar25 = 1;
        lVar17 = *(long *)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x110);
      }
LAB_011795d0:
      uVar16 = *(undefined8 *)**(undefined8 **)(this + 200);
      bVar6 = *(byte *)((undefined8 *)**(undefined8 **)(this + 200) + 7) - 0x61 < 5;
    }
    else {
      lVar17 = 0;
      bVar6 = false;
      uVar25 = 0;
      uVar16 = 0xffffffff;
    }
    uVar26 = ParseClassLiteral(this,lVar17,uVar25,uVar16,bVar6,uVar9);
    break;
  case 0x6b:
    if (this[0x102] != (ParserBase<v8::internal::PreParser>)0x0) {
      uVar26 = ParseImportExpressions(this);
      break;
    }
switchD_011786e8_caseD_2:
    uVar9 = Scanner::Next(pSVar11);
    ReportUnexpectedToken(this,uVar9);
LAB_01178a2c:
    uVar26 = 1;
  }
LAB_01179600:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar26;
}

