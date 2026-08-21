
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseAssignmentExpressionCoverGrammar() */

uint __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseAssignmentExpressionCoverGrammar
          (ParserBase<v8::internal::PreParser> *this)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  ParserBase<v8::internal::PreParser> *pPVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  undefined4 uVar14;
  ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>> *pEVar15;
  uint uVar16;
  ParserBase<v8::internal::PreParser> *local_a8;
  undefined1 local_a0;
  byte local_9f;
  undefined2 uStack_9e;
  undefined4 local_9c;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  short local_94;
  ParserBase<v8::internal::PreParser> *local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar1 = **(undefined4 **)(*(long *)(this + 200) + 8);
  uVar14 = uVar1;
  if (*(char *)(*(undefined4 **)(*(long *)(this + 200) + 8) + 0xe) == 'a') {
    lVar7 = Scope::AsDeclarationScope();
    if (*(byte *)(lVar7 + 0x85) - 0xd < 4) {
      uVar5 = ParseYieldExpression(this);
      goto LAB_0117c174;
    }
    uVar14 = **(undefined4 **)(*(long *)(this + 200) + 8);
  }
  uVar6 = ParseLogicalExpression(this);
  plVar9 = *(long **)(this + 200);
  bVar2 = *(byte *)(plVar9[1] + 0x38);
  if (bVar2 == 0xb) {
    uVar6 = ParseConditionalContinuation(this,uVar6,uVar14);
    plVar9 = *(long **)(this + 200);
    bVar2 = *(byte *)(plVar9[1] + 0x38);
  }
  uVar16 = (uint)bVar2;
  uVar5 = uVar6;
  if (0xe < uVar16 - 0xf) goto LAB_0117c174;
  uVar5 = uVar6 & 7;
  if (uVar16 == 0xf) {
    if ((uVar5 == 3) || ((uVar6 >> 3 & 1) != 0)) {
      local_a8 = *(ParserBase<v8::internal::PreParser> **)(this + 0xf8);
      *(undefined4 *)(local_a8 + 0x70) = uVar1;
      local_a0 = 0;
      local_9c = 0;
      uStack_98 = 0;
      uStack_97 = 0;
      uStack_96 = 0;
      uStack_95 = 0;
      local_94 = (ushort)(*(uint *)(this + 0xe8) <= *(uint *)(this + 0xec)) << 8;
      local_9f = (byte)local_a8[0x83] & 1;
      *(undefined8 *)(this + 0xf8) = 0;
      *(undefined8 *)(this + 0xe8) = 0xffffffff;
      *(undefined4 *)(this + 0xf0) = 0;
      uVar5 = ParseArrowFunctionLiteral(this,(PreParserFormalParameters *)&local_a8);
    }
    else {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0x80),0xffffffff,*(undefined4 *)*plVar9
                 ,0x10f,0);
      lVar7 = *(long *)(this + 200);
      lVar11 = *(long *)(lVar7 + 0x18);
      uVar5 = 1;
      if (*(char *)(lVar11 + 0x30) == '\0') {
        *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar11 + 0x30) = 1;
        *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
        *(undefined1 *)(lVar7 + 0x60) = 0x6d;
        *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar7 + 0x100) = 0x6d;
      }
    }
    goto LAB_0117c174;
  }
  if (uVar5 == 3) {
    if (((uVar6 & 0xfe0) == 0x20) && ((*(ushort *)(*(long *)this + 0x81) & 1) != 0)) {
LAB_0117c29c:
      if (((~uVar6 & 6) == 0) && (uVar16 == 0x11)) {
        if ((uVar6 >> 3 & 1) != 0) {
          if (*(byte *)(*(long *)(this + 0x90) + 0x10) - 3 < 3) {
            uVar8 = 0xfd;
          }
          else {
            uVar8 = 0xfb;
          }
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(this + 0x80),uVar1,
                     *(undefined4 *)(*plVar9 + 4),uVar8,0);
          lVar7 = *(long *)(this + 200);
          lVar11 = *(long *)(lVar7 + 0x18);
          if (*(char *)(lVar11 + 0x30) == '\0') {
            *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
            *(undefined1 *)(lVar11 + 0x30) = 1;
            *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
            *(undefined1 *)(lVar7 + 0x60) = 0x6d;
            *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
            *(undefined1 *)(lVar7 + 0x100) = 0x6d;
          }
        }
        pEVar15 = *(ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>> **)
                   (this + 0x90);
        if ((byte)pEVar15[0x10] < 3) {
          ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
          ValidatePattern(pEVar15,uVar6,uVar1,*(undefined4 *)(**(long **)(this + 200) + 4));
          *(undefined4 *)(pEVar15 + 0x30) = 0;
          *(undefined8 *)(pEVar15 + 0x38) = 0xffffffff;
        }
      }
      else {
        uVar6 = RewriteInvalidReferenceExpression
                          (this,uVar6,uVar1,*(undefined4 *)(*plVar9 + 4),0xfb);
      }
    }
    else {
      if ((uVar6 >> 3 & 1) != 0) {
        plVar10 = *(long **)(this + 0x90);
        if (*(byte *)(plVar10 + 2) - 1 < 5) {
          if (*(byte *)(plVar10 + 2) - 3 < 3) {
            lVar7 = *plVar10;
            PendingCompilationErrorHandler::ReportMessageAt
                      (*(PendingCompilationErrorHandler **)(lVar7 + 0x80),uVar1,
                       *(undefined4 *)(*plVar9 + 4),0xfd,0);
            lVar7 = *(long *)(lVar7 + 200);
            lVar11 = *(long *)(lVar7 + 0x18);
            if (*(char *)(lVar11 + 0x30) == '\0') {
              *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
              *(undefined1 *)(lVar11 + 0x30) = 1;
              *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
              *(undefined1 *)(lVar7 + 0x60) = 0x6d;
              *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
              *(undefined1 *)(lVar7 + 0x100) = 0x6d;
            }
          }
          else {
            *(ulong *)((long)plVar10 + 0x4c) = CONCAT44(*(undefined4 *)(*plVar9 + 4),uVar1);
            *(undefined4 *)((long)plVar10 + 0x54) = 0xfd;
          }
        }
      }
      lVar7 = *(long *)(this + 0x90);
      if (*(byte *)(lVar7 + 0x10) < 3) {
        iVar12 = (int)*(undefined8 *)(lVar7 + 0x28) - (int)*(long *)(lVar7 + 0x20);
        if (iVar12 != 0) {
          lVar7 = *(long *)(**(long **)(lVar7 + 0x18) +
                           (*(long *)(lVar7 + 0x20) + (long)(iVar12 + -1)) * 0x10);
          uVar5 = *(uint *)(lVar7 + 4);
          *(uint *)(lVar7 + 4) = uVar5 | 0x80;
          if ((uVar5 >> 8 & 1) != 0) {
            Variable::SetMaybeAssigned(*(Variable **)(lVar7 + 8));
          }
        }
      }
    }
  }
  else {
    if ((uVar5 != 2) || (3 < (uVar6 >> 4 & 0xf) - 1)) goto LAB_0117c29c;
    plVar10 = *(long **)(this + 0x90);
    if (*(byte *)(plVar10 + 2) - 1 < 5) {
      if (*(byte *)(plVar10 + 2) - 3 < 3) {
        lVar7 = *plVar10;
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(lVar7 + 0x80),uVar1,
                   *(undefined4 *)(*plVar9 + 4),0xf7,0);
        lVar7 = *(long *)(lVar7 + 200);
        lVar11 = *(long *)(lVar7 + 0x18);
        if (*(char *)(lVar11 + 0x30) == '\0') {
          *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar11 + 0x30) = 1;
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
          *(undefined1 *)(lVar7 + 0x60) = 0x6d;
          *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar7 + 0x100) = 0x6d;
        }
      }
      else {
        *(ulong *)((long)plVar10 + 0x4c) = CONCAT44(*(undefined4 *)(*plVar9 + 4),uVar1);
        *(undefined4 *)((long)plVar10 + 0x54) = 0xf7;
      }
    }
    plVar9 = *(long **)(this + 0x90);
    if (*(byte *)(plVar9 + 2) < 3) {
      if (*(uint *)(plVar9 + 7) <= *(uint *)((long)plVar9 + 0x3c)) {
        lVar7 = *plVar9;
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(lVar7 + 0x80),(int)plVar9[7],
                   *(undefined4 *)((long)plVar9 + 0x3c),(int)plVar9[6],0);
        lVar7 = *(long *)(lVar7 + 200);
        lVar11 = *(long *)(lVar7 + 0x18);
        if (*(char *)(lVar11 + 0x30) == '\0') {
          *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar11 + 0x30) = 1;
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
          *(undefined1 *)(lVar7 + 0x60) = 0x6d;
          *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar7 + 0x100) = 0x6d;
        }
      }
      *(undefined4 *)((long)plVar9 + 0x34) = 0;
      plVar9[8] = 0xffffffff;
    }
  }
  Scanner::Next(*(Scanner **)(this + 200));
  lVar7 = *(long *)(this + 0x90);
  uStack_98 = 0;
  local_a0 = (undefined1)lVar7;
  local_9f = (byte)((ulong)lVar7 >> 8);
  uStack_9e = (undefined2)((ulong)lVar7 >> 0x10);
  local_9c = (undefined4)((ulong)lVar7 >> 0x20);
  if (lVar7 == 0) {
    uStack_96 = 0;
    uStack_97 = 0;
  }
  else {
    uStack_97 = *(undefined1 *)(lVar7 + 0x11);
    uStack_96 = *(undefined1 *)(lVar7 + 0x12);
  }
  local_90 = this + 0xb0;
  *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_a8;
  local_88 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
  local_60 = 0;
  if (lVar7 != 0) {
    if (*(byte *)(lVar7 + 0x10) < 3) {
      local_60 = *(undefined1 *)(lVar7 + 0x48);
    }
    else {
      local_60 = 0;
    }
  }
  local_78 = 0;
  uStack_68 = 0xffffffff;
  local_70 = 0xffffffff;
  local_a8 = this;
  local_80 = local_88;
  ParseAssignmentExpressionCoverGrammar(this);
  pPVar4 = local_a8;
  if ((uint)local_70 <= local_70._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_a8 + 0x80),local_70 & 0xffffffff,
               local_70._4_4_,local_78 & 0xffffffff,0);
    lVar7 = *(long *)(pPVar4 + 200);
    lVar11 = *(long *)(lVar7 + 0x18);
    if (*(char *)(lVar11 + 0x30) == '\0') {
      *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar11 + 0x30) = 1;
      *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
      *(undefined1 *)(lVar7 + 0x60) = 0x6d;
      *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar7 + 0x100) = 0x6d;
    }
  }
  uVar13 = *(long *)(local_90 + 8) - *(long *)local_90 >> 4;
  if (local_88 < uVar13 || local_88 - uVar13 == 0) {
    if (local_88 < uVar13) {
      *(ulong *)(local_90 + 8) = *(long *)local_90 + local_88 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
    ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)local_90,local_88 - uVar13);
  }
  local_80 = local_88;
  *(ulong *)(local_a8 + 0x90) = CONCAT44(local_9c,CONCAT22(uStack_9e,CONCAT11(local_9f,local_a0)));
  if (uVar16 == 0x11) {
    uVar5 = 0x92;
    if (((uVar6 & 7) != 2) || (1 < (uVar6 >> 4 & 0xf) - 1)) goto LAB_0117c174;
    *(int *)(*(long *)(this + 0x10) + 0x10) = *(int *)(*(long *)(this + 0x10) + 0x10) + 1;
  }
  else {
    plVar9 = *(long **)(this + 0x90);
    uVar14 = *(undefined4 *)(**(long **)(this + 200) + 4);
    if (*(byte *)(plVar9 + 2) - 3 < 3) {
      lVar7 = *plVar9;
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(lVar7 + 0x80),uVar1,uVar14,0xfd,0);
      lVar7 = *(long *)(lVar7 + 200);
      lVar11 = *(long *)(lVar7 + 0x18);
      if (*(char *)(lVar11 + 0x30) == '\0') {
        *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar11 + 0x30) = 1;
        *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
        *(undefined1 *)(lVar7 + 0x60) = 0x6d;
        *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar7 + 0x100) = 0x6d;
      }
    }
    else if (*(uint *)((long)plVar9 + 0x44) < *(uint *)(plVar9 + 8)) {
      *(undefined4 *)((long)plVar9 + 0x34) = 0xfd;
      plVar9[8] = CONCAT44(uVar14,uVar1);
    }
  }
  uVar5 = 0x92;
LAB_0117c174:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

