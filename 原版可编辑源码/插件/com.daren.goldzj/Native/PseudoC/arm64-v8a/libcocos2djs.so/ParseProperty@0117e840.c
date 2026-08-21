
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseProperty(v8::internal::ParserBase<v8::internal::PreParser>::ParsePropertyInfo*)
    */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseProperty
          (ParserBase<v8::internal::PreParser> *this,ParsePropertyInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ParserBase<v8::internal::PreParser> *pPVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  Scanner *pSVar9;
  ulong uVar10;
  ParsePropertyInfo PVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ParsePropertyInfo *pPVar17;
  ParserBase<v8::internal::PreParser> PVar18;
  ParserBase<v8::internal::PreParser> *local_98;
  long lStack_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  *local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pSVar9 = *(Scanner **)(this + 200);
  cVar5 = *(char *)(*(long *)(pSVar9 + 8) + 0x38);
  if (cVar5 == '_') {
    Scanner::Next(pSVar9);
    lVar16 = (*(undefined8 **)(this + 200))[1];
    PVar11 = (ParsePropertyInfo)0x2;
    switch(*(undefined1 *)(lVar16 + 0x38)) {
    case 5:
      PVar11 = (ParsePropertyInfo)0x5;
      break;
    default:
      if (*(char *)(lVar16 + 0x4c) == '\0') {
        piVar12 = (int *)**(undefined8 **)(this + 200);
        iVar1 = (piVar12[1] - *piVar12) + -2;
        if ((char)piVar12[0xe] != 'Z') {
          iVar1 = piVar12[1] - *piVar12;
        }
        if (piVar12[6] >> ((*(byte *)(piVar12 + 7) ^ 1) & 0x1f) != iVar1) {
          ReportUnexpectedToken(this,0x6e);
        }
        *(undefined4 *)(param_1 + 0x1c) = 2;
        param_1[0x20] = (ParsePropertyInfo)0x5;
        pSVar9 = *(Scanner **)(this + 200);
        cVar5 = *(char *)(*(long *)(pSVar9 + 8) + 0x38);
        goto LAB_0117e928;
      }
      goto LAB_0117e9cc;
    case 9:
      break;
    case 0xc:
      PVar11 = (ParsePropertyInfo)0x6;
      break;
    case 0xd:
      PVar11 = (ParsePropertyInfo)0x7;
      break;
    case 0x11:
      PVar11 = (ParsePropertyInfo)0x4;
      break;
    case 0x1e:
      PVar11 = (ParsePropertyInfo)0x3;
    }
    param_1[0x20] = PVar11;
LAB_0117e9cc:
    lVar16 = Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
    piVar12 = (int *)**(undefined8 **)(this + 200);
    cVar5 = (char)piVar12[0xe];
    if (cVar5 == 'l') goto LAB_0117eb30;
joined_r0x0117eb24:
    if (cVar5 == '`') {
      PVar11 = (ParsePropertyInfo)0x5;
    }
    else if (cVar5 == '_') {
      PVar11 = (ParsePropertyInfo)0x6;
    }
    else {
      lVar15 = *(long *)(*(long *)(this + 0x28) + 0x38);
      if (*(long *)(lVar15 + 0xb0) == lVar16) {
        PVar11 = (ParsePropertyInfo)0x4;
      }
      else if (*(long *)(lVar15 + 0x158) == lVar16) {
        PVar11 = (ParsePropertyInfo)0x7;
      }
      else {
        iVar1 = (piVar12[1] - *piVar12) + -2;
        if (cVar5 != 'Z') {
          iVar1 = piVar12[1] - *piVar12;
        }
        if (piVar12[6] >> ((*(byte *)(piVar12 + 7) ^ 1) & 0x1f) == iVar1) {
          if (*(long *)(lVar15 + 0x118) == lVar16) {
            PVar11 = (ParsePropertyInfo)0x2;
          }
          else {
            PVar11 = (ParsePropertyInfo)0x3;
            if (*(long *)(lVar15 + 0x70) != lVar16) {
              PVar11 = (ParsePropertyInfo)0x1;
            }
          }
        }
        else {
          PVar11 = (ParsePropertyInfo)0x1;
        }
      }
    }
LAB_0117eb34:
    *(long *)(param_1 + 8) = lVar16;
    param_1[0x10] = PVar11;
    uVar6 = 2;
    goto LAB_0117f2b4;
  }
LAB_0117e928:
  if (cVar5 != '(') {
    pPVar17 = param_1 + 0x20;
    if ((*pPVar17 != (ParsePropertyInfo)0x9) ||
       (1 < *(byte *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) - 0x5d)) goto LAB_0117eb4c;
    cVar5 = Scanner::Next(*(Scanner **)(this + 200));
    PVar11 = (ParsePropertyInfo)0x2;
    switch(*(undefined1 *)((*(undefined8 **)(this + 200))[1] + 0x38)) {
    case 5:
      PVar11 = (ParsePropertyInfo)0x5;
      break;
    default:
      piVar12 = (int *)**(undefined8 **)(this + 200);
      iVar1 = (piVar12[1] - *piVar12) + -2;
      if ((char)piVar12[0xe] != 'Z') {
        iVar1 = piVar12[1] - *piVar12;
      }
      if (piVar12[6] >> ((*(byte *)(piVar12 + 7) ^ 1) & 0x1f) != iVar1) {
        ReportUnexpectedToken(this,0x6e);
      }
      if (cVar5 == '^') {
        *pPVar17 = (ParsePropertyInfo)0x1;
      }
      else if (cVar5 == ']') {
        *pPVar17 = (ParsePropertyInfo)0x0;
      }
      goto LAB_0117eb4c;
    case 9:
      break;
    case 0xc:
    case 0x28:
      PVar11 = (ParsePropertyInfo)0x6;
      break;
    case 0xd:
      PVar11 = (ParsePropertyInfo)0x7;
      break;
    case 0x11:
      PVar11 = (ParsePropertyInfo)0x4;
      break;
    case 0x1e:
      PVar11 = (ParsePropertyInfo)0x3;
    }
    *pPVar17 = PVar11;
    lVar16 = Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
    piVar12 = (int *)**(undefined8 **)(this + 200);
    cVar5 = (char)piVar12[0xe];
    if (cVar5 != 'l') goto joined_r0x0117eb24;
LAB_0117eb30:
    PVar11 = (ParsePropertyInfo)0x8;
    goto LAB_0117eb34;
  }
  Scanner::Next(pSVar9);
  param_1[0x20] = (ParsePropertyInfo)0x5;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
LAB_0117eb4c:
  pPVar17 = param_1 + 0x20;
  pSVar9 = *(Scanner **)(this + 200);
  cVar5 = *(char *)(*(long *)(pSVar9 + 8) + 0x38);
  switch(cVar5) {
  case 'W':
  case 'X':
    Scanner::Next(pSVar9);
LAB_0117ece0:
    lVar16 = 0;
    break;
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
switchD_0117eb78_caseD_59:
    uVar10 = Scanner::Next(pSVar9);
    if (((byte)Token::token_flags[uVar10 & 0xff] >> 1 & 1) != 0) {
      if (*(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) != '\t') {
        lVar16 = Scanner::CurrentSymbol
                           (*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
        piVar12 = (int *)**(undefined8 **)(this + 200);
        cVar5 = (char)piVar12[0xe];
        if (cVar5 == 'l') goto LAB_0117ee4c;
        if (cVar5 == '`') goto LAB_0117ee44;
        if (cVar5 != '_') goto LAB_0117eda4;
LAB_0117ec6c:
        PVar11 = (ParsePropertyInfo)0x6;
        goto LAB_0117ece8;
      }
      goto LAB_0117ece0;
    }
    ReportUnexpectedToken(this);
    lVar16 = *(long *)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x110);
    break;
  case 'Z':
    Scanner::Next(pSVar9);
    if (*(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) == '\t') goto LAB_0117ece0;
    lVar16 = Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
    piVar12 = (int *)**(undefined8 **)(this + 200);
    cVar5 = (char)piVar12[0xe];
    if (cVar5 == 'l') {
LAB_0117ee4c:
      PVar11 = (ParsePropertyInfo)0x8;
    }
    else if (cVar5 == '`') {
LAB_0117ee44:
      PVar11 = (ParsePropertyInfo)0x5;
    }
    else {
      if (cVar5 == '_') goto LAB_0117ec6c;
LAB_0117eda4:
      lVar15 = *(long *)(*(long *)(this + 0x28) + 0x38);
      if (*(long *)(lVar15 + 0xb0) == lVar16) {
        PVar11 = (ParsePropertyInfo)0x4;
      }
      else if (*(long *)(lVar15 + 0x158) == lVar16) {
        PVar11 = (ParsePropertyInfo)0x7;
      }
      else {
        iVar1 = (piVar12[1] - *piVar12) + -2;
        if (cVar5 != 'Z') {
          iVar1 = piVar12[1] - *piVar12;
        }
        if (piVar12[6] >> ((*(byte *)(piVar12 + 7) ^ 1) & 0x1f) != iVar1) break;
        if (*(long *)(lVar15 + 0x118) == lVar16) {
          PVar11 = (ParsePropertyInfo)0x2;
        }
        else {
          PVar11 = (ParsePropertyInfo)0x3;
          if (*(long *)(lVar15 + 0x70) != lVar16) {
            PVar11 = (ParsePropertyInfo)0x1;
          }
        }
      }
    }
    goto LAB_0117ece8;
  case 'l':
    param_1[0x22] = (ParsePropertyInfo)0x1;
    Scanner::Next(*(Scanner **)(this + 200));
    if (param_1[0x20] == (ParsePropertyInfo)0x9) {
      switch(*(undefined1 *)(*(long *)(*(long *)(this + 200) + 8) + 0x38)) {
      case 5:
        PVar11 = (ParsePropertyInfo)0x5;
        break;
      default:
        goto switchD_0117ecbc_caseD_6;
      case 9:
        PVar11 = (ParsePropertyInfo)0x2;
        break;
      case 0xc:
      case 0x28:
        PVar11 = (ParsePropertyInfo)0x6;
        break;
      case 0xd:
        PVar11 = (ParsePropertyInfo)0x7;
        break;
      case 0x11:
        PVar11 = (ParsePropertyInfo)0x4;
        break;
      case 0x1e:
        PVar11 = (ParsePropertyInfo)0x3;
      }
      *pPVar17 = PVar11;
    }
switchD_0117ecbc_caseD_6:
    lVar16 = Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
    piVar12 = (int *)**(undefined8 **)(this + 200);
    cVar5 = (char)piVar12[0xe];
    if (cVar5 == 'l') {
      PVar11 = (ParsePropertyInfo)0x8;
    }
    else if (cVar5 == '`') {
      PVar11 = (ParsePropertyInfo)0x5;
    }
    else if (cVar5 == '_') {
      PVar11 = (ParsePropertyInfo)0x6;
    }
    else {
      lVar15 = *(long *)(*(long *)(this + 0x28) + 0x38);
      if (*(long *)(lVar15 + 0xb0) == lVar16) {
        PVar11 = (ParsePropertyInfo)0x4;
      }
      else if (*(long *)(lVar15 + 0x158) == lVar16) {
        PVar11 = (ParsePropertyInfo)0x7;
      }
      else {
        iVar1 = (piVar12[1] - *piVar12) + -2;
        if (cVar5 != 'Z') {
          iVar1 = piVar12[1] - *piVar12;
        }
        if (piVar12[6] >> ((*(byte *)(piVar12 + 7) ^ 1) & 0x1f) == iVar1) {
          if (*(long *)(lVar15 + 0x118) == lVar16) {
            PVar11 = (ParsePropertyInfo)0x2;
          }
          else {
            PVar11 = (ParsePropertyInfo)0x3;
            if (*(long *)(lVar15 + 0x70) != lVar16) {
              PVar11 = (ParsePropertyInfo)0x1;
            }
          }
        }
        else {
          PVar11 = (ParsePropertyInfo)0x1;
        }
      }
    }
    *(long *)(param_1 + 8) = lVar16;
    param_1[0x10] = PVar11;
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar8 = 0x6c;
LAB_0117f334:
      ReportUnexpectedToken(this,uVar8);
      *pPVar17 = (ParsePropertyInfo)0x9;
      uVar6 = 1;
      goto switchD_0117ed2c_caseD_6;
    }
    if (this[0x104] != (ParserBase<v8::internal::PreParser>)0x0) goto LAB_0117ecf0;
    PVar11 = *pPVar17;
    if (((byte)PVar11 < 6) && ((1 << (ulong)((byte)PVar11 & 0x1f) & 0x23U) != 0)) {
      uVar8 = Scanner::Next(*(Scanner **)(this + 200));
      goto LAB_0117f334;
    }
    goto LAB_0117ecf4;
  default:
    if (cVar5 == '\x03') {
      *(undefined8 *)(param_1 + 8) = 0;
      param_1[0x10] = (ParsePropertyInfo)0x0;
      param_1[0x21] = (ParsePropertyInfo)0x1;
      Scanner::Next(*(Scanner **)(this + 200));
      PVar18 = this[0x100];
      lStack_90 = *(long *)(this + 0x90);
      this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
      local_88 = 0;
      if (lStack_90 == 0) {
        local_86 = 0;
        local_87 = 0;
      }
      else {
        local_87 = *(undefined1 *)(lStack_90 + 0x11);
        local_86 = *(undefined1 *)(lStack_90 + 0x12);
      }
      local_80 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)(this + 0xb0);
      *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_98;
      local_78 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
      local_50 = 0;
      if (lStack_90 != 0) {
        if (*(byte *)(lStack_90 + 0x10) < 3) {
          local_50 = *(undefined1 *)(lStack_90 + 0x48);
        }
        else {
          local_50 = 0;
        }
      }
      local_68 = 0;
      uStack_58 = 0xffffffff;
      local_60 = 0xffffffff;
      local_98 = this;
      local_70 = local_78;
      uVar6 = ParseAssignmentExpressionCoverGrammar(this);
      pPVar4 = local_98;
      if ((uint)local_60 <= local_60._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_98 + 0x80),local_60 & 0xffffffff,
                   local_60._4_4_,local_68 & 0xffffffff,0);
        lVar16 = *(long *)(pPVar4 + 200);
        lVar15 = *(long *)(lVar16 + 0x18);
        if (*(char *)(lVar15 + 0x30) == '\0') {
          *(undefined4 *)(lVar16 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar15 + 0x30) = 1;
          *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
          *(undefined1 *)(lVar16 + 0x60) = 0x6d;
          *(undefined1 *)(lVar16 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar16 + 0x100) = 0x6d;
        }
      }
      uVar10 = *(long *)(local_80 + 8) - *(long *)local_80 >> 4;
      if (local_78 < uVar10 || local_78 - uVar10 == 0) {
        if (local_78 < uVar10) {
          *(ulong *)(local_80 + 8) = *(long *)local_80 + local_78 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append(local_80,local_78 - uVar10);
      }
      local_70 = local_78;
      *(long *)(local_98 + 0x90) = lStack_90;
      uVar7 = Scanner::Next(*(Scanner **)(this + 200));
      if ((uVar7 & 0xff) != 7) {
        ReportUnexpectedToken(this,uVar7);
      }
      if (*pPVar17 == (ParsePropertyInfo)0x9) {
        switch(*(undefined1 *)(*(long *)(*(long *)(this + 200) + 8) + 0x38)) {
        case 5:
          PVar11 = (ParsePropertyInfo)0x5;
          break;
        default:
          goto switchD_0117efa4_caseD_6;
        case 9:
          PVar11 = (ParsePropertyInfo)0x2;
          break;
        case 0xc:
        case 0x28:
          PVar11 = (ParsePropertyInfo)0x6;
          break;
        case 0xd:
          PVar11 = (ParsePropertyInfo)0x7;
          break;
        case 0x11:
          PVar11 = (ParsePropertyInfo)0x4;
          break;
        case 0x1e:
          PVar11 = (ParsePropertyInfo)0x3;
        }
        *pPVar17 = PVar11;
      }
switchD_0117efa4_caseD_6:
      this[0x100] = PVar18;
    }
    else {
      if ((cVar5 != '\n') || (*pPVar17 != (ParsePropertyInfo)0x9)) goto switchD_0117eb78_caseD_59;
      *(undefined8 *)(param_1 + 8) = 0;
      param_1[0x10] = (ParsePropertyInfo)0x0;
      Scanner::Next(*(Scanner **)(this + 200));
      PVar18 = this[0x100];
      this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
      uVar8 = **(undefined4 **)(*(long *)(this + 200) + 8);
      uVar6 = ParsePossibleDestructuringSubPattern(this,*(AccumulationScope **)param_1);
      param_1[0x20] = (ParsePropertyInfo)0x8;
      if ((uVar6 & 7) == 2) {
        if (3 < (uVar6 >> 4 & 0xf) - 1) goto LAB_0117efc0;
      }
      else if (((uVar6 & 7) != 3) ||
              (((uVar6 & 0xfe0) == 0x20 && ((*(ushort *)(*(long *)this + 0x81) & 1) != 0)))) {
LAB_0117efc0:
        plVar13 = *(long **)(this + 0x90);
        if (*(byte *)(plVar13 + 2) - 1 < 5) {
          if (*(byte *)(plVar13 + 2) - 3 < 3) {
            lVar16 = *plVar13;
            PendingCompilationErrorHandler::ReportMessageAt
                      (*(PendingCompilationErrorHandler **)(lVar16 + 0x80),uVar8,
                       *(undefined4 *)(**(long **)(this + 200) + 4),0xf6,0);
            lVar16 = *(long *)(lVar16 + 200);
            lVar15 = *(long *)(lVar16 + 0x18);
            if (*(char *)(lVar15 + 0x30) == '\0') {
              *(undefined4 *)(lVar16 + 0x20) = 0xffffffff;
              *(undefined1 *)(lVar15 + 0x30) = 1;
              *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
              *(undefined1 *)(lVar16 + 0x60) = 0x6d;
              *(undefined1 *)(lVar16 + 0xb0) = 0x6d;
              *(undefined1 *)(lVar16 + 0x100) = 0x6d;
            }
          }
          else {
            *(ulong *)((long)plVar13 + 0x4c) =
                 CONCAT44(*(undefined4 *)(**(long **)(this + 200) + 4),uVar8);
            *(undefined4 *)((long)plVar13 + 0x54) = 0xf6;
          }
        }
        plVar13 = *(long **)(this + 0x90);
        uVar2 = *(undefined4 *)(**(long **)(this + 200) + 4);
        if (*(byte *)(plVar13 + 2) - 3 < 3) {
          lVar16 = *plVar13;
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(lVar16 + 0x80),uVar8,uVar2,0xf8,0);
          lVar16 = *(long *)(lVar16 + 200);
          lVar15 = *(long *)(lVar16 + 0x18);
          if (*(char *)(lVar15 + 0x30) == '\0') {
            *(undefined4 *)(lVar16 + 0x20) = 0xffffffff;
            *(undefined1 *)(lVar15 + 0x30) = 1;
            *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
            *(undefined1 *)(lVar16 + 0x60) = 0x6d;
            *(undefined1 *)(lVar16 + 0xb0) = 0x6d;
            *(undefined1 *)(lVar16 + 0x100) = 0x6d;
          }
        }
        else if (*(uint *)((long)plVar13 + 0x44) < *(uint *)(plVar13 + 8)) {
          *(undefined4 *)((long)plVar13 + 0x34) = 0xf8;
          plVar13[8] = CONCAT44(uVar2,uVar8);
        }
      }
      if (*(char *)((*(undefined8 **)(this + 200))[1] + 0x38) == '\r')
      goto switchD_0117efa4_caseD_6;
      plVar13 = *(long **)(this + 0x90);
      plVar14 = (long *)**(undefined8 **)(this + 200);
      if (2 < *(byte *)(plVar13 + 2) - 3) {
        if (*(uint *)((long)plVar13 + 0x44) < *(uint *)(plVar13 + 8)) {
          *(undefined4 *)((long)plVar13 + 0x34) = 0x11b;
          plVar13[8] = *plVar14;
        }
        goto switchD_0117efa4_caseD_6;
      }
      lVar16 = *plVar13;
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(lVar16 + 0x80),(int)*plVar14,
                 *(undefined4 *)((long)plVar14 + 4),0x11b,0);
      lVar16 = *(long *)(lVar16 + 200);
      lVar15 = *(long *)(lVar16 + 0x18);
      if (*(char *)(lVar15 + 0x30) != '\0') goto switchD_0117efa4_caseD_6;
      *(undefined4 *)(lVar16 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar15 + 0x30) = 1;
      *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
      *(undefined1 *)(lVar16 + 0x60) = 0x6d;
      *(undefined1 *)(lVar16 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar16 + 0x100) = 0x6d;
      this[0x100] = PVar18;
    }
    goto switchD_0117ed2c_caseD_6;
  }
  PVar11 = (ParsePropertyInfo)0x1;
