
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseReturnStatement() */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseReturnStatement
          (ParserBase<v8::internal::PreParser> *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ParserBase<v8::internal::PreParser> PVar3;
  long lVar4;
  ParserBase<v8::internal::PreParser> *pPVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  Scope *this_00;
  Scope *pSVar9;
  long lVar10;
  ulong uVar11;
  ParserBase<v8::internal::PreParser> *local_98;
  long local_90;
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
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  Scanner::Next(*(Scanner **)(this + 200));
  uVar1 = *(undefined4 *)**(undefined8 **)(this + 200);
  uVar2 = ((undefined4 *)**(undefined8 **)(this + 200))[1];
  lVar6 = Scope::GetDeclarationScope(*(Scope **)this);
  if ((*(byte *)(lVar6 + 0x80) < 5) && ((1 << (ulong)(*(byte *)(lVar6 + 0x80) & 0x1f) & 0x1aU) != 0)
     ) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0x80),uVar1,uVar2,0xf4,0);
    lVar6 = *(long *)(this + 200);
    uVar7 = 0;
    lVar10 = *(long *)(lVar6 + 0x18);
    if (*(char *)(lVar10 + 0x30) == '\0') {
      *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
      uVar7 = 0;
      *(undefined1 *)(lVar10 + 0x30) = 1;
      *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined1 *)(lVar6 + 0x60) = 0x6d;
      *(undefined1 *)(lVar6 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar6 + 0x100) = 0x6d;
    }
    goto LAB_01182ac4;
  }
  if ((*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x4c) == '\0') &&
     (2 < (byte)(*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) - 0xcU))) {
    local_90 = *(long *)(this + 0x90);
    local_88 = 0;
    if (local_90 == 0) {
      local_86 = 0;
      local_87 = 0;
    }
    else {
      local_87 = *(undefined1 *)(local_90 + 0x11);
      local_86 = *(undefined1 *)(local_90 + 0x12);
    }
    local_80 = this + 0xb0;
    *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_98;
    local_78 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
    local_50 = 0;
    if (local_90 != 0) {
      if (*(byte *)(local_90 + 0x10) < 3) {
        local_50 = *(undefined1 *)(local_90 + 0x48);
      }
      else {
        local_50 = 0;
      }
    }
    local_68 = 0;
    uStack_58 = 0xffffffff;
    local_60 = 0xffffffff;
    PVar3 = this[0x100];
    this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
    local_98 = this;
    local_70 = local_78;
    uVar8 = ParseExpressionCoverGrammar(this);
    pPVar5 = local_98;
    if ((uint)local_60 <= local_60._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_98 + 0x80),local_60 & 0xffffffff,
                 local_60._4_4_,local_68 & 0xffffffff,0);
      lVar6 = *(long *)(pPVar5 + 200);
      lVar10 = *(long *)(lVar6 + 0x18);
      if (*(char *)(lVar10 + 0x30) == '\0') {
        *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar10 + 0x30) = 1;
        *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
        *(undefined1 *)(lVar6 + 0x60) = 0x6d;
        *(undefined1 *)(lVar6 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar6 + 0x100) = 0x6d;
      }
    }
    this[0x100] = PVar3;
    uVar11 = *(long *)(local_80 + 8) - *(long *)local_80 >> 4;
    if (local_78 < uVar11 || local_78 - uVar11 == 0) {
      if (local_78 < uVar11) {
        *(ulong *)(local_80 + 8) = *(long *)local_80 + local_78 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_80,local_78 - uVar11);
    }
    local_70 = local_78;
    *(long *)(local_98 + 0x90) = local_90;
    ExpectSemicolon(this);
    if ((uVar8 & 7) != 0) {
LAB_01182a88:
      lVar6 = Scope::AsDeclarationScope();
      if (*(byte *)(lVar6 + 0x85) - 0xd < 2) {
        *(int *)(*(long *)(this + 0x10) + 0x14) = *(int *)(*(long *)(this + 0x10) + 0x14) + 1;
      }
    }
  }
  else {
    lVar6 = Scope::AsDeclarationScope();
    if (*(byte *)(lVar6 + 0x85) - 5 < 2) {
      local_90 = *(long *)(this + 0x90);
      local_88 = 0;
      if (local_90 == 0) {
        local_86 = 0;
        local_87 = 0;
      }
      else {
        local_87 = *(undefined1 *)(local_90 + 0x11);
        local_86 = *(undefined1 *)(local_90 + 0x12);
      }
      local_80 = this + 0xb0;
      *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_98;
      local_78 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
      local_50 = 0;
      if (local_90 != 0) {
        if (*(byte *)(local_90 + 0x10) < 3) {
          local_50 = *(undefined1 *)(local_90 + 0x48);
        }
        else {
          local_50 = 0;
        }
      }
      local_68 = 0;
      uStack_58 = 0xffffffff;
      local_60 = 0xffffffff;
      local_98 = this;
      local_70 = local_78;
      this_00 = (Scope *)Scope::GetClosureScope(*(Scope **)this);
      pSVar9 = (Scope *)Scope::GetReceiverScope(this_00);
      pPVar5 = local_98;
      lVar6 = *(long *)(pSVar9 + 0xb0);
      *(ushort *)(lVar6 + 0x28) = *(ushort *)(lVar6 + 0x28) | 0x800;
      if (this_00 == pSVar9) {
        lVar6 = *(long *)(this + 0x90);
        do {
          if (*(byte *)(lVar6 + 0x10) - 1 < 2) {
            *(undefined1 *)(lVar6 + 0x59) = 1;
          }
          lVar6 = *(long *)(lVar6 + 8);
        } while (lVar6 != 0);
      }
      else {
        *(ushort *)(this_00 + 0x83) = *(ushort *)(this_00 + 0x83) | 0x800;
        *(ushort *)(lVar6 + 0x28) = *(ushort *)(lVar6 + 0x28) | 0x400;
      }
      if ((uint)local_60 <= local_60._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_98 + 0x80),local_60 & 0xffffffff,
                   local_60._4_4_,local_68 & 0xffffffff,0);
        lVar6 = *(long *)(pPVar5 + 200);
        lVar10 = *(long *)(lVar6 + 0x18);
        if (*(char *)(lVar10 + 0x30) == '\0') {
          *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar10 + 0x30) = 1;
          *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
          *(undefined1 *)(lVar6 + 0x60) = 0x6d;
          *(undefined1 *)(lVar6 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar6 + 0x100) = 0x6d;
        }
      }
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
      *(long *)(local_98 + 0x90) = local_90;
      ExpectSemicolon(this);
      goto LAB_01182a88;
    }
    ExpectSemicolon(this);
  }
  Scope::AsDeclarationScope();
  uVar7 = 3;
LAB_01182ac4:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

