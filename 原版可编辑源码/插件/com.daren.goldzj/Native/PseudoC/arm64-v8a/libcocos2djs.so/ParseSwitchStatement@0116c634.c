
/* v8::internal::ParserBase<v8::internal::Parser>::ParseSwitchStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*) */

SwitchStatement * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseSwitchStatement
          (ParserBase<v8::internal::Parser> *this,ZoneList *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ParserBase<v8::internal::Parser> PVar5;
  char cVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  undefined8 uVar11;
  Zone *pZVar12;
  Expression *pEVar13;
  ParserBase<v8::internal::Parser> *pPVar14;
  CaseClause *this_00;
  CaseClauseSourceRanges *pCVar15;
  void *pvVar16;
  Scope *pSVar17;
  vector<void*,std::__ndk1::allocator<void*>> *pvVar18;
  long lVar19;
  ulong uVar20;
  SwitchStatement *pSVar21;
  Scanner *this_01;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *p_Var22;
  vector<void*,std::__ndk1::allocator<void*>> *local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ParserBase<v8::internal::Parser> *local_e0;
  SwitchStatement *pSStack_d8;
  undefined8 local_d0;
  CaseClauseSourceRanges *local_c8;
  ParserBase<v8::internal::Parser> *local_c0;
  long lStack_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  ParserBase<v8::internal::Parser> *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  uVar3 = **(undefined4 **)(*(Scanner **)(this + 0xf8) + 8);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  uVar10 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar10 & 0xff) != 5) {
    ReportUnexpectedToken(this,uVar10);
  }
  lStack_b8 = *(long *)(this + 0xc0);
  local_b0 = 0;
  if (lStack_b8 == 0) {
    local_ae = 0;
    local_af = 0;
  }
  else {
    local_af = *(undefined1 *)(lStack_b8 + 0x11);
    local_ae = *(undefined1 *)(lStack_b8 + 0x12);
  }
  *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_c0;
  local_a0 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
  local_78 = 0;
  if (lStack_b8 != 0) {
    if (*(byte *)(lStack_b8 + 0x10) < 3) {
      local_78 = *(undefined1 *)(lStack_b8 + 0x48);
    }
    else {
      local_78 = 0;
    }
  }
  local_90 = 0;
  uStack_80 = 0xffffffff;
  local_88 = 0xffffffff;
  PVar5 = this[0x130];
  this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
  local_c0 = this;
  local_a8 = this + 0xe0;
  local_98 = local_a0;
  uVar11 = ParseExpressionCoverGrammar(this);
  pPVar14 = local_c0;
  if ((uint)local_88 <= local_88._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_c0 + 0xb0),local_88 & 0xffffffff,
               local_88._4_4_,local_90 & 0xffffffff,0);
    lVar19 = *(long *)(pPVar14 + 0x158);
    if (*(char *)(lVar19 + 0x30) == '\0') {
      *(undefined4 *)(pPVar14 + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar19 + 0x30) = 1;
      *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)(lVar19 + 0x18);
      pPVar14[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      pPVar14[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      pPVar14[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
  }
  this[0x130] = PVar5;
  uVar20 = *(long *)(local_a8 + 8) - *(long *)local_a8 >> 4;
  if (local_a0 < uVar20 || local_a0 - uVar20 == 0) {
    if (local_a0 < uVar20) {
      *(ulong *)(local_a8 + 8) = *(long *)local_a8 + local_a0 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
    ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)local_a8,local_a0 - uVar20);
  }
  local_98 = local_a0;
  *(long *)(local_c0 + 0xc0) = lStack_b8;
  uVar10 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar10 & 0xff) != 6) {
    ReportUnexpectedToken(this,uVar10);
  }
  pZVar12 = *(Zone **)(this + 0x68);
  pSVar21 = *(SwitchStatement **)(pZVar12 + 0x10);
  if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)pSVar21) < 0x28) {
    pSVar21 = (SwitchStatement *)Zone::NewExpand(pZVar12,0x28);
  }
  else {
    *(SwitchStatement **)(pZVar12 + 0x10) = pSVar21 + 0x28;
  }
  pZVar12 = *(Zone **)(this + 0x68);
  *(ZoneList **)(pSVar21 + 8) = param_1;
  *(undefined8 *)(pSVar21 + 0x10) = uVar11;
  *(undefined4 *)pSVar21 = uVar3;
  *(undefined4 *)(pSVar21 + 4) = 8;
  lVar19 = *(long *)(pZVar12 + 0x10);
  if ((ulong)(*(long *)(pZVar12 + 0x18) - lVar19) < 0x20) {
    lVar19 = Zone::NewExpand(pZVar12,0x20);
  }
  else {
    *(long *)(pZVar12 + 0x10) = lVar19 + 0x20;
  }
  *(long *)(pSVar21 + 0x18) = lVar19;
  *(undefined8 *)(pSVar21 + 0x20) = 4;
  pZVar12 = *(Zone **)(this + 0xb8);
  pSVar17 = *(Scope **)(pZVar12 + 0x10);
  if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)pSVar17) < 0x88) {
    pSVar17 = (Scope *)Zone::NewExpand(pZVar12,0x88);
  }
  else {
    *(Scope **)(pZVar12 + 0x10) = pSVar17 + 0x88;
  }
  Scope::Scope(pSVar17,pZVar12,*(undefined8 *)this,6);
  uVar11 = *(undefined8 *)this;
  *(Scope **)this = pSVar17;
  *(undefined4 *)(pSVar17 + 0x70) = uVar3;
  *(ushort *)(*(long *)this + 0x81) = *(ushort *)(*(long *)this + 0x81) | 8;
  local_e0 = this + 0x300;
  local_d0 = *(undefined8 *)(this + 0x300);
  *(ParserBase<v8::internal::Parser> ***)(this + 0x300) = &local_e0;
  pSStack_d8 = pSVar21;
  uVar10 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar10 & 0xff) != 8) {
    ReportUnexpectedToken(this,uVar10);
  }
  bVar9 = false;
  do {
    this_01 = *(Scanner **)(this + 0xf8);
    if (*(char *)(*(long *)(this_01 + 8) + 0x38) == '\r') {
      uVar10 = Scanner::Next(this_01);
      if ((uVar10 & 0xff) != 0xd) {
        ReportUnexpectedToken(this,uVar10);
      }
      uVar3 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
      *(undefined4 *)(*(long *)this + 0x74) = uVar3;
      p_Var22 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                  **)(this + 0x2f8);
      if (p_Var22 !=
          (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
           *)0x0) {
        pZVar12 = *(Zone **)(this + 0xb8);
        pvVar18 = *(vector<void*,std::__ndk1::allocator<void*>> **)(pZVar12 + 0x10);
        pPVar14 = (ParserBase<v8::internal::Parser> *)pSVar21;
        if ((*(uint *)(pSVar21 + 4) & 0x3f) != 8) {
          pPVar14 = (ParserBase<v8::internal::Parser> *)0x0;
        }
        if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)pvVar18) < 0x10) {
          pvVar18 = (vector<void*,std::__ndk1::allocator<void*>> *)Zone::NewExpand(pZVar12,0x10);
        }
        else {
          *(vector<void*,std::__ndk1::allocator<void*>> **)(pZVar12 + 0x10) = pvVar18 + 0x10;
        }
        *(undefined4 *)(pvVar18 + 8) = uVar3;
        *(undefined ***)pvVar18 = &PTR__AstNodeSourceRanges_01cb5398;
        local_f8 = pvVar18;
        local_c0 = pPVar14;
        std::__ndk1::
        __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
        ::
        __emplace_unique_impl<v8::internal::SwitchStatement*&,v8::internal::SwitchStatementSourceRanges*&>
                  (p_Var22,(SwitchStatement **)&local_c0,(SwitchStatementSourceRanges **)&local_f8);
      }
      pSVar17 = (Scope *)Scope::FinalizeBlockScope(*(Scope **)this);
      if (pSVar17 != (Scope *)0x0) {
        pSVar21 = (SwitchStatement *)Parser::RewriteSwitchStatement((Parser *)this,pSVar21,pSVar17);
      }
      goto LAB_0116cd58;
    }
    uStack_f0 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
    uVar3 = **(undefined4 **)(this_01 + 8);
    cVar6 = *(char *)(*(undefined4 **)(this_01 + 8) + 0xe);
    local_f8 = (vector<void*,std::__ndk1::allocator<void*>> *)(this + 200);
    local_e8 = uStack_f0;
    uVar10 = Scanner::Next(this_01);
    if (cVar6 == '@') {
      lStack_b8 = *(long *)(this + 0xc0);
      local_b0 = 0;
      if (lStack_b8 == 0) {
        local_ae = 0;
        local_af = 0;
      }
      else {
        local_af = *(undefined1 *)(lStack_b8 + 0x11);
        local_ae = *(undefined1 *)(lStack_b8 + 0x12);
      }
      *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_c0;
      local_a0 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
      local_78 = 0;
      if (lStack_b8 != 0) {
        if (*(byte *)(lStack_b8 + 0x10) < 3) {
          local_78 = *(undefined1 *)(lStack_b8 + 0x48);
        }
        else {
          local_78 = 0;
        }
      }
      local_90 = 0;
      uStack_80 = 0xffffffff;
      local_88 = 0xffffffff;
      PVar5 = this[0x130];
      this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
      local_c0 = this;
      local_a8 = this + 0xe0;
      local_98 = local_a0;
      pEVar13 = (Expression *)ParseExpressionCoverGrammar(this);
      pPVar14 = local_c0;
      if ((uint)local_88 <= local_88._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_c0 + 0xb0),local_88 & 0xffffffff,
                   local_88._4_4_,local_90 & 0xffffffff,0);
        lVar19 = *(long *)(pPVar14 + 0x158);
        if (*(char *)(lVar19 + 0x30) == '\0') {
          *(undefined4 *)(pPVar14 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar19 + 0x30) = 1;
          *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)(lVar19 + 0x18);
          pPVar14[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar14[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar14[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
      }
      this[0x130] = PVar5;
      uVar20 = *(long *)(local_a8 + 8) - *(long *)local_a8 >> 4;
      if (local_a0 < uVar20 || local_a0 - uVar20 == 0) {
        if (local_a0 < uVar20) {
          *(ulong *)(local_a8 + 8) = *(long *)local_a8 + local_a0 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)local_a8,local_a0 - uVar20);
      }
      local_98 = local_a0;
      *(long *)(local_c0 + 0xc0) = lStack_b8;
LAB_0116caa0:
      uVar10 = Scanner::Next(*(Scanner **)(this + 0xf8));
      if ((uVar10 & 0xff) != 9) {
        ReportUnexpectedToken(this,uVar10);
      }
      while (uVar10 = *(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) - 0xd,
            0x37 < uVar10 || (1L << ((ulong)uVar10 & 0x3f) & 0x88000000000001U) == 0) {
        pPVar14 = (ParserBase<v8::internal::Parser> *)ParseStatementListItem(this);
        if (pPVar14 == (ParserBase<v8::internal::Parser> *)0x0) {
          bVar8 = true;
          goto LAB_0116cc50;
        }
        if ((*(uint *)(pPVar14 + 4) & 0x3f) != 10) {
          local_c0 = pPVar14;
          if (*(undefined8 **)(local_f8 + 8) < *(undefined8 **)(local_f8 + 0x10)) {
            **(undefined8 **)(local_f8 + 8) = pPVar14;
            *(long *)(local_f8 + 8) = *(long *)(local_f8 + 8) + 8;
          }
          else {
            std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                      (local_f8,&local_c0);
          }
          local_e8 = local_e8 + 1;
        }
      }
      pZVar12 = *(Zone **)(this + 0x68);
      this_00 = *(CaseClause **)(pZVar12 + 0x10);
      uVar4 = *(undefined4 *)(*(long *)this_01 + 4);
      if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)this_00) < 0x18) {
        this_00 = (CaseClause *)Zone::NewExpand(pZVar12,0x18);
      }
      else {
        *(CaseClause **)(pZVar12 + 0x10) = this_00 + 0x18;
      }
      CaseClause::CaseClause(this_00,*(Zone **)(this + 0x68),pEVar13,(ScopedList *)&local_f8);
      p_Var22 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                  **)(this + 0x2f8);
      if (p_Var22 !=
          (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
           *)0x0) {
        pZVar12 = *(Zone **)(this + 0xb8);
        pCVar15 = *(CaseClauseSourceRanges **)(pZVar12 + 0x10);
        if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)pCVar15) < 0x10) {
          pCVar15 = (CaseClauseSourceRanges *)Zone::NewExpand(pZVar12,0x10);
        }
        else {
          *(CaseClauseSourceRanges **)(pZVar12 + 0x10) = pCVar15 + 0x10;
        }
        *(undefined ***)pCVar15 = &PTR__AstNodeSourceRanges_01cb5360;
        *(ulong *)(pCVar15 + 8) = CONCAT44(uVar4,uVar3);
        local_c8 = pCVar15;
        local_c0 = (ParserBase<v8::internal::Parser> *)this_00;
        std::__ndk1::
        __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
        ::__emplace_unique_impl<v8::internal::CaseClause*&,v8::internal::CaseClauseSourceRanges*&>
                  (p_Var22,(CaseClause **)&local_c0,&local_c8);
      }
      uVar10 = *(uint *)(pSVar21 + 0x20);
      iVar2 = *(int *)(pSVar21 + 0x24);
      if (iVar2 < (int)uVar10) {
        bVar8 = false;
        *(int *)(pSVar21 + 0x24) = iVar2 + 1;
        *(CaseClause **)(*(long *)(pSVar21 + 0x18) + (long)iVar2 * 8) = this_00;
      }
      else {
        pZVar12 = *(Zone **)(this + 0xb8);
        uVar1 = uVar10 << 1 | 1;
        uVar20 = -(ulong)((uVar10 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        pvVar16 = *(void **)(pZVar12 + 0x10);
        if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)pvVar16) < uVar20) {
          pvVar16 = (void *)Zone::NewExpand(pZVar12,uVar20);
        }
        else {
          *(ulong *)(pZVar12 + 0x10) = (long)pvVar16 + uVar20;
        }
        uVar10 = *(uint *)(pSVar21 + 0x24);
        if (0 < (int)uVar10) {
          MemCopy(pvVar16,*(void **)(pSVar21 + 0x18),(ulong)uVar10 << 3);
          uVar10 = *(uint *)(pSVar21 + 0x24);
        }
        bVar8 = false;
        *(void **)(pSVar21 + 0x18) = pvVar16;
        *(uint *)(pSVar21 + 0x20) = uVar1;
        *(uint *)(pSVar21 + 0x24) = uVar10 + 1;
        *(CaseClause **)((long)pvVar16 + (long)(int)uVar10 * 8) = this_00;
      }
    }
    else {
      if ((uVar10 & 0xff) != 0x44) {
        ReportUnexpectedToken(this,uVar10);
      }
      if (!bVar9) {
        pEVar13 = (Expression *)0x0;
        bVar9 = true;
        goto LAB_0116caa0;
      }
      ReportMessage(this,0x115);
      bVar9 = true;
      bVar8 = true;
    }
LAB_0116cc50:
    uVar20 = *(long *)(local_f8 + 8) - *(long *)local_f8 >> 3;
    if (uVar20 <= uStack_f0 && uStack_f0 - uVar20 != 0) {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                (local_f8,uStack_f0 - uVar20);
    }
    else if (uVar20 > uStack_f0) {
      *(ulong *)(local_f8 + 8) = *(long *)local_f8 + uStack_f0 * 8;
    }
  } while (!bVar8);
  pSVar21 = (SwitchStatement *)0x0;
LAB_0116cd58:
  *(undefined8 *)local_e0 = local_d0;
  *(undefined8 *)this = uVar11;
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return pSVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

