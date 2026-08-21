
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseForEachStatementWithDeclarations(int,
   v8::internal::ParserBase<v8::internal::PreParser>::ForInfo*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*, v8::internal::Scope*) */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseForEachStatementWithDeclarations
          (ParserBase<v8::internal::PreParser> *this,int param_1,ForInfo *param_2,ZoneList *param_3,
          ZoneList *param_4,Scope *param_5)

{
  ParserBase<v8::internal::PreParser> PVar1;
  int iVar2;
  long lVar3;
  ParserBase<v8::internal::PreParser> *pPVar4;
  uint uVar5;
  PendingCompilationErrorHandler *pPVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
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
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long *)(param_2 + 0x30) - (long)*(uint **)(param_2 + 0x28) == 0xc) {
    if (*(uint *)(param_2 + 0x44) < *(uint *)(param_2 + 0x40)) {
      if (*(int *)(param_2 + 0x10) == 1) {
        PVar1 = this[0x100];
        this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
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
        local_98 = this;
        local_70 = local_78;
        ParseAssignmentExpressionCoverGrammar(this);
        pPVar4 = local_98;
        if ((uint)local_60 <= local_60._4_4_) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(local_98 + 0x80),local_60 & 0xffffffff,
                     local_60._4_4_,local_68 & 0xffffffff,0);
          lVar9 = *(long *)(pPVar4 + 200);
          lVar10 = *(long *)(lVar9 + 0x18);
          if (*(char *)(lVar10 + 0x30) == '\0') {
            *(undefined4 *)(lVar9 + 0x20) = 0xffffffff;
            *(undefined1 *)(lVar10 + 0x30) = 1;
            *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
            *(undefined1 *)(lVar9 + 0x60) = 0x6d;
            *(undefined1 *)(lVar9 + 0xb0) = 0x6d;
            *(undefined1 *)(lVar9 + 0x100) = 0x6d;
          }
        }
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
        *(long *)(local_98 + 0x90) = lStack_90;
        this[0x100] = PVar1;
      }
      else {
LAB_01183944:
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
        pPVar4 = local_98;
        if ((uint)local_60 <= local_60._4_4_) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(local_98 + 0x80),local_60 & 0xffffffff,
                     local_60._4_4_,local_68 & 0xffffffff,0);
          lVar9 = *(long *)(pPVar4 + 200);
          lVar10 = *(long *)(lVar9 + 0x18);
          if (*(char *)(lVar10 + 0x30) == '\0') {
            *(undefined4 *)(lVar9 + 0x20) = 0xffffffff;
            *(undefined1 *)(lVar10 + 0x30) = 1;
            *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
            *(undefined1 *)(lVar9 + 0x60) = 0x6d;
            *(undefined1 *)(lVar9 + 0xb0) = 0x6d;
            *(undefined1 *)(lVar9 + 0x100) = 0x6d;
          }
        }
        this[0x100] = PVar1;
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
        *(long *)(local_98 + 0x90) = lStack_90;
      }
      local_70 = local_78;
      uVar5 = Scanner::Next(*(Scanner **)(this + 200));
      if ((uVar5 & 0xff) != 6) {
        ReportUnexpectedToken(this,uVar5);
      }
      if ((byte)param_2[0x18] < 2) {
        *(undefined4 *)(param_5 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 200);
      }
      uVar13 = *(undefined8 *)this;
      *(Scope **)this = param_5;
      ParseStatement(this,0,0,1);
      if ((byte)param_2[0x18] < 2) {
        *(undefined4 *)(*(long *)this + 0x74) = *(undefined4 *)(**(long **)(this + 200) + 4);
        Scope::FinalizeBlockScope(*(Scope **)this);
      }
      *(undefined8 *)this = uVar13;
      if ((byte)param_2[0x18] < 2) {
        iVar2 = *(int *)(param_2 + 0xc);
        if (iVar2 != 0) {
          puVar12 = *(undefined8 **)param_2;
          PreParser::DeclareVariableName((PreParser *)this,*puVar12,0,uVar13,&local_98,0xffffffff,0)
          ;
          if (iVar2 != 1) {
            lVar9 = (long)iVar2 * 8 + -8;
            do {
              puVar12 = puVar12 + 1;
              PreParser::DeclareVariableName
                        ((PreParser *)this,*puVar12,0,*(undefined8 *)this,&local_98,0xffffffff,0);
              lVar9 = lVar9 + -8;
            } while (lVar9 != 0);
          }
          if (1 < (byte)param_2[0x18]) goto LAB_01183cec;
        }
        *(undefined4 *)(*(long *)this + 0x74) = *(undefined4 *)(**(long **)(this + 200) + 4);
        Scope::FinalizeBlockScope(*(Scope **)this);
      }
LAB_01183cec:
      uVar13 = 2;
      goto LAB_01183cf0;
    }
    if ((*(byte *)(*(long *)this + 0x81) & 1) == 0) {
      if (*(int *)(param_2 + 0x10) == 1) {
        uVar11 = *(ulong *)(param_2 + 0x40);
        goto LAB_0118391c;
      }
      if ((1 < (byte)param_2[0x18]) && ((**(uint **)(param_2 + 0x28) & 7) == 3)) goto LAB_01183944;
      uVar11 = *(ulong *)(param_2 + 0x40);
LAB_011839f8:
      pcVar8 = "for-in";
    }
    else {
      uVar11 = *(ulong *)(param_2 + 0x40);
      if (*(int *)(param_2 + 0x10) != 1) goto LAB_011839f8;
LAB_0118391c:
      pcVar8 = "for-of";
    }
    pPVar6 = *(PendingCompilationErrorHandler **)(this + 0x80);
    uVar7 = uVar11 >> 0x20;
    uVar13 = 0xeb;
  }
  else {
    uVar11 = (ulong)*(uint *)(param_2 + 0x48);
    uVar7 = (ulong)*(uint *)(param_2 + 0x4c);
    pPVar6 = *(PendingCompilationErrorHandler **)(this + 0x80);
    pcVar8 = "for-of";
    if (*(int *)(param_2 + 0x10) != 1) {
      pcVar8 = "for-in";
    }
    uVar13 = 0xed;
  }
  PendingCompilationErrorHandler::ReportMessageAt(pPVar6,uVar11,uVar7,uVar13,pcVar8);
  lVar9 = *(long *)(this + 200);
  lVar10 = *(long *)(lVar9 + 0x18);
  if (*(char *)(lVar10 + 0x30) == '\0') {
    *(undefined4 *)(lVar9 + 0x20) = 0xffffffff;
    uVar13 = 0;
    *(undefined1 *)(lVar10 + 0x30) = 1;
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
    *(undefined1 *)(lVar9 + 0x60) = 0x6d;
    *(undefined1 *)(lVar9 + 0xb0) = 0x6d;
    *(undefined1 *)(lVar9 + 0x100) = 0x6d;
  }
  else {
    uVar13 = 0;
  }
LAB_01183cf0:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}

