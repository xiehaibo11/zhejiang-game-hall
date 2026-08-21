
/* v8::internal::ParserBase<v8::internal::Parser>::ParseForAwaitStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*, v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

ParserBase<v8::internal::Parser> * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseForAwaitStatement
          (ParserBase<v8::internal::Parser> *this,ZoneList *param_1,ZoneList *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  ParserBase<v8::internal::Parser> PVar7;
  long lVar8;
  bool bVar9;
  IterationStatement *pIVar10;
  uint uVar11;
  ulong uVar12;
  PendingCompilationErrorHandler *pPVar13;
  Expression *pEVar14;
  IterationStatement *pIVar15;
  undefined8 uVar16;
  ParserBase<v8::internal::Parser> *pPVar17;
  Scope *pSVar18;
  uint uVar19;
  Zone *pZVar20;
  long lVar21;
  ParserBase<v8::internal::Parser> *pPVar22;
  undefined8 uVar23;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_00;
  void *pvVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  Expression *local_138;
  ParserBase<v8::internal::Parser> *local_130;
  ParserBase<v8::internal::Parser> *pPStack_128;
  undefined8 local_120;
  long local_118 [2];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  void *local_f0;
  void *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  IterationStatementSourceRanges *local_c8;
  IterationStatement *local_c0;
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
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  lVar26 = *(long *)(this + 0x10);
  *(int *)(lVar26 + 0x18) = *(int *)(lVar26 + 0x18) + 1;
  pZVar20 = *(Zone **)(this + 0xb8);
  local_118[0] = *(long *)(pZVar20 + 0x10);
  uVar3 = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
  if ((ulong)(*(long *)(pZVar20 + 0x18) - local_118[0]) < 8) {
    local_118[0] = Zone::NewExpand(pZVar20,8);
  }
  else {
    *(long *)(pZVar20 + 0x10) = local_118[0] + 8;
  }
  uStack_d0 = 0xffffffff;
  local_d8 = 0xffffffff;
  local_e8 = (void *)0x0;
  uStack_e0 = 0;
  local_f0 = (void *)0x0;
  _local_108 = 0xffffffff00000001;
  local_118[1] = 1;
  pZVar20 = *(Zone **)(this + 0xb8);
  pSVar18 = *(Scope **)(pZVar20 + 0x10);
  if ((ulong)(*(long *)(pZVar20 + 0x18) - (long)pSVar18) < 0x88) {
    pSVar18 = (Scope *)Zone::NewExpand(pZVar20,0x88);
  }
  else {
    *(Scope **)(pZVar20 + 0x10) = pSVar18 + 0x88;
  }
  Scope::Scope(pSVar18,pZVar20,*(undefined8 *)this,6);
  uVar27 = *(undefined8 *)this;
  *(Scope **)this = pSVar18;
  uVar11 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar11 & 0xff) != 0x48) {
    ReportUnexpectedToken(this,uVar11);
  }
  uVar11 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar11 & 0xff) != 0x60) {
    ReportUnexpectedToken(this,uVar11);
  }
  uVar11 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar11 & 0xff) != 5) {
    ReportUnexpectedToken(this,uVar11);
  }
  *(undefined4 *)(*(long *)this + 0x70) = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  *(ushort *)(*(long *)this + 0x81) = *(ushort *)(*(long *)this + 0x81) | 0x10;
  pZVar20 = *(Zone **)(this + 0x68);
  pPVar22 = *(ParserBase<v8::internal::Parser> **)(pZVar20 + 0x10);
  if ((ulong)(*(long *)(pZVar20 + 0x18) - (long)pPVar22) < 0x38) {
    pPVar22 = (ParserBase<v8::internal::Parser> *)Zone::NewExpand(pZVar20,0x38);
  }
  else {
    *(ParserBase<v8::internal::Parser> **)(pZVar20 + 0x10) = pPVar22 + 0x38;
  }
  *(ZoneList **)(pPVar22 + 8) = param_1;
  *(ZoneList **)(pPVar22 + 0x10) = param_2;
  *(undefined8 *)(pPVar22 + 0x20) = 0;
  *(undefined8 *)(pPVar22 + 0x28) = 0;
  *(undefined8 *)(pPVar22 + 0x18) = 0;
  *(undefined4 *)pPVar22 = uVar3;
  *(undefined4 *)(pPVar22 + 4) = 6;
  *(undefined4 *)(pPVar22 + 0x30) = 1;
  local_130 = this + 0x300;
  *(int *)(*(long *)(this + 0x10) + 0x14) = *(int *)(*(long *)(this + 0x10) + 0x14) + 1;
  *(int *)(*(long *)(this + 0x10) + 0x14) = *(int *)(*(long *)(this + 0x10) + 0x14) + 1;
  local_120 = *(undefined8 *)(this + 0x300);
  *(ParserBase<v8::internal::Parser> ***)(this + 0x300) = &local_130;
  local_138 = (Expression *)0x0;
  pZVar20 = *(Zone **)(this + 0xb8);
  uVar23 = *(undefined8 *)this;
  pSVar18 = *(Scope **)(pZVar20 + 0x10);
  pPStack_128 = pPVar22;
  if ((ulong)(*(long *)(pZVar20 + 0x18) - (long)pSVar18) < 0x88) {
    pSVar18 = (Scope *)Zone::NewExpand(pZVar20,0x88);
  }
  else {
    *(Scope **)(pZVar20 + 0x10) = pSVar18 + 0x88;
  }
  Scope::Scope(pSVar18,*(undefined8 *)(this + 0xb8),uVar23,6);
  cVar5 = (char)(*(int **)(*(long *)(this + 0xf8) + 8))[0xe];
  if ((cVar5 == 'P') || (cVar5 == 'h')) {
LAB_0116a7c4:
    uVar23 = *(undefined8 *)this;
    *(Scope **)this = pSVar18;
    ParseVariableDeclarations(this,2,auStack_100,local_118);
    *(undefined8 *)this = uVar23;
    _local_108 = CONCAT44(*(undefined4 *)**(undefined8 **)(this + 0xf8),local_108);
    if ((long)local_e8 - (long)local_f0 == 0x18) {
      if (local_d8._4_4_ < (uint)local_d8) {
        bVar9 = true;
        goto LAB_0116aa14;
      }
      pPVar13 = *(PendingCompilationErrorHandler **)(this + 0xb0);
      uVar23 = 0xeb;
      uVar11 = (uint)local_d8;
      uVar19 = local_d8._4_4_;
    }
    else {
      pPVar13 = *(PendingCompilationErrorHandler **)(this + 0xb0);
      uVar23 = 0xed;
      uVar11 = (uint)uStack_d0;
      uVar19 = uStack_d0._4_4_;
    }
    PendingCompilationErrorHandler::ReportMessageAt(pPVar13,uVar11,uVar19,uVar23,"for-await-of");
    lVar21 = *(long *)(this + 0x158);
    if (*(char *)(lVar21 + 0x30) != '\0') {
      pPVar22 = (ParserBase<v8::internal::Parser> *)0x0;
      goto LAB_0116adc4;
    }
  }
  else {
    if (cVar5 != 'b') {
      iVar2 = **(int **)(*(long *)(this + 0xf8) + 8);
      uVar23 = *(undefined8 *)this;
      lStack_b8 = *(long *)(this + 0xc0);
      *(Scope **)this = pSVar18;
      local_b0 = 0;
      if (lStack_b8 == 0) {
        local_ae = 0;
        local_af = 0;
      }
      else {
        local_af = *(undefined1 *)(lStack_b8 + 0x11);
        local_ae = *(undefined1 *)(lStack_b8 + 0x12);
      }
      local_a8 = this + 0xe0;
      *(IterationStatement ***)(this + 0xc0) = &local_c0;
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
      local_c0 = (IterationStatement *)this;
      local_98 = local_a0;
      pEVar14 = (Expression *)ParsePrimaryExpression(this);
      plVar25 = *(long **)(this + 0xf8);
      bVar6 = *(byte *)(plVar25[1] + 0x38);
      if (bVar6 < 4) {
        pEVar14 = (Expression *)DoParseMemberExpressionContinuation(this,pEVar14);
        plVar25 = *(long **)(this + 0xf8);
        bVar6 = *(byte *)(plVar25[1] + 0x38);
      }
      if (bVar6 < 6) {
        pEVar14 = (Expression *)ParseLeftHandSideContinuation(this,pEVar14);
        plVar25 = *(long **)(this + 0xf8);
      }
      local_138 = pEVar14;
      if ((*(uint *)(pEVar14 + 4) & 0x3e) == 0x16) {
        ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>::ValidatePattern
                  ((ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>> *)
                   &local_c0,pEVar14,iVar2,*(int *)(*plVar25 + 4));
      }
      else {
        local_138 = (Expression *)
                    ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>::
                    ValidateAndRewriteReference
                              ((ExpressionParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>
                                *)&local_c0,pEVar14,iVar2,*(int *)(*plVar25 + 4));
      }
      uVar12 = *(long *)(local_a8 + 8) - *(long *)local_a8 >> 4;
      if (local_a0 < uVar12 || local_a0 - uVar12 == 0) {
        if (local_a0 < uVar12) {
          *(ulong *)(local_a8 + 8) = *(long *)local_a8 + local_a0 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)local_a8,local_a0 - uVar12);
      }
      bVar9 = false;
      local_98 = local_a0;
      *(long *)(local_c0 + 0xc0) = lStack_b8;
      *(undefined8 *)this = uVar23;
LAB_0116aa14:
      ExpectContextualKeyword
                (this,*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x188),
                 (char *)0x0,-1);
      PVar7 = this[0x130];
      this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
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
      local_a8 = this + 0xe0;
      *(IterationStatement ***)(this + 0xc0) = &local_c0;
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
      local_c0 = (IterationStatement *)this;
      local_98 = local_a0;
      uVar23 = ParseAssignmentExpressionCoverGrammar(this);
      pIVar15 = local_c0;
      if ((uint)local_88 <= local_88._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_c0 + 0xb0),local_88 & 0xffffffff,
                   local_88._4_4_,local_90 & 0xffffffff,0);
        lVar21 = *(long *)(pIVar15 + 0x158);
        if (*(char *)(lVar21 + 0x30) == '\0') {
          *(undefined4 *)(pIVar15 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar21 + 0x30) = 1;
          *(undefined8 *)(lVar21 + 0x10) = *(undefined8 *)(lVar21 + 0x18);
          *(ParserBase<v8::internal::Parser> *)(pIVar15 + 0x1a0) =
               (ParserBase<v8::internal::Parser>)0x6d;
          *(ParserBase<v8::internal::Parser> *)(pIVar15 + 0x1f0) =
               (ParserBase<v8::internal::Parser>)0x6d;
          *(ParserBase<v8::internal::Parser> *)(pIVar15 + 0x240) =
               (ParserBase<v8::internal::Parser>)0x6d;
        }
      }
      uVar12 = *(long *)(local_a8 + 8) - *(long *)local_a8 >> 4;
      if (local_a0 < uVar12 || local_a0 - uVar12 == 0) {
        if (local_a0 < uVar12) {
          *(ulong *)(local_a8 + 8) = *(long *)local_a8 + local_a0 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)local_a8,local_a0 - uVar12);
      }
      local_98 = local_a0;
      *(long *)(local_c0 + 0xc0) = lStack_b8;
      this[0x130] = PVar7;
      uVar11 = Scanner::Next(*(Scanner **)(this + 0xf8));
      if ((uVar11 & 0xff) != 6) {
        ReportUnexpectedToken(this,uVar11);
      }
      uVar28 = *(undefined8 *)this;
      *(Scope **)this = pSVar18;
      *(undefined4 *)(pSVar18 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 0xf8);
      plVar25 = *(long **)(this + 0xf8);
      uVar3 = *(undefined4 *)plVar25[1];
      pIVar15 = (IterationStatement *)ParseStatement(this,0,0,1);
      *(undefined4 *)(*(long *)this + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
      this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                  **)(this + 0x2f8);
      if (this_00 !=
          (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
           *)0x0) {
        pZVar20 = *(Zone **)(this + 0xb8);
        local_c8 = *(IterationStatementSourceRanges **)(pZVar20 + 0x10);
        uVar4 = *(undefined4 *)(*plVar25 + 4);
        if ((ulong)(*(long *)(pZVar20 + 0x18) - (long)local_c8) < 0x18) {
          local_c8 = (IterationStatementSourceRanges *)Zone::NewExpand(pZVar20,0x18);
        }
        else {
          *(IterationStatementSourceRanges **)(pZVar20 + 0x10) = local_c8 + 0x18;
        }
        local_c8[0x10] = (IterationStatementSourceRanges)0x1;
        *(undefined ***)local_c8 = &PTR__AstNodeSourceRanges_01cb52b8;
        *(ulong *)(local_c8 + 8) = CONCAT44(uVar4,uVar3);
        local_c0 = (IterationStatement *)pPVar22;
        std::__ndk1::
        __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
        ::
        __emplace_unique_impl<v8::internal::IterationStatement*&,v8::internal::IterationStatementSourceRanges*&>
                  (this_00,&local_c0,&local_c8);
      }
      if (bVar9) {
        local_c0 = (IterationStatement *)0x0;
        Parser::DesugarBindingInForEachStatement
                  ((Parser *)this,(ForInfo *)local_118,(Block **)&local_c0,&local_138);
        pIVar10 = local_c0;
        uVar11 = *(uint *)(local_c0 + 0x10);
        iVar2 = *(int *)(local_c0 + 0x14);
        if (iVar2 < (int)uVar11) {
          *(int *)(local_c0 + 0x14) = iVar2 + 1;
          *(IterationStatement **)(*(long *)(local_c0 + 8) + (long)iVar2 * 8) = pIVar15;
        }
        else {
          pZVar20 = *(Zone **)(this + 0xb8);
          uVar19 = uVar11 << 1 | 1;
          uVar12 = -(ulong)((uVar11 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar19 << 3
          ;
          pvVar24 = *(void **)(pZVar20 + 0x10);
          if ((ulong)(*(long *)(pZVar20 + 0x18) - (long)pvVar24) < uVar12) {
            pvVar24 = (void *)Zone::NewExpand(pZVar20,uVar12);
          }
          else {
            *(ulong *)(pZVar20 + 0x10) = (long)pvVar24 + uVar12;
          }
          uVar11 = *(uint *)(pIVar10 + 0x14);
          if (0 < (int)uVar11) {
            MemCopy(pvVar24,*(void **)(pIVar10 + 8),(ulong)uVar11 << 3);
            uVar11 = *(uint *)(pIVar10 + 0x14);
          }
          *(void **)(pIVar10 + 8) = pvVar24;
          *(uint *)(pIVar10 + 0x10) = uVar19;
          *(uint *)(pIVar10 + 0x14) = uVar11 + 1;
          *(IterationStatement **)((long)pvVar24 + (long)(int)uVar11 * 8) = pIVar15;
        }
        pIVar15 = local_c0;
        uVar16 = Scope::FinalizeBlockScope(*(Scope **)this);
        *(undefined8 *)(pIVar15 + 0x18) = uVar16;
      }
      else {
        Scope::FinalizeBlockScope(*(Scope **)this);
      }
      *(undefined8 *)this = uVar28;
      *(undefined8 *)(pPVar22 + 0x28) = uVar23;
      *(IterationStatement **)(pPVar22 + 0x18) = pIVar15;
      *(Expression **)(pPVar22 + 0x20) = local_138;
      if (bVar9) {
        pPVar17 = (ParserBase<v8::internal::Parser> *)
                  Parser::CreateForEachStatementTDZ
                            ((Parser *)this,(Block *)0x0,(ForInfo *)local_118);
        *(undefined4 *)(*(long *)this + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
        uVar23 = Scope::FinalizeBlockScope(*(Scope **)this);
        if (pPVar17 != (ParserBase<v8::internal::Parser> *)0x0) {
          uVar11 = *(uint *)(pPVar17 + 0x10);
          uVar19 = *(uint *)(pPVar17 + 0x14);
          if ((int)uVar19 < (int)uVar11) {
            pvVar24 = *(void **)(pPVar17 + 8);
          }
          else {
            pZVar20 = *(Zone **)(this + 0xb8);
            uVar1 = uVar11 << 1 | 1;
            uVar12 = -(ulong)((uVar11 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                     (ulong)uVar1 << 3;
            pvVar24 = *(void **)(pZVar20 + 0x10);
            if ((ulong)(*(long *)(pZVar20 + 0x18) - (long)pvVar24) < uVar12) {
              pvVar24 = (void *)Zone::NewExpand(pZVar20,uVar12);
            }
            else {
              *(ulong *)(pZVar20 + 0x10) = (long)pvVar24 + uVar12;
            }
            uVar19 = *(uint *)(pPVar17 + 0x14);
            if (0 < (int)uVar19) {
              MemCopy(pvVar24,*(void **)(pPVar17 + 8),(ulong)uVar19 << 3);
              uVar19 = *(uint *)(pPVar17 + 0x14);
            }
            *(void **)(pPVar17 + 8) = pvVar24;
            *(uint *)(pPVar17 + 0x10) = uVar1;
          }
          *(uint *)(pPVar17 + 0x14) = uVar19 + 1;
          *(ParserBase<v8::internal::Parser> **)((long)pvVar24 + (long)(int)uVar19 * 8) = pPVar22;
          *(undefined8 *)(pPVar17 + 0x18) = uVar23;
          pPVar22 = pPVar17;
        }
      }
      else {
        Scope::FinalizeBlockScope(*(Scope **)this);
      }
      goto LAB_0116adc4;
    }
    uVar12 = IsNextLetKeyword(this);
    if ((uVar12 & 1) != 0) goto LAB_0116a7c4;
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),
               **(undefined4 **)(*(long *)(this + 0xf8) + 8),
               (*(undefined4 **)(*(long *)(this + 0xf8) + 8))[1],0xec,0);
    lVar21 = *(long *)(this + 0x158);
    pPVar22 = (ParserBase<v8::internal::Parser> *)0x0;
    if (*(char *)(lVar21 + 0x30) != '\0') goto LAB_0116adc4;
  }
  *(undefined4 *)(this + 0x160) = 0xffffffff;
  pPVar22 = (ParserBase<v8::internal::Parser> *)0x0;
  *(undefined1 *)(lVar21 + 0x30) = 1;
  *(undefined8 *)(lVar21 + 0x10) = *(undefined8 *)(lVar21 + 0x18);
  this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
  this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
  this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
LAB_0116adc4:
  *(undefined8 *)local_130 = local_120;
  *(undefined8 *)this = uVar27;
  if (local_f0 != (void *)0x0) {
    local_e8 = local_f0;
    operator_delete(local_f0);
  }
  *(int *)(lVar26 + 0x18) = *(int *)(lVar26 + 0x18) + -1;
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar22;
}

