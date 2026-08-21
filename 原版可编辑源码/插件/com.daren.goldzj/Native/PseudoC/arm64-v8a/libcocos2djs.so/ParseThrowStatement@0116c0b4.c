
/* v8::internal::ParserBase<v8::internal::Parser>::ParseThrowStatement() */

undefined4 * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseThrowStatement
          (ParserBase<v8::internal::Parser> *this)

{
  undefined4 uVar1;
  ParserBase<v8::internal::Parser> PVar2;
  long lVar3;
  undefined8 uVar4;
  Zone *pZVar5;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_00;
  ParserBase<v8::internal::Parser> *pPVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ThrowSourceRanges *local_a0;
  ParserBase<v8::internal::Parser> *local_98;
  long lStack_90;
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
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  if (*(char *)((*(undefined8 **)(this + 0xf8))[1] + 0x4c) == '\0') {
    uVar1 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
    lStack_90 = *(long *)(this + 0xc0);
    local_88 = 0;
    if (lStack_90 == 0) {
      local_86 = 0;
      local_87 = 0;
    }
    else {
      local_87 = *(undefined1 *)(lStack_90 + 0x11);
      local_86 = *(undefined1 *)(lStack_90 + 0x12);
    }
    local_80 = this + 0xe0;
    *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_98;
    local_78 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
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
    PVar2 = this[0x130];
    this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
    local_98 = this;
    local_70 = local_78;
    uVar4 = ParseExpressionCoverGrammar(this);
    pPVar6 = local_98;
    if ((uint)local_60 <= local_60._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_98 + 0xb0),local_60 & 0xffffffff,
                 local_60._4_4_,local_68 & 0xffffffff,0);
      lVar7 = *(long *)(pPVar6 + 0x158);
      if (*(char *)(lVar7 + 0x30) == '\0') {
        *(undefined4 *)(pPVar6 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar7 + 0x30) = 1;
        *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + 0x18);
        pPVar6[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar6[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar6[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
    }
    this[0x130] = PVar2;
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
    *(long *)(local_98 + 0xc0) = lStack_90;
    ExpectSemicolon(this);
    pZVar5 = *(Zone **)(this + 0x68);
    pPVar6 = *(ParserBase<v8::internal::Parser> **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pPVar6) < 0x10) {
      pPVar6 = (ParserBase<v8::internal::Parser> *)Zone::NewExpand(pZVar5,0x10);
    }
    else {
      *(ParserBase<v8::internal::Parser> **)(pZVar5 + 0x10) = pPVar6 + 0x10;
    }
    *(undefined8 *)(pPVar6 + 8) = uVar4;
    *(undefined4 *)pPVar6 = uVar1;
    *(undefined4 *)(pPVar6 + 4) = 0x33;
    pZVar5 = *(Zone **)(this + 0x68);
    puVar9 = *(undefined4 **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar9) < 0x10) {
      puVar9 = (undefined4 *)Zone::NewExpand(pZVar5,0x10);
    }
    else {
      *(undefined4 **)(pZVar5 + 0x10) = puVar9 + 4;
    }
    *puVar9 = uVar1;
    puVar9[1] = 9;
    *(ParserBase<v8::internal::Parser> **)(puVar9 + 2) = pPVar6;
    this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                **)(this + 0x2f8);
    if (this_00 !=
        (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
         *)0x0) {
      pZVar5 = *(Zone **)(this + 0xb8);
      local_a0 = *(ThrowSourceRanges **)(pZVar5 + 0x10);
      uVar1 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
      if ((*(uint *)(pPVar6 + 4) & 0x3f) != 0x33) {
        pPVar6 = (ParserBase<v8::internal::Parser> *)0x0;
      }
      if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)local_a0) < 0x10) {
        local_a0 = (ThrowSourceRanges *)Zone::NewExpand(pZVar5,0x10);
      }
      else {
        *(ThrowSourceRanges **)(pZVar5 + 0x10) = local_a0 + 0x10;
      }
      *(undefined4 *)(local_a0 + 8) = uVar1;
      *(undefined ***)local_a0 = &PTR__AstNodeSourceRanges_01cb5328;
      local_98 = pPVar6;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
      ::__emplace_unique_impl<v8::internal::Throw*&,v8::internal::ThrowSourceRanges*&>
                (this_00,(Throw **)&local_98,&local_a0);
    }
  }
  else {
    ReportMessage(this,0x116);
    puVar9 = (undefined4 *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

