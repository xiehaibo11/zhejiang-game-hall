
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseConditionalContinuation(v8::internal::PreParserExpression,
   int) */

undefined8
v8::internal::ParserBase<v8::internal::PreParser>::ParseConditionalContinuation
          (ParserBase<v8::internal::PreParser> *param_1)

{
  ParserBase<v8::internal::PreParser> PVar1;
  long lVar2;
  ParserBase<v8::internal::PreParser> *pPVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ParserBase<v8::internal::PreParser> *local_98;
  long lStack_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  ParserBase<v8::internal::PreParser> *local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  Scanner::Next(*(Scanner **)(param_1 + 200));
  PVar1 = param_1[0x100];
  param_1[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
  lStack_90 = *(long *)(param_1 + 0x90);
  local_88 = 0;
  if (lStack_90 == 0) {
    local_86 = 0;
    local_87 = 0;
  }
  else {
    local_87 = *(undefined1 *)(lStack_90 + 0x11);
    local_86 = *(undefined1 *)(lStack_90 + 0x12);
  }
  *(ParserBase<v8::internal::PreParser> ***)(param_1 + 0x90) = &local_98;
  local_78 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4;
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
  local_98 = param_1;
  local_80 = param_1 + 0xb0;
  local_70 = local_78;
  ParseAssignmentExpressionCoverGrammar(param_1);
  pPVar3 = local_98;
  if ((uint)local_60 <= local_60._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_98 + 0x80),local_60 & 0xffffffff,
               local_60._4_4_,local_68 & 0xffffffff,0);
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
  uVar7 = *(long *)(local_80 + 8) - *(long *)local_80 >> 4;
  if (local_78 < uVar7 || local_78 - uVar7 == 0) {
    if (local_78 < uVar7) {
      *(ulong *)(local_80 + 8) = *(long *)local_80 + local_78 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
    ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)local_80,local_78 - uVar7);
  }
  local_70 = local_78;
  *(long *)(local_98 + 0x90) = lStack_90;
  param_1[0x100] = PVar1;
  uVar4 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((uVar4 & 0xff) != 9) {
    ReportUnexpectedToken(param_1,uVar4);
  }
  lStack_90 = *(long *)(param_1 + 0x90);
  local_88 = 0;
  if (lStack_90 == 0) {
    local_86 = 0;
    local_87 = 0;
  }
  else {
    local_87 = *(undefined1 *)(lStack_90 + 0x11);
    local_86 = *(undefined1 *)(lStack_90 + 0x12);
  }
  *(ParserBase<v8::internal::PreParser> ***)(param_1 + 0x90) = &local_98;
  local_78 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4;
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
  local_98 = param_1;
  local_80 = param_1 + 0xb0;
  local_70 = local_78;
  ParseAssignmentExpressionCoverGrammar(param_1);
  pPVar3 = local_98;
  if ((uint)local_60 <= local_60._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_98 + 0x80),local_60 & 0xffffffff,
               local_60._4_4_,local_68 & 0xffffffff,0);
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
  uVar7 = *(long *)(local_80 + 8) - *(long *)local_80 >> 4;
  if (local_78 < uVar7 || local_78 - uVar7 == 0) {
    if (local_78 < uVar7) {
      *(ulong *)(local_80 + 8) = *(long *)local_80 + local_78 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
    ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)local_80,local_78 - uVar7);
  }
  local_70 = local_78;
  *(long *)(local_98 + 0x90) = lStack_90;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

