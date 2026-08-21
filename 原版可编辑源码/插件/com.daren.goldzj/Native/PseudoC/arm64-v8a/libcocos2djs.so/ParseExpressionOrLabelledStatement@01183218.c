
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseExpressionOrLabelledStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*, v8::internal::ZoneList<v8::internal::AstRawString const*>*,
   v8::internal::AllowLabelledFunctionStatement) */

undefined4 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseExpressionOrLabelledStatement
          (ParserBase<v8::internal::PreParser> *this,undefined8 param_1,undefined8 param_2,
          int param_4)

{
  byte bVar1;
  ParserBase<v8::internal::PreParser> PVar2;
  long lVar3;
  bool bVar4;
  ParserBase<v8::internal::PreParser> *pPVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  Scanner *pSVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ParserBase<v8::internal::PreParser> *local_b8;
  long lStack_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  ParserBase<v8::internal::PreParser> *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pSVar9 = *(Scanner **)(this + 200);
  bVar1 = *(byte *)(*(long *)(pSVar9 + 8) + 0x38);
  if (bVar1 < 0x67) {
    if (bVar1 == 0x62) {
      cVar6 = Scanner::PeekAhead(pSVar9);
      if ((cVar6 == '\x03') ||
         (((cVar6 == '\\' || (cVar6 == '\b')) &&
          (pSVar9 = *(Scanner **)(this + 200), Scanner::PeekAhead(pSVar9),
          *(char *)(*(long *)(pSVar9 + 0x10) + 0x4c) == '\0')))) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0x80),
                   **(undefined4 **)(*(long *)(this + 200) + 8),
                   (*(undefined4 **)(*(long *)(this + 200) + 8))[1],0x146,0);
        lVar10 = *(long *)(this + 200);
        uVar8 = 0;
        lVar11 = *(long *)(lVar10 + 0x18);
        if (*(char *)(lVar11 + 0x30) == '\0') {
          *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
          uVar8 = 0;
          *(undefined1 *)(lVar11 + 0x30) = 1;
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
          *(undefined1 *)(lVar10 + 0x60) = 0x6d;
          *(undefined1 *)(lVar10 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar10 + 0x100) = 0x6d;
        }
        goto LAB_01183544;
      }
    }
    else if ((bVar1 == 8) || (bVar1 == 0x49)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  else if (bVar1 == 0x67) {
    uVar8 = Scanner::Next(pSVar9);
    ReportUnexpectedToken(this,uVar8);
    uVar8 = 0;
    goto LAB_01183544;
  }
  cVar6 = *(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x38);
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
  local_a0 = this + 0xb0;
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
  PVar2 = this[0x100];
  this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
  local_b8 = this;
  local_90 = local_98;
  uVar7 = ParseExpressionCoverGrammar(this);
  pPVar5 = local_b8;
  if ((uint)local_80 <= local_80._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_b8 + 0x80),local_80 & 0xffffffff,
               local_80._4_4_,local_88 & 0xffffffff,0);
    lVar10 = *(long *)(pPVar5 + 200);
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
  uVar7 = uVar7 & 7;
  uVar8 = 0;
  bVar4 = true;
  if (((uVar7 == 3) && ((byte)(cVar6 + 0xa4U) < 10)) &&
     (*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) == '\t')) {
    Scope::DeleteUnresolved
              (*(Scope **)this,*(VariableProxy **)(*(long *)local_a0 + local_98 * 0x10));
    Scanner::Next(*(Scanner **)(this + 200));
    if (((*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) == 'I') && (param_4 == 0)) &&
       ((*(ushort *)(*(long *)this + 0x81) & 1) == 0)) {
      uVar8 = ParseFunctionDeclaration(this);
    }
    else {
      uVar8 = ParseStatement(this,param_1,param_2,param_4);
    }
    bVar4 = false;
  }
  this[0x100] = PVar2;
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
  if (bVar4) {
    ExpectSemicolon(this);
    if (uVar7 == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 4;
      if (uVar7 != 4) {
        uVar8 = 2;
      }
    }
  }
LAB_01183544:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

