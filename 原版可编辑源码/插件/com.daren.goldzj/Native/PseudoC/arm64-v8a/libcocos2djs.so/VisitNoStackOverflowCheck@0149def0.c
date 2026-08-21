
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::CallPrinter::VisitNoStackOverflowCheck(v8::internal::AstNode*) */

void __thiscall
v8::internal::CallPrinter::VisitNoStackOverflowCheck(CallPrinter *this,AstNode *param_1)

{
  CallPrinter *pCVar1;
  CallPrinter *pCVar2;
  CallPrinter *pCVar3;
  CallPrinter CVar4;
  int iVar5;
  CallPrinter CVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  Literal *pLVar12;
  undefined8 *puVar13;
  AstNode *pAVar14;
  long lVar15;
  
  pCVar1 = this + 0x1c;
  pCVar2 = this + 0x48;
  pCVar3 = this + 0x40;
LAB_0149df28:
  do {
    switch(*(uint *)(param_1 + 4) & 0x3f) {
    case 2:
      if (*pCVar1 == (CallPrinter)0x0) {
        if (*pCVar2 == (CallPrinter)0x0) {
          pAVar14 = *(AstNode **)(param_1 + 0x18);
          uVar7 = GetCurrentStackPosition();
          if (uVar7 < *(ulong *)pCVar3) {
            *pCVar2 = (CallPrinter)0x1;
            CVar4 = *pCVar1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar14);
            CVar4 = *pCVar1;
          }
          goto joined_r0x0149e128;
        }
      }
      else {
        Print(this,"(intermediate value)");
        CVar4 = *pCVar1;
joined_r0x0149e128:
        if (CVar4 != (CallPrinter)0x0) goto LAB_0149e8f0;
      }
      if (*pCVar2 != (CallPrinter)0x0) {
        return;
      }
      param_1 = *(AstNode **)(param_1 + 0x20);
      break;
    case 3:
      if (*pCVar1 == (CallPrinter)0x0) {
        if (*pCVar2 != (CallPrinter)0x0) goto LAB_0149e05c;
        pAVar14 = *(AstNode **)(param_1 + 0x20);
        goto LAB_0149e16c;
      }
LAB_0149e044:
      Print(this,"(intermediate value)");
LAB_0149e054:
      CVar4 = *pCVar1;
      goto joined_r0x0149e1a0;
    case 4:
      VisitForStatement(this,(ForStatement *)param_1);
      return;
    case 5:
      VisitForInStatement((ForInStatement *)this);
      return;
    case 6:
      VisitForOfStatement(this,(ForOfStatement *)param_1);
      return;
    case 7:
      if (*(int *)(param_1 + 0x14) < 1) {
        return;
      }
      lVar15 = 0;
      if (*pCVar1 == (CallPrinter)0x0) goto LAB_0149e5c8;
      do {
        Print(this,"(intermediate value)");
        while( true ) {
          lVar15 = lVar15 + 1;
          if (*(int *)(param_1 + 0x14) <= lVar15) {
            return;
          }
          if (*pCVar1 != (CallPrinter)0x0) break;
LAB_0149e5c8:
          if (*pCVar2 == (CallPrinter)0x0) {
            pAVar14 = *(AstNode **)(*(long *)(param_1 + 8) + lVar15 * 8);
            uVar7 = GetCurrentStackPosition();
            if (uVar7 < *(ulong *)pCVar3) {
              *pCVar2 = (CallPrinter)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar14);
            }
          }
        }
      } while( true );
    case 8:
      VisitSwitchStatement(this,(SwitchStatement *)param_1);
      return;
    case 9:
    case 0xf:
    case 0x19:
    case 0x24:
    case 0x2b:
    case 0x33:
    case 0x36:
      if (*pCVar1 == (CallPrinter)0x0) {
        if (*pCVar2 != (CallPrinter)0x0) {
          return;
        }
        param_1 = *(AstNode **)(param_1 + 8);
        break;
      }
      goto LAB_0149e8f0;
    default:
      goto switchD_0149df48_caseD_a;
    case 0xb:
switchD_0149df48_caseD_b:
      CVar4 = *pCVar1;
joined_r0x0149e294:
      if (CVar4 != (CallPrinter)0x0) goto LAB_0149e8f0;
      goto LAB_0149dfc0;
    case 0xc:
      if (*pCVar1 == (CallPrinter)0x0) {
        if (*pCVar2 == (CallPrinter)0x0) {
          pAVar14 = *(AstNode **)(param_1 + 8);
          uVar7 = GetCurrentStackPosition();
          if (uVar7 < *(ulong *)pCVar3) {
            *pCVar2 = (CallPrinter)0x1;
            CVar4 = *pCVar1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar14);
            CVar4 = *pCVar1;
          }
          goto joined_r0x0149e230;
        }
LAB_0149e138:
        if (*pCVar2 == (CallPrinter)0x0) {
          pAVar14 = *(AstNode **)(param_1 + 0x10);
          uVar7 = GetCurrentStackPosition();
          if (uVar7 < *(ulong *)pCVar3) {
            *pCVar2 = (CallPrinter)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar14);
          }
        }
      }
      else {
        Print(this,"(intermediate value)");
        CVar4 = *pCVar1;
joined_r0x0149e230:
        if (CVar4 == (CallPrinter)0x0) goto LAB_0149e138;
        Print(this,"(intermediate value)");
      }
      param_1 = *(AstNode **)(param_1 + 0x18);
      if ((*(uint *)(param_1 + 4) & 0x3f) == 10) {
        return;
      }
      if (*pCVar1 != (CallPrinter)0x0) goto LAB_0149e8f0;
      if (*pCVar2 != (CallPrinter)0x0) {
        return;
      }
      break;
    case 0x10:
      if (*pCVar1 != (CallPrinter)0x0) goto LAB_0149e044;
      if (*pCVar2 != (CallPrinter)0x0) goto LAB_0149e05c;
      goto LAB_0149e0c8;
    case 0x11:
      if (*pCVar1 != (CallPrinter)0x0) goto LAB_0149e044;
      if (*pCVar2 == (CallPrinter)0x0) {
        pAVar14 = *(AstNode **)(param_1 + 8);
        goto LAB_0149e16c;
      }
      goto LAB_0149e05c;
    case 0x12:
      if (*pCVar1 != (CallPrinter)0x0) {
        Print(this,"(intermediate value)");
        goto switchD_0149df48_caseD_b;
      }
      if (*pCVar2 == (CallPrinter)0x0) {
        pAVar14 = *(AstNode **)(param_1 + 8);
        uVar7 = GetCurrentStackPosition();
        if (uVar7 < *(ulong *)pCVar3) {
          *pCVar2 = (CallPrinter)0x1;
          CVar4 = *pCVar1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar14);
          CVar4 = *pCVar1;
        }
        goto joined_r0x0149e294;
      }
