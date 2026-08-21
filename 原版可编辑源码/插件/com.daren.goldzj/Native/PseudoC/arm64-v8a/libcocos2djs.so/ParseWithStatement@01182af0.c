
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseWithStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*) */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseWithStatement
          (ParserBase<v8::internal::PreParser> *this,ZoneList *param_1)

{
  ParserBase<v8::internal::PreParser> PVar1;
  long lVar2;
  ParserBase<v8::internal::PreParser> *pPVar3;
  uint uVar4;
  Zone *this_00;
  Scope *pSVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  Scanner::Next(*(Scanner **)(this + 200));
  if ((*(byte *)(*(long *)this + 0x81) & 1) == 0) {
    uVar4 = Scanner::Next(*(Scanner **)(this + 200));
    if ((uVar4 & 0xff) != 5) {
      ReportUnexpectedToken(this,uVar4);
    }
    lStack_90 = *(long *)(this + 0x90);
    local_88 = 0;
    if (lStack_90 == 0) {
      local_86 = 0;
      local_87 = 0;
    }
    else {
      local_87 = *(undefined1 *)(lStack_90 + 0x11);
      local_86 = *(undefined1 *)(lStack_90 + 0x12);
    }
    local_80 = this + 0xb0;
    *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_98;
    local_78 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
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
    PVar1 = this[0x100];
    this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
    local_98 = this;
    local_70 = local_78;
    ParseExpressionCoverGrammar(this);
    pPVar3 = local_98;
    if ((uint)local_60 <= local_60._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_98 + 0x80),local_60 & 0xffffffff,
                 local_60._4_4_,local_68 & 0xffffffff,0);
      lVar6 = *(long *)(pPVar3 + 200);
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
    this[0x100] = PVar1;
    uVar8 = *(long *)(local_80 + 8) - *(long *)local_80 >> 4;
    if (local_78 < uVar8 || local_78 - uVar8 == 0) {
      if (local_78 < uVar8) {
        *(ulong *)(local_80 + 8) = *(long *)local_80 + local_78 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_80,local_78 - uVar8);
    }
    local_70 = local_78;
    *(long *)(local_98 + 0x90) = lStack_90;
    uVar4 = Scanner::Next(*(Scanner **)(this + 200));
    if ((uVar4 & 0xff) != 6) {
      ReportUnexpectedToken(this,uVar4);
    }
    this_00 = *(Zone **)(this + 0x88);
    uVar9 = *(undefined8 *)this;
    pSVar5 = *(Scope **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pSVar5) < 0x88) {
      pSVar5 = (Scope *)Zone::NewExpand(this_00,0x88);
    }
    else {
      *(Scope **)(this_00 + 0x10) = pSVar5 + 0x88;
    }
    Scope::Scope(pSVar5,*(undefined8 *)(this + 0x88),uVar9,7);
    uVar10 = *(undefined8 *)this;
    *(Scope **)this = pSVar5;
    *(undefined4 *)(pSVar5 + 0x70) = **(undefined4 **)(*(long *)(this + 200) + 8);
    ParseStatement(this,param_1,0,1);
    uVar9 = 2;
    *(undefined4 *)(pSVar5 + 0x74) = *(undefined4 *)(**(long **)(this + 200) + 4);
    *(undefined8 *)this = uVar10;
  }
  else {
    ReportMessage(this,0x12d);
    uVar9 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

