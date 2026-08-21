
/* v8::internal::ParserBase<v8::internal::Parser>::ParseLeftHandSideContinuation(v8::internal::Expression*)
    */

Expression * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseLeftHandSideContinuation
          (ParserBase<v8::internal::Parser> *this,Expression *param_1)

{
  FunctionLiteral *pFVar1;
  undefined4 uVar2;
  byte bVar3;
  ParserBase<v8::internal::Parser> PVar4;
  ushort uVar5;
  long lVar6;
  bool bVar7;
  vector<void*,std::__ndk1::allocator<void*>> *pvVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  Scanner *this_00;
  ulong uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  Expression *pEVar15;
  Expression *pEVar16;
  Scope *pSVar17;
  DeclarationScope *pDVar18;
  ulong uVar19;
  long lVar20;
  Zone *pZVar21;
  int *piVar22;
  undefined8 *puVar23;
  int iVar24;
  undefined8 *puVar25;
  Expression *local_120;
  char local_10c [4];
  vector<void*,std::__ndk1::allocator<void*>> *local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  vector<void*,std::__ndk1::allocator<void*>> *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  *local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined2 local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  lVar20 = (*(undefined8 **)(this + 0xf8))[1];
  if (((((*(char *)(lVar20 + 0x38) == '\x05') && (param_1 != (Expression *)0x0)) &&
       ((*(uint *)(param_1 + 4) & 0x43f) == 0x35)) &&
      ((piVar22 = (int *)**(undefined8 **)(this + 0xf8), (char)piVar22[0xe] == '_' &&
       (*(char *)(lVar20 + 0x4c) == '\0')))) &&
     (iVar24 = *piVar22, piVar22[6] >> ((*(byte *)(piVar22 + 7) ^ 1) & 0x1f) == piVar22[1] - iVar24)
     ) {
    local_c8 = *(undefined8 **)(this + 0xc0);
    local_b8 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)(this + 0xe0);
    local_c0 = (undefined8 *)CONCAT53(local_c0._3_5_,0x10102);
    *(vector<void*,std::__ndk1::allocator<void*>> ***)(this + 0xc0) = &local_d0;
    local_88 = 1;
    local_b0 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
    uStack_90 = 0xffffffff;
    local_98 = 0xffffffff;
    local_a0 = 0;
    local_84 = 0xffffffff;
    local_7c = 0;
    local_78 = 1;
    pSVar17 = *(Scope **)this;
    local_f0 = (ulong)(*(ushort *)(pSVar17 + 0x81) >> 1) & 1 | (ulong)pSVar17;
    local_e8 = *(undefined8 *)(pSVar17 + 0x10);
    local_e0 = *(undefined8 *)(pSVar17 + 0x50);
    local_d0 = (vector<void*,std::__ndk1::allocator<void*>> *)this;
    local_a8 = local_b0;
    lVar20 = Scope::GetClosureScope(pSVar17);
    local_d8 = *(undefined8 *)(lVar20 + 0x40);
    *(ushort *)((local_f0 & 0xfffffffffffffffe) + 0x81) =
         *(ushort *)((local_f0 & 0xfffffffffffffffe) + 0x81) & 0xfff9;
    local_108 = (vector<void*,std::__ndk1::allocator<void*>> *)(this + 200);
    local_100 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
    local_f8 = local_100;
    ParseArguments(this,&local_108,local_10c,1);
    if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) == '\x0f') {
      FuncNameInferrer::RemoveAsyncKeywordFromEnd((FuncNameInferrer *)(this + 0x20));
      pDVar18 = (DeclarationScope *)
                ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>>::
                ValidateAndCreateScope
                          ((ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::Parser>> *
                           )&local_d0);
      *(DeclarationScope **)(this + 0x128) = pDVar18;
      Scope::Snapshot::Reparent((Snapshot *)&local_f0,pDVar18);
      local_120 = param_1;
      if ((int)local_f8 == (int)local_100) {
        pZVar21 = *(Zone **)(this + 0x68);
        pEVar16 = *(Expression **)(pZVar21 + 0x10);
        if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pEVar16) < 8) {
          pEVar16 = (Expression *)Zone::NewExpand(pZVar21,8);
        }
        else {
          *(Expression **)(pZVar21 + 0x10) = pEVar16 + 8;
        }
        bVar9 = false;
        *(int *)pEVar16 = iVar24;
        *(int *)(pEVar16 + 4) = 0x65;
      }
      else {
        pEVar16 = (Expression *)
                  Parser::ExpressionListToExpression((Parser *)this,(ScopedList *)&local_108);
        bVar9 = false;
        *(uint *)(pEVar16 + 4) = *(uint *)(pEVar16 + 4) | 0x40;
      }
    }
    else {
      if (local_10c[0] == '\0') {
        pZVar21 = *(Zone **)(this + 0x68);
        local_120 = *(Expression **)(pZVar21 + 0x10);
        if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)local_120) < 0x20) {
          local_120 = (Expression *)Zone::NewExpand(pZVar21,0x20);
        }
        else {
          *(Expression **)(pZVar21 + 0x10) = local_120 + 0x20;
        }
        pZVar21 = *(Zone **)(this + 0x68);
        *(int *)local_120 = iVar24;
        *(undefined8 *)(local_120 + 0x18) = 0;
        *(Expression **)(local_120 + 8) = param_1;
        *(undefined8 *)(local_120 + 0x10) = 0;
        *(int *)(local_120 + 4) = 0x1c;
        ScopedList<v8::internal::Expression*,void*>::CopyTo
                  ((ScopedList<v8::internal::Expression*,void*> *)&local_108,
                   (ZoneList *)(local_120 + 0x10),pZVar21);
      }
      else {
        local_120 = (Expression *)Parser::SpreadCall((Parser *)this,param_1,&local_108,iVar24);
      }
      pvVar8 = local_d0;
      *(undefined8 *)(local_d0 + 0x118) = 0xffffffff;
      *(undefined4 *)(local_d0 + 0x120) = 0;
      if ((uint)local_98 <= local_98._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_d0 + 0xb0),local_98 & 0xffffffff,
                   local_98._4_4_,local_a0 & 0xffffffff,0);
        lVar20 = *(long *)(pvVar8 + 0x158);
        if (*(char *)(lVar20 + 0x30) == '\0') {
          *(undefined4 *)(pvVar8 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar20 + 0x30) = 1;
          *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
          pvVar8[0x1a0] = (vector<void*,std::__ndk1::allocator<void*>>)0x6d;
          pvVar8[0x1f0] = (vector<void*,std::__ndk1::allocator<void*>>)0x6d;
          pvVar8[0x240] = (vector<void*,std::__ndk1::allocator<void*>>)0x6d;
        }
      }
      puVar23 = local_c8;
      if (*(byte *)(local_c8 + 2) < 3) {
        if ((4 < *(byte *)(local_c8 + 2) - 1) && (local_b0 != local_a8)) {
          lVar20 = local_a8 * 0x10 + local_b0 * -0x10;
          puVar25 = (undefined8 *)(*(long *)local_b8 + local_b0 * 0x10);
          do {
            Scope::AddUnresolved(*(Scope **)*puVar23,(VariableProxy *)*puVar25);
            lVar20 = lVar20 + -0x10;
            puVar25 = puVar25 + 2;
          } while (lVar20 != 0);
        }
        puVar23[5] = local_a8;
        local_b0 = local_a8;
      }
      if ((*(long *)(this + 0x58) != 0) && (*(long *)(this + 0x40) != *(long *)(this + 0x48))) {
        *(long *)(this + 0x48) = *(long *)(this + 0x48) + -8;
      }
      bVar9 = *(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) < 6;
      pEVar16 = local_120;
    }
    uVar19 = *(long *)(local_108 + 8) - *(long *)local_108 >> 3;
    if (local_100 < uVar19 || local_100 - uVar19 == 0) {
      if (local_100 < uVar19) {
        *(ulong *)(local_108 + 8) = *(long *)local_108 + local_100 * 8;
      }
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                (local_108,local_100 - uVar19);
    }
    if ((1 < local_f0) && ((local_f0 & 1) != 0)) {
      pSVar17 = (Scope *)(local_f0 & 0xfffffffffffffffe);
      *(ushort *)(pSVar17 + 0x81) = *(ushort *)(pSVar17 + 0x81) | 2;
      lVar20 = Scope::GetDeclarationScope(pSVar17);
      uVar5 = *(ushort *)(lVar20 + 0x81);
      *(ushort *)(lVar20 + 0x81) = uVar5 | 2;
      if (((uVar5 & 1) == 0) &&
         ((*(char *)(lVar20 + 0x80) != '\x01' && (*(char *)(lVar20 + 0x80) != '\x04')))) {
        *(ushort *)(lVar20 + 0x81) = uVar5 | 6;
        *(undefined4 *)(lVar20 + 0x7c) = 3;
      }
      lVar20 = *(long *)(pSVar17 + 8);
      *(ushort *)(pSVar17 + 0x81) = *(ushort *)(pSVar17 + 0x81) | 0x40;
      while ((lVar20 != 0 && ((*(ushort *)(lVar20 + 0x81) >> 6 & 1) == 0))) {
        *(ushort *)(lVar20 + 0x81) = *(ushort *)(lVar20 + 0x81) | 0x40;
        lVar20 = *(long *)(lVar20 + 8);
      }
    }
    uVar19 = *(long *)(local_b8 + 8) - *(long *)local_b8 >> 4;
    if (local_b0 < uVar19 || local_b0 - uVar19 == 0) {
      if (local_b0 < uVar19) {
        *(ulong *)(local_b8 + 8) = *(long *)local_b8 + local_b0 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append(local_b8,local_b0 - uVar19);
    }
    local_a8 = local_b0;
    *(undefined8 **)(local_d0 + 0xc0) = local_c8;
    param_1 = local_120;
    if (!bVar9) goto LAB_01161b44;
  }
  bVar9 = false;
