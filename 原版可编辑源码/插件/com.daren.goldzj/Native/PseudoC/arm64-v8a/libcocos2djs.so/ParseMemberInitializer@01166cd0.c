
/* v8::internal::ParserBase<v8::internal::Parser>::ParseMemberInitializer(v8::internal::ParserBase<v8::internal::Parser>::ClassInfo*,
   int, bool) */

undefined8 * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseMemberInitializer
          (ParserBase<v8::internal::Parser> *this,ClassInfo *param_1,int param_2,bool param_3)

{
  undefined1 uVar1;
  ParserBase<v8::internal::Parser> PVar2;
  long lVar3;
  ParserBase<v8::internal::Parser> *pPVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  DeclarationScope *this_00;
  Zone *pZVar8;
  ParserBase<v8::internal::Parser> *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ParserBase<v8::internal::Parser> *local_c8;
  long lStack_c0;
  DeclarationScope *local_b8;
  undefined4 local_b0;
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
  lVar6 = 0x38;
  if (!param_3) {
    lVar6 = 0x40;
  }
  this_00 = *(DeclarationScope **)(param_1 + lVar6);
  if (this_00 == (DeclarationScope *)0x0) {
    pZVar8 = *(Zone **)(this + 0xb8);
    this_00 = *(DeclarationScope **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)this_00) < 0xe0) {
      this_00 = (DeclarationScope *)Zone::NewExpand(pZVar8,0xe0);
    }
    else {
      *(DeclarationScope **)(pZVar8 + 0x10) = this_00 + 0xe0;
    }
    DeclarationScope::DeclarationScope(this_00,pZVar8,*(undefined8 *)this,2,0x12);
    *(undefined1 *)(*(long *)(this + 0x10) + 0x3b) = 1;
    DeclarationScope::DeclareDefaultFunctionVariables(this_00,*(AstValueFactory **)(this + 0x60));
    *(int *)(this_00 + 0x70) = param_2;
    *(ushort *)(this_00 + 0x81) = *(ushort *)(this_00 + 0x81) | 1;
  }
  if (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) == '\x11') {
    Scanner::Next(*(Scanner **)(this + 0xf8));
    uStack_e0 = *(undefined8 *)this;
    local_c8 = this + 0x10;
    *(DeclarationScope **)this = this_00;
    local_d0 = 0;
    local_d8 = 0;
    lStack_c0 = *(long *)local_c8;
    local_b0 = 0;
    *(ParserBase<v8::internal::Parser> ***)local_c8 = &local_e8;
    if (lStack_c0 != 0) {
      uVar1 = *(undefined1 *)(lStack_c0 + 0x39);
      *(undefined1 *)(lStack_c0 + 0x39) = 0;
      *(undefined1 *)(lStack_c0 + 0x3a) = uVar1;
    }
    PVar2 = this[0x130];
    this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
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
    local_e8 = this;
    local_b8 = this_00;
    local_a8 = this;
    local_80 = local_88;
    puVar5 = (undefined8 *)ParseAssignmentExpressionCoverGrammar(this);
    pPVar4 = local_a8;
    if ((uint)local_70 <= local_70._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_a8 + 0xb0),local_70 & 0xffffffff,
                 local_70._4_4_,local_78 & 0xffffffff,0);
      lVar6 = *(long *)(pPVar4 + 0x158);
      if (*(char *)(lVar6 + 0x30) == '\0') {
        *(undefined4 *)(pPVar4 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar6 + 0x30) = 1;
        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
        pPVar4[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar4[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar4[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
    }
    uVar7 = *(long *)(local_90 + 8) - *(long *)local_90 >> 4;
    if (local_88 < uVar7 || local_88 - uVar7 == 0) {
      if (local_88 < uVar7) {
        *(ulong *)(local_90 + 8) = *(long *)local_90 + local_88 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_90,local_88 - uVar7);
    }
    local_80 = local_88;
    *(long *)(local_a8 + 0xc0) = lStack_a0;
    this[0x130] = PVar2;
    *(long *)local_c8 = lStack_c0;
    *(undefined8 *)local_e8 = uStack_e0;
  }
  else {
    pZVar8 = *(Zone **)(this + 0x68);
    puVar5 = *(undefined8 **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)puVar5) < 0x10) {
      puVar5 = (undefined8 *)Zone::NewExpand(pZVar8,0x10);
    }
    else {
      *(undefined8 **)(pZVar8 + 0x10) = puVar5 + 2;
    }
    *puVar5 = 0x329ffffffff;
  }
  *(undefined4 *)(this_00 + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
  if (param_3) {
    *(DeclarationScope **)(param_1 + 0x38) = this_00;
    param_1[0x33] = (ClassInfo)0x1;
  }
  else {
    *(DeclarationScope **)(param_1 + 0x40) = this_00;
    param_1[0x34] = (ClassInfo)0x1;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

