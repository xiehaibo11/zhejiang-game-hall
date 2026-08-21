
/* v8::internal::ParserBase<v8::internal::Parser>::ParseProperty(v8::internal::ParserBase<v8::internal::Parser>::ParsePropertyInfo*)
    */

int * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseProperty
          (ParserBase<v8::internal::Parser> *this,ParsePropertyInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ParserBase<v8::internal::Parser> PVar3;
  long lVar4;
  ParserBase<v8::internal::Parser> *pPVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  Scanner *pSVar9;
  AstRawString *pAVar10;
  char *__s;
  size_t sVar11;
  ulong uVar12;
  undefined8 uVar13;
  Zone *pZVar14;
  ParsePropertyInfo PVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  ParsePropertyInfo *pPVar21;
  double dVar22;
  ParserBase<v8::internal::Parser> *local_c0;
  long lStack_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  ParserBase<v8::internal::Parser> *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pSVar9 = *(Scanner **)(this + 0xf8);
  cVar6 = *(char *)(*(long *)(pSVar9 + 8) + 0x38);
  if (cVar6 == '_') {
    Scanner::Next(pSVar9);
    lVar19 = (*(undefined8 **)(this + 0xf8))[1];
    PVar15 = (ParsePropertyInfo)0x2;
    switch(*(undefined1 *)(lVar19 + 0x38)) {
    case 5:
switchD_01166394_caseD_5:
      PVar15 = (ParsePropertyInfo)0x5;
      break;
    default:
      if (*(char *)(lVar19 + 0x4c) == '\0') {
        piVar16 = (int *)**(undefined8 **)(this + 0xf8);
        iVar1 = (piVar16[1] - *piVar16) + -2;
        if ((char)piVar16[0xe] != 'Z') {
          iVar1 = piVar16[1] - *piVar16;
        }
        if (piVar16[6] >> ((*(byte *)(piVar16 + 7) ^ 1) & 0x1f) != iVar1) {
          ReportUnexpectedToken(this,0x6e);
        }
        *(undefined4 *)(param_1 + 0x14) = 2;
        param_1[0x18] = (ParsePropertyInfo)0x5;
        pSVar9 = *(Scanner **)(this + 0xf8);
        cVar6 = *(char *)(*(long *)(pSVar9 + 8) + 0x38);
        goto LAB_011663f8;
      }
      goto LAB_011664a4;
    case 9:
      break;
    case 0xc:
switchD_01166394_caseD_c:
      PVar15 = (ParsePropertyInfo)0x6;
      break;
    case 0xd:
switchD_01166394_caseD_d:
      PVar15 = (ParsePropertyInfo)0x7;
      break;
    case 0x11:
switchD_01166394_caseD_11:
      PVar15 = (ParsePropertyInfo)0x4;
      break;
    case 0x1e:
switchD_01166394_caseD_1e:
      PVar15 = (ParsePropertyInfo)0x3;
    }
switchD_01166394_caseD_9:
    param_1[0x18] = PVar15;
LAB_011664a4:
    pAVar10 = (AstRawString *)
              Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
    *(AstRawString **)(param_1 + 8) = pAVar10;
    FuncNameInferrer::PushLiteralName((FuncNameInferrer *)(this + 0x20),pAVar10);
    pZVar14 = *(Zone **)(this + 0x68);
    uVar13 = *(undefined8 *)(param_1 + 8);
    piVar16 = *(int **)(pZVar14 + 0x10);
    iVar1 = *(int *)**(undefined8 **)(this + 0xf8);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)piVar16) < 0x10) {
      piVar16 = (int *)Zone::NewExpand(pZVar14,0x10);
    }
    else {
      *(int **)(pZVar14 + 0x10) = piVar16 + 4;
    }
    *(undefined8 *)(piVar16 + 2) = uVar13;
    *piVar16 = iVar1;
    goto LAB_01166ab4;
  }
