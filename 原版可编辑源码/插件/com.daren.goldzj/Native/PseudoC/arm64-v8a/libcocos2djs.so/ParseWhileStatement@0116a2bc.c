
/* v8::internal::ParserBase<v8::internal::Parser>::ParseWhileStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*, v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

ParserBase<v8::internal::Parser> * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseWhileStatement
          (ParserBase<v8::internal::Parser> *this,ZoneList *param_1,ZoneList *param_2)

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
  ParserBase<v8::internal::Parser> *pPVar10;
  long lVar11;
  ulong uVar12;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_00;
  long lVar13;
  long *plVar14;
  ParserBase<v8::internal::Parser> *local_c8;
  ParserBase<v8::internal::Parser> *pPStack_c0;
  undefined8 local_b8;
  IterationStatementSourceRanges *local_b0;
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
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar13 = *(long *)(this + 0x10);
  *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
  pZVar7 = *(Zone **)(this + 0x68);
  pPVar10 = *(ParserBase<v8::internal::Parser> **)(pZVar7 + 0x10);
  uVar1 = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
  if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)pPVar10) < 0x28) {
    pPVar10 = (ParserBase<v8::internal::Parser> *)Zone::NewExpand(pZVar7,0x28);
  }
  else {
    *(ParserBase<v8::internal::Parser> **)(pZVar7 + 0x10) = pPVar10 + 0x28;
  }
  local_c8 = this + 0x300;
  *(ZoneList **)(pPVar10 + 8) = param_1;
  *(ZoneList **)(pPVar10 + 0x10) = param_2;
  *(undefined8 *)(pPVar10 + 0x18) = 0;
  *(undefined8 *)(pPVar10 + 0x20) = 0;
  *(undefined4 *)pPVar10 = uVar1;
  *(undefined4 *)(pPVar10 + 4) = 3;
  local_b8 = *(undefined8 *)(this + 0x300);
  *(ParserBase<v8::internal::Parser> ***)(this + 0x300) = &local_c8;
  pPStack_c0 = pPVar10;
  Scanner::Next(*(Scanner **)(this + 0xf8));
  uVar6 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar6 & 0xff) != 5) {
    ReportUnexpectedToken(this,uVar6);
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
  PVar3 = this[0x130];
  this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
  local_a8 = this;
  local_80 = local_88;
  uVar8 = ParseExpressionCoverGrammar(this);
  pPVar5 = local_a8;
  if ((uint)local_70 <= local_70._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_a8 + 0xb0),local_70 & 0xffffffff,
               local_70._4_4_,local_78 & 0xffffffff,0);
    lVar11 = *(long *)(pPVar5 + 0x158);
    if (*(char *)(lVar11 + 0x30) == '\0') {
      *(undefined4 *)(pPVar5 + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar11 + 0x30) = 1;
      *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
      pPVar5[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      pPVar5[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      pPVar5[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
  }
  this[0x130] = PVar3;
  uVar12 = *(long *)(local_90 + 8) - *(long *)local_90 >> 4;
  if (local_88 < uVar12 || local_88 - uVar12 == 0) {
    if (local_88 < uVar12) {
      *(ulong *)(local_90 + 8) = *(long *)local_90 + local_88 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
    ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)local_90,local_88 - uVar12);
  }
  local_80 = local_88;
  *(long *)(local_a8 + 0xc0) = lStack_a0;
  uVar6 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar6 & 0xff) != 6) {
    ReportUnexpectedToken(this,uVar6);
  }
  plVar14 = *(long **)(this + 0xf8);
  uVar1 = *(undefined4 *)plVar14[1];
  uVar9 = ParseStatement(this,0,0,1);
  uVar2 = *(undefined4 *)(*plVar14 + 4);
  *(undefined8 *)(pPVar10 + 0x18) = uVar9;
  *(undefined8 *)(pPVar10 + 0x20) = uVar8;
  this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
              **)(this + 0x2f8);
  if (this_00 !=
      (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
       *)0x0) {
    pZVar7 = *(Zone **)(this + 0xb8);
    local_b0 = *(IterationStatementSourceRanges **)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)local_b0) < 0x18) {
      local_b0 = (IterationStatementSourceRanges *)Zone::NewExpand(pZVar7,0x18);
    }
    else {
      *(IterationStatementSourceRanges **)(pZVar7 + 0x10) = local_b0 + 0x18;
    }
    local_b0[0x10] = (IterationStatementSourceRanges)0x1;
    *(undefined ***)local_b0 = &PTR__AstNodeSourceRanges_01cb52b8;
    *(ulong *)(local_b0 + 8) = CONCAT44(uVar2,uVar1);
    local_a8 = pPVar10;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
    ::
    __emplace_unique_impl<v8::internal::IterationStatement*&,v8::internal::IterationStatementSourceRanges*&>
              (this_00,(IterationStatement **)&local_a8,&local_b0);
  }
  *(undefined8 *)local_c8 = local_b8;
  *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return pPVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

