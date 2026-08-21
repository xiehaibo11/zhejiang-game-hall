
/* v8::internal::ParserBase<v8::internal::Parser>::ParseObjectPropertyDefinition(v8::internal::ParserBase<v8::internal::Parser>::ParsePropertyInfo*,
   bool*) */

ObjectLiteralProperty * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseObjectPropertyDefinition
          (ParserBase<v8::internal::Parser> *this,ParsePropertyInfo *param_1,bool *param_2)

{
  AstRawString *pAVar1;
  uint uVar2;
  byte bVar3;
  ParsePropertyInfo PVar4;
  char cVar5;
  ParsePropertyInfo PVar6;
  ParserBase<v8::internal::Parser> PVar7;
  ushort uVar8;
  long lVar9;
  ParserBase<v8::internal::Parser> *pPVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  Expression *pEVar14;
  long lVar15;
  Zone *pZVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  Expression *pEVar19;
  Expression *pEVar20;
  Assignment *pAVar21;
  undefined4 uVar22;
  long *plVar23;
  ulong uVar24;
  AstRawString *pAVar25;
  AstRawString *pAVar26;
  ulong uVar27;
  LiteralProperty *this_00;
  long lVar28;
  uint uVar29;
  ParserBase<v8::internal::Parser> *local_b8;
  long lStack_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  bVar3 = (byte)(*(ulong **)(*(long *)(this + 0xf8) + 8))[7];
  uVar27 = **(ulong **)(*(long *)(this + 0xf8) + 8);
  pEVar14 = (Expression *)ParseProperty(this,param_1);
  PVar4 = param_1[0x18];
  if (9 < (byte)PVar4) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pAVar25 = *(AstRawString **)(param_1 + 8);
  switch(PVar4) {
  case (ParsePropertyInfo)0x0:
  case (ParsePropertyInfo)0x1:
    plVar23 = *(long **)(this + 0xc0);
    uVar29 = *(uint *)(**(long **)(this + 0xf8) + 4);
    if (*(byte *)(plVar23 + 2) - 3 < 3) {
      lVar28 = *plVar23;
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(lVar28 + 0xb0),uVar27 & 0xffffffff,uVar29,0xfd
                 ,0);
      lVar15 = *(long *)(lVar28 + 0x158);
      if (*(char *)(lVar15 + 0x30) != '\0') goto LAB_01167c40;
      *(undefined4 *)(lVar28 + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar15 + 0x30) = 1;
      *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
      *(undefined1 *)(lVar28 + 0x1a0) = 0x6d;
      *(undefined1 *)(lVar28 + 0x1f0) = 0x6d;
      *(undefined1 *)(lVar28 + 0x240) = 0x6d;
      PVar6 = param_1[0x19];
    }
    else {
      if (*(uint *)((long)plVar23 + 0x44) < *(uint *)(plVar23 + 8)) {
        *(undefined4 *)((long)plVar23 + 0x34) = 0xfd;
        plVar23[8] = uVar27 & 0xffffffff | (ulong)uVar29 << 0x20;
      }
LAB_01167c40:
      PVar6 = param_1[0x19];
    }
    if (PVar6 == (ParsePropertyInfo)0x0) {
      pZVar16 = *(Zone **)(this + 0x68);
      uVar13 = *(undefined4 *)pEVar14;
      pEVar14 = *(Expression **)(pZVar16 + 0x10);
      if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pEVar14) < 0x10) {
        pEVar14 = (Expression *)Zone::NewExpand(pZVar16,0x10);
      }
      else {
        *(Expression **)(pZVar16 + 0x10) = pEVar14 + 0x10;
      }
      *(AstRawString **)(pEVar14 + 8) = pAVar25;
      *(undefined4 *)pEVar14 = uVar13;
      *(undefined4 *)(pEVar14 + 4) = 0x1a9;
    }
    uVar13 = 7;
    if (PVar4 != (ParsePropertyInfo)0x0) {
      uVar13 = 8;
    }
    uVar22 = 3;
    if (PVar4 != (ParsePropertyInfo)0x0) {
      uVar22 = 4;
    }
    uVar17 = Parser::ParseFunctionLiteral
                       ((Parser *)0x3,this,pAVar25,*(undefined8 *)**(undefined8 **)(this + 0xf8),1,
                        uVar13,uVar27 & 0xffffffff,3,*(ushort *)(*(long *)this + 0x81) & 1,0);
    pZVar16 = *(Zone **)(this + 0x68);
    PVar6 = param_1[0x19];
    this_00 = *(LiteralProperty **)(pZVar16 + 0x10);
    if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)this_00) < 0x18) {
      this_00 = (LiteralProperty *)Zone::NewExpand(pZVar16,0x18);
    }
    else {
      *(LiteralProperty **)(pZVar16 + 0x10) = this_00 + 0x18;
    }
    uVar27 = ObjectLiteralProperty::ObjectLiteralProperty
                       ((ObjectLiteralProperty *)this_00,pEVar14,uVar17,uVar22,
                        PVar6 != (ParsePropertyInfo)0x0);
    lVar15 = 0x138;
    if (PVar4 != (ParsePropertyInfo)0x0) {
      lVar15 = 0x1b8;
    }
    if ((this_00[0x10] != (LiteralProperty)0x5) &&
       (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0')) {
      pAVar26 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + lVar15);
      uVar27 = LiteralProperty::NeedsSetFunctionName(this_00);
      bVar11 = (uVar27 & 1) == 0;
      pAVar1 = (AstRawString *)0x0;
      if (bVar11) {
        pAVar1 = pAVar26;
      }
      pAVar26 = (AstRawString *)0x0;
      if (bVar11) {
        pAVar26 = pAVar25;
      }
      uVar27 = Parser::SetFunctionName((Parser *)this,*(Expression **)(this_00 + 8),pAVar26,pAVar1);
    }
    break;
  case (ParsePropertyInfo)0x2:
    if (((param_1[0x19] == (ParsePropertyInfo)0x0) &&
        (puVar18 = (undefined8 *)**(undefined8 **)(this + 0xf8),
        *(char *)((long)puVar18 + 0x1c) != '\0')) &&
       ((*(int *)(puVar18 + 3) == 9 &&
        (iVar12 = strncmp("__proto__",(char *)puVar18[1],9), iVar12 == 0)))) {
      if (((*param_2 != false) && (lVar15 = *(long *)(this + 0xc0), *(byte *)(lVar15 + 0x10) < 3))
         && (*(uint *)(lVar15 + 0x3c) < *(uint *)(lVar15 + 0x38))) {
        *(undefined4 *)(lVar15 + 0x30) = 0xea;
        *(undefined8 *)(lVar15 + 0x38) = *puVar18;
      }
      *param_2 = true;
    }
    Scanner::Next(*(Scanner **)(this + 0xf8));
    PVar7 = this[0x130];
    this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
    pEVar19 = (Expression *)
              ParsePossibleDestructuringSubPattern(this,*(AccumulationScope **)param_1);
    pZVar16 = *(Zone **)(this + 0x68);
    PVar4 = param_1[0x19];
    this_00 = *(LiteralProperty **)(pZVar16 + 0x10);
    if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)this_00) < 0x18) {
      this_00 = (LiteralProperty *)Zone::NewExpand(pZVar16,0x18);
    }
    else {
      *(ObjectLiteralProperty **)(pZVar16 + 0x10) = (ObjectLiteralProperty *)(this_00 + 0x18);
    }
    uVar27 = ObjectLiteralProperty::ObjectLiteralProperty
                       ((ObjectLiteralProperty *)this_00,*(AstValueFactory **)(this + 0x70),pEVar14,
                        pEVar19,PVar4 != (ParsePropertyInfo)0x0);
    if ((*(ObjectLiteralProperty *)(this_00 + 0x10) != (ObjectLiteralProperty)0x5) &&
       (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0')) {
      uVar27 = LiteralProperty::NeedsSetFunctionName(this_00);
      pEVar14 = *(Expression **)(this_00 + 8);
      pAVar1 = (AstRawString *)0x0;
      if ((uVar27 & 1) == 0) {
        pAVar1 = pAVar25;
      }
      uVar27 = Expression::IsAnonymousFunctionDefinition(pEVar14);
      if ((((uVar27 & 1) != 0) ||
          (uVar27 = Expression::IsConciseMethodDefinition(pEVar14), (uVar27 & 1) != 0)) ||
         (uVar27 = Expression::IsAccessorFunctionDefinition(pEVar14), (uVar27 & 1) != 0)) {
        pEVar19 = pEVar14;
        if ((*(uint *)(pEVar14 + 4) & 0x3f) != 0x26) {
          pEVar19 = (Expression *)0x0;
        }
        if ((*(uint *)(pEVar14 + 4) & 0x3f) == 0x1f) {
          pEVar19 = *(Expression **)(pEVar14 + 0x20);
        }
        if (pEVar19 != (Expression *)0x0) {
          if (pAVar1 == (AstRawString *)0x0) {
            uVar27 = 0;
          }
          else {
            uVar27 = AstValueFactory::NewConsString(*(AstValueFactory **)(this + 0x60),pAVar1);
          }
          *(ulong *)(pEVar19 + 0x20) = uVar27;
        }
      }
    }
    this[0x130] = PVar7;
    break;
  default:
    uVar8 = *(ushort *)(*(long *)this + 0x81);
    lVar15 = Scope::AsDeclarationScope();
    cVar5 = *(char *)(lVar15 + 0x85);
    if (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0) {
      lVar15 = Scope::AsDeclarationScope();
      bVar11 = *(byte *)(lVar15 + 0x85) - 10 < 5;
    }
    else {
      bVar11 = true;
    }
    uVar29 = (uint)bVar3;
    if ((uVar29 & 0xfc) != 0x5c) {
      if (uVar29 == 0x61) {
        if (((uVar8 & 1) == 0) && (3 < (byte)(cVar5 - 0xdU))) goto LAB_0116801c;
      }
      else if (bVar3 == 0x60) {
        if (!bVar11) goto LAB_01167a78;
      }
      else if ((uVar29 - 0x61 < 5) && ((uVar8 & 1) == 0)) goto LAB_0116801c;
      goto switchD_011679a4_caseD_6;
    }
    if (bVar3 == 0x60) {
LAB_01167a78:
      lVar15 = *(long *)(this + 0xc0);
      if (*(byte *)(lVar15 + 0x10) < 3) {
        cVar5 = *(char *)(lVar15 + 0x48);
        lVar28 = lVar15;
        while (cVar5 != '\0') {
          if (*(char *)(lVar28 + 0x10) == '\x02') {
            *(ulong *)(lVar28 + 0x4c) = uVar27;
            *(undefined4 *)(lVar28 + 0x54) = 0x130;
          }
          lVar28 = *(long *)(lVar28 + 8);
          if (lVar28 == 0) break;
          cVar5 = *(char *)(lVar15 + 0x48);
        }
      }
    }
LAB_0116801c:
    FuncNameInferrer::PushVariableName((FuncNameInferrer *)(this + 0x20),pAVar25);
    pEVar19 = (Expression *)
              ExpressionScope<v8::internal::ParserTypes<v8::internal::Parser>>::NewVariable
                        (*(ExpressionScope<v8::internal::ParserTypes<v8::internal::Parser>> **)
                          (this + 0xc0),pAVar25,(int)uVar27);
    if ((pEVar19 == (Expression *)0x0) || ((*(uint *)(pEVar19 + 4) & 0x43f) != 0x35)) {
LAB_01168094:
      plVar23 = *(long **)(this + 0xc0);
      if (*(byte *)(plVar23 + 2) - 3 < 3) {
        lVar28 = *plVar23;
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(lVar28 + 0xb0),uVar27 & 0xffffffff,
                   uVar27 >> 0x20,0x128,0);
        lVar15 = *(long *)(lVar28 + 0x158);
        if (*(char *)(lVar15 + 0x30) == '\0') {
          *(undefined4 *)(lVar28 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar15 + 0x30) = 1;
          *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
          *(undefined1 *)(lVar28 + 0x1a0) = 0x6d;
          *(undefined1 *)(lVar28 + 0x1f0) = 0x6d;
          *(undefined1 *)(lVar28 + 0x240) = 0x6d;
        }
      }
      else if (*(uint *)((long)plVar23 + 0x44) < *(uint *)(plVar23 + 8)) {
        *(undefined4 *)((long)plVar23 + 0x34) = 0x128;
        plVar23[8] = uVar27;
      }
    }
    else if ((*(byte *)(*(long *)this + 0x81) & 1) != 0) {
      pEVar20 = pEVar19 + 8;
      if ((*(uint *)(pEVar19 + 4) >> 8 & 1) != 0) {
        pEVar20 = (Expression *)(*(long *)pEVar20 + 8);
      }
      if ((*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) == *(long *)pEVar20) ||
         (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) == *(long *)pEVar20))
      goto LAB_01168094;
    }
    pAVar21 = (Assignment *)pEVar19;
    if (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) == '\x11') {
      Scanner::Next(*(Scanner **)(this + 0xf8));
      PVar7 = this[0x130];
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
      local_a0 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)(this + 0xe0);
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
      local_90 = local_98;
      pEVar20 = (Expression *)ParseAssignmentExpressionCoverGrammar(this);
      pPVar10 = local_b8;
      if ((uint)local_80 <= local_80._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_b8 + 0xb0),local_80 & 0xffffffff,
                   local_80._4_4_,local_88 & 0xffffffff,0);
        lVar15 = *(long *)(pPVar10 + 0x158);
        if (*(char *)(lVar15 + 0x30) == '\0') {
          *(undefined4 *)(pPVar10 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar15 + 0x30) = 1;
          *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
          pPVar10[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar10[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar10[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
      }
      uVar24 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
      if (local_98 < uVar24 || local_98 - uVar24 == 0) {
        if (local_98 < uVar24) {
          *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append(local_a0,local_98 - uVar24);
      }
      local_90 = local_98;
      *(long *)(local_b8 + 0xc0) = lStack_b0;
      uVar29 = *(uint *)(pEVar19 + 4);
      if (((uVar29 & 0x3f) == 0x35) &&
         (*(uint *)(pEVar19 + 4) = uVar29 | 0x80, (uVar29 >> 8 & 1) != 0)) {
        Variable::SetMaybeAssigned(*(Variable **)(pEVar19 + 8));
      }
      pZVar16 = *(Zone **)(this + 0x68);
      pAVar21 = *(Assignment **)(pZVar16 + 0x10);
      if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)pAVar21) < 0x18) {
        pAVar21 = (Assignment *)Zone::NewExpand(pZVar16,0x18);
      }
      else {
        *(Assignment **)(pZVar16 + 0x10) = pAVar21 + 0x18;
      }
      Assignment::Assignment(pAVar21,0x18,0x11,pEVar19,pEVar20,0xffffffff);
      Parser::SetFunctionNameFromIdentifierRef((Parser *)this,pEVar20,pEVar19);
      lVar15 = *(long *)(this + 0xc0);
      this[0x130] = PVar7;
      if ((*(byte *)(lVar15 + 0x10) < 3) && (*(uint *)(lVar15 + 0x3c) < *(uint *)(lVar15 + 0x38))) {
        uVar29 = *(uint *)(**(long **)(this + 0xf8) + 4);
        *(undefined4 *)(lVar15 + 0x30) = 0xfc;
        *(ulong *)(lVar15 + 0x38) = uVar27 & 0xffffffff | (ulong)uVar29 << 0x20;
      }
    }
    pZVar16 = *(Zone **)(this + 0x68);
    this_00 = *(LiteralProperty **)(pZVar16 + 0x10);
    if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)this_00) < 0x18) {
      this_00 = (LiteralProperty *)Zone::NewExpand(pZVar16,0x18);
    }
    else {
      *(LiteralProperty **)(pZVar16 + 0x10) = this_00 + 0x18;
    }
    uVar27 = ObjectLiteralProperty::ObjectLiteralProperty
                       ((ObjectLiteralProperty *)this_00,pEVar14,pAVar21,1,0);
    if ((this_00[0x10] == (LiteralProperty)0x5) ||
       (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) != '\0')) break;
    uVar27 = LiteralProperty::NeedsSetFunctionName(this_00);
    pEVar14 = *(Expression **)(this_00 + 8);
    pAVar1 = (AstRawString *)0x0;
    if ((uVar27 & 1) == 0) {
      pAVar1 = pAVar25;
    }
    uVar27 = Expression::IsAnonymousFunctionDefinition(pEVar14);
    if ((((uVar27 & 1) == 0) &&
        (uVar27 = Expression::IsConciseMethodDefinition(pEVar14), (uVar27 & 1) == 0)) &&
       (uVar27 = Expression::IsAccessorFunctionDefinition(pEVar14), (uVar27 & 1) == 0)) break;
    pEVar19 = pEVar14;
    if ((*(uint *)(pEVar14 + 4) & 0x3f) != 0x26) {
      pEVar19 = (Expression *)0x0;
    }
    if ((*(uint *)(pEVar14 + 4) & 0x3f) == 0x1f) {
      pEVar19 = *(Expression **)(pEVar14 + 0x20);
    }
    goto joined_r0x01167eec;
  case (ParsePropertyInfo)0x5:
    plVar23 = *(long **)(this + 0xc0);
    uVar29 = *(uint *)(param_1 + 0x14);
    uVar2 = *(uint *)(**(long **)(this + 0xf8) + 4);
    if (*(byte *)(plVar23 + 2) - 3 < 3) {
      lVar28 = *plVar23;
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(lVar28 + 0xb0),uVar27 & 0xffffffff,uVar2,0xfd,
                 0);
      lVar15 = *(long *)(lVar28 + 0x158);
      if (*(char *)(lVar15 + 0x30) == '\0') {
        *(undefined4 *)(lVar28 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar15 + 0x30) = 1;
        *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
        *(undefined1 *)(lVar28 + 0x1a0) = 0x6d;
        *(undefined1 *)(lVar28 + 0x1f0) = 0x6d;
        *(undefined1 *)(lVar28 + 0x240) = 0x6d;
      }
    }
    else if (*(uint *)((long)plVar23 + 0x44) < *(uint *)(plVar23 + 8)) {
      *(undefined4 *)((long)plVar23 + 0x34) = 0xfd;
      plVar23[8] = uVar27 & 0xffffffff | (ulong)uVar2 << 0x20;
    }
    uVar17 = Parser::ParseFunctionLiteral
                       ((Parser *)this,pAVar25,*(undefined8 *)**(undefined8 **)(this + 0xf8),1,
                        (&UNK_019db493)[((ulong)uVar29 & 1) * 2 + ((ulong)(uVar29 >> 1) & 1)],
                        uVar27 & 0xffffffff,3,*(ushort *)(*(long *)this + 0x81) & 1,0);
    pZVar16 = *(Zone **)(this + 0x68);
    PVar4 = param_1[0x19];
    this_00 = *(LiteralProperty **)(pZVar16 + 0x10);
    if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)this_00) < 0x18) {
      this_00 = (LiteralProperty *)Zone::NewExpand(pZVar16,0x18);
    }
    else {
      *(LiteralProperty **)(pZVar16 + 0x10) = this_00 + 0x18;
    }
    uVar27 = ObjectLiteralProperty::ObjectLiteralProperty
                       ((ObjectLiteralProperty *)this_00,pEVar14,uVar17,1,
                        PVar4 != (ParsePropertyInfo)0x0);
    if ((this_00[0x10] == (LiteralProperty)0x5) ||
       (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) != '\0')) break;
    uVar27 = LiteralProperty::NeedsSetFunctionName(this_00);
    pEVar14 = *(Expression **)(this_00 + 8);
    pAVar1 = (AstRawString *)0x0;
    if ((uVar27 & 1) == 0) {
      pAVar1 = pAVar25;
    }
    uVar27 = Expression::IsAnonymousFunctionDefinition(pEVar14);
    if ((((uVar27 & 1) == 0) &&
        (uVar27 = Expression::IsConciseMethodDefinition(pEVar14), (uVar27 & 1) == 0)) &&
       (uVar27 = Expression::IsAccessorFunctionDefinition(pEVar14), (uVar27 & 1) == 0)) break;
    pEVar19 = pEVar14;
    if ((*(uint *)(pEVar14 + 4) & 0x3f) != 0x26) {
      pEVar19 = (Expression *)0x0;
    }
    if ((*(uint *)(pEVar14 + 4) & 0x3f) == 0x1f) {
      pEVar19 = *(Expression **)(pEVar14 + 0x20);
    }
