
/* v8::internal::ParserBase<v8::internal::Parser>::ParseForEachStatementWithoutDeclarations(int,
   v8::internal::Expression*, int, int, v8::internal::ParserBase<v8::internal::Parser>::ForInfo*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

ParserBase<v8::internal::Parser> * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseForEachStatementWithoutDeclarations
          (ParserBase<v8::internal::Parser> *this,int param_1,Expression *param_2,int param_3,
          int param_4,ForInfo *param_5,ZoneList *param_6,ZoneList *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ParserBase<v8::internal::Parser> PVar3;
  long lVar4;
  ParserBase<v8::internal::Parser> *pPVar5;
  uint uVar6;
  Zone *pZVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ParserBase<v8::internal::Parser> *pPVar12;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_00;
  long *plVar13;
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
  if (*(int *)(param_5 + 0x10) == 1) {
    pZVar7 = *(Zone **)(this + 0x68);
    pPVar12 = *(ParserBase<v8::internal::Parser> **)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pPVar12) < 0x38) {
      pPVar12 = (ParserBase<v8::internal::Parser> *)Zone::NewExpand(pZVar7,0x38);
    }
    else {
      *(ParserBase<v8::internal::Parser> **)(pZVar7 + 0x10) = pPVar12 + 0x38;
    }
    *(ZoneList **)(pPVar12 + 8) = param_6;
    *(ZoneList **)(pPVar12 + 0x10) = param_7;
    *(undefined8 *)(pPVar12 + 0x20) = 0;
    *(undefined8 *)(pPVar12 + 0x28) = 0;
    *(undefined8 *)(pPVar12 + 0x18) = 0;
    *(int *)pPVar12 = param_1;
    *(undefined4 *)(pPVar12 + 4) = 6;
    *(undefined4 *)(pPVar12 + 0x30) = 0;
  }
  else {
    if (*(int *)(param_5 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code",(ulong)(uint)param_1,param_2,(ulong)(uint)param_3,
               (ulong)(uint)param_4);
    }
    pZVar7 = *(Zone **)(this + 0x68);
    pPVar12 = *(ParserBase<v8::internal::Parser> **)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pPVar12) < 0x30) {
      pPVar12 = (ParserBase<v8::internal::Parser> *)Zone::NewExpand(pZVar7,0x30);
    }
    else {
      *(ParserBase<v8::internal::Parser> **)(pZVar7 + 0x10) = pPVar12 + 0x30;
    }
    *(ZoneList **)(pPVar12 + 8) = param_6;
    *(ZoneList **)(pPVar12 + 0x10) = param_7;
    *(undefined8 *)(pPVar12 + 0x20) = 0;
    *(undefined8 *)(pPVar12 + 0x28) = 0;
    *(int *)pPVar12 = param_1;
    *(undefined4 *)(pPVar12 + 4) = 5;
    *(undefined8 *)(pPVar12 + 0x18) = 0;
  }
  local_d8 = this + 0x300;
  local_c8 = *(undefined8 *)(this + 0x300);
  *(ParserBase<v8::internal::Parser> ***)(this + 0x300) = &local_d8;
  pPStack_d0 = pPVar12;
  local_b8 = this;
  if (*(int *)(param_5 + 0x10) == 1) {
    PVar3 = this[0x130];
    this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
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
    local_90 = local_98;
    uVar8 = ParseAssignmentExpressionCoverGrammar(this);
    pPVar5 = local_b8;
    if ((uint)local_80 <= local_80._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_b8 + 0xb0),local_80 & 0xffffffff,
                 local_80._4_4_,local_88 & 0xffffffff,0);
      lVar10 = *(long *)(pPVar5 + 0x158);
      if (*(char *)(lVar10 + 0x30) == '\0') {
        *(undefined4 *)(pPVar5 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar10 + 0x30) = 1;
        *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
        pPVar5[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar5[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar5[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
    }
    uVar11 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
    if (local_98 < uVar11 || local_98 - uVar11 == 0) {
      if (local_98 < uVar11) {
        *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_a0,local_98 - uVar11);
    }
    *(long *)(local_b8 + 0xc0) = lStack_b0;
    this[0x130] = PVar3;
  }
  else {
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
    local_90 = local_98;
    uVar8 = ParseExpressionCoverGrammar(this);
    pPVar5 = local_b8;
    if ((uint)local_80 <= local_80._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_b8 + 0xb0),local_80 & 0xffffffff,
                 local_80._4_4_,local_88 & 0xffffffff,0);
      lVar10 = *(long *)(pPVar5 + 0x158);
      if (*(char *)(lVar10 + 0x30) == '\0') {
        *(undefined4 *)(pPVar5 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar10 + 0x30) = 1;
        *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
        pPVar5[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar5[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar5[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
    }
    this[0x130] = PVar3;
    uVar11 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
    if (local_98 < uVar11 || local_98 - uVar11 == 0) {
      if (local_98 < uVar11) {
        *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_a0,local_98 - uVar11);
    }
    *(long *)(local_b8 + 0xc0) = lStack_b0;
  }
  local_90 = local_98;
  uVar6 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar6 & 0xff) != 6) {
    ReportUnexpectedToken(this,uVar6);
  }
  plVar13 = *(long **)(this + 0xf8);
  uVar1 = *(undefined4 *)plVar13[1];
  uVar9 = ParseStatement(this,0,0,1);
  this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
              **)(this + 0x2f8);
  if (this_00 !=
      (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
       *)0x0) {
    pZVar7 = *(Zone **)(this + 0xb8);
    local_c0 = *(IterationStatementSourceRanges **)(pZVar7 + 0x10);
    uVar2 = *(undefined4 *)(*plVar13 + 4);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)local_c0) < 0x18) {
      local_c0 = (IterationStatementSourceRanges *)Zone::NewExpand(pZVar7,0x18);
    }
    else {
      *(IterationStatementSourceRanges **)(pZVar7 + 0x10) = local_c0 + 0x18;
    }
    local_c0[0x10] = (IterationStatementSourceRanges)0x1;
    *(undefined ***)local_c0 = &PTR__AstNodeSourceRanges_01cb52b8;
    *(ulong *)(local_c0 + 8) = CONCAT44(uVar2,uVar1);
    local_b8 = pPVar12;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
    ::
    __emplace_unique_impl<v8::internal::IterationStatement*&,v8::internal::IterationStatementSourceRanges*&>
              (this_00,(IterationStatement **)&local_b8,&local_c0);
  }
  if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0') {
    *(undefined8 *)(pPVar12 + 0x18) = uVar9;
    *(Expression **)(pPVar12 + 0x20) = param_2;
    *(undefined8 *)(pPVar12 + 0x28) = uVar8;
  }
  else {
    pPVar12 = (ParserBase<v8::internal::Parser> *)0x0;
  }
  *(undefined8 *)local_d8 = local_c8;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return pPVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

