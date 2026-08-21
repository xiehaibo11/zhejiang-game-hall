
/* v8::internal::ParserBase<v8::internal::Parser>::ParseConditionalContinuation(v8::internal::Expression*,
   int) */

ParserBase<v8::internal::Parser> * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseConditionalContinuation
          (ParserBase<v8::internal::Parser> *this,Expression *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ParserBase<v8::internal::Parser> PVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Zone *pZVar10;
  ParserBase<v8::internal::Parser> *pPVar11;
  long lVar12;
  ulong uVar13;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_00;
  Scanner *this_01;
  Scanner *this_02;
  ConditionalSourceRanges *local_c0;
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
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  this_02 = *(Scanner **)(this + 0xf8);
  uVar1 = **(undefined4 **)(this_02 + 8);
  Scanner::Next(this_02);
  PVar5 = this[0x130];
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
  local_b8 = this;
  local_a0 = this + 0xe0;
  local_90 = local_98;
  uVar8 = ParseAssignmentExpressionCoverGrammar(this);
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
  this_01 = *(Scanner **)(this + 0xf8);
  this[0x130] = PVar5;
  uVar2 = *(undefined4 *)(*(long *)this_02 + 4);
  uVar3 = **(undefined4 **)(this_01 + 8);
  uVar7 = Scanner::Next(this_01);
  if ((uVar7 & 0xff) != 9) {
    ReportUnexpectedToken(this,uVar7);
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
  local_b8 = this;
  local_a0 = this + 0xe0;
  local_90 = local_98;
  uVar9 = ParseAssignmentExpressionCoverGrammar(this);
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
  pZVar10 = *(Zone **)(this + 0x68);
  pPVar11 = *(ParserBase<v8::internal::Parser> **)(pZVar10 + 0x10);
  uVar4 = *(undefined4 *)(*(long *)this_01 + 4);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pPVar11) < 0x20) {
    pPVar11 = (ParserBase<v8::internal::Parser> *)Zone::NewExpand(pZVar10,0x20);
  }
  else {
    *(ParserBase<v8::internal::Parser> **)(pZVar10 + 0x10) = pPVar11 + 0x20;
  }
  *(undefined8 *)(pPVar11 + 0x18) = uVar9;
  *(Expression **)(pPVar11 + 8) = param_1;
  *(undefined8 *)(pPVar11 + 0x10) = uVar8;
  *(int *)pPVar11 = param_2;
  *(undefined4 *)(pPVar11 + 4) = 0x22;
  this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
              **)(this + 0x2f8);
  if (this_00 !=
      (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
       *)0x0) {
    pZVar10 = *(Zone **)(this + 0xb8);
    local_c0 = *(ConditionalSourceRanges **)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)local_c0) < 0x18) {
      local_c0 = (ConditionalSourceRanges *)Zone::NewExpand(pZVar10,0x18);
    }
    else {
      *(ConditionalSourceRanges **)(pZVar10 + 0x10) = local_c0 + 0x18;
    }
    *(ulong *)(local_c0 + 8) = CONCAT44(uVar2,uVar1);
    *(ulong *)(local_c0 + 0x10) = CONCAT44(uVar4,uVar3);
    *(undefined ***)local_c0 = &PTR__AstNodeSourceRanges_01cb5210;
    local_b8 = pPVar11;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
    ::__emplace_unique_impl<v8::internal::Conditional*&,v8::internal::ConditionalSourceRanges*&>
              (this_00,(Conditional **)&local_b8,&local_c0);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return pPVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

