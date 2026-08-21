
/* v8::internal::ParserBase<v8::internal::Parser>::ParseWithStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*) */

undefined4 * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseWithStatement
          (ParserBase<v8::internal::Parser> *this,ZoneList *param_1)

{
  undefined4 uVar1;
  ParserBase<v8::internal::Parser> PVar2;
  long lVar3;
  ParserBase<v8::internal::Parser> *pPVar4;
  uint uVar5;
  undefined8 uVar6;
  Zone *pZVar7;
  Scope *pSVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ParserBase<v8::internal::Parser> *local_a8;
  long lStack_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  ParserBase<v8::internal::Parser> *local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((*(byte *)(*(long *)this + 0x81) & 1) == 0) {
    uVar1 = **(undefined4 **)*(Scanner **)(this + 0xf8);
    uVar5 = Scanner::Next(*(Scanner **)(this + 0xf8));
    if ((uVar5 & 0xff) != 5) {
      ReportUnexpectedToken(this,uVar5);
    }
    lStack_a0 = *(long *)(this + 0xc0);
    local_98 = 0;
    if (lStack_a0 == 0) {
      local_96 = 0;
      local_97 = 0;
    }
    else {
      local_97 = *(undefined1 *)(lStack_a0 + 0x11);
      local_96 = *(undefined1 *)(lStack_a0 + 0x12);
    }
    local_90 = this + 0xe0;
    *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_a8;
    local_88 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
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
    PVar2 = this[0x130];
    this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
    local_a8 = this;
    local_80 = local_88;
    uVar6 = ParseExpressionCoverGrammar(this);
    pPVar4 = local_a8;
    if ((uint)local_70 <= local_70._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_a8 + 0xb0),local_70 & 0xffffffff,
                 local_70._4_4_,local_78 & 0xffffffff,0);
      lVar10 = *(long *)(pPVar4 + 0x158);
      if (*(char *)(lVar10 + 0x30) == '\0') {
        *(undefined4 *)(pPVar4 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar10 + 0x30) = 1;
        *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
        pPVar4[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar4[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar4[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
    }
    this[0x130] = PVar2;
    uVar11 = *(long *)(local_90 + 8) - *(long *)local_90 >> 4;
    if (local_88 < uVar11 || local_88 - uVar11 == 0) {
      if (local_88 < uVar11) {
        *(ulong *)(local_90 + 8) = *(long *)local_90 + local_88 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_90,local_88 - uVar11);
    }
    local_80 = local_88;
    *(long *)(local_a8 + 0xc0) = lStack_a0;
    uVar5 = Scanner::Next(*(Scanner **)(this + 0xf8));
    if ((uVar5 & 0xff) != 6) {
      ReportUnexpectedToken(this,uVar5);
    }
    pZVar7 = *(Zone **)(this + 0xb8);
    uVar12 = *(undefined8 *)this;
    pSVar8 = *(Scope **)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pSVar8) < 0x88) {
      pSVar8 = (Scope *)Zone::NewExpand(pZVar7,0x88);
    }
    else {
      *(Scope **)(pZVar7 + 0x10) = pSVar8 + 0x88;
    }
    Scope::Scope(pSVar8,*(undefined8 *)(this + 0xb8),uVar12,7);
    uVar13 = *(undefined8 *)this;
    *(Scope **)this = pSVar8;
    *(undefined4 *)(pSVar8 + 0x70) = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
    uVar12 = ParseStatement(this,param_1,0,1);
    *(undefined4 *)(pSVar8 + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
    pZVar7 = *(Zone **)(this + 0x68);
    *(undefined8 *)this = uVar13;
    puVar9 = *(undefined4 **)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)puVar9) < 0x20) {
      puVar9 = (undefined4 *)Zone::NewExpand(pZVar7,0x20);
    }
    else {
      *(undefined4 **)(pZVar7 + 0x10) = puVar9 + 8;
    }
    *(Scope **)(puVar9 + 2) = pSVar8;
    *(undefined8 *)(puVar9 + 4) = uVar6;
    *puVar9 = uVar1;
    puVar9[1] = 0x10;
    *(undefined8 *)(puVar9 + 6) = uVar12;
  }
  else {
    ReportMessage(this,0x12d);
    puVar9 = (undefined4 *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

