
/* v8::internal::ParserBase<v8::internal::Parser>::ParseIfStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*) */

ParserBase<v8::internal::Parser> * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseIfStatement
          (ParserBase<v8::internal::Parser> *this,ZoneList *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ParserBase<v8::internal::Parser> PVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  Zone *pZVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ParserBase<v8::internal::Parser> *pPVar11;
  ZoneList<v8::internal::AstRawString_const*> *this_00;
  long lVar12;
  ulong uVar13;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_01;
  long *plVar14;
  ulong uVar15;
  IfStatementSourceRanges *local_c0;
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
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar2 = **(undefined4 **)(*(Scanner **)(this + 0xf8) + 8);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  uVar6 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar6 & 0xff) != 5) {
    ReportUnexpectedToken(this,uVar6);
  }
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
  PVar4 = this[0x130];
  this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
  local_b8 = this;
  local_90 = local_98;
  uVar7 = ParseExpressionCoverGrammar(this);
  pPVar11 = local_b8;
  if ((uint)local_80 <= local_80._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_b8 + 0xb0),local_80 & 0xffffffff,
               local_80._4_4_,local_88 & 0xffffffff,0);
    lVar12 = *(long *)(pPVar11 + 0x158);
    if (*(char *)(lVar12 + 0x30) == '\0') {
      *(undefined4 *)(pPVar11 + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar12 + 0x30) = 1;
      *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar12 + 0x18);
      pPVar11[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      pPVar11[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      pPVar11[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
  }
  this[0x130] = PVar4;
  uVar13 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
  if (local_98 < uVar13 || local_98 - uVar13 == 0) {
    if (local_98 < uVar13) {
      *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
    ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)local_a0,local_98 - uVar13);
  }
  local_90 = local_98;
  *(long *)(local_b8 + 0xc0) = lStack_b0;
  uVar6 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar6 & 0xff) != 6) {
    ReportUnexpectedToken(this,uVar6);
  }
  plVar14 = *(long **)(this + 0xf8);
  iVar3 = *(int *)plVar14[1];
  if (param_1 == (ZoneList *)0x0) {
    this_00 = (ZoneList<v8::internal::AstRawString_const*> *)0x0;
  }
  else {
    pZVar8 = *(Zone **)(this + 0xb8);
    this_00 = *(ZoneList<v8::internal::AstRawString_const*> **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)this_00) < 0x10) {
      this_00 = (ZoneList<v8::internal::AstRawString_const*> *)Zone::NewExpand(pZVar8,0x10);
    }
    else {
      *(ZoneList<v8::internal::AstRawString_const*> **)(pZVar8 + 0x10) = this_00 + 0x10;
    }
    ZoneList<v8::internal::AstRawString_const*>::ZoneList(this_00,param_1,*(Zone **)(this + 0xb8));
  }
  uVar9 = ParseScopedStatement(this,(ZoneList *)this_00);
  uVar6 = *(uint *)(*plVar14 + 4);
  if (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) == 'F') {
    Scanner::Next(*(Scanner **)(this + 0xf8));
    uVar10 = ParseScopedStatement(this,param_1);
    uVar1 = uVar6;
    if (iVar3 == -1) {
      uVar1 = 0xffffffff;
    }
    uVar15 = (ulong)uVar1;
    uVar1 = *(uint *)(**(long **)(this + 0xf8) + 4);
    if (iVar3 == -1) {
      uVar1 = 0xffffffff;
    }
    uVar13 = (ulong)uVar1 << 0x20;
  }
  else {
    uVar10 = *(undefined8 *)(this + 0x78);
    uVar13 = 0xffffffff00000000;
    uVar15 = 0xffffffff;
  }
  pZVar8 = *(Zone **)(this + 0x68);
  pPVar11 = *(ParserBase<v8::internal::Parser> **)(pZVar8 + 0x10);
  if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)pPVar11) < 0x20) {
    pPVar11 = (ParserBase<v8::internal::Parser> *)Zone::NewExpand(pZVar8,0x20);
  }
  else {
    *(ParserBase<v8::internal::Parser> **)(pZVar8 + 0x10) = pPVar11 + 0x20;
  }
  *(undefined8 *)(pPVar11 + 8) = uVar7;
  *(undefined8 *)(pPVar11 + 0x10) = uVar9;
  *(undefined8 *)(pPVar11 + 0x18) = uVar10;
  *(undefined4 *)pPVar11 = uVar2;
  *(undefined4 *)(pPVar11 + 4) = 0xc;
  this_01 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
              **)(this + 0x2f8);
  if (this_01 !=
      (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
       *)0x0) {
    pZVar8 = *(Zone **)(this + 0xb8);
    local_c0 = *(IfStatementSourceRanges **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)local_c0) < 0x20) {
      local_c0 = (IfStatementSourceRanges *)Zone::NewExpand(pZVar8,0x20);
    }
    else {
      *(IfStatementSourceRanges **)(pZVar8 + 0x10) = local_c0 + 0x20;
    }
    *(ulong *)(local_c0 + 8) = CONCAT44(uVar6,iVar3);
    *(ulong *)(local_c0 + 0x10) = uVar13 | uVar15;
    local_c0[0x18] = (IfStatementSourceRanges)0x1;
    *(undefined ***)local_c0 = &PTR__AstNodeSourceRanges_01cb5280;
    local_b8 = pPVar11;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
    ::__emplace_unique_impl<v8::internal::IfStatement*&,v8::internal::IfStatementSourceRanges*&>
              (this_01,(IfStatement **)&local_b8,&local_c0);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return pPVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