joined_r0x01167eec:
    if (pEVar19 != (Expression *)0x0) {
      if (pAVar1 == (AstRawString *)0x0) {
        uVar27 = 0;
        *(undefined8 *)(pEVar19 + 0x20) = 0;
      }
      else {
        uVar27 = AstValueFactory::NewConsString(*(AstValueFactory **)(this + 0x60),pAVar1);
        *(ulong *)(pEVar19 + 0x20) = uVar27;
      }
    }
    break;
  case (ParsePropertyInfo)0x6:
  case (ParsePropertyInfo)0x9:
switchD_011679a4_caseD_6:
    uVar13 = Scanner::Next(*(Scanner **)(this + 0xf8));
    uVar27 = ReportUnexpectedToken(this,uVar13);
    this_00 = (LiteralProperty *)0x0;
    break;
  case (ParsePropertyInfo)0x8:
    param_1[0x19] = (ParsePropertyInfo)0x1;
    param_1[0x1c] = (ParsePropertyInfo)0x1;
    pZVar16 = *(Zone **)(this + 0x68);
    puVar18 = *(undefined8 **)(pZVar16 + 0x10);
    if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)puVar18) < 0x10) {
      puVar18 = (undefined8 *)Zone::NewExpand(pZVar16,0x10);
    }
    else {
      *(undefined8 **)(pZVar16 + 0x10) = puVar18 + 2;
    }
    *puVar18 = 0x429ffffffff;
    pZVar16 = *(Zone **)(this + 0x68);
    this_00 = *(LiteralProperty **)(pZVar16 + 0x10);
    if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)this_00) < 0x18) {
      this_00 = (LiteralProperty *)Zone::NewExpand(pZVar16,0x18);
    }
    else {
      *(ObjectLiteralProperty **)(pZVar16 + 0x10) = (ObjectLiteralProperty *)(this_00 + 0x18);
    }
    uVar27 = ObjectLiteralProperty::ObjectLiteralProperty
                       ((ObjectLiteralProperty *)this_00,puVar18,pEVar14,6,1);
  }
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return (ObjectLiteralProperty *)this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar27);
}