LAB_011663f8:
  if (cVar6 == '(') {
    Scanner::Next(pSVar9);
    param_1[0x18] = (ParsePropertyInfo)0x5;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1;
  }
  else {
    pPVar21 = param_1 + 0x18;
    if ((*pPVar21 == (ParsePropertyInfo)0x9) &&
       (*(byte *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) - 0x5d < 2)) {
      cVar6 = Scanner::Next(*(Scanner **)(this + 0xf8));
      PVar15 = (ParsePropertyInfo)0x2;
      switch(*(undefined1 *)((*(undefined8 **)(this + 0xf8))[1] + 0x38)) {
      case 5:
        goto switchD_01166394_caseD_5;
      default:
        piVar16 = (int *)**(undefined8 **)(this + 0xf8);
        iVar1 = (piVar16[1] - *piVar16) + -2;
        if ((char)piVar16[0xe] != 'Z') {
          iVar1 = piVar16[1] - *piVar16;
        }
        if (piVar16[6] >> ((*(byte *)(piVar16 + 7) ^ 1) & 0x1f) != iVar1) {
          ReportUnexpectedToken(this,0x6e);
        }
        if (cVar6 == '^') {
          *pPVar21 = (ParsePropertyInfo)0x1;
        }
        else if (cVar6 == ']') {
          *pPVar21 = (ParsePropertyInfo)0x0;
        }
        break;
      case 9:
        goto switchD_01166394_caseD_9;
      case 0xc:
      case 0x28:
        goto switchD_01166394_caseD_c;
      case 0xd:
        goto switchD_01166394_caseD_d;
      case 0x11:
        goto switchD_01166394_caseD_11;
      case 0x1e:
        goto switchD_01166394_caseD_1e;
      }
    }
  }
  pPVar21 = param_1 + 0x18;
  pSVar9 = *(Scanner **)(this + 0xf8);
  cVar6 = (char)(*(int **)(pSVar9 + 8))[0xe];
  iVar1 = **(int **)(pSVar9 + 8);
  switch(cVar6) {
  case 'W':
    Scanner::Next(pSVar9);
    Scanner::DoubleValue(*(Scanner **)(this + 0xf8));
    __s = (char *)DoubleToCString((internal *)&local_c0,100);
    uVar13 = *(undefined8 *)(this + 0x60);
    sVar11 = strlen(__s);
    pAVar10 = (AstRawString *)AstValueFactory::GetOneByteStringInternal(uVar13,__s,sVar11);
    break;
  case 'X':
    Scanner::Next(pSVar9);
    local_c0 = (ParserBase<v8::internal::Parser> *)
               CONCAT44(local_c0._4_4_,*(undefined4 *)(*(long *)*(Scanner **)(this + 0xf8) + 0x48));
    uVar13 = Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
    *(undefined8 *)(param_1 + 8) = uVar13;
    uVar7 = 1;
    goto LAB_011669a8;
  case 'Y':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
    goto switchD_01166584_caseD_59;
  case 'Z':
    Scanner::Next(pSVar9);
    pAVar10 = (AstRawString *)
              Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
    break;
  case 'l':
    param_1[0x1a] = (ParsePropertyInfo)0x1;
    Scanner::Next(*(Scanner **)(this + 0xf8));
    if (param_1[0x18] == (ParsePropertyInfo)0x9) {
      switch(*(undefined1 *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38)) {
      case 5:
        PVar15 = (ParsePropertyInfo)0x5;
        break;
      default:
        goto switchD_01166774_caseD_6;
      case 9:
        PVar15 = (ParsePropertyInfo)0x2;
        break;
      case 0xc:
      case 0x28:
        PVar15 = (ParsePropertyInfo)0x6;
        break;
      case 0xd:
        PVar15 = (ParsePropertyInfo)0x7;
        break;
      case 0x11:
        PVar15 = (ParsePropertyInfo)0x4;
        break;
      case 0x1e:
        PVar15 = (ParsePropertyInfo)0x3;
      }
      *pPVar21 = PVar15;
    }
switchD_01166774_caseD_6:
    uVar13 = Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
    *(undefined8 *)(param_1 + 8) = uVar13;
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar8 = 0x6c;
LAB_01166a1c:
      ReportUnexpectedToken(this,uVar8);
      *pPVar21 = (ParsePropertyInfo)0x9;
      piVar16 = *(int **)(this + 0x88);
      goto LAB_01166ab8;
    }
    if (this[0x134] != (ParserBase<v8::internal::Parser>)0x0) {
      uVar7 = 0;
      goto LAB_011669a8;
    }
    PVar15 = *pPVar21;
    uVar7 = 0;
    if (((byte)PVar15 < 6) && (uVar7 = 0, (1 << (ulong)((byte)PVar15 & 0x1f) & 0x23U) != 0)) {
      uVar8 = Scanner::Next(*(Scanner **)(this + 0xf8));
      goto LAB_01166a1c;
    }
    goto LAB_011669ac;
  default:
    if (cVar6 == '\x03') {
      *(undefined8 *)(param_1 + 8) = 0;
      param_1[0x19] = (ParsePropertyInfo)0x1;
      Scanner::Next(*(Scanner **)(this + 0xf8));
      PVar3 = this[0x130];
      lStack_b8 = *(long *)(this + 0xc0);
      this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
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
      *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_c0;
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
      piVar16 = (int *)ParseAssignmentExpressionCoverGrammar(this);
      pPVar5 = local_c0;
      if ((uint)local_88 <= local_88._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_c0 + 0xb0),local_88 & 0xffffffff,
                   local_88._4_4_,local_90 & 0xffffffff,0);
        lVar19 = *(long *)(pPVar5 + 0x158);
        if (*(char *)(lVar19 + 0x30) == '\0') {
          *(undefined4 *)(pPVar5 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar19 + 0x30) = 1;
          *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)(lVar19 + 0x18);
          pPVar5[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar5[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar5[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
      }
      uVar12 = *(long *)(local_a8 + 8) - *(long *)local_a8 >> 4;
      if (local_a0 < uVar12 || local_a0 - uVar12 == 0) {
        if (local_a0 < uVar12) {
          *(ulong *)(local_a8 + 8) = *(long *)local_a8 + local_a0 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)local_a8,local_a0 - uVar12);
      }
      local_98 = local_a0;
      *(long *)(local_c0 + 0xc0) = lStack_b8;
      uVar7 = Scanner::Next(*(Scanner **)(this + 0xf8));
      if ((uVar7 & 0xff) != 7) {
        ReportUnexpectedToken(this,uVar7);
      }
      if (*pPVar21 == (ParsePropertyInfo)0x9) {
        switch(*(undefined1 *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38)) {
        case 5:
          PVar15 = (ParsePropertyInfo)0x5;
          break;
        default:
          goto switchD_01166950_caseD_6;
        case 9:
          PVar15 = (ParsePropertyInfo)0x2;
          break;
        case 0xc:
        case 0x28:
          PVar15 = (ParsePropertyInfo)0x6;
          break;
        case 0xd:
          PVar15 = (ParsePropertyInfo)0x7;
          break;
        case 0x11:
          PVar15 = (ParsePropertyInfo)0x4;
          break;
        case 0x1e:
          PVar15 = (ParsePropertyInfo)0x3;
        }
        *pPVar21 = PVar15;
      }
switchD_01166950_caseD_6:
      this[0x130] = PVar3;
      goto LAB_01166ab8;
    }
    if ((cVar6 == '\n') && (*pPVar21 == (ParsePropertyInfo)0x9)) {
      *(undefined8 *)(param_1 + 8) = 0;
      Scanner::Next(*(Scanner **)(this + 0xf8));
      PVar3 = this[0x130];
      this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
      uVar8 = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
      piVar16 = (int *)ParsePossibleDestructuringSubPattern(this,*(AccumulationScope **)param_1);
      param_1[0x18] = (ParsePropertyInfo)0x8;
      uVar7 = piVar16[1];
      if ((piVar16 == (int *)0x0) || ((uVar7 & 0x43f) != 0x35)) {
LAB_01166670:
        if ((uVar7 & 0x3f) != 0x2c) {
          plVar17 = *(long **)(this + 0xc0);
          if (*(byte *)(plVar17 + 2) - 1 < 5) {
            if (*(byte *)(plVar17 + 2) - 3 < 3) {
              lVar20 = *plVar17;
              PendingCompilationErrorHandler::ReportMessageAt
                        (*(PendingCompilationErrorHandler **)(lVar20 + 0xb0),uVar8,
                         *(undefined4 *)(**(long **)(this + 0xf8) + 4),0xf6,0);
              lVar19 = *(long *)(lVar20 + 0x158);
              if (*(char *)(lVar19 + 0x30) == '\0') {
                *(undefined4 *)(lVar20 + 0x160) = 0xffffffff;
                *(undefined1 *)(lVar19 + 0x30) = 1;
                *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)(lVar19 + 0x18);
                *(undefined1 *)(lVar20 + 0x1a0) = 0x6d;
                *(undefined1 *)(lVar20 + 0x1f0) = 0x6d;
                *(undefined1 *)(lVar20 + 0x240) = 0x6d;
              }
            }
            else {
              *(ulong *)((long)plVar17 + 0x4c) =
                   CONCAT44(*(undefined4 *)(**(long **)(this + 0xf8) + 4),uVar8);
              *(undefined4 *)((long)plVar17 + 0x54) = 0xf6;
            }
          }
          plVar17 = *(long **)(this + 0xc0);
          uVar2 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
          if (*(byte *)(plVar17 + 2) - 3 < 3) {
            lVar20 = *plVar17;
            PendingCompilationErrorHandler::ReportMessageAt
                      (*(PendingCompilationErrorHandler **)(lVar20 + 0xb0),uVar8,uVar2,0xf8,0);
            lVar19 = *(long *)(lVar20 + 0x158);
            if (*(char *)(lVar19 + 0x30) == '\0') {
              *(undefined4 *)(lVar20 + 0x160) = 0xffffffff;
              *(undefined1 *)(lVar19 + 0x30) = 1;
              *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)(lVar19 + 0x18);
              *(undefined1 *)(lVar20 + 0x1a0) = 0x6d;
              *(undefined1 *)(lVar20 + 0x1f0) = 0x6d;
              *(undefined1 *)(lVar20 + 0x240) = 0x6d;
            }
          }
          else if (*(uint *)((long)plVar17 + 0x44) < *(uint *)(plVar17 + 8)) {
            *(undefined4 *)((long)plVar17 + 0x34) = 0xf8;
            plVar17[8] = CONCAT44(uVar2,uVar8);
          }
        }
      }
      else if ((*(byte *)(*(long *)this + 0x81) & 1) != 0) {
        plVar17 = (long *)(piVar16 + 2);
        if ((uVar7 >> 8 & 1) != 0) {
          plVar17 = (long *)(*plVar17 + 8);
        }
        if ((*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) == *plVar17) ||
           (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == *plVar17))
        goto LAB_01166670;
      }
      if (*(char *)((*(undefined8 **)(this + 0xf8))[1] + 0x38) != '\r') {
        plVar17 = *(long **)(this + 0xc0);
        plVar18 = (long *)**(undefined8 **)(this + 0xf8);
        if (*(byte *)(plVar17 + 2) - 3 < 3) {
          lVar20 = *plVar17;
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(lVar20 + 0xb0),(int)*plVar18,
                     *(undefined4 *)((long)plVar18 + 4),0x11b,0);
          lVar19 = *(long *)(lVar20 + 0x158);
          if (*(char *)(lVar19 + 0x30) == '\0') {
            *(undefined4 *)(lVar20 + 0x160) = 0xffffffff;
            *(undefined1 *)(lVar19 + 0x30) = 1;
            *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)(lVar19 + 0x18);
            *(undefined1 *)(lVar20 + 0x1a0) = 0x6d;
            *(undefined1 *)(lVar20 + 0x1f0) = 0x6d;
            *(undefined1 *)(lVar20 + 0x240) = 0x6d;
            this[0x130] = PVar3;
            goto LAB_01166ab8;
          }
        }
        else if (*(uint *)((long)plVar17 + 0x44) < *(uint *)(plVar17 + 8)) {
          *(undefined4 *)((long)plVar17 + 0x34) = 0x11b;
          plVar17[8] = *plVar18;
        }
      }
      this[0x130] = PVar3;
      goto LAB_01166ab8;
    }
    goto switchD_01166584_caseD_59;
  }
  *(AstRawString **)(param_1 + 8) = pAVar10;
  uVar7 = AstRawString::AsArrayIndex(pAVar10,(uint *)&local_c0);