LAB_0149dfc0:
      if (*pCVar2 != (CallPrinter)0x0) {
        return;
      }
      param_1 = *(AstNode **)(param_1 + 0x10);
      break;
    case 0x14:
      plVar11 = *(long **)(param_1 + 8);
      if (*(int *)((long)plVar11 + 0xc) < 1) {
        return;
      }
      lVar15 = 0;
      if (*pCVar1 == (CallPrinter)0x0) goto LAB_0149e674;
      do {
        Print(this,"(intermediate value)");
        while( true ) {
          plVar11 = *(long **)(param_1 + 8);
          lVar15 = lVar15 + 1;
          if (*(int *)((long)plVar11 + 0xc) <= lVar15) {
            return;
          }
          if (*pCVar1 != (CallPrinter)0x0) break;
LAB_0149e674:
          if (*pCVar2 == (CallPrinter)0x0) {
            pAVar14 = *(AstNode **)(*(long *)(*plVar11 + lVar15 * 8) + 8);
            uVar7 = GetCurrentStackPosition();
            if (uVar7 < *(ulong *)pCVar3) {
              *pCVar2 = (CallPrinter)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar14);
            }
          }
        }
      } while( true );
    case 0x15:
      VisitRegExpLiteral(this,(RegExpLiteral *)param_1);
      return;
    case 0x16:
      Print(this,"{");
      if (0 < *(int *)(param_1 + 0x24)) {
        lVar15 = 0;
        if (*pCVar1 == (CallPrinter)0x0) goto LAB_0149e3dc;
        do {
          Print(this,"(intermediate value)");
          while( true ) {
            lVar15 = lVar15 + 1;
            if (*(int *)(param_1 + 0x24) <= lVar15) goto LAB_0149e418;
            if (*pCVar1 != (CallPrinter)0x0) break;
LAB_0149e3dc:
            if (*pCVar2 == (CallPrinter)0x0) {
              pAVar14 = *(AstNode **)(*(long *)(*(long *)(param_1 + 0x18) + lVar15 * 8) + 8);
              uVar7 = GetCurrentStackPosition();
              if (uVar7 < *(ulong *)pCVar3) {
                *pCVar2 = (CallPrinter)0x1;
              }
              else {
                VisitNoStackOverflowCheck(this,pAVar14);
              }
            }
          }
        } while( true );
      }
