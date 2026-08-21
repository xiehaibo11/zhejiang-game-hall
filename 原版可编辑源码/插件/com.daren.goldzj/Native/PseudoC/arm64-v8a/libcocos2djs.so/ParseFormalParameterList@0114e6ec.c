
/* v8::internal::ParserBase<v8::internal::Parser>::ParseFormalParameterList(v8::internal::ParserFormalParameters*)
    */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseFormalParameterList
          (ParserBase<v8::internal::Parser> *this,ParserFormalParameters *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  ParserFormalParameters PVar4;
  ParserBase<v8::internal::Parser> PVar5;
  ushort uVar6;
  long lVar7;
  ParserBase<v8::internal::Parser> *pPVar8;
  Scanner *pSVar9;
  Expression *pEVar10;
  Expression *pEVar11;
  undefined4 uVar12;
  int iVar13;
  long *plVar14;
  ulong *puVar15;
  long lVar16;
  Zone *this_00;
  undefined4 *puVar17;
  ulong uVar18;
  DeclarationScope *pDVar19;
  ParserFormalParameters *pPVar20;
  long *plVar21;
  ParserFormalParameters *pPVar22;
  undefined8 uVar23;
  long *plVar24;
  ParserBase<v8::internal::Parser> *local_c8;
  long lStack_c0;
  ParserBase<v8::internal::Parser> *local_b8;
  long lStack_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  ParserBase<v8::internal::Parser> *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pSVar9 = *(Scanner **)(this + 0xf8);
  uVar23 = *(undefined8 *)(this + 0x110);
  *(ParserFormalParameters **)(this + 0x110) = param_1;
  cVar3 = *(char *)(*(long *)(pSVar9 + 8) + 0x38);
  if (cVar3 != '\x06') {
    do {
      if (0xfffd < *(int *)(param_1 + 0x10)) {
        ReportMessage(this,0x133);
        goto LAB_0114ed3c;
      }
      if (cVar3 == '\n') {
        Scanner::Next(pSVar9);
      }
      param_1[8] = (ParserFormalParameters)(cVar3 == '\n');
      lStack_c0 = *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3;
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
      uVar12 = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
      plVar21 = *(long **)(*(long *)this + 0x60);
      local_c8 = this + 0x20;
      pEVar10 = (Expression *)ParseBindingPattern(this);
      if ((pEVar10 == (Expression *)0x0) || ((*(uint *)(pEVar10 + 4) & 0x43f) != 0x35)) {
        param_1[9] = (ParserFormalParameters)0x0;
      }
      else {
        pEVar11 = pEVar10 + 8;
        if ((*(uint *)(pEVar10 + 4) >> 8 & 1) != 0) {
          pEVar11 = (Expression *)(*(long *)pEVar11 + 8);
        }
        uVar2 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
        if ((*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) == *(long *)pEVar11) ||
           (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == *(long *)pEVar11)) {
          plVar14 = *(long **)(this + 0xc0);
          if (*(byte *)(plVar14 + 2) - 1 < 3) {
            plVar24 = (long *)*plVar14;
            if (*(byte *)(plVar14 + 2) == 3) {
              if ((*(byte *)(*plVar24 + 0x81) & 1) == 0) {
                lVar16 = plVar24[0x22];
                *(ulong *)(lVar16 + 0x30) = CONCAT44(uVar2,uVar12);
                *(undefined4 *)(lVar16 + 0x38) = 0x128;
              }
              else {
                PendingCompilationErrorHandler::ReportMessageAt
                          ((PendingCompilationErrorHandler *)plVar24[0x16],uVar12,uVar2,0x128,0);
                lVar16 = plVar24[0x2b];
                if (*(char *)(lVar16 + 0x30) == '\0') {
                  *(undefined4 *)(plVar24 + 0x2c) = 0xffffffff;
                  *(undefined1 *)(lVar16 + 0x30) = 1;
                  *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
                  *(undefined1 *)(plVar24 + 0x34) = 0x6d;
                  *(undefined1 *)(plVar24 + 0x3e) = 0x6d;
                  *(undefined1 *)(plVar24 + 0x48) = 0x6d;
                }
              }
            }
            else {
              plVar24[0x23] = CONCAT44(uVar2,uVar12);
              *(undefined4 *)(*plVar14 + 0x120) = 0x128;
            }
          }
        }
      }
      pSVar9 = *(Scanner **)(this + 0xf8);
      if (*(char *)(*(long *)(pSVar9 + 8) + 0x38) == '\x11') {
        Scanner::Next(pSVar9);
        param_1[9] = (ParserFormalParameters)0x0;
        if (param_1[8] == (ParserFormalParameters)0x0) {
          PVar5 = this[0x130];
          this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
          lStack_b0 = *(long *)(this + 0xc0);
          local_a8 = 0;
          if (lStack_b0 == 0) {
            local_a6 = 0;
            local_a7 = 0;
          }
          else {
            local_a7 = *(undefined1 *)(lStack_b0 + 0x11);
            local_a6 = *(undefined1 *)(lStack_b0 + 0x12);
          }
          *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_b8;
          local_98 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
          if (lStack_b0 == 0) {
            local_70 = 0;
          }
          else if (*(byte *)(lStack_b0 + 0x10) < 3) {
            local_70 = *(undefined1 *)(lStack_b0 + 0x48);
          }
          else {
            local_70 = 0;
          }
          local_88 = 0;
          uStack_78 = 0xffffffff;
          local_80 = 0xffffffff;
          local_b8 = this;
          local_a0 = this + 0xe0;
          local_90 = local_98;
          pEVar11 = (Expression *)ParseAssignmentExpressionCoverGrammar(this);
          pPVar8 = local_b8;
          if ((uint)local_80 <= local_80._4_4_) {
            PendingCompilationErrorHandler::ReportMessageAt
                      (*(PendingCompilationErrorHandler **)(local_b8 + 0xb0),local_80 & 0xffffffff,
                       local_80._4_4_,local_88 & 0xffffffff,0);
            lVar16 = *(long *)(pPVar8 + 0x158);
            if (*(char *)(lVar16 + 0x30) == '\0') {
              *(undefined4 *)(pPVar8 + 0x160) = 0xffffffff;
              *(undefined1 *)(lVar16 + 0x30) = 1;
              *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
              pPVar8[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
              pPVar8[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
              pPVar8[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
            }
          }
          uVar18 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
          if (local_98 < uVar18 || local_98 - uVar18 == 0) {
            if (local_98 < uVar18) {
              *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
            }
          }
          else {
            std::__ndk1::
            vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
            ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                        *)local_a0,local_98 - uVar18);
          }
          local_90 = local_98;
          *(long *)(local_b8 + 0xc0) = lStack_b0;
          Parser::SetFunctionNameFromIdentifierRef((Parser *)this,pEVar11,pEVar10);
          pSVar9 = *(Scanner **)(this + 0xf8);
          this[0x130] = PVar5;
          goto LAB_0114eb4c;
        }
        ReportMessage(this,0x121);
      }
      else {
        pEVar11 = (Expression *)0x0;
LAB_0114eb4c:
        plVar14 = *(long **)(*(long *)this + 0x60);
        uVar12 = *(undefined4 *)(*(long *)pSVar9 + 4);
        if (plVar21 == plVar14) {
          uVar18 = (ulong)(byte)param_1[8];
          if (pEVar11 != (Expression *)0x0) goto LAB_0114ebd8;
LAB_0114eb6c:
          if ((int)uVar18 != 0) goto LAB_0114ebd8;
          iVar1 = *(int *)(param_1 + 0xc);
          iVar13 = *(int *)(param_1 + 0x10);
          if (iVar1 == *(int *)(param_1 + 0x10)) {
            *(int *)(param_1 + 0xc) = iVar1 + 1;
            iVar13 = iVar1;
          }
        }
        else {
          do {
            lVar16 = *(long *)(*plVar21 + 8);
            if (*(int *)(lVar16 + 0x24) == -1) {
              *(ushort *)(lVar16 + 0x28) = *(ushort *)(lVar16 + 0x28) & 0xbfff;
            }
            *(undefined4 *)(lVar16 + 0x24) = uVar12;
            plVar21 = (long *)(*plVar21 + 0x10);
          } while (plVar21 != plVar14);
          uVar12 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
          uVar18 = (ulong)(byte)param_1[8];
          if (pEVar11 == (Expression *)0x0) goto LAB_0114eb6c;
LAB_0114ebd8:
          iVar13 = *(int *)(param_1 + 0x10);
        }
        *(int *)(param_1 + 0x10) = iVar13 + 1;
        this_00 = (Zone *)**(undefined8 **)param_1;
        puVar15 = *(ulong **)(this_00 + 0x10);
        if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar15) < 0x20) {
          puVar15 = (ulong *)Zone::NewExpand(this_00,0x20);
        }
        else {
          *(ulong **)(this_00 + 0x10) = puVar15 + 4;
        }
        uVar2 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
        *puVar15 = uVar18 | (ulong)pEVar11;
        puVar15[1] = (ulong)pEVar10;
        *(undefined4 *)(puVar15 + 2) = uVar2;
        *(undefined4 *)((long)puVar15 + 0x14) = uVar12;
        puVar15[3] = 0;
        **(long **)(param_1 + 0x20) = (long)puVar15;
        *(ulong **)(param_1 + 0x20) = puVar15 + 3;
      }
      FuncNameInferrer::State::~State((State *)&local_c8);
      if (param_1[8] != (ParserFormalParameters)0x0) {
        param_1[9] = (ParserFormalParameters)0x0;
        puVar17 = *(undefined4 **)(*(long *)(this + 0xf8) + 8);
        if (*(char *)(puVar17 + 0xe) == '\x1e') {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(this + 0xb0),*puVar17,puVar17[1],0x118,0);
          lVar16 = *(long *)(this + 0x158);
          if (*(char *)(lVar16 + 0x30) == '\0') {
            *(undefined4 *)(this + 0x160) = 0xffffffff;
            *(undefined1 *)(lVar16 + 0x30) = 1;
            *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
            this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
            this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
            this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
          }
          goto LAB_0114ed3c;
        }
        break;
      }
      if (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) != '\x1e') break;
      Scanner::Next(*(Scanner **)(this + 0xf8));
      pSVar9 = *(Scanner **)(this + 0xf8);
      cVar3 = *(char *)(*(long *)(pSVar9 + 8) + 0x38);
    } while (cVar3 != '\x06');
  }
  PVar4 = param_1[9];
  pDVar19 = *(DeclarationScope **)param_1;
  if (PVar4 == (ParserFormalParameters)0x0) {
    plVar14 = *(long **)(pDVar19 + 0x20);
    uVar18 = (ulong)*(uint *)(pDVar19 + 0x28);
    *(ushort *)(pDVar19 + 0x83) = *(ushort *)(pDVar19 + 0x83) & 0xfffe;
    plVar21 = plVar14;
    while (plVar24 = plVar21, plVar24 < plVar14 + uVar18 * 3) {
      plVar21 = plVar24 + 3;
      if (*plVar24 != 0) {
        do {
          uVar6 = *(ushort *)(plVar24[1] + 0x28);
          if ((uVar6 & 0x70) == 0x10) {
            *(ushort *)(plVar24[1] + 0x28) = uVar6 & 0xeff0;
            plVar14 = *(long **)(pDVar19 + 0x20);
            uVar18 = (ulong)*(uint *)(pDVar19 + 0x28);
          }
          do {
            plVar24 = plVar24 + 3;
            if (plVar14 + uVar18 * 3 <= plVar24) goto LAB_0114e7d0;
          } while (*plVar24 == 0);
        } while( true );
      }
    }
  }
