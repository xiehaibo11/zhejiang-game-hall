
/* v8::internal::ParserBase<v8::internal::Parser>::ParseStandardForLoop(int,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*, v8::internal::Expression**,
   v8::internal::Statement**, v8::internal::Statement**) */

ParserBase<v8::internal::Parser> * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseStandardForLoop
          (ParserBase<v8::internal::Parser> *this,int param_1,ZoneList *param_2,ZoneList *param_3,
          Expression **param_4,Statement **param_5,Statement **param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ParserBase<v8::internal::Parser> PVar3;
  long lVar4;
  ParserBase<v8::internal::Parser> *pPVar5;
  uint uVar6;
  ulong uVar7;
  Zone *pZVar8;
  Scanner *pSVar9;
  Expression *pEVar10;
  undefined4 *puVar11;
  Statement *pSVar12;
  ParserBase<v8::internal::Parser> *pPVar13;
  long lVar14;
  long lVar15;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_00;
  long *plVar16;
  ParserBase<v8::internal::Parser> *local_d8;
  ParserBase<v8::internal::Parser> *pPStack_d0;
  undefined8 local_c8;
  IterationStatementSourceRanges *local_c0;
  ParserBase<v8::internal::Parser> *local_b8;
  long lStack_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  ParserBase<v8::internal::Parser> *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar7 = GetCurrentStackPosition();
  if (uVar7 < *(ulong *)(this + 0xa8)) {
    lVar14 = *(long *)(this + 0xf8);
    lVar15 = *(long *)(lVar14 + 0x18);
    if (*(char *)(lVar15 + 0x30) == '\0') {
      *(undefined4 *)(lVar14 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar15 + 0x30) = 1;
      *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
      *(undefined1 *)(lVar14 + 0x60) = 0x6d;
      *(undefined1 *)(lVar14 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar14 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0xb0) = 0x101;
  }
  pZVar8 = *(Zone **)(this + 0x68);
  pPVar13 = *(ParserBase<v8::internal::Parser> **)(pZVar8 + 0x10);
  if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)pPVar13) < 0x38) {
    pPVar13 = (ParserBase<v8::internal::Parser> *)Zone::NewExpand(pZVar8,0x38);
  }
  else {
    *(ParserBase<v8::internal::Parser> **)(pZVar8 + 0x10) = pPVar13 + 0x38;
  }
  local_d8 = this + 0x300;
  *(ZoneList **)(pPVar13 + 8) = param_2;
  *(ZoneList **)(pPVar13 + 0x10) = param_3;
  *(int *)pPVar13 = param_1;
  *(undefined4 *)(pPVar13 + 4) = 4;
  *(undefined8 *)(pPVar13 + 0x20) = 0;
  *(undefined8 *)(pPVar13 + 0x18) = 0;
  *(undefined8 *)(pPVar13 + 0x30) = 0;
  *(undefined8 *)(pPVar13 + 0x28) = 0;
  local_c8 = *(undefined8 *)(this + 0x300);
  pSVar9 = *(Scanner **)(this + 0xf8);
  *(ParserBase<v8::internal::Parser> ***)(this + 0x300) = &local_d8;
  pPStack_d0 = pPVar13;
  if (*(char *)(*(long *)(pSVar9 + 8) + 0x38) != '\f') {
    lStack_b0 = *(long *)(this + 0xc0);
    local_a8 = 0;
    if (lStack_b0 == 0) {
      local_a6 = 0;
      local_a7 = 0;
    }
    else {
      local_a7 = *(undefined1 *)(lStack_b0 + 0x11);
      local_a6 = *(undefined1 *)(lStack_b0 + 0x12);
    }
    local_a0 = this + 0xe0;
    *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_b8;
    local_98 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
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
    PVar3 = this[0x130];
    this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
    local_b8 = this;
    local_90 = local_98;
    pEVar10 = (Expression *)ParseExpressionCoverGrammar(this);
    pPVar5 = local_b8;
    if ((uint)local_80 <= local_80._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_b8 + 0xb0),local_80 & 0xffffffff,
                 local_80._4_4_,local_88 & 0xffffffff,0);
      lVar14 = *(long *)(pPVar5 + 0x158);
      if (*(char *)(lVar14 + 0x30) == '\0') {
        *(undefined4 *)(pPVar5 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar14 + 0x30) = 1;
        *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(lVar14 + 0x18);
        pPVar5[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar5[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar5[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
    }
    this[0x130] = PVar3;
    uVar7 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
    if (local_98 < uVar7 || local_98 - uVar7 == 0) {
      if (local_98 < uVar7) {
        *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_a0,local_98 - uVar7);
    }
    local_90 = local_98;
    *(long *)(local_b8 + 0xc0) = lStack_b0;
    *param_4 = pEVar10;
    pSVar9 = *(Scanner **)(this + 0xf8);
  }
  uVar6 = Scanner::Next(pSVar9);
  if ((uVar6 & 0xff) != 0xc) {
    ReportUnexpectedToken(this,uVar6);
  }
  pSVar9 = *(Scanner **)(this + 0xf8);
  if (*(char *)(*(long *)(pSVar9 + 8) + 0x38) != '\x06') {
    lStack_b0 = *(long *)(this + 0xc0);
    local_a8 = 0;
    if (lStack_b0 == 0) {
      local_a6 = 0;
      local_a7 = 0;
    }
    else {
      local_a7 = *(undefined1 *)(lStack_b0 + 0x11);
      local_a6 = *(undefined1 *)(lStack_b0 + 0x12);
    }
    local_a0 = this + 0xe0;
    *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_b8;
    local_98 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
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
    PVar3 = this[0x130];
    this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
    local_b8 = this;
    local_90 = local_98;
    puVar11 = (undefined4 *)ParseExpressionCoverGrammar(this);
    pPVar5 = local_b8;
    if ((uint)local_80 <= local_80._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_b8 + 0xb0),local_80 & 0xffffffff,
                 local_80._4_4_,local_88 & 0xffffffff,0);
      lVar14 = *(long *)(pPVar5 + 0x158);
      if (*(char *)(lVar14 + 0x30) == '\0') {
        *(undefined4 *)(pPVar5 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar14 + 0x30) = 1;
        *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(lVar14 + 0x18);
        pPVar5[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar5[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar5[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
    }
    this[0x130] = PVar3;
    uVar7 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
    if (local_98 < uVar7 || local_98 - uVar7 == 0) {
      if (local_98 < uVar7) {
        *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_a0,local_98 - uVar7);
    }
    local_90 = local_98;
    *(long *)(local_b8 + 0xc0) = lStack_b0;
    pZVar8 = *(Zone **)(this + 0x68);
    uVar1 = *puVar11;
    pSVar12 = *(Statement **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)pSVar12) < 0x10) {
      pSVar12 = (Statement *)Zone::NewExpand(pZVar8,0x10);
    }
    else {
      *(Statement **)(pZVar8 + 0x10) = pSVar12 + 0x10;
    }
    *(undefined4 **)(pSVar12 + 8) = puVar11;
    *(undefined4 *)pSVar12 = uVar1;
    *(undefined4 *)(pSVar12 + 4) = 9;
    *param_5 = pSVar12;
    pSVar9 = *(Scanner **)(this + 0xf8);
  }
  uVar6 = Scanner::Next(pSVar9);
  if ((uVar6 & 0xff) != 6) {
    ReportUnexpectedToken(this,uVar6);
  }
  plVar16 = *(long **)(this + 0xf8);
  uVar1 = *(undefined4 *)plVar16[1];
  pSVar12 = (Statement *)ParseStatement(this,0,0,1);
  *param_6 = pSVar12;
  this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
              **)(this + 0x2f8);
  if (this_00 !=
      (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
       *)0x0) {
    pZVar8 = *(Zone **)(this + 0xb8);
    local_c0 = *(IterationStatementSourceRanges **)(pZVar8 + 0x10);
    uVar2 = *(undefined4 *)(*plVar16 + 4);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)local_c0) < 0x18) {
      local_c0 = (IterationStatementSourceRanges *)Zone::NewExpand(pZVar8,0x18);
    }
    else {
      *(IterationStatementSourceRanges **)(pZVar8 + 0x10) = local_c0 + 0x18;
    }
    local_c0[0x10] = (IterationStatementSourceRanges)0x1;
    *(undefined ***)local_c0 = &PTR__AstNodeSourceRanges_01cb52b8;
    *(ulong *)(local_c0 + 8) = CONCAT44(uVar2,uVar1);
    local_b8 = pPVar13;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
    ::
    __emplace_unique_impl<v8::internal::IterationStatement*&,v8::internal::IterationStatementSourceRanges*&>
              (this_00,(IterationStatement **)&local_b8,&local_c0);
  }
  *(undefined8 *)local_d8 = local_c8;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return pPVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