LAB_0149e418:
      pcVar9 = "}";
LAB_0149e910:
      Print(this,pcVar9);
      return;
    case 0x17:
      VisitArrayLiteral(this,(ArrayLiteral *)param_1);
      return;
    case 0x18:
    case 0x21:
      VisitAssignment(this,(Assignment *)param_1);
      return;
    case 0x1a:
    case 0x20:
      Print(this,"(");
      Find(this,*(AstNode **)(param_1 + 8),true);
      pcVar9 = " ";
      Print(this," ");
      Print(this,*(char **)(Token::string_ + ((ulong)(*(uint *)(param_1 + 4) >> 7) & 0x7f) * 8));
      goto LAB_0149e46c;
    case 0x1b:
      VisitNaryOperation(this,(NaryOperation *)param_1);
      return;
    case 0x1c:
      VisitCall(this,(Call *)param_1);
      return;
    case 0x1d:
      VisitCallNew(this,(CallNew *)param_1);
      return;
    case 0x1e:
      if (*pCVar1 != (CallPrinter)0x0) {
        return;
      }
      if (*(int *)(param_1 + 0x24) < 1) {
        return;
      }
      lVar15 = 0;
      do {
        if (*pCVar2 == (CallPrinter)0x0) {
          pAVar14 = *(AstNode **)(*(long *)(param_1 + 0x18) + lVar15 * 8);
          uVar7 = GetCurrentStackPosition();
          if (uVar7 < *(ulong *)pCVar3) {
            *pCVar2 = (CallPrinter)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar14);
          }
        }
        while( true ) {
          lVar15 = lVar15 + 1;
          if (*(int *)(param_1 + 0x24) <= lVar15) {
            return;
          }
          if (*pCVar1 == (CallPrinter)0x0) break;
          Print(this,"(intermediate value)");
        }
      } while( true );
    case 0x1f:
      pAVar14 = *(AstNode **)(param_1 + 0x18);
      if (pAVar14 != (AstNode *)0x0) {
        if (*pCVar1 == (CallPrinter)0x0) {
          if (*pCVar2 == (CallPrinter)0x0) {
            uVar7 = GetCurrentStackPosition();
            if (uVar7 < *(ulong *)pCVar3) {
              *pCVar2 = (CallPrinter)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar14);
            }
          }
        }
        else {
          Print(this,"(intermediate value)");
        }
      }
      plVar11 = *(long **)(param_1 + 0x28);
      if (*(int *)((long)plVar11 + 0xc) < 1) {
LAB_0149e9ec:
        plVar11 = *(long **)(param_1 + 0x30);
        if (*(int *)((long)plVar11 + 0xc) < 1) {
          return;
        }
        lVar15 = 0;
        if (*pCVar1 == (CallPrinter)0x0) goto LAB_0149ea3c;
        do {
          Print(this,"(intermediate value)");
          while( true ) {
            plVar11 = *(long **)(param_1 + 0x30);
            lVar15 = lVar15 + 1;
            if (*(int *)((long)plVar11 + 0xc) <= lVar15) {
              return;
            }
            if (*pCVar1 != (CallPrinter)0x0) break;
LAB_0149ea3c:
            if (*pCVar2 == (CallPrinter)0x0) {
              pAVar14 = *(AstNode **)(*(long *)(*plVar11 + lVar15 * 8) + 8);
              uVar7 = GetCurrentStackPosition();
              if (uVar7 < *(ulong *)pCVar3) {
                *pCVar2 = (CallPrinter)0x1;
              }
              else {
                VisitNoStackOverflowCheck(this,pAVar14);
              }
            }
          }
        } while( true );
      }
      lVar15 = 0;
      if (*pCVar1 == (CallPrinter)0x0) goto LAB_0149e9b0;
      do {
        Print(this,"(intermediate value)");
        while( true ) {
          plVar11 = *(long **)(param_1 + 0x28);
          lVar15 = lVar15 + 1;
          if (*(int *)((long)plVar11 + 0xc) <= lVar15) goto LAB_0149e9ec;
          if (*pCVar1 != (CallPrinter)0x0) break;
LAB_0149e9b0:
          if (*pCVar2 == (CallPrinter)0x0) {
            pAVar14 = *(AstNode **)(*(long *)(*plVar11 + lVar15 * 8) + 8);
            uVar7 = GetCurrentStackPosition();
            if (uVar7 < *(ulong *)pCVar3) {
              *pCVar2 = (CallPrinter)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar14);
            }
          }
        }
      } while( true );
    case 0x22:
    case 0x2e:
      if (*pCVar1 == (CallPrinter)0x0) {
        if (*pCVar2 == (CallPrinter)0x0) {
          pAVar14 = *(AstNode **)(param_1 + 8);
          uVar7 = GetCurrentStackPosition();
          if (uVar7 < *(ulong *)pCVar3) {
            *pCVar2 = (CallPrinter)0x1;
            CVar4 = *pCVar1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar14);
            CVar4 = *pCVar1;
          }
          goto joined_r0x0149e248;
        }
      }
      else {
        Print(this,"(intermediate value)");
        CVar4 = *pCVar1;
joined_r0x0149e248:
        if (CVar4 != (CallPrinter)0x0) goto LAB_0149e044;
      }
      if (*pCVar2 != (CallPrinter)0x0) goto LAB_0149e054;