LAB_011669a8:
  PVar15 = *pPVar21;
LAB_011669ac:
  if (PVar15 == (ParsePropertyInfo)0x9) {
    switch(*(undefined1 *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38)) {
    case 5:
      PVar15 = (ParsePropertyInfo)0x5;
      break;
    default:
      goto switchD_011669e0_caseD_6;
    case 9:
      PVar15 = (ParsePropertyInfo)0x2;
      break;
    case 0xc:
    case 0x28:
      PVar15 = (ParsePropertyInfo)0x6;
      break;
    case 0xd:
      PVar15 = (ParsePropertyInfo)0x7;
      break;
    case 0x11:
      PVar15 = (ParsePropertyInfo)0x4;
      break;
    case 0x1e:
      PVar15 = (ParsePropertyInfo)0x3;
    }
    *pPVar21 = PVar15;
  }
switchD_011669e0_caseD_6:
  FuncNameInferrer::PushLiteralName
            ((FuncNameInferrer *)(this + 0x20),*(AstRawString **)(param_1 + 8));
  if ((uVar7 & 1) == 0) {
    pZVar14 = *(Zone **)(this + 0x68);
    uVar13 = *(undefined8 *)(param_1 + 8);
    piVar16 = *(int **)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)piVar16) < 0x10) {
      piVar16 = (int *)Zone::NewExpand(pZVar14,0x10);
    }
    else {
      *(int **)(pZVar14 + 0x10) = piVar16 + 4;
    }
    *(undefined8 *)(piVar16 + 2) = uVar13;
    *piVar16 = iVar1;
LAB_01166ab4:
    piVar16[1] = 0x1a9;
  }
  else {
    dVar22 = (double)NEON_ucvtf((ulong)local_c0 & 0xffffffff);
    piVar16 = (int *)AstNodeFactory::NewNumberLiteral((AstNodeFactory *)(this + 0x68),dVar22,iVar1);
  }
LAB_01166ab8:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return piVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_01166584_caseD_59:
  uVar12 = Scanner::Next(pSVar9);
  if (((byte)Token::token_flags[uVar12 & 0xff] >> 1 & 1) == 0) {
    ReportUnexpectedToken(this);
    uVar13 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
  }
  else {
    uVar13 = Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
  }
  uVar7 = 0;
  *(undefined8 *)(param_1 + 8) = uVar13;
  goto LAB_011669a8;
}

