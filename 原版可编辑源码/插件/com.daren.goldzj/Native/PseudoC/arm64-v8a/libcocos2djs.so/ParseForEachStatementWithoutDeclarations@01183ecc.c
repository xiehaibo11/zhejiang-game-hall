
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseForEachStatementWithoutDeclarations(int,
   v8::internal::PreParserExpression, int, int,
   v8::internal::ParserBase<v8::internal::PreParser>::ForInfo*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

long v8::internal::ParserBase<v8::internal::PreParser>::ParseForEachStatementWithoutDeclarations
               (ParserBase<v8::internal::PreParser> *param_1)

{
  ParserBase<v8::internal::PreParser> PVar1;
  long lVar2;
  ParserBase<v8::internal::PreParser> *pPVar3;
  uint uVar4;
  long in_x5;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ParserBase<v8::internal::PreParser> *local_88;
  long lStack_80;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  ParserBase<v8::internal::PreParser> *local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_88 = param_1;
  if (*(int *)(in_x5 + 0x10) == 1) {
    PVar1 = param_1[0x100];
    param_1[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
    lStack_80 = *(long *)(param_1 + 0x90);
    local_78 = 0;
    if (lStack_80 == 0) {
      local_76 = 0;
      local_77 = 0;
    }
    else {
      local_77 = *(undefined1 *)(lStack_80 + 0x11);
      local_76 = *(undefined1 *)(lStack_80 + 0x12);
    }
    local_70 = param_1 + 0xb0;
    *(ParserBase<v8::internal::PreParser> ***)(param_1 + 0x90) = &local_88;
    local_68 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4;
    local_40 = 0;
    if (lStack_80 != 0) {
      if (*(byte *)(lStack_80 + 0x10) < 3) {
        local_40 = *(undefined1 *)(lStack_80 + 0x48);
      }
      else {
        local_40 = 0;
      }
    }
    local_58 = 0;
    uStack_48 = 0xffffffff;
    local_50 = 0xffffffff;
    local_60 = local_68;
    ParseAssignmentExpressionCoverGrammar(param_1);
    pPVar3 = local_88;
    if ((uint)local_50 <= local_50._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_88 + 0x80),local_50 & 0xffffffff,
                 local_50._4_4_,local_58 & 0xffffffff,0);
      lVar5 = *(long *)(pPVar3 + 200);
      lVar6 = *(long *)(lVar5 + 0x18);
      if (*(char *)(lVar6 + 0x30) == '\0') {
        *(undefined4 *)(lVar5 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar6 + 0x30) = 1;
        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
        *(undefined1 *)(lVar5 + 0x60) = 0x6d;
        *(undefined1 *)(lVar5 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar5 + 0x100) = 0x6d;
      }
    }
    uVar7 = *(long *)(local_70 + 8) - *(long *)local_70 >> 4;
    if (local_68 < uVar7 || local_68 - uVar7 == 0) {
      if (local_68 < uVar7) {
        *(ulong *)(local_70 + 8) = *(long *)local_70 + local_68 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_70,local_68 - uVar7);
    }
    *(long *)(local_88 + 0x90) = lStack_80;
    param_1[0x100] = PVar1;
  }
  else {
    lStack_80 = *(long *)(param_1 + 0x90);
    local_78 = 0;
    if (lStack_80 == 0) {
      local_76 = 0;
      local_77 = 0;
    }
    else {
      local_77 = *(undefined1 *)(lStack_80 + 0x11);
      local_76 = *(undefined1 *)(lStack_80 + 0x12);
    }
    local_70 = param_1 + 0xb0;
    *(ParserBase<v8::internal::PreParser> ***)(param_1 + 0x90) = &local_88;
    local_68 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4;
    local_40 = 0;
    if (lStack_80 != 0) {
      if (*(byte *)(lStack_80 + 0x10) < 3) {
        local_40 = *(undefined1 *)(lStack_80 + 0x48);
      }
      else {
        local_40 = 0;
      }
    }
    local_58 = 0;
    uStack_48 = 0xffffffff;
    local_50 = 0xffffffff;
    PVar1 = param_1[0x100];
    param_1[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
    local_60 = local_68;
    ParseExpressionCoverGrammar(param_1);
    pPVar3 = local_88;
    if ((uint)local_50 <= local_50._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_88 + 0x80),local_50 & 0xffffffff,
                 local_50._4_4_,local_58 & 0xffffffff,0);
      lVar5 = *(long *)(pPVar3 + 200);
      lVar6 = *(long *)(lVar5 + 0x18);
      if (*(char *)(lVar6 + 0x30) == '\0') {
        *(undefined4 *)(lVar5 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar6 + 0x30) = 1;
        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
        *(undefined1 *)(lVar5 + 0x60) = 0x6d;
        *(undefined1 *)(lVar5 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar5 + 0x100) = 0x6d;
      }
    }
    param_1[0x100] = PVar1;
    uVar7 = *(long *)(local_70 + 8) - *(long *)local_70 >> 4;
    if (local_68 < uVar7 || local_68 - uVar7 == 0) {
      if (local_68 < uVar7) {
        *(ulong *)(local_70 + 8) = *(long *)local_70 + local_68 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_70,local_68 - uVar7);
    }
    *(long *)(local_88 + 0x90) = lStack_80;
  }
  local_60 = local_68;
  uVar4 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((uVar4 & 0xff) != 6) {
    ReportUnexpectedToken(param_1,uVar4);
  }
  ParseStatement(param_1,0,0,1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return (ulong)(*(char *)(*(long *)(*(long *)(param_1 + 200) + 0x18) + 0x30) == '\0') << 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

