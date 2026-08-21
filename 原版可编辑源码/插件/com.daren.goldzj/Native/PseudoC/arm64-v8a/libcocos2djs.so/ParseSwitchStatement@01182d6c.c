
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseSwitchStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*) */

void v8::internal::ParserBase<v8::internal::PreParser>::ParseSwitchStatement(ZoneList *param_1)

{
  undefined4 uVar1;
  ZoneList ZVar2;
  long lVar3;
  bool bVar4;
  ZoneList *pZVar5;
  uint uVar6;
  int iVar7;
  Scanner *this;
  undefined8 uVar8;
  Scope *pSVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  Zone *this_00;
  undefined8 uVar13;
  ZoneList *local_b8;
  long lStack_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  ZoneList *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar1 = **(undefined4 **)(*(Scanner **)(param_1 + 200) + 8);
  Scanner::Next(*(Scanner **)(param_1 + 200));
  uVar6 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((uVar6 & 0xff) != 5) {
    ReportUnexpectedToken(param_1,uVar6);
  }
  lStack_b0 = *(long *)(param_1 + 0x90);
  local_a8 = 0;
  if (lStack_b0 == 0) {
    local_a6 = 0;
    local_a7 = 0;
  }
  else {
    local_a7 = *(undefined1 *)(lStack_b0 + 0x11);
    local_a6 = *(undefined1 *)(lStack_b0 + 0x12);
  }
  *(ZoneList ***)(param_1 + 0x90) = &local_b8;
  local_98 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4;
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
  ZVar2 = param_1[0x100];
  param_1[0x100] = (ZoneList)0x1;
  local_b8 = param_1;
  local_a0 = param_1 + 0xb0;
  local_90 = local_98;
  ParseExpressionCoverGrammar((ParserBase<v8::internal::PreParser> *)param_1);
  pZVar5 = local_b8;
  if ((uint)local_80 <= local_80._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_b8 + 0x80),local_80 & 0xffffffff,
               local_80._4_4_,local_88 & 0xffffffff,0);
    lVar10 = *(long *)(pZVar5 + 200);
    lVar11 = *(long *)(lVar10 + 0x18);
    if (*(char *)(lVar11 + 0x30) == '\0') {
      *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar11 + 0x30) = 1;
      *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
      *(undefined1 *)(lVar10 + 0x60) = 0x6d;
      *(undefined1 *)(lVar10 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar10 + 0x100) = 0x6d;
    }
  }
  param_1[0x100] = ZVar2;
  uVar12 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
  if (local_98 < uVar12 || local_98 - uVar12 == 0) {
    if (local_98 < uVar12) {
      *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
    ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)local_a0,local_98 - uVar12);
  }
  local_90 = local_98;
  *(long *)(local_b8 + 0x90) = lStack_b0;
  uVar6 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((uVar6 & 0xff) != 6) {
    ReportUnexpectedToken(param_1,uVar6);
  }
  this_00 = *(Zone **)(param_1 + 0x88);
  pSVar9 = *(Scope **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pSVar9) < 0x88) {
    pSVar9 = (Scope *)Zone::NewExpand(this_00,0x88);
  }
  else {
    *(Scope **)(this_00 + 0x10) = pSVar9 + 0x88;
  }
  Scope::Scope(pSVar9,this_00,*(undefined8 *)param_1,6);
  uVar13 = *(undefined8 *)param_1;
  *(Scope **)param_1 = pSVar9;
  *(undefined4 *)(pSVar9 + 0x70) = uVar1;
  *(ushort *)(*(long *)param_1 + 0x81) = *(ushort *)(*(long *)param_1 + 0x81) | 8;
  uVar6 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((uVar6 & 0xff) != 8) {
    ReportUnexpectedToken(param_1,uVar6);
  }
  this = *(Scanner **)(param_1 + 200);
  bVar4 = false;
  uVar6 = (uint)*(byte *)(*(long *)(this + 8) + 0x38);
  do {
    if (uVar6 == 0x40) {
      Scanner::Next(this);
      lStack_b0 = *(long *)(param_1 + 0x90);
      local_a8 = 0;
      if (lStack_b0 == 0) {
        local_a6 = 0;
        local_a7 = 0;
      }
      else {
        local_a7 = *(undefined1 *)(lStack_b0 + 0x11);
        local_a6 = *(undefined1 *)(lStack_b0 + 0x12);
      }
      *(ZoneList ***)(param_1 + 0x90) = &local_b8;
      local_98 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4;
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
      ZVar2 = param_1[0x100];
      param_1[0x100] = (ZoneList)0x1;
      local_b8 = param_1;
      local_a0 = param_1 + 0xb0;
      local_90 = local_98;
      ParseExpressionCoverGrammar((ParserBase<v8::internal::PreParser> *)param_1);
      pZVar5 = local_b8;
      if ((uint)local_80 <= local_80._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_b8 + 0x80),local_80 & 0xffffffff,
                   local_80._4_4_,local_88 & 0xffffffff,0);
        lVar10 = *(long *)(pZVar5 + 200);
        lVar11 = *(long *)(lVar10 + 0x18);
        if (*(char *)(lVar11 + 0x30) == '\0') {
          *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar11 + 0x30) = 1;
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
          *(undefined1 *)(lVar10 + 0x60) = 0x6d;
          *(undefined1 *)(lVar10 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar10 + 0x100) = 0x6d;
        }
      }
      param_1[0x100] = ZVar2;
      uVar12 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
      if (local_98 < uVar12 || local_98 - uVar12 == 0) {
        if (local_98 < uVar12) {
          *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)local_a0,local_98 - uVar12);
      }
      local_90 = local_98;
      *(long *)(local_b8 + 0x90) = lStack_b0;
    }
    else {
      if (uVar6 == 0xd) {
        uVar6 = Scanner::Next(this);
        if ((uVar6 & 0xff) != 0xd) {
          ReportUnexpectedToken(param_1,uVar6);
        }
        *(undefined4 *)(*(long *)param_1 + 0x74) = *(undefined4 *)(**(long **)(param_1 + 200) + 4);
        Scope::FinalizeBlockScope(*(Scope **)param_1);
        uVar8 = 2;
        goto LAB_01183158;
      }
      uVar6 = Scanner::Next(this);
      if ((uVar6 & 0xff) != 0x44) {
        ReportUnexpectedToken(param_1,uVar6);
      }
      if (bVar4) {
        ReportMessage((ParserBase<v8::internal::PreParser> *)param_1,0x115);
LAB_01183154:
        uVar8 = 0;
LAB_01183158:
        *(undefined8 *)param_1 = uVar13;
        if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar8);
        }
        return;
      }
      bVar4 = true;
    }
    uVar6 = Scanner::Next(*(Scanner **)(param_1 + 200));
    if ((uVar6 & 0xff) != 9) {
      ReportUnexpectedToken(param_1,uVar6);
    }
    while( true ) {
      this = *(Scanner **)(param_1 + 200);
      uVar6 = (uint)*(byte *)(*(long *)(this + 8) + 0x38);
      if (uVar6 - 0xd < 0x38 && (1L << ((ulong)(uVar6 - 0xd) & 0x3f) & 0x88000000000001U) != 0)
      break;
      iVar7 = ParseStatementListItem((ParserBase<v8::internal::PreParser> *)param_1);
      if (iVar7 == 0) goto LAB_01183154;
    }
  } while( true );
}

