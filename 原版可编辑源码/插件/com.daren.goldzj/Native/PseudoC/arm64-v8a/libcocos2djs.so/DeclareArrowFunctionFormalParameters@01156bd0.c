
/* v8::internal::Parser::DeclareArrowFunctionFormalParameters(v8::internal::ParserFormalParameters*,
   v8::internal::Expression*, v8::internal::Scanner::Location const&) */

void __thiscall
v8::internal::Parser::DeclareArrowFunctionFormalParameters
          (Parser *this,ParserFormalParameters *param_1,Expression *param_2,Location *param_3)

{
  ParserFormalParameters PVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  DeclarationScope *pDVar10;
  ParserFormalParameters *pPVar11;
  ParserFormalParameters *pPVar12;
  
  if (((*(uint *)(param_2 + 4) & 0x3f) != 0x25) &&
     (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0')) {
    AddArrowFunctionFormalParameters(this,param_1,param_2,*(int *)(param_3 + 4));
    if (*(int *)(param_1 + 0x10) < 0xffff) {
      PVar1 = param_1[9];
      pDVar10 = *(DeclarationScope **)param_1;
      if (PVar1 == (ParserFormalParameters)0x0) {
        plVar5 = *(long **)(pDVar10 + 0x20);
        uVar7 = (ulong)*(uint *)(pDVar10 + 0x28);
        *(ushort *)(pDVar10 + 0x83) = *(ushort *)(pDVar10 + 0x83) & 0xfffe;
        plVar8 = plVar5;
        while (plVar9 = plVar8, plVar9 < plVar5 + uVar7 * 3) {
          plVar8 = plVar9 + 3;
          if (*plVar9 != 0) {
            do {
              uVar2 = *(ushort *)(plVar9[1] + 0x28);
              if ((uVar2 & 0x70) == 0x10) {
                *(ushort *)(plVar9[1] + 0x28) = uVar2 & 0xeff0;
                plVar5 = *(long **)(pDVar10 + 0x20);
                uVar7 = (ulong)*(uint *)(pDVar10 + 0x28);
              }
              do {
                plVar9 = plVar9 + 3;
                if (plVar5 + uVar7 * 3 <= plVar9) goto LAB_01156d20;
              } while (*plVar9 == 0);
            } while( true );
          }
        }
      }
LAB_01156d20:
      pPVar11 = *(ParserFormalParameters **)(param_1 + 0x20);
      pPVar12 = param_1 + 0x18;
      if (pPVar12 != pPVar11) {
        uVar3 = 2;
        if (PVar1 == (ParserFormalParameters)0x0) {
          uVar3 = 3;
        }
        do {
          puVar6 = *(ulong **)pPVar12;
          if (PVar1 == (ParserFormalParameters)0x0) {
            plVar8 = (long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
          }
          else {
            uVar7 = puVar6[1];
            if ((*(uint *)(uVar7 + 4) & 0x3f) != 0x35) {
              uVar7 = 0;
            }
            plVar8 = (long *)(uVar7 + 8);
            if ((*(byte *)(uVar7 + 5) & 1) != 0) {
              plVar8 = (long *)(*plVar8 + 8);
            }
          }
          DeclarationScope::DeclareParameter
                    (pDVar10,*plVar8,uVar3,3 < *puVar6,(*puVar6 & 3) != 0,
                     *(undefined8 *)(this + 0x60),(int)puVar6[2]);
          pPVar12 = (ParserFormalParameters *)(*(long *)pPVar12 + 0x18);
        } while (pPVar12 != pPVar11);
      }
    }
    else {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0xb0),*(undefined4 *)param_3,
                 *(undefined4 *)(param_3 + 4),0x10f,0);
      lVar4 = *(long *)(this + 0x158);
      if (*(char *)(lVar4 + 0x30) == '\0') {
        *(undefined4 *)(this + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar4 + 0x30) = 1;
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + 0x18);
        this[0x1a0] = (Parser)0x6d;
        this[0x1f0] = (Parser)0x6d;
        this[0x240] = (Parser)0x6d;
      }
    }
  }
  return;
}

