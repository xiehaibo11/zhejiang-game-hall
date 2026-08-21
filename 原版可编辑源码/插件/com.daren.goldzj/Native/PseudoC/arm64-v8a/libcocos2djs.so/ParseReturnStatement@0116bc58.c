
/* v8::internal::ParserBase<v8::internal::Parser>::ParseReturnStatement() */

ParserBase<v8::internal::Parser> * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseReturnStatement
          (ParserBase<v8::internal::Parser> *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ParserBase<v8::internal::Parser> PVar4;
  long lVar5;
  long lVar6;
  Expression *pEVar7;
  Scope *this_00;
  Scope *pSVar8;
  Zone *this_01;
  ulong uVar9;
  ParserBase<v8::internal::Parser> *pPVar10;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_02;
  JumpStatementSourceRanges *local_a0;
  ParserBase<v8::internal::Parser> *local_98;
  long local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  ParserBase<v8::internal::Parser> *local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  iVar1 = *(int *)**(undefined8 **)(this + 0xf8);
  iVar2 = ((int *)**(undefined8 **)(this + 0xf8))[1];
  lVar6 = Scope::GetDeclarationScope(*(Scope **)this);
  if ((*(byte *)(lVar6 + 0x80) < 5) && ((1 << (ulong)(*(byte *)(lVar6 + 0x80) & 0x1f) & 0x1aU) != 0)
     ) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar1,iVar2,0xf4,0);
    lVar6 = *(long *)(this + 0x158);
    pPVar10 = (ParserBase<v8::internal::Parser> *)0x0;
    if (*(char *)(lVar6 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      pPVar10 = (ParserBase<v8::internal::Parser> *)0x0;
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
      this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
    goto LAB_0116bf38;
  }
  if ((*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x4c) == '\0') &&
     (2 < (byte)(*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) - 0xcU))) {
    local_90 = *(long *)(this + 0xc0);
    local_88 = 0;
    if (local_90 == 0) {
      local_86 = 0;
      local_87 = 0;
    }
    else {
      local_87 = *(undefined1 *)(local_90 + 0x11);
      local_86 = *(undefined1 *)(local_90 + 0x12);
    }
    local_80 = this + 0xe0;
    *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_98;
    local_78 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
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
    PVar4 = this[0x130];
    this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
    local_98 = this;
    local_70 = local_78;
    pEVar7 = (Expression *)ParseExpressionCoverGrammar(this);
    pPVar10 = local_98;
    if ((uint)local_60 <= local_60._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_98 + 0xb0),local_60 & 0xffffffff,
                 local_60._4_4_,local_68 & 0xffffffff,0);
      lVar6 = *(long *)(pPVar10 + 0x158);
      if (*(char *)(lVar6 + 0x30) == '\0') {
        *(undefined4 *)(pPVar10 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar6 + 0x30) = 1;
        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
        pPVar10[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar10[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar10[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
    }
    this[0x130] = PVar4;
LAB_0116be6c:
    uVar9 = *(long *)(local_80 + 8) - *(long *)local_80 >> 4;
    if (local_78 < uVar9 || local_78 - uVar9 == 0) {
      if (local_78 < uVar9) {
        *(ulong *)(local_80 + 8) = *(long *)local_80 + local_78 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_80,local_78 - uVar9);
    }
    local_70 = local_78;
    *(long *)(local_98 + 0xc0) = local_90;
  }
  else {
    lVar6 = Scope::AsDeclarationScope();
    if (*(byte *)(lVar6 + 0x85) - 5 < 2) {
      local_90 = *(long *)(this + 0xc0);
      local_88 = 0;
      if (local_90 == 0) {
        local_86 = 0;
        local_87 = 0;
      }
      else {
        local_87 = *(undefined1 *)(local_90 + 0x11);
        local_86 = *(undefined1 *)(local_90 + 0x12);
      }
      local_80 = this + 0xe0;
      *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_98;
      local_78 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
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
      pSVar8 = (Scope *)Scope::GetReceiverScope(this_00);
      pPVar10 = local_98;
      lVar6 = *(long *)(pSVar8 + 0xb0);
      *(ushort *)(lVar6 + 0x28) = *(ushort *)(lVar6 + 0x28) | 0x800;
      if (this_00 == pSVar8) {
        lVar6 = *(long *)(this + 0xc0);
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
      *(uint *)(*(long *)(this + 0x80) + 4) = *(uint *)(*(long *)(this + 0x80) + 4) & 0xffffffbf;
      pEVar7 = *(Expression **)(this + 0x80);
      if ((uint)local_60 <= local_60._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_98 + 0xb0),local_60 & 0xffffffff,
                   local_60._4_4_,local_68 & 0xffffffff,0);
        lVar6 = *(long *)(pPVar10 + 0x158);
        if (*(char *)(lVar6 + 0x30) == '\0') {
          *(undefined4 *)(pPVar10 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar6 + 0x30) = 1;
          *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
          pPVar10[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar10[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar10[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
      }
      goto LAB_0116be6c;
    }
    pEVar7 = (Expression *)0x0;
  }
  ExpectSemicolon(this);
  pEVar7 = (Expression *)Parser::RewriteReturn((Parser *)this,pEVar7,iVar1);
  pPVar10 = (ParserBase<v8::internal::Parser> *)
            BuildReturnStatement(this,pEVar7,iVar1,*(int *)(**(long **)(this + 0xf8) + 4));
  this_02 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
              **)(this + 0x2f8);
  if (this_02 !=
      (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
       *)0x0) {
    this_01 = *(Zone **)(this + 0xb8);
    local_a0 = *(JumpStatementSourceRanges **)(this_01 + 0x10);
    uVar3 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
    if ((ulong)(*(long *)(this_01 + 0x18) - (long)local_a0) < 0x10) {
      local_a0 = (JumpStatementSourceRanges *)Zone::NewExpand(this_01,0x10);
    }
    else {
      *(JumpStatementSourceRanges **)(this_01 + 0x10) = local_a0 + 0x10;
    }
    *(undefined4 *)(local_a0 + 8) = uVar3;
    *(undefined ***)local_a0 = &PTR__AstNodeSourceRanges_01cb52f0;
    local_98 = pPVar10;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
    ::__emplace_unique_impl<v8::internal::JumpStatement*&,v8::internal::JumpStatementSourceRanges*&>
              (this_02,(JumpStatement **)&local_98,&local_a0);
  }
LAB_0116bf38:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return pPVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