LAB_0117ece8:
  *(long *)(param_1 + 8) = lVar16;
  param_1[0x10] = PVar11;
LAB_0117ecf0:
  PVar11 = *pPVar17;
LAB_0117ecf4:
  if (PVar11 != (ParsePropertyInfo)0x9) goto LAB_0117ee3c;
  uVar6 = 2;
  switch(*(undefined1 *)(*(long *)(*(long *)(this + 200) + 8) + 0x38)) {
  case 5:
    PVar11 = (ParsePropertyInfo)0x5;
    break;
  default:
    goto switchD_0117ed2c_caseD_6;
  case 9:
    uVar6 = 2;
    *pPVar17 = (ParsePropertyInfo)0x2;
    goto switchD_0117ed2c_caseD_6;
  case 0xc:
  case 0x28:
    PVar11 = (ParsePropertyInfo)0x6;
    break;
  case 0xd:
    PVar11 = (ParsePropertyInfo)0x7;
    break;
  case 0x11:
    PVar11 = (ParsePropertyInfo)0x4;
    break;
  case 0x1e:
    PVar11 = (ParsePropertyInfo)0x3;
  }
  *pPVar17 = PVar11;
LAB_0117ee3c:
  uVar6 = 2;
switchD_0117ed2c_caseD_6:
LAB_0117f2b4:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