LAB_0149e0c8:
      pAVar14 = *(AstNode **)(param_1 + 0x10);
LAB_0149e16c:
      uVar7 = GetCurrentStackPosition();
      if (uVar7 < *(ulong *)pCVar3) {
        *pCVar2 = (CallPrinter)0x1;
        CVar4 = *pCVar1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar14);
        CVar4 = *pCVar1;
      }
joined_r0x0149e1a0:
      if (CVar4 != (CallPrinter)0x0) {
LAB_0149e8f0:
        pcVar9 = "(intermediate value)";
        goto LAB_0149e910;
      }
LAB_0149e05c:
      if (*pCVar2 != (CallPrinter)0x0) {
        return;
      }
      param_1 = *(AstNode **)(param_1 + 0x18);
      break;
    case 0x23:
      VisitCountOperation(this,(CountOperation *)param_1);
      return;
    case 0x25:
    case 0x38:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 0x26:
      CVar4 = this[0x38];
      CVar6 = (CallPrinter)FunctionLiteral::kind((FunctionLiteral *)param_1);
      this[0x38] = CVar6;
      if (*(int *)(param_1 + 0x3c) < 1) {
LAB_0149e800:
        this[0x38] = CVar4;
        return;
      }
      lVar15 = 0;
      if (*pCVar1 == (CallPrinter)0x0) goto LAB_0149e7bc;
      do {
        Print(this,"(intermediate value)");
        while( true ) {
          lVar15 = lVar15 + 1;
          if (*(int *)(param_1 + 0x3c) <= lVar15) goto LAB_0149e800;
          if (*pCVar1 != (CallPrinter)0x0) break;
LAB_0149e7bc:
          if (*pCVar2 == (CallPrinter)0x0) {
            pAVar14 = *(AstNode **)(*(long *)(param_1 + 0x30) + lVar15 * 8);
            uVar7 = GetCurrentStackPosition();
            if (uVar7 < *(ulong *)pCVar3) {
              *pCVar2 = (CallPrinter)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar14);
            }
          }
        }
      } while( true );
    case 0x28:
      Print(this,"ImportCall(");
      pAVar14 = *(AstNode **)(param_1 + 8);
      goto LAB_0149e474;
    case 0x29:
      uVar8 = Literal::BuildValue((Literal *)param_1,*(Isolate **)this);
      uVar10 = 1;
      goto LAB_0149e4d4;
    case 0x2c:
      VisitProperty(this,(Property *)param_1);
      return;
    case 0x2d:
      pcVar9 = "(...";
