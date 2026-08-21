
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseMemberInitializer(v8::internal::ParserBase<v8::internal::PreParser>::ClassInfo*,
   int, bool) */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseMemberInitializer
          (ParserBase<v8::internal::PreParser> *this,ClassInfo *param_1,int param_2,bool param_3)

{
  undefined1 uVar1;
  ParserBase<v8::internal::PreParser> PVar2;
  long lVar3;
  ParserBase<v8::internal::PreParser> *pPVar4;
  undefined4 uVar5;
  Scanner *this_00;
  long lVar6;
  long lVar7;
  ulong uVar8;
  DeclarationScope *this_01;
  Zone *this_02;
  ParserBase<v8::internal::PreParser> *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ParserBase<v8::internal::PreParser> *local_c8;
  long lStack_c0;
  DeclarationScope *local_b8;
  undefined4 local_b0;
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
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar6 = 0x18;
  if (!param_3) {
    lVar6 = 0x20;
  }
  this_01 = *(DeclarationScope **)(param_1 + lVar6);
  if (this_01 == (DeclarationScope *)0x0) {
    this_02 = *(Zone **)(this + 0x88);
    this_01 = *(DeclarationScope **)(this_02 + 0x10);
    if ((ulong)(*(long *)(this_02 + 0x18) - (long)this_01) < 0xe0) {
      this_01 = (DeclarationScope *)Zone::NewExpand(this_02,0xe0);
    }
    else {
      *(DeclarationScope **)(this_02 + 0x10) = this_01 + 0xe0;
    }
    DeclarationScope::DeclarationScope(this_01,this_02,*(undefined8 *)this,2,0x12);
    *(undefined1 *)(*(long *)(this + 0x10) + 0x3b) = 1;
    DeclarationScope::DeclareDefaultFunctionVariables(this_01,*(AstValueFactory **)(this + 0x28));
    *(int *)(this_01 + 0x70) = param_2;
    *(ushort *)(this_01 + 0x81) = *(ushort *)(this_01 + 0x81) | 1;
  }
  this_00 = *(Scanner **)(this + 200);
  if (*(char *)(*(long *)(this_00 + 8) + 0x38) == '\x11') {
    Scanner::Next(this_00);
    uStack_e0 = *(undefined8 *)this;
    local_c8 = this + 0x10;
    *(DeclarationScope **)this = this_01;
    local_d0 = 0;
    local_d8 = 0;
    lStack_c0 = *(long *)local_c8;
    local_b0 = 0;
    *(ParserBase<v8::internal::PreParser> ***)local_c8 = &local_e8;
    if (lStack_c0 != 0) {
      uVar1 = *(undefined1 *)(lStack_c0 + 0x39);
      *(undefined1 *)(lStack_c0 + 0x39) = 0;
      *(undefined1 *)(lStack_c0 + 0x3a) = uVar1;
    }
    PVar2 = this[0x100];
    this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
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
    local_e8 = this;
    local_b8 = this_01;
    local_a8 = this;
    local_80 = local_88;
    uVar5 = ParseAssignmentExpressionCoverGrammar(this);
    pPVar4 = local_a8;
    if ((uint)local_70 <= local_70._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_a8 + 0x80),local_70 & 0xffffffff,
                 local_70._4_4_,local_78 & 0xffffffff,0);
      lVar6 = *(long *)(pPVar4 + 200);
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
    uVar8 = *(long *)(local_90 + 8) - *(long *)local_90 >> 4;
    if (local_88 < uVar8 || local_88 - uVar8 == 0) {
      if (local_88 < uVar8) {
        *(ulong *)(local_90 + 8) = *(long *)local_90 + local_88 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_90,local_88 - uVar8);
    }
    local_80 = local_88;
    *(long *)(local_a8 + 0x90) = lStack_a0;
    this[0x100] = PVar2;
    *(long *)local_c8 = lStack_c0;
    *(undefined8 *)local_e8 = uStack_e0;
    this_00 = *(Scanner **)(this + 200);
  }
  else {
    uVar5 = 2;
  }
  *(undefined4 *)(this_01 + 0x74) = *(undefined4 *)(*(long *)this_00 + 4);
  if (param_3) {
    *(DeclarationScope **)(param_1 + 0x18) = this_01;
    param_1[0xf] = (ClassInfo)0x1;
  }
  else {
    *(DeclarationScope **)(param_1 + 0x20) = this_01;
    param_1[0x10] = (ClassInfo)0x1;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

