
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseDoWhileStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*, v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

undefined8
v8::internal::ParserBase<v8::internal::PreParser>::ParseDoWhileStatement
          (ZoneList *param_1,ZoneList *param_2)

{
  ZoneList ZVar1;
  long lVar2;
  ZoneList *pZVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ZoneList *local_98;
  long lStack_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  ZoneList *local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar8 = *(long *)(param_1 + 0x10);
  *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
  Scanner::Next(*(Scanner **)(param_1 + 200));
  uVar5 = GetCurrentStackPosition();
  if (uVar5 < *(ulong *)(param_1 + 0x78)) {
    lVar6 = *(long *)(param_1 + 200);
    lVar7 = *(long *)(lVar6 + 0x18);
    if (*(char *)(lVar7 + 0x30) == '\0') {
      *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar7 + 0x30) = 1;
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + 0x18);
      *(undefined1 *)(lVar6 + 0x60) = 0x6d;
      *(undefined1 *)(lVar6 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar6 + 0x100) = 0x6d;
    }
    **(undefined2 **)(param_1 + 0x80) = 0x101;
  }
  ParseStatement((ParserBase<v8::internal::PreParser> *)param_1,0,0,1);
  uVar4 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((uVar4 & 0xff) != 0x51) {
    ReportUnexpectedToken(param_1,uVar4);
  }
  uVar4 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((uVar4 & 0xff) != 5) {
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
  local_80 = param_1 + 0xb0;
  *(ZoneList ***)(param_1 + 0x90) = &local_98;
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
  ZVar1 = param_1[0x100];
  param_1[0x100] = (ZoneList)0x1;
  local_98 = param_1;
  local_70 = local_78;
  ParseExpressionCoverGrammar((ParserBase<v8::internal::PreParser> *)param_1);
  pZVar3 = local_98;
  if ((uint)local_60 <= local_60._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_98 + 0x80),local_60 & 0xffffffff,
               local_60._4_4_,local_68 & 0xffffffff,0);
    lVar6 = *(long *)(pZVar3 + 200);
    lVar7 = *(long *)(lVar6 + 0x18);
    if (*(char *)(lVar7 + 0x30) == '\0') {
      *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar7 + 0x30) = 1;
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + 0x18);
      *(undefined1 *)(lVar6 + 0x60) = 0x6d;
      *(undefined1 *)(lVar6 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar6 + 0x100) = 0x6d;
    }
  }
  param_1[0x100] = ZVar1;
  uVar5 = *(long *)(local_80 + 8) - *(long *)local_80 >> 4;
  if (local_78 < uVar5 || local_78 - uVar5 == 0) {
    if (local_78 < uVar5) {
      *(ulong *)(local_80 + 8) = *(long *)local_80 + local_78 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
    ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)local_80,local_78 - uVar5);
  }
  local_70 = local_78;
  *(long *)(local_98 + 0x90) = lStack_90;
  uVar4 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((uVar4 & 0xff) != 6) {
    ReportUnexpectedToken(param_1,uVar4);
  }
  if (*(char *)(*(long *)(*(Scanner **)(param_1 + 200) + 8) + 0x38) == '\f') {
    Scanner::Next(*(Scanner **)(param_1 + 200));
  }
  *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + -1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