LAB_011616ec:
  this_00 = *(Scanner **)(this + 0xf8);
  piVar22 = *(int **)(this_00 + 8);
  bVar3 = *(byte *)(piVar22 + 0xe);
  bVar7 = bVar9;
  do {
    switch(bVar3) {
    case 2:
      uVar19 = Scanner::Next(this_00);
      if (bVar7) {
        uVar19 = uVar19 & 0xffffffff;
        goto LAB_01161af0;
      }
      iVar24 = *(int *)**(undefined8 **)(this + 0xf8);
      uVar13 = ParsePropertyOrPrivatePropertyName(this);
      pZVar21 = *(Zone **)(this + 0x68);
      pEVar15 = *(Expression **)(pZVar21 + 0x10);
      if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pEVar15) < 0x18) {
        pEVar15 = (Expression *)Zone::NewExpand(pZVar21,0x18);
      }
      else {
        *(Expression **)(pZVar21 + 0x10) = pEVar15 + 0x18;
      }
      *(Expression **)(pEVar15 + 8) = param_1;
      *(undefined8 *)(pEVar15 + 0x10) = uVar13;
      *(int *)pEVar15 = iVar24;
      *(int *)(pEVar15 + 4) = 0x2c;
      break;
    case 3:
      Scanner::Next(this_00);
      PVar4 = this[0x130];
      iVar24 = *(int *)**(undefined8 **)(this + 0xf8);
      this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
      uVar13 = ParseExpressionCoverGrammar(this);
      pZVar21 = *(Zone **)(this + 0x68);
      pEVar15 = *(Expression **)(pZVar21 + 0x10);
      if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pEVar15) < 0x18) {
        pEVar15 = (Expression *)Zone::NewExpand(pZVar21,0x18);
      }
      else {
        *(Expression **)(pZVar21 + 0x10) = pEVar15 + 0x18;
      }
      iVar11 = 0xac;
      if (!bVar7) {
        iVar11 = 0x2c;
      }
      *(Expression **)(pEVar15 + 8) = param_1;
      *(undefined8 *)(pEVar15 + 0x10) = uVar13;
      *(int *)pEVar15 = iVar24;
      *(int *)(pEVar15 + 4) = iVar11;
      uVar10 = Scanner::Next(*(Scanner **)(this + 0xf8));
      if ((uVar10 & 0xff) != 7) {
        ReportUnexpectedToken(this,uVar10);
      }
      this[0x130] = PVar4;
      break;
    case 4:
      goto switchD_01161738_caseD_4;
    case 5:
      if (*(byte *)(*(int **)this_00 + 0xe) - 0x5b < 0xb) {
        iVar24 = **(int **)this_00;
      }
      else {
        iVar24 = *piVar22;
        if (((*(uint *)(param_1 + 4) & 0x3f) == 0x26) &&
           (FunctionLiteral::SetShouldEagerCompile((FunctionLiteral *)param_1),
           *(char *)(*(long *)this + 0x80) == '\x04')) {
          pFVar1 = (FunctionLiteral *)param_1;
          if ((*(uint *)(param_1 + 4) & 0x3f) != 0x26) {
            pFVar1 = (FunctionLiteral *)0x0;
          }
          *(uint *)(pFVar1 + 4) = *(uint *)(pFVar1 + 4) | 0x400000;
        }
      }
      local_c8 = (undefined8 *)(*(long *)(this + 0xd0) - *(long *)(this + 200) >> 3);
      local_d0 = (vector<void*,std::__ndk1::allocator<void*>> *)(this + 200);
      local_c0 = local_c8;
      ParseArguments(this,&local_d0,&local_f0,0);
      iVar11 = CheckPossibleEvalCall(this,param_1,*(Scope **)this);
      if (local_f0._0_1_ == (Snapshot)0x0) {
        pZVar21 = *(Zone **)(this + 0x68);
        pEVar15 = *(Expression **)(pZVar21 + 0x10);
        if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pEVar15) < 0x20) {
          pEVar15 = (Expression *)Zone::NewExpand(pZVar21,0x20);
        }
        else {
          *(Expression **)(pZVar21 + 0x10) = pEVar15 + 0x20;
        }
        pZVar21 = *(Zone **)(this + 0x68);
        uVar10 = 0x21c;
        if (!bVar7) {
          uVar10 = 0x1c;
        }
        *(Expression **)(pEVar15 + 8) = param_1;
        *(undefined8 *)(pEVar15 + 0x10) = 0;
        *(undefined8 *)(pEVar15 + 0x18) = 0;
        *(int *)pEVar15 = iVar24;
        *(uint *)(pEVar15 + 4) = uVar10 & 0xffffff00 | uVar10 & 0x7f | (uint)(iVar11 == 0) << 7;
        ScopedList<v8::internal::Expression*,void*>::CopyTo
                  ((ScopedList<v8::internal::Expression*,void*> *)&local_d0,
                   (ZoneList *)(pEVar15 + 0x10),pZVar21);
        lVar20 = *(long *)(this + 0x58);
      }
      else {
        pEVar15 = (Expression *)Parser::SpreadCall((Parser *)this,param_1,&local_d0,iVar24);
        lVar20 = *(long *)(this + 0x58);
      }
      if ((lVar20 != 0) && (*(long *)(this + 0x40) != *(long *)(this + 0x48))) {
        *(long *)(this + 0x48) = *(long *)(this + 0x48) + -8;
      }
      puVar23 = (undefined8 *)(*(long *)(local_d0 + 8) - *(long *)local_d0 >> 3);
      if (puVar23 <= local_c8 && (long)local_c8 - (long)puVar23 != 0) {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                  (local_d0,(long)local_c8 - (long)puVar23);
      }
      else if (puVar23 > local_c8) {
        *(long *)(local_d0 + 8) = *(long *)local_d0 + (long)local_c8 * 8;
      }
      break;
    default:
      if (bVar7) {
        iVar24 = **(int **)this_00;
        uVar12 = Scanner::Next(this_00);
        uVar19 = uVar12 & 0xffffffff;
        if (((byte)Token::token_flags[uVar12 & 0xff] >> 1 & 1) == 0) goto LAB_01161af0;
        uVar13 = Scanner::CurrentSymbol
                           (*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
        pZVar21 = *(Zone **)(this + 0x68);
        puVar14 = *(undefined4 **)(pZVar21 + 0x10);
        uVar2 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
        if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)puVar14) < 0x10) {
          puVar14 = (undefined4 *)Zone::NewExpand(pZVar21,0x10);
        }
        else {
          *(undefined4 **)(pZVar21 + 0x10) = puVar14 + 4;
        }
        *(undefined8 *)(puVar14 + 2) = uVar13;
        *puVar14 = uVar2;
        puVar14[1] = 0x1a9;
        pZVar21 = *(Zone **)(this + 0x68);
        pEVar15 = *(Expression **)(pZVar21 + 0x10);
        if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pEVar15) < 0x18) {
          pEVar15 = (Expression *)Zone::NewExpand(pZVar21,0x18);
        }
        else {
          *(Expression **)(pZVar21 + 0x10) = pEVar15 + 0x18;
        }
        *(Expression **)(pEVar15 + 8) = param_1;
        *(undefined4 **)(pEVar15 + 0x10) = puVar14;
        *(int *)pEVar15 = iVar24;
        *(int *)(pEVar15 + 4) = 0xac;
      }
      else {
        if (bVar9) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(this + 0xb0),*piVar22,piVar22[1],0x17a,0);
          lVar20 = *(long *)(this + 0x158);
          if (*(char *)(lVar20 + 0x30) == '\0') {
            *(undefined4 *)(this + 0x160) = 0xffffffff;
            *(undefined1 *)(lVar20 + 0x30) = 1;
            *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
            this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
            this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
            this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
          }
          goto LAB_01161b40;
        }
        pEVar15 = (Expression *)ParseTemplateLiteral(this,param_1,**(int **)this_00,true);
      }
    }
    this_00 = *(Scanner **)(this + 0xf8);
    bVar7 = false;
    piVar22 = *(int **)(this_00 + 8);
    bVar3 = *(byte *)(piVar22 + 0xe);
    param_1 = pEVar15;
    if (5 < bVar3) {
      pEVar16 = pEVar15;
      if (bVar9) {
        pZVar21 = *(Zone **)(this + 0x68);
        pEVar16 = *(Expression **)(pZVar21 + 0x10);
        if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pEVar16) < 0x10) {
          pEVar16 = (Expression *)Zone::NewExpand(pZVar21,0x10);
        }
        else {
          *(Expression **)(pZVar21 + 0x10) = pEVar16 + 0x10;
        }
        *(Expression **)(pEVar16 + 8) = pEVar15;
        *(undefined8 *)pEVar16 = 0x2b00000000;
      }
      goto LAB_01161b44;
    }
  } while( true );
switchD_01161738_caseD_4:
  if (bVar7) goto LAB_01161b7c;
  Scanner::Next(this_00);
  bVar9 = true;
  goto LAB_011616ec;
LAB_01161b7c:
  uVar19 = 4;
LAB_01161af0:
  ReportUnexpectedToken(this,uVar19);
LAB_01161b40:
  pEVar16 = *(Expression **)(this + 0x88);
LAB_01161b44:
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pEVar16;
}