LAB_0149e46c:
      Print(this,pcVar9);
      pAVar14 = *(AstNode **)(param_1 + 0x10);
LAB_0149e474:
      Find(this,pAVar14,true);
      pcVar9 = ")";
      goto LAB_0149e910;
    case 0x2f:
      pcVar9 = "super";
      goto LAB_0149e910;
    case 0x31:
      iVar5 = *(int *)((long)*(undefined8 **)(param_1 + 0x10) + 0xc);
      if (iVar5 == 0) {
        return;
      }
      lVar15 = (long)iVar5 << 3;
      puVar13 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
      do {
        Find(this,(AstNode *)*puVar13,true);
        lVar15 = lVar15 + -8;
        puVar13 = puVar13 + 1;
      } while (lVar15 != 0);
      return;
    case 0x32:
      pcVar9 = "this";
      goto LAB_0149e910;
    case 0x34:
      VisitUnaryOperation(this,(UnaryOperation *)param_1);
      return;
    case 0x35:
      if (this[0x1e] != (CallPrinter)0x0) {
        pLVar12 = (Literal *)(param_1 + 8);
        if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
          pLVar12 = (Literal *)(*(long *)pLVar12 + 8);
        }
        uVar10 = 0;
        uVar8 = **(undefined8 **)pLVar12;
LAB_0149e4d4:
        PrintLiteral(this,uVar8,uVar10);
        return;
      }
      pcVar9 = "(var)";
      goto LAB_0149e910;
    case 0x37:
      if (*pCVar1 != (CallPrinter)0x0) goto LAB_0149e8f0;
      pLVar12 = *(Literal **)(param_1 + 8);
      if (*(int *)(this + 0x18) == *(int *)*(Literal **)(param_1 + 8)) {
        this[0x1c] = (CallPrinter)0x1;
        if ((byte)this[0x38] - 10 < 5) {
          this[0x20] = (CallPrinter)0x1;
        }
        else {
          this[0x1f] = (CallPrinter)0x1;
        }
        Print(this,"yield* ");
        if (this[0x1c] != (CallPrinter)0x0) goto LAB_0149e8f0;
        pLVar12 = *(Literal **)(param_1 + 8);
      }
      param_1 = (AstNode *)pLVar12;
      if (*pCVar2 == (CallPrinter)0x0) goto code_r0x0149e1f8;
      goto switchD_0149df48_caseD_a;
    }
    uVar7 = GetCurrentStackPosition();
  } while (*(ulong *)pCVar3 <= uVar7);
  goto LAB_0149e8fc;
code_r0x0149e1f8:
  uVar7 = GetCurrentStackPosition();
  if (uVar7 < *(ulong *)pCVar3) {
LAB_0149e8fc:
    *pCVar2 = (CallPrinter)0x1;
switchD_0149df48_caseD_a:
    return;
  }
  goto LAB_0149df28;
}

