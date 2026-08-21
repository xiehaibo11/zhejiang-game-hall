
/* v8::internal::ParserBase<v8::internal::Parser>::ParseClassLiteral(v8::internal::AstRawString
   const*, v8::internal::Scanner::Location, bool, int) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseClassLiteral
          (ParserBase<v8::internal::Parser> *this,AstRawString *param_1,ulong param_3,ulong param_4,
          int param_5)

{
  int iVar1;
  long lVar2;
  ParserBase<v8::internal::Parser> *pPVar3;
  uint uVar4;
  long lVar5;
  PendingCompilationErrorHandler *pPVar6;
  Zone *pZVar7;
  Scanner *pSVar8;
  Expression *pEVar9;
  ClassLiteralProperty *pCVar10;
  int *piVar11;
  ClassScope *this_00;
  undefined8 uVar12;
  long *plVar13;
  undefined1 uVar14;
  int *piVar15;
  ulong uVar16;
  byte bVar17;
  undefined8 uVar18;
  Scope *pSVar19;
  undefined1 auVar20 [16];
  FuncNameInferrer *local_130;
  long local_128;
  ParserBase<v8::internal::Parser> *local_120;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  Expression *local_d0 [6];
  byte local_a0;
  char local_9e;
  byte local_9b;
  undefined1 local_9a;
  byte local_99;
  int local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  lVar5 = Scope::GetDeclarationScope(*(Scope **)this);
  if ((param_1 == (AstRawString *)0x0) || ((*(ushort *)(lVar5 + 0x83) >> 10 & 1) != 0)) {
LAB_01164274:
    pZVar7 = *(Zone **)(this + 0xb8);
    pSVar19 = *(Scope **)this;
    this_00 = *(ClassScope **)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this_00) < 0xa0) {
      this_00 = (ClassScope *)Zone::NewExpand(pZVar7,0xa0);
    }
    else {
      *(ClassScope **)(pZVar7 + 0x10) = this_00 + 0xa0;
    }
    ClassScope::ClassScope(this_00,*(Zone **)(this + 0xb8),pSVar19,param_1 == (AstRawString *)0x0);
    uVar12 = *(undefined8 *)this;
    *(ClassScope **)this = this_00;
    *(int *)(this + 0x334) = *(int *)(this + 0x334) + 1;
    *(ushort *)(this_00 + 0x81) = *(ushort *)(this_00 + 0x81) | 1;
    ClassInfo::ClassInfo((ClassInfo *)local_d0,(ParserBase *)this);
    *(undefined4 *)(*(long *)this + 0x70) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
    pSVar8 = *(Scanner **)(this + 0xf8);
    local_9a = param_1 == (AstRawString *)0x0;
    if (*(char *)(*(long *)(pSVar8 + 8) + 0x38) == 'j') {
      Scanner::Next(pSVar8);
      uVar18 = local_110;
      local_130 = (FuncNameInferrer *)(this + 0x20);
      *(ulong *)(this_00 + 0x88) = *(ulong *)(this_00 + 0x88) & 0xfffffffffffffff8 | 1;
      local_128 = *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3;
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
      local_118 = *(long *)(this + 0xc0);
      if (local_118 == 0) {
        uVar14 = 0;
        local_110._0_2_ = 0;
      }
      else {
        local_110._0_2_ = (ushort)*(byte *)(local_118 + 0x11) << 8;
        uVar14 = *(undefined1 *)(local_118 + 0x12);
      }
      local_110._3_5_ = SUB85(uVar18,3);
      local_110._0_3_ = CONCAT12(uVar14,(short)local_110);
      local_108 = this + 0xe0;
      *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_120;
      local_100 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
      local_d8 = 0;
      if (local_118 != 0) {
        if (*(byte *)(local_118 + 0x10) < 3) {
          local_d8 = *(undefined1 *)(local_118 + 0x48);
        }
        else {
          local_d8 = 0;
        }
      }
      local_f0 = 0;
      uStack_e0 = 0xffffffff;
      local_e8 = 0xffffffff;
      local_120 = this;
      local_f8 = local_100;
      pEVar9 = (Expression *)ParsePrimaryExpression(this);
      bVar17 = *(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38);
      if (bVar17 < 4) {
        pEVar9 = (Expression *)DoParseMemberExpressionContinuation(this,pEVar9);
        bVar17 = *(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38);
      }
      if (bVar17 < 6) {
        pEVar9 = (Expression *)ParseLeftHandSideContinuation(this,pEVar9);
      }
      pPVar3 = local_120;
      local_d0[0] = pEVar9;
      if ((uint)local_e8 <= local_e8._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_120 + 0xb0),local_e8 & 0xffffffff,
                   local_e8._4_4_,local_f0 & 0xffffffff,0);
        lVar5 = *(long *)(pPVar3 + 0x158);
        if (*(char *)(lVar5 + 0x30) == '\0') {
          *(undefined4 *)(pPVar3 + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar5 + 0x30) = 1;
          *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar5 + 0x18);
          pPVar3[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar3[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          pPVar3[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
      }
      uVar16 = *(long *)(local_108 + 8) - *(long *)local_108 >> 4;
      if (local_100 < uVar16 || local_100 - uVar16 == 0) {
        if (local_100 < uVar16) {
          *(ulong *)(local_108 + 8) = *(long *)local_108 + local_100 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)local_108,local_100 - uVar16);
      }
      local_f8 = local_100;
      *(long *)(local_120 + 0xc0) = local_118;
      FuncNameInferrer::State::~State((State *)&local_130);
      *(ulong *)(this_00 + 0x88) = *(ulong *)(this_00 + 0x88) & 0xfffffffffffffff8;
      pSVar8 = *(Scanner **)(this + 0xf8);
    }
    uVar4 = Scanner::Next(pSVar8);
    if ((uVar4 & 0xff) != 8) {
      ReportUnexpectedToken(this,uVar4);
    }
    pEVar9 = local_d0[0];
    while( true ) {
      while( true ) {
        bVar17 = local_a0;
        pSVar8 = *(Scanner **)(this + 0xf8);
        if (*(char *)(*(long *)(pSVar8 + 8) + 0x38) != '\f') break;
        Scanner::Next(pSVar8);
      }
      if (*(char *)(*(long *)(pSVar8 + 8) + 0x38) == '\r') break;
      local_128 = *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3;
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
      local_120 = (ParserBase<v8::internal::Parser> *)0x0;
      local_118 = 0;
      local_108 = (ParserBase<v8::internal::Parser> *)CONCAT35(local_108._5_3_,9);
      local_110 = 1;
      local_130 = (FuncNameInferrer *)(this + 0x20);
      auVar20 = ParseClassPropertyDefinition
                          (this,(ClassInfo *)local_d0,(ParsePropertyInfo *)&local_120,
                           pEVar9 != (Expression *)0x0);
      pCVar10 = auVar20._0_8_;
      if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) != '\0') {
        uVar18 = *(undefined8 *)(this + 0x88);
        FuncNameInferrer::State::~State((State *)&local_130);
        goto LAB_01164868;
      }
      if ((6 < (byte)local_108) || ((99U >> (ulong)((byte)local_108 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar16 = 0x3000101010201 >> (((ulong)local_108 & 7) << 3);
      if (((local_9e == '\0') && (local_108._3_1_ != false)) && (local_108._1_1_ != '\0')) {
        local_9e = '\x01';
      }
      if (local_108._2_1_ == '\0') {
        if (((uint)uVar16 & 0xff) == 3) {
          if (local_108._1_1_ != '\0') {
            local_88 = local_88 + 1;
          }
          Parser::DeclarePublicClassField
                    ((Parser *)this,auVar20._8_8_,pCVar10,local_108._3_1_,local_108._1_1_ != '\0',
                     (ClassInfo *)local_d0);
        }
        else {
          Parser::DeclarePublicClassMethod
                    ((Parser *)this,param_1,pCVar10,(local_a0 & (bVar17 ^ 1)) != 0,
                     (ClassInfo *)local_d0);
        }
      }
      else {
        local_9b = local_9b | (((ulong)local_108 & 0x1000000) == 0 && ((uint)uVar16 & 0xff) != 3);
        local_99 = local_99 | (uVar16 & 0xff) == 0;
        Parser::DeclarePrivateClassMember
                  ((Parser *)this,this_00,local_118,pCVar10,uVar16,local_108._3_1_ != false,local_d0
                  );
      }
      if (*(long *)(this + 0x40) != *(long *)(this + 0x48)) {
        FuncNameInferrer::InferFunctionsNames((FuncNameInferrer *)(this + 0x20));
      }
      FuncNameInferrer::State::~State((State *)&local_130);
    }
    uVar4 = Scanner::Next(pSVar8);
    if ((uVar4 & 0xff) != 0xd) {
      ReportUnexpectedToken(this,uVar4);
    }
    iVar1 = *(int *)(**(long **)(this + 0xf8) + 4);
    *(int *)(this_00 + 0x74) = iVar1;
    piVar11 = (int *)ClassScope::ResolvePrivateNamesPartially(this_00);
    if (piVar11 != (int *)0x0) {
      plVar13 = (long *)(piVar11 + 2);
      if ((*(byte *)((long)piVar11 + 5) & 1) != 0) {
        plVar13 = (long *)(*plVar13 + 8);
      }
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0xb0),*piVar11,*piVar11 + 1,0x103,
                 *plVar13);
      lVar5 = *(long *)(this + 0x158);
      if (*(char *)(lVar5 + 0x30) == '\0') {
        *(undefined4 *)(this + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar5 + 0x30) = 1;
        *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar5 + 0x18);
        this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
      uVar18 = *(undefined8 *)(this + 0x88);
      goto LAB_01164868;
    }
    if (local_9b != 0) {
      ClassScope::DeclareBrandVariable(this_00,*(undefined8 *)(this + 0x60),0,0xffffffff);
    }
    if ((this_00[0x9b] == (ClassScope)0x0) && (this_00[0x99] == (ClassScope)0x0)) {
      if (this_00[0x98] == (ClassScope)0x0) {
        bVar17 = 0;
      }
      else {
        bVar17 = (byte)this_00[0x81] >> 6 & 1;
        if (((byte)this_00[0x81] >> 6 & 1) != 0) goto LAB_011647d8;
      }
      if (param_1 != (AstRawString *)0x0) goto LAB_011647d8;
    }
    else {
      bVar17 = 1;
LAB_011647d8:
      uVar18 = ClassScope::DeclareClassVariable
                         (this_00,*(AstValueFactory **)(this + 0x60),param_1,param_5);
      pZVar7 = *(Zone **)(this + 0x68);
      piVar11 = *(int **)(pZVar7 + 0x10);
      if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)piVar11) < 0x18) {
        piVar11 = (int *)Zone::NewExpand(pZVar7,0x18);
      }
      else {
        *(int **)(pZVar7 + 0x10) = piVar11 + 6;
      }
      *piVar11 = param_5;
      piVar11[1] = 0;
      piVar15 = piVar11 + 4;
      piVar15[0] = 0;
      piVar15[1] = 0;
      **(undefined8 **)(this_00 + 0x60) = piVar11;
      *(int **)(this_00 + 0x60) = piVar15;
      *(undefined8 *)(piVar11 + 2) = uVar18;
      if (bVar17 != 0) {
        *(ushort *)(*(long *)(this_00 + 0x90) + 0x28) =
             *(ushort *)(*(long *)(this_00 + 0x90) + 0x28) | 0x800;
        *(ushort *)(*(long *)(this_00 + 0x90) + 0x28) =
             *(ushort *)(*(long *)(this_00 + 0x90) + 0x28) | 0x400;
      }
    }
    uVar18 = Parser::RewriteClassLiteral
                       ((Parser *)this,this_00,param_1,(ClassInfo *)local_d0,param_5,iVar1);
LAB_01164868:
    *(undefined8 *)this = uVar12;
  }
  else {
    if ((param_4 & 1) == 0) {
      if ((*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x118) != param_1) &&
         (*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x70) != param_1))
      goto LAB_01164274;
      pPVar6 = *(PendingCompilationErrorHandler **)(this + 0xb0);
      uVar12 = 0x128;
    }
    else {
      pPVar6 = *(PendingCompilationErrorHandler **)(this + 0xb0);
      uVar12 = 0x13c;
    }
    PendingCompilationErrorHandler::ReportMessageAt
              (pPVar6,param_3 & 0xffffffff,param_3 >> 0x20,uVar12,0);
    lVar5 = *(long *)(this + 0x158);
    if (*(char *)(lVar5 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x30) = 1;
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar5 + 0x18);
      this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
    uVar18 = *(undefined8 *)(this + 0x88);
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

