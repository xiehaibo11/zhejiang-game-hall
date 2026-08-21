
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseStandardForLoop(int,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*, v8::internal::PreParserExpression*,
   v8::internal::PreParserStatement*, v8::internal::PreParserStatement*) */

undefined8
v8::internal::ParserBase<v8::internal::PreParser>::ParseStandardForLoop
          (int param_1,ZoneList *param_2,ZoneList *param_3,PreParserExpression *param_4,
          PreParserStatement *param_5,PreParserStatement *param_6)

{
  ParserBase<v8::internal::PreParser> PVar1;
  long lVar2;
  ParserBase<v8::internal::PreParser> *pPVar3;
  undefined4 uVar4;
  uint uVar5;
  ParserBase<v8::internal::PreParser> *this;
  ulong uVar6;
  Scanner *pSVar7;
  undefined4 *in_x6;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ParserBase<v8::internal::PreParser> *local_a8;
  long lStack_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  ParserBase<v8::internal::PreParser> *local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  long local_58;
  
  this = (ParserBase<v8::internal::PreParser> *)(ulong)(uint)param_1;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar6 = GetCurrentStackPosition();
  if (uVar6 < *(ulong *)(this + 0x78)) {
    lVar8 = *(long *)(this + 200);
    lVar9 = *(long *)(lVar8 + 0x18);
    if (*(char *)(lVar9 + 0x30) == '\0') {
      *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar9 + 0x30) = 1;
      *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined1 *)(lVar8 + 0x60) = 0x6d;
      *(undefined1 *)(lVar8 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar8 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0x80) = 0x101;
  }
  pSVar7 = *(Scanner **)(this + 200);
  if (*(char *)(*(long *)(pSVar7 + 8) + 0x38) != '\f') {
    lStack_a0 = *(long *)(this + 0x90);
    local_98 = 0;
    if (lStack_a0 == 0) {
      local_96 = 0;
      local_97 = 0;
    }
    else {
      local_97 = *(undefined1 *)(lStack_a0 + 0x11);
      local_96 = *(undefined1 *)(lStack_a0 + 0x12);
    }
    local_90 = this + 0xb0;
    *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_a8;
    local_88 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
    local_60 = 0;
    if (lStack_a0 != 0) {
      if (*(byte *)(lStack_a0 + 0x10) < 3) {
        local_60 = *(undefined1 *)(lStack_a0 + 0x48);
      }
      else {
        local_60 = 0;
      }
    }
    local_78 = 0;
    uStack_68 = 0xffffffff;
    local_70 = 0xffffffff;
    PVar1 = this[0x100];
    this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
    local_a8 = this;
    local_80 = local_88;
    uVar4 = ParseExpressionCoverGrammar(this);
    pPVar3 = local_a8;
    if ((uint)local_70 <= local_70._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_a8 + 0x80),local_70 & 0xffffffff,
                 local_70._4_4_,local_78 & 0xffffffff,0);
      lVar8 = *(long *)(pPVar3 + 200);
      lVar9 = *(long *)(lVar8 + 0x18);
      if (*(char *)(lVar9 + 0x30) == '\0') {
        *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar9 + 0x30) = 1;
        *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
        *(undefined1 *)(lVar8 + 0x60) = 0x6d;
        *(undefined1 *)(lVar8 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar8 + 0x100) = 0x6d;
      }
    }
    this[0x100] = PVar1;
    uVar6 = *(long *)(local_90 + 8) - *(long *)local_90 >> 4;
    if (local_88 < uVar6 || local_88 - uVar6 == 0) {
      if (local_88 < uVar6) {
        *(ulong *)(local_90 + 8) = *(long *)local_90 + local_88 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_90,local_88 - uVar6);
    }
    local_80 = local_88;
    *(long *)(local_a8 + 0x90) = lStack_a0;
    *(undefined4 *)param_5 = uVar4;
    pSVar7 = *(Scanner **)(this + 200);
  }
  uVar5 = Scanner::Next(pSVar7);
  if ((uVar5 & 0xff) != 0xc) {
    ReportUnexpectedToken(this,uVar5);
  }
  pSVar7 = *(Scanner **)(this + 200);
  if (*(char *)(*(long *)(pSVar7 + 8) + 0x38) != '\x06') {
    lStack_a0 = *(long *)(this + 0x90);
    local_98 = 0;
    if (lStack_a0 == 0) {
      local_96 = 0;
      local_97 = 0;
    }
    else {
      local_97 = *(undefined1 *)(lStack_a0 + 0x11);
      local_96 = *(undefined1 *)(lStack_a0 + 0x12);
    }
    local_90 = this + 0xb0;
    *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_a8;
    local_88 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
    local_60 = 0;
    if (lStack_a0 != 0) {
      if (*(byte *)(lStack_a0 + 0x10) < 3) {
        local_60 = *(undefined1 *)(lStack_a0 + 0x48);
      }
      else {
        local_60 = 0;
      }
    }
    local_78 = 0;
    uStack_68 = 0xffffffff;
    local_70 = 0xffffffff;
    PVar1 = this[0x100];
    this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
    local_a8 = this;
    local_80 = local_88;
    uVar6 = ParseExpressionCoverGrammar(this);
    pPVar3 = local_a8;
    if ((uint)local_70 <= local_70._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_a8 + 0x80),local_70 & 0xffffffff,
                 local_70._4_4_,local_78 & 0xffffffff,0);
      lVar8 = *(long *)(pPVar3 + 200);
      lVar9 = *(long *)(lVar8 + 0x18);
      if (*(char *)(lVar9 + 0x30) == '\0') {
        *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar9 + 0x30) = 1;
        *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
        *(undefined1 *)(lVar8 + 0x60) = 0x6d;
        *(undefined1 *)(lVar8 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar8 + 0x100) = 0x6d;
      }
    }
    this[0x100] = PVar1;
    uVar10 = *(long *)(local_90 + 8) - *(long *)local_90 >> 4;
    if (local_88 < uVar10 || local_88 - uVar10 == 0) {
      if (local_88 < uVar10) {
        *(ulong *)(local_90 + 8) = *(long *)local_90 + local_88 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_90,local_88 - uVar10);
    }
    uVar4 = 4;
    if ((uVar6 & 7) != 4) {
      uVar4 = 2;
    }
    local_80 = local_88;
    *(long *)(local_a8 + 0x90) = lStack_a0;
    *(undefined4 *)param_6 = uVar4;
    pSVar7 = *(Scanner **)(this + 200);
  }
  uVar5 = Scanner::Next(pSVar7);
  if ((uVar5 & 0xff) != 6) {
    ReportUnexpectedToken(this,uVar5);
  }
  uVar4 = ParseStatement(this,0,0,1);
  *in_x6 = uVar4;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

