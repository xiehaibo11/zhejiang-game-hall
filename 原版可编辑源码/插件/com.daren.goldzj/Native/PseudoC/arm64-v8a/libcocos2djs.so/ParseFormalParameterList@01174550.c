
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseFormalParameterList(v8::internal::PreParserFormalParameters*)
    */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseFormalParameterList
          (ParserBase<v8::internal::PreParser> *this,PreParserFormalParameters *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  PreParserFormalParameters PVar6;
  ParserBase<v8::internal::PreParser> PVar7;
  long lVar8;
  ParserBase<v8::internal::PreParser> *pPVar9;
  Scanner *pSVar10;
  ulong uVar11;
  int iVar12;
  long *plVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  ParserBase<v8::internal::PreParser> *local_b8;
  long lStack_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  pSVar10 = *(Scanner **)(this + 200);
  uVar18 = *(undefined8 *)(this + 0xe0);
  *(PreParserFormalParameters **)(this + 0xe0) = param_1;
  cVar5 = *(char *)(*(long *)(pSVar10 + 8) + 0x38);
  if (cVar5 != '\x06') {
    do {
      if (0xfffd < *(int *)(param_1 + 0x10)) {
        ReportMessage(this,0x133);
        goto LAB_011749a8;
      }
      if (cVar5 == '\n') {
        Scanner::Next(pSVar10);
      }
      param_1[8] = (PreParserFormalParameters)(cVar5 == '\n');
      plVar20 = *(long **)(*(long *)this + 0x60);
      uVar2 = **(uint **)(*(long *)(this + 200) + 8);
      uVar11 = ParseBindingPattern(this);
      if ((uVar11 & 7) == 3) {
        if ((uVar11 & 0xfe0) == 0x20) {
          plVar13 = *(long **)(this + 0x90);
          if (*(byte *)(plVar13 + 2) - 1 < 3) {
            plVar19 = (long *)*plVar13;
            uVar3 = *(uint *)(**(long **)(this + 200) + 4);
            if (*(byte *)(plVar13 + 2) == 3) {
              if ((*(byte *)(*plVar19 + 0x81) & 1) == 0) {
                *(bool *)(plVar19[0x1c] + 0x15) = uVar2 <= uVar3;
              }
              else {
                PendingCompilationErrorHandler::ReportMessageAt
                          ((PendingCompilationErrorHandler *)plVar19[0x10],uVar2,uVar3,0x128,0);
                lVar15 = plVar19[0x19];
                lVar16 = *(long *)(lVar15 + 0x18);
                if (*(char *)(lVar16 + 0x30) == '\0') {
                  *(undefined4 *)(lVar15 + 0x20) = 0xffffffff;
                  *(undefined1 *)(lVar16 + 0x30) = 1;
                  *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
                  *(undefined1 *)(lVar15 + 0x60) = 0x6d;
                  *(undefined1 *)(lVar15 + 0xb0) = 0x6d;
                  *(undefined1 *)(lVar15 + 0x100) = 0x6d;
                }
              }
            }
            else {
              plVar19[0x1d] = CONCAT44(uVar3,uVar2);
              *(undefined4 *)(*plVar13 + 0xf0) = 0x128;
            }
          }
        }
      }
      else {
        param_1[9] = (PreParserFormalParameters)0x0;
      }
      pSVar10 = *(Scanner **)(this + 200);
      if (*(char *)(*(long *)(pSVar10 + 8) + 0x38) == '\x11') {
        Scanner::Next(pSVar10);
        param_1[9] = (PreParserFormalParameters)0x0;
        if (param_1[8] == (PreParserFormalParameters)0x0) {
          PVar7 = this[0x100];
          this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
          lStack_b0 = *(long *)(this + 0x90);
          local_a8 = 0;
          if (lStack_b0 == 0) {
            local_a6 = 0;
            local_a7 = 0;
          }
          else {
            local_a7 = *(undefined1 *)(lStack_b0 + 0x11);
            local_a6 = *(undefined1 *)(lStack_b0 + 0x12);
          }
          *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_b8;
          local_98 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
          local_70 = 0;
          if (lStack_b0 != 0) {
            if (*(byte *)(lStack_b0 + 0x10) < 3) {
              local_70 = *(undefined1 *)(lStack_b0 + 0x48);
            }
            else {
              local_70 = 0;
            }
          }
          local_88 = 0;
          uStack_78 = 0xffffffff;
          local_80 = 0xffffffff;
          local_b8 = this;
          local_a0 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                      *)(this + 0xb0);
          local_90 = local_98;
          uVar11 = ParseAssignmentExpressionCoverGrammar(this);
          pPVar9 = local_b8;
          if ((uint)local_80 <= local_80._4_4_) {
            PendingCompilationErrorHandler::ReportMessageAt
                      (*(PendingCompilationErrorHandler **)(local_b8 + 0x80),local_80 & 0xffffffff,
                       local_80._4_4_,local_88 & 0xffffffff,0);
            lVar15 = *(long *)(pPVar9 + 200);
            lVar16 = *(long *)(lVar15 + 0x18);
            if (*(char *)(lVar16 + 0x30) == '\0') {
              *(undefined4 *)(lVar15 + 0x20) = 0xffffffff;
              *(undefined1 *)(lVar16 + 0x30) = 1;
              *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
              *(undefined1 *)(lVar15 + 0x60) = 0x6d;
              *(undefined1 *)(lVar15 + 0xb0) = 0x6d;
              *(undefined1 *)(lVar15 + 0x100) = 0x6d;
            }
          }
          uVar17 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
          if (local_98 < uVar17 || local_98 - uVar17 == 0) {
            if (local_98 < uVar17) {
              *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
            }
          }
          else {
            std::__ndk1::
            vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
            ::__append(local_a0,local_98 - uVar17);
          }
          local_90 = local_98;
          *(long *)(local_b8 + 0x90) = lStack_b0;
          pSVar10 = *(Scanner **)(this + 200);
          this[0x100] = PVar7;
          goto LAB_01174810;
        }
        ReportMessage(this,0x121);
        PVar6 = param_1[8];
      }
      else {
        uVar11 = 0;
LAB_01174810:
        plVar13 = *(long **)(*(long *)this + 0x60);
        if (plVar20 != plVar13) {
          uVar4 = *(undefined4 *)(*(long *)pSVar10 + 4);
          do {
            lVar15 = *(long *)(*plVar20 + 8);
            if (*(int *)(lVar15 + 0x24) == -1) {
              *(ushort *)(lVar15 + 0x28) = *(ushort *)(lVar15 + 0x28) & 0xbfff;
            }
            *(undefined4 *)(lVar15 + 0x24) = uVar4;
            plVar20 = (long *)(*plVar20 + 0x10);
          } while (plVar20 != plVar13);
        }
        PVar6 = param_1[8];
        DeclarationScope::RecordParameter
                  (*(DeclarationScope **)param_1,PVar6 != (PreParserFormalParameters)0x0);
        if (((uVar11 & 7) == 0) && (PVar6 == (PreParserFormalParameters)0x0)) {
          iVar1 = *(int *)(param_1 + 0xc);
          iVar12 = *(int *)(param_1 + 0x10);
          if (iVar1 == *(int *)(param_1 + 0x10)) {
            *(int *)(param_1 + 0xc) = iVar1 + 1;
            iVar12 = iVar1;
          }
        }
        else {
          iVar12 = *(int *)(param_1 + 0x10);
        }
        *(int *)(param_1 + 0x10) = iVar12 + 1;
        PVar6 = param_1[8];
      }
      if (PVar6 != (PreParserFormalParameters)0x0) {
        param_1[9] = (PreParserFormalParameters)0x0;
        puVar14 = *(undefined4 **)(*(long *)(this + 200) + 8);
        if (*(char *)(puVar14 + 0xe) == '\x1e') {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(this + 0x80),*puVar14,puVar14[1],0x118,0);
          lVar15 = *(long *)(this + 200);
          lVar16 = *(long *)(lVar15 + 0x18);
          if (*(char *)(lVar16 + 0x30) == '\0') {
            *(undefined4 *)(lVar15 + 0x20) = 0xffffffff;
            *(undefined1 *)(lVar16 + 0x30) = 1;
            *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
            *(undefined1 *)(lVar15 + 0x60) = 0x6d;
            *(undefined1 *)(lVar15 + 0xb0) = 0x6d;
            *(undefined1 *)(lVar15 + 0x100) = 0x6d;
          }
          goto LAB_011749a8;
        }
        break;
      }
      if (*(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) != '\x1e') break;
      Scanner::Next(*(Scanner **)(this + 200));
      pSVar10 = *(Scanner **)(this + 200);
      cVar5 = *(char *)(*(long *)(pSVar10 + 8) + 0x38);
    } while (cVar5 != '\x06');
  }
  if (param_1[9] == (PreParserFormalParameters)0x0) {
    *(ushort *)(*(long *)param_1 + 0x83) = *(ushort *)(*(long *)param_1 + 0x83) & 0xfffe;
  }
LAB_011749a8:
  *(undefined8 *)(this + 0xe0) = uVar18;
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

