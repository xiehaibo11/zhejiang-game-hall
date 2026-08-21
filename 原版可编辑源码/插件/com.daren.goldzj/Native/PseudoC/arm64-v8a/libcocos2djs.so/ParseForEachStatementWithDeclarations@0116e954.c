
/* v8::internal::ParserBase<v8::internal::Parser>::ParseForEachStatementWithDeclarations(int,
   v8::internal::ParserBase<v8::internal::Parser>::ForInfo*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*, v8::internal::Scope*) */

ParserBase<v8::internal::Parser> * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseForEachStatementWithDeclarations
          (ParserBase<v8::internal::Parser> *this,int param_1,ForInfo *param_2,ZoneList *param_3,
          ZoneList *param_4,Scope *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ParserBase<v8::internal::Parser> PVar4;
  long lVar5;
  Block *pBVar6;
  Block *pBVar7;
  uint uVar8;
  Block *pBVar9;
  Zone *pZVar10;
  PendingCompilationErrorHandler *pPVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ParserBase<v8::internal::Parser> *pPVar14;
  ParserBase<v8::internal::Parser> *pPVar15;
  ulong uVar16;
  char *pcVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_00;
  void *pvVar22;
  undefined8 uVar23;
  Block *local_e8;
  Expression *local_e0;
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
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(long *)(param_2 + 0x30) - (long)*(long **)(param_2 + 0x28) == 0x18) {
    if (*(uint *)(param_2 + 0x44) < *(uint *)(param_2 + 0x40)) {
LAB_0116e9b4:
      pBVar9 = (Block *)Parser::RewriteForVarInLegacy((Parser *)this,param_2);
      if (*(int *)(param_2 + 0x10) == 1) {
        pZVar10 = *(Zone **)(this + 0x68);
        pPVar15 = *(ParserBase<v8::internal::Parser> **)(pZVar10 + 0x10);
        if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pPVar15) < 0x38) {
          pPVar15 = (ParserBase<v8::internal::Parser> *)Zone::NewExpand(pZVar10,0x38);
        }
        else {
          *(ParserBase<v8::internal::Parser> **)(pZVar10 + 0x10) = pPVar15 + 0x38;
        }
        *(ZoneList **)(pPVar15 + 8) = param_3;
        *(ZoneList **)(pPVar15 + 0x10) = param_4;
        *(undefined8 *)(pPVar15 + 0x20) = 0;
        *(undefined8 *)(pPVar15 + 0x28) = 0;
        *(undefined8 *)(pPVar15 + 0x18) = 0;
        *(int *)pPVar15 = param_1;
        *(undefined4 *)(pPVar15 + 4) = 6;
        *(undefined4 *)(pPVar15 + 0x30) = 0;
      }
      else {
        if (*(int *)(param_2 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pZVar10 = *(Zone **)(this + 0x68);
        pPVar15 = *(ParserBase<v8::internal::Parser> **)(pZVar10 + 0x10);
        if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pPVar15) < 0x30) {
          pPVar15 = (ParserBase<v8::internal::Parser> *)Zone::NewExpand(pZVar10,0x30);
        }
        else {
          *(ParserBase<v8::internal::Parser> **)(pZVar10 + 0x10) = pPVar15 + 0x30;
        }
        *(ZoneList **)(pPVar15 + 8) = param_3;
        *(ZoneList **)(pPVar15 + 0x10) = param_4;
        *(undefined8 *)(pPVar15 + 0x20) = 0;
        *(undefined8 *)(pPVar15 + 0x28) = 0;
        *(int *)pPVar15 = param_1;
        *(undefined4 *)(pPVar15 + 4) = 5;
        *(undefined8 *)(pPVar15 + 0x18) = 0;
      }
      local_d8 = this + 0x300;
      local_c8 = *(undefined8 *)(this + 0x300);
      *(ParserBase<v8::internal::Parser> ***)(this + 0x300) = &local_d8;
      pPStack_d0 = pPVar15;
      local_b8 = this;
      if (*(int *)(param_2 + 0x10) == 1) {
        PVar4 = this[0x130];
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
        uVar12 = ParseAssignmentExpressionCoverGrammar(this);
        pPVar14 = local_b8;
        if ((uint)local_80 <= local_80._4_4_) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(local_b8 + 0xb0),local_80 & 0xffffffff,
                     local_80._4_4_,local_88 & 0xffffffff,0);
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
        uVar20 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
        if (local_98 < uVar20 || local_98 - uVar20 == 0) {
          if (local_98 < uVar20) {
            *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
          }
        }
        else {
          std::__ndk1::
          vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
          ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                      *)local_a0,local_98 - uVar20);
        }
        *(long *)(local_b8 + 0xc0) = lStack_b0;
        this[0x130] = PVar4;
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
        PVar4 = this[0x130];
        this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
        local_90 = local_98;
        uVar12 = ParseExpressionCoverGrammar(this);
        pPVar14 = local_b8;
        if ((uint)local_80 <= local_80._4_4_) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(local_b8 + 0xb0),local_80 & 0xffffffff,
                     local_80._4_4_,local_88 & 0xffffffff,0);
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
        this[0x130] = PVar4;
        uVar20 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
        if (local_98 < uVar20 || local_98 - uVar20 == 0) {
          if (local_98 < uVar20) {
            *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
          }
        }
        else {
          std::__ndk1::
          vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
          ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                      *)local_a0,local_98 - uVar20);
        }
        *(long *)(local_b8 + 0xc0) = lStack_b0;
      }
      local_90 = local_98;
      uVar8 = Scanner::Next(*(Scanner **)(this + 0xf8));
      if ((uVar8 & 0xff) != 6) {
        ReportUnexpectedToken(this,uVar8);
      }
      if ((byte)param_2[0x18] < 2) {
        *(undefined4 *)(param_5 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 0xf8);
      }
      local_e8 = (Block *)0x0;
      local_e0 = (Expression *)0x0;
      plVar21 = *(long **)(this + 0xf8);
      uVar23 = *(undefined8 *)this;
      *(Scope **)this = param_5;
      uVar2 = *(undefined4 *)plVar21[1];
      uVar13 = ParseStatement(this,0,0,1);
      this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                  **)(this + 0x2f8);
      if (this_00 !=
          (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
           *)0x0) {
        pZVar10 = *(Zone **)(this + 0xb8);
        local_c0 = *(IterationStatementSourceRanges **)(pZVar10 + 0x10);
        uVar3 = *(undefined4 *)(*plVar21 + 4);
        if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)local_c0) < 0x18) {
          local_c0 = (IterationStatementSourceRanges *)Zone::NewExpand(pZVar10,0x18);
        }
        else {
          *(IterationStatementSourceRanges **)(pZVar10 + 0x10) = local_c0 + 0x18;
        }
        local_c0[0x10] = (IterationStatementSourceRanges)0x1;
        *(undefined ***)local_c0 = &PTR__AstNodeSourceRanges_01cb52b8;
        *(ulong *)(local_c0 + 8) = CONCAT44(uVar3,uVar2);
        local_b8 = pPVar15;
        std::__ndk1::
        __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
        ::
        __emplace_unique_impl<v8::internal::IterationStatement*&,v8::internal::IterationStatementSourceRanges*&>
                  (this_00,(IterationStatement **)&local_b8,&local_c0);
      }
      Parser::DesugarBindingInForEachStatement((Parser *)this,param_2,&local_e8,&local_e0);
      pBVar6 = local_e8;
      uVar8 = *(uint *)(local_e8 + 0x10);
      uVar18 = *(uint *)(local_e8 + 0x14);
      if ((int)uVar18 < (int)uVar8) {
        pvVar22 = *(void **)(local_e8 + 8);
      }
      else {
        pZVar10 = *(Zone **)(this + 0xb8);
        uVar1 = uVar8 << 1 | 1;
        uVar20 = -(ulong)((uVar8 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        pvVar22 = *(void **)(pZVar10 + 0x10);
        if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pvVar22) < uVar20) {
          pvVar22 = (void *)Zone::NewExpand(pZVar10,uVar20);
        }
        else {
          *(ulong *)(pZVar10 + 0x10) = (long)pvVar22 + uVar20;
        }
        uVar18 = *(uint *)(pBVar6 + 0x14);
        if (0 < (int)uVar18) {
          MemCopy(pvVar22,*(void **)(pBVar6 + 8),(ulong)uVar18 << 3);
          uVar18 = *(uint *)(pBVar6 + 0x14);
        }
        *(void **)(pBVar6 + 8) = pvVar22;
        *(uint *)(pBVar6 + 0x10) = uVar1;
      }
      pBVar7 = local_e8;
      *(uint *)(pBVar6 + 0x14) = uVar18 + 1;
      *(undefined8 *)((long)pvVar22 + (long)(int)uVar18 * 8) = uVar13;
      if ((byte)param_2[0x18] < 2) {
        *(undefined4 *)(*(long *)this + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
        uVar13 = Scope::FinalizeBlockScope(*(Scope **)this);
        *(undefined8 *)(pBVar7 + 0x18) = uVar13;
      }
      *(undefined8 *)this = uVar23;
      *(undefined8 *)(pPVar15 + 0x28) = uVar12;
      *(Block **)(pPVar15 + 0x18) = pBVar7;
      *(Expression **)(pPVar15 + 0x20) = local_e0;
      pPVar14 = (ParserBase<v8::internal::Parser> *)
                Parser::CreateForEachStatementTDZ((Parser *)this,pBVar9,param_2);
      if (pPVar14 != (ParserBase<v8::internal::Parser> *)0x0) {
        uVar8 = *(uint *)(pPVar14 + 0x10);
        uVar18 = *(uint *)(pPVar14 + 0x14);
        if ((int)uVar18 < (int)uVar8) {
          pvVar22 = *(void **)(pPVar14 + 8);
        }
        else {
          pZVar10 = *(Zone **)(this + 0xb8);
          uVar1 = uVar8 << 1 | 1;
          uVar20 = -(ulong)((uVar8 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          pvVar22 = *(void **)(pZVar10 + 0x10);
          if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pvVar22) < uVar20) {
            pvVar22 = (void *)Zone::NewExpand(pZVar10,uVar20);
          }
          else {
            *(ulong *)(pZVar10 + 0x10) = (long)pvVar22 + uVar20;
          }
          uVar18 = *(uint *)(pPVar14 + 0x14);
          if (0 < (int)uVar18) {
            MemCopy(pvVar22,*(void **)(pPVar14 + 8),(ulong)uVar18 << 3);
            uVar18 = *(uint *)(pPVar14 + 0x14);
          }
          *(void **)(pPVar14 + 8) = pvVar22;
          *(uint *)(pPVar14 + 0x10) = uVar1;
        }
        *(uint *)(pPVar14 + 0x14) = uVar18 + 1;
        *(ParserBase<v8::internal::Parser> **)((long)pvVar22 + (long)(int)uVar18 * 8) = pPVar15;
        pPVar15 = pPVar14;
        if ((byte)param_2[0x18] < 2) {
          *(undefined4 *)(*(long *)this + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
          uVar12 = Scope::FinalizeBlockScope(*(Scope **)this);
          *(undefined8 *)(pPVar14 + 0x18) = uVar12;
        }
      }
      *(undefined8 *)local_d8 = local_c8;
      goto LAB_0116effc;
    }
    if ((*(byte *)(*(long *)this + 0x81) & 1) == 0) {
      if (*(int *)(param_2 + 0x10) != 1) {
        if ((((byte)param_2[0x18] < 2) || (lVar19 = **(long **)(param_2 + 0x28), lVar19 == 0)) ||
           ((*(uint *)(lVar19 + 4) & 0x43f) != 0x35)) {
          uVar20 = *(ulong *)(param_2 + 0x40);
          goto LAB_0116eb3c;
        }
        goto LAB_0116e9b4;
      }
      uVar20 = *(ulong *)(param_2 + 0x40);
LAB_0116eb04:
      pcVar17 = "for-of";
    }
    else {
      uVar20 = *(ulong *)(param_2 + 0x40);
      if (*(int *)(param_2 + 0x10) == 1) goto LAB_0116eb04;
LAB_0116eb3c:
      pcVar17 = "for-in";
    }
    pPVar11 = *(PendingCompilationErrorHandler **)(this + 0xb0);
    uVar16 = uVar20 >> 0x20;
    uVar12 = 0xeb;
  }
  else {
    uVar20 = (ulong)*(uint *)(param_2 + 0x48);
    uVar16 = (ulong)*(uint *)(param_2 + 0x4c);
    pPVar11 = *(PendingCompilationErrorHandler **)(this + 0xb0);
    pcVar17 = "for-of";
    if (*(int *)(param_2 + 0x10) != 1) {
      pcVar17 = "for-in";
    }
    uVar12 = 0xed;
  }
  PendingCompilationErrorHandler::ReportMessageAt(pPVar11,uVar20,uVar16,uVar12,pcVar17);
  lVar19 = *(long *)(this + 0x158);
  if (*(char *)(lVar19 + 0x30) == '\0') {
    *(undefined4 *)(this + 0x160) = 0xffffffff;
    pPVar15 = (ParserBase<v8::internal::Parser> *)0x0;
    *(undefined1 *)(lVar19 + 0x30) = 1;
    *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)(lVar19 + 0x18);
    this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
  }
  else {
    pPVar15 = (ParserBase<v8::internal::Parser> *)0x0;
  }
LAB_0116effc:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar15;
}