LAB_0114e7d0:
  pPVar20 = *(ParserFormalParameters **)(param_1 + 0x20);
  pPVar22 = param_1 + 0x18;
  if (pPVar22 != pPVar20) {
    uVar12 = 2;
    if (PVar4 == (ParserFormalParameters)0x0) {
      uVar12 = 3;
    }
    do {
      puVar15 = *(ulong **)pPVar22;
      if (PVar4 == (ParserFormalParameters)0x0) {
        plVar21 = (long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
      }
      else {
        uVar18 = puVar15[1];
        if ((*(uint *)(uVar18 + 4) & 0x3f) != 0x35) {
          uVar18 = 0;
        }
        plVar21 = (long *)(uVar18 + 8);
        if ((*(byte *)(uVar18 + 5) & 1) != 0) {
          plVar21 = (long *)(*plVar21 + 8);
        }
      }
      DeclarationScope::DeclareParameter
                (pDVar19,*plVar21,uVar12,3 < *puVar15,(*puVar15 & 3) != 0,
                 *(undefined8 *)(this + 0x60),(int)puVar15[2]);
      pPVar22 = (ParserFormalParameters *)(*(long *)pPVar22 + 0x18);
    } while (pPVar22 != pPVar20);
  }
LAB_0114ed3c:
  *(undefined8 *)(this + 0x110) = uVar23;
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

