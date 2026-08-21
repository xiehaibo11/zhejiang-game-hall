
/* v8::internal::ParserBase<v8::internal::Parser>::ParseArrowFunctionLiteral(v8::internal::ParserFormalParameters
   const&) */

ParserBase<v8::internal::Parser> * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseArrowFunctionLiteral
          (ParserBase<v8::internal::Parser> *this,ParserFormalParameters *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ParserBase<v8::internal::Parser> PVar7;
  byte bVar8;
  ParserBase<v8::internal::Parser> PVar9;
  long lVar10;
  bool bVar11;
  uint uVar12;
  RuntimeCallStats *pRVar13;
  long lVar14;
  ulong uVar15;
  Expression *pEVar16;
  ParserBase<v8::internal::Parser> *pPVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  Zone *this_00;
  long *plVar20;
  uint uVar21;
  long lVar22;
  Logger *this_01;
  undefined1 uVar23;
  long lVar24;
  ParserBase<v8::internal::Parser> *pPVar25;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_02;
  undefined4 uVar26;
  double dVar27;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  vector<void*,std::__ndk1::allocator<void*>> *local_190;
  ulong local_188;
  ulong local_180;
  undefined8 local_178;
  RuntimeCallStats *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long local_140;
  undefined1 local_138;
  byte local_137;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined8 local_128;
  undefined8 *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  ParserBase<v8::internal::Parser> *local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  ParserBase<v8::internal::Parser> *local_e0;
  long lStack_d8;
  long local_d0;
  undefined4 local_c8;
  ParserBase<v8::internal::Parser> *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  ParserBase<v8::internal::Parser> *local_a0;
  long lStack_98;
  long local_90;
  undefined4 local_88;
  long local_80;
  
  lVar10 = tpidr_el0;
  local_80 = *(long *)(lVar10 + 0x28);
  pRVar13 = *(RuntimeCallStats **)(this + 0x90);
  local_150 = 0;
  uStack_168 = 0;
  local_170 = (RuntimeCallStats *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  if ((pRVar13 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    uVar18 = 0x4a5;
    if (*(int *)(pRVar13 + 0x14) == 1) {
      uVar18 = 0x4a6;
    }
    local_170 = pRVar13;
    RuntimeCallStats::Enter(pRVar13,(RuntimeCallTimer *)((ulong)&local_170 | 8),uVar18);
  }
  if (FLAG_log_function_events == '\0') {
    lVar24 = 0;
  }
  else {
    lVar24 = base::TimeTicks::HighResolutionNow();
  }
  lVar14 = Scope::GetDeclarationScope(*(Scope **)this);
  if (((*(byte *)(lVar14 + 0x84) >> 2 & 1) == 0) &&
     (puVar19 = *(undefined4 **)(*(long *)(this + 0xf8) + 8), *(char *)(puVar19 + 0x13) != '\0')) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),*puVar19,puVar19[1],0x140,0x1a6888b
              );
    lVar24 = *(long *)(this + 0x158);
    if (*(char *)(lVar24 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar24 + 0x30) = 1;
      *(undefined8 *)(lVar24 + 0x10) = *(undefined8 *)(lVar24 + 0x18);
      this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
    pPVar25 = *(ParserBase<v8::internal::Parser> **)(this + 0x88);
    goto joined_r0x0114f170;
  }
  iVar3 = *(int *)(this + 0x100);
  PVar7 = this[0x108];
  uVar12 = 0;
  *(int *)(this + 0x100) = iVar3 + 1;
  local_90 = *(long *)param_1;
  pPVar25 = (ParserBase<v8::internal::Parser> *)(ulong)*(byte *)(local_90 + 0x85);
  if ((PVar7 == (ParserBase<v8::internal::Parser>)0x1) && (*(int *)(this + 0x2f0) == 0)) {
    if ((*(long *)(this + 0xc0) == 0) || (*(char *)(*(long *)(this + 0xc0) + 0x12) == '\0')) {
      uVar12 = Scope::AllowsLazyParsingWithoutUnresolvedVariables
                         (*(Scope **)this,*(Scope **)(this + 8));
      local_90 = *(long *)param_1;
    }
    else {
      uVar12 = 0;
    }
  }
  local_190 = (vector<void*,std::__ndk1::allocator<void*>> *)(this + 200);
  local_188 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  local_178 = 0;
  local_b8 = *(undefined8 *)this;
  *(long *)this = local_90;
  local_ac = 0;
  local_b0 = 0;
  lStack_98 = *(long *)(this + 0x10);
  local_88 = 0;
  *(ParserBase<v8::internal::Parser> ***)(this + 0x10) = &local_c0;
  if (lStack_98 != 0) {
    uVar23 = *(undefined1 *)(lStack_98 + 0x39);
    *(undefined1 *)(lStack_98 + 0x39) = 0;
    *(undefined1 *)(lStack_98 + 0x3a) = uVar23;
  }
  local_180 = local_188;
  local_c0 = this;
  local_a0 = this + 0x10;
  Scanner::Next(*(Scanner **)(this + 0xf8));
  if (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) == '\b') {
    if ((uVar12 & 1) == 0) {
      Scanner::Next(*(Scanner **)(this + 0xf8));
      PVar9 = this[0x130];
      uVar23 = 1;
      this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
      ParseFunctionBody(this,&local_190,0,0xffffffff,param_1,pPVar25,0,1);
      this[0x130] = PVar9;
      uVar18 = local_b0;
      goto LAB_0114f014;
    }
    if ((param_1[9] == (ParserFormalParameters)0x0) &&
       (Parser::BuildParameterInitializationBlock((Parser *)this,param_1),
       *(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) != '\0')) {
      pPVar25 = *(ParserBase<v8::internal::Parser> **)(this + 0x88);
      uVar26 = 0;
      uVar18 = 0;
      bVar11 = false;
      uVar23 = 1;
    }
    else {
      local_198 = 0xffffffff;
      uStack_194 = 0xffffffff;
      uVar15 = Parser::SkipFunction
                         ((Parser *)this,0,pPVar25,0,*(undefined8 *)param_1,&uStack_194,&local_198,
                          &local_178);
      lVar14 = *(long *)this;
      if ((uVar15 & 1) != 0) {
        ValidateFormalParameters(this,*(ushort *)(lVar14 + 0x81) & 1,param_1,0);
        uVar23 = 1;
        uVar18 = 0;
        goto LAB_0114f014;
      }
      *(undefined8 *)this = *(undefined8 *)(lVar14 + 8);
      bVar8 = *(byte *)(*(int **)(*(long *)(this + 0xf8) + 8) + 0xe);
      iVar2 = **(int **)(*(long *)(this + 0xf8) + 8);
      if (bVar8 - 0x2c < 9) {
        pEVar16 = (Expression *)ParseUnaryOrPrefixExpression(this);
      }
      else {
        lVar22 = Scope::AsDeclarationScope();
        if (*(byte *)(lVar22 + 0x85) - 10 < 5) {
          bVar11 = true;
          if (bVar8 == 0x60) {
LAB_0114f3a4:
            if (bVar11) {
              pEVar16 = (Expression *)ParseAwaitExpression(this);
              goto LAB_0114f3b4;
            }
          }
        }
        else if (this[0x135] != (ParserBase<v8::internal::Parser>)0x0) {
          lVar22 = Scope::AsDeclarationScope();
          bVar11 = *(byte *)(lVar22 + 0x85) - 1 < 2;
          if (bVar8 == 0x60) goto LAB_0114f3a4;
        }
        iVar6 = **(int **)(*(long *)(this + 0xf8) + 8);
        pEVar16 = (Expression *)ParsePrimaryExpression(this);
        lVar22 = *(long *)(*(long *)(this + 0xf8) + 8);
        bVar8 = *(byte *)(lVar22 + 0x38);
        if (bVar8 < 4) {
          pEVar16 = (Expression *)DoParseMemberExpressionContinuation(this,pEVar16);
          lVar22 = *(long *)(*(long *)(this + 0xf8) + 8);
          bVar8 = *(byte *)(lVar22 + 0x38);
        }
        uVar21 = (uint)bVar8;
        if (uVar21 < 6) {
          pEVar16 = (Expression *)ParseLeftHandSideContinuation(this,pEVar16);
          lVar22 = *(long *)(*(long *)(this + 0xf8) + 8);
          uVar21 = (uint)*(byte *)(lVar22 + 0x38);
        }
        if ((uVar21 - 0x33 < 2) && (*(char *)(lVar22 + 0x4c) == '\0')) {
          pEVar16 = (Expression *)ParsePostfixContinuation(this,pEVar16,iVar6);
        }
      }
LAB_0114f3b4:
      uVar15 = (ulong)*(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38);
      if ('\x05' < (char)Token::precedence_[uVar15 + (ulong)(byte)this[0x130] * 0x72]) {
        pEVar16 = (Expression *)
                  ParseBinaryContinuation
                            (this,pEVar16,6,
                             (uint)(byte)Token::precedence_
                                         [uVar15 + (ulong)(byte)this[0x130] * 0x72]);
        uVar15 = (ulong)*(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38);
      }
      if ((int)uVar15 - 0x20U < 2) {
        pEVar16 = (Expression *)
                  ParseBinaryContinuation
                            (this,pEVar16,4,
                             (int)(char)Token::precedence_[uVar15 + (ulong)(byte)this[0x130] * 0x72]
                            );
      }
      else if ((int)uVar15 == 0x1f) {
        pEVar16 = (Expression *)ParseCoalesceExpression(this,pEVar16);
      }
      plVar20 = *(long **)(this + 0xf8);
      if (*(char *)(plVar20[1] + 0x38) == '\v') {
        pEVar16 = (Expression *)ParseConditionalContinuation(this,pEVar16,iVar2);
        plVar20 = *(long **)(this + 0xf8);
      }
      if (*(char *)(plVar20[3] + 0x30) == '\0') {
        local_140 = *(long *)(this + 0x128);
        uStack_f8 = *(undefined8 *)this;
        *(long *)this = local_140;
        local_ec = 0;
        local_f0 = 0;
        lStack_d8 = *(long *)(this + 0x10);
        local_c8 = 0;
        *(ParserBase<v8::internal::Parser> ***)(this + 0x10) = &local_100;
        if (lStack_d8 != 0) {
          uVar23 = *(undefined1 *)(lStack_d8 + 0x39);
          *(undefined1 *)(lStack_d8 + 0x39) = 0;
          *(undefined1 *)(lStack_d8 + 0x3a) = uVar23;
          plVar20 = *(long **)(this + 0xf8);
        }
        local_1a0 = *(undefined4 *)(local_140 + 0x70);
        uStack_19c = *(undefined4 *)(*plVar20 + 4);
        puStack_120 = &local_128;
        local_138 = 0;
        local_134 = 0;
        uStack_130 = 0;
        local_128 = 0;
        uStack_110 = 0xffffffff;
        local_118 = 0xffffffff;
        local_108 = 0;
        local_137 = *(byte *)(local_140 + 0x83) & 1;
        local_100 = this;
        local_e0 = this + 0x10;
        local_d0 = local_140;
        Parser::DeclareArrowFunctionFormalParameters
                  ((Parser *)this,(ParserFormalParameters *)&local_140,pEVar16,
                   (Location *)&local_1a0);
        *(undefined8 *)(this + 0x128) = 0;
        *(undefined8 *)(this + 0x118) = 0xffffffff;
        *(undefined4 *)(this + 0x120) = 0;
        Scanner::Next(*(Scanner **)(this + 0xf8));
        Scanner::Next(*(Scanner **)(this + 0xf8));
        PVar9 = this[0x130];
        this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
        ParseFunctionBody(this,&local_190,0,0xffffffff,&local_140,pPVar25,0,1);
        if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0') {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","has_error()");
        }
        this[0x130] = PVar9;
        pPVar25 = *(ParserBase<v8::internal::Parser> **)(this + 0x88);
        *(long *)local_e0 = lStack_d8;
        *(undefined8 *)local_100 = uStack_f8;
      }
      else {
        pPVar25 = *(ParserBase<v8::internal::Parser> **)(this + 0x88);
      }
      uVar26 = 0;
      uVar18 = 0;
      bVar11 = false;
      *(long *)this = lVar14;
      uVar23 = 1;
    }
  }
  else {
    ParseFunctionBody(this,&local_190,0,0xffffffff,param_1,pPVar25,0,0);
    uVar23 = 0;
    uVar18 = local_b0;
LAB_0114f014:
    *(undefined4 *)(*(long *)param_1 + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
    if ((*(byte *)(*(long *)this + 0x81) & 1) != 0) {
      plVar20 = *(long **)(this + 0xf8);
      uVar21 = *(uint *)((long)plVar20 + 0x154);
      if ((((int)uVar21 <= *(int *)(*plVar20 + 4)) &&
          (uVar4 = *(uint *)(plVar20 + 0x2a), *(int *)(*(long *)param_1 + 0x70) <= (int)uVar4)) &&
         (uVar4 <= uVar21)) {
        uVar5 = *(uint *)(plVar20 + 0x2b);
        pPVar25 = (ParserBase<v8::internal::Parser> *)(ulong)uVar5;
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0xb0),uVar4,uVar21,pPVar25,0);
        lVar14 = *(long *)(this + 0x158);
        if (*(char *)(lVar14 + 0x30) == '\0') {
          *(undefined4 *)(this + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar14 + 0x30) = 1;
          *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(lVar14 + 0x18);
          this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
        lVar14 = *(long *)(this + 0xf8);
        *(undefined8 *)(lVar14 + 0x150) = 0xffffffff;
        *(undefined4 *)(lVar14 + 0x158) = 0;
        if (uVar5 == 299) {
          *(int *)(this + 0x390) = *(int *)(this + 0x390) + 1;
        }
      }
    }
    bVar11 = true;
    uVar26 = (undefined4)local_ac;
  }
  *(long *)local_a0 = lStack_98;
  *(undefined8 *)local_c0 = local_b8;
  if (bVar11) {
    pPVar25 = (ParserBase<v8::internal::Parser> *)
              AstNodeFactory::NewFunctionLiteral
                        ((AstNodeFactory *)(this + 0x68),
                         *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110),
                         *(long *)param_1,&local_190,uVar18,
                         *(int *)(param_1 + 0x10) - (uint)(byte)param_1[8],
                         *(undefined4 *)(param_1 + 0xc),0,0,PVar7,
                         *(undefined4 *)(*(long *)param_1 + 0x70),uVar23,iVar3 + 1,local_178);
    *(undefined4 *)(pPVar25 + 0x18) = uVar26;
    *(undefined4 *)(pPVar25 + 0x14) = *(undefined4 *)(*(long *)param_1 + 0x70);
    this_02 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                **)(this + 0x2f8);
    if (this_02 !=
        (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
         *)0x0) {
      this_00 = *(Zone **)(this + 0xb8);
      pPVar17 = *(ParserBase<v8::internal::Parser> **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)pPVar17) < 8) {
        pPVar17 = (ParserBase<v8::internal::Parser> *)Zone::NewExpand(this_00,8);
      }
      else {
        *(ParserBase<v8::internal::Parser> **)(this_00 + 0x10) = pPVar17 + 8;
      }
      *(undefined ***)pPVar17 = &PTR__AstNodeSourceRanges_01cb50f8;
      local_100 = pPVar17;
      local_c0 = pPVar25;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
      ::
      __emplace_unique_impl<v8::internal::FunctionLiteral*&,v8::internal::FunctionLiteralSourceRanges*&>
                (this_02,(FunctionLiteral **)&local_c0,(FunctionLiteralSourceRanges **)&local_100);
    }
    local_c0 = pPVar25;
    if (*(long *)(this + 0x58) != 0) {
      if (*(undefined8 **)(this + 0x48) == *(undefined8 **)(this + 0x50)) {
        std::__ndk1::
        vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
        ::__push_back_slow_path<v8::internal::FunctionLiteral*const&>
                  ((vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
                    *)(this + 0x40),(FunctionLiteral **)&local_c0);
      }
      else {
        **(undefined8 **)(this + 0x48) = pPVar25;
        *(long *)(this + 0x48) = *(long *)(this + 0x48) + 8;
      }
    }
    if (FLAG_log_function_events != '\0') {
      lVar22 = *(long *)param_1;
      lVar14 = base::TimeTicks::HighResolutionNow();
      local_c0 = (ParserBase<v8::internal::Parser> *)(lVar14 - lVar24);
      dVar27 = (double)base::TimeDelta::InMillisecondsF((TimeDelta *)&local_c0);
      this_01 = *(Logger **)(this + 0x98);
      iVar6 = *(int *)(this + 0x104);
      iVar3 = *(int *)(lVar22 + 0x70);
      iVar2 = *(int *)(lVar22 + 0x74);
      pcVar1 = "preparse-no-resolution";
      if ((uVar12 & 1) == 0) {
        pcVar1 = "parse";
      }
      uVar15 = __strlen_chk("arrow function",0xf);
      Logger::FunctionEvent(this_01,pcVar1,iVar6,dVar27,iVar3,iVar2,"arrow function",uVar15);
    }
  }
  uVar15 = *(long *)(local_190 + 8) - *(long *)local_190 >> 3;
  if (local_188 < uVar15 || local_188 - uVar15 == 0) {
    if (local_188 < uVar15) {
      *(ulong *)(local_190 + 8) = *(long *)local_190 + local_188 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append(local_190,local_188 - uVar15)
    ;
  }
joined_r0x0114f170:
  if (local_170 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_170,(RuntimeCallTimer *)((ulong)&local_170 | 8));
  }
  if (*(long *)(lVar10 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar25;
}

