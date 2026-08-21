
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseClassLiteral(v8::internal::PreParserIdentifier,
   v8::internal::Scanner::Location, bool, int) */

void v8::internal::ParserBase<v8::internal::PreParser>::ParseClassLiteral
               (ParserBase<v8::internal::PreParser> *param_1,AstRawString *param_2,byte param_3,
               ulong param_4,ulong param_5,int param_6)

{
  ParserBase<v8::internal::PreParser> PVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  PendingCompilationErrorHandler *pPVar5;
  undefined8 uVar6;
  Zone *pZVar7;
  Scanner *pSVar8;
  int *piVar9;
  ClassScope *this;
  DeclarationScope *this_00;
  undefined8 uVar10;
  byte bVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined1 uVar17;
  long lVar18;
  ParserBase<v8::internal::PreParser> *pPVar19;
  Scope *pSVar20;
  char local_104 [4];
  ParserBase<v8::internal::PreParser> *local_100;
  long local_f8;
  undefined8 local_f0;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  *local_e8;
  undefined8 local_e0;
  ParserBase<v8::internal::PreParser> *local_d8;
  DeclarationScope *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  uint local_b0 [2];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  if (param_3 == 0) {
LAB_0117744c:
    pZVar7 = *(Zone **)(param_1 + 0x88);
    pSVar20 = *(Scope **)param_1;
    this = *(ClassScope **)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this) < 0xa0) {
      this = (ClassScope *)Zone::NewExpand(pZVar7,0xa0);
    }
    else {
      *(ClassScope **)(pZVar7 + 0x10) = this + 0xa0;
    }
    ClassScope::ClassScope(this,*(Zone **)(param_1 + 0x88),pSVar20,param_3 == 0);
    uVar10 = *(undefined8 *)param_1;
    *(ClassScope **)param_1 = this;
    *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) | 1;
    local_b0[0] = 0;
    local_a8 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_a0 = (uint)(param_3 == 0) << 0x10;
    *(undefined4 *)(*(long *)param_1 + 0x70) = *(undefined4 *)(**(long **)(param_1 + 200) + 4);
    pSVar8 = *(Scanner **)(param_1 + 200);
    if (*(char *)(*(long *)(pSVar8 + 8) + 0x38) == 'j') {
      Scanner::Next(pSVar8);
      uVar6 = local_f0;
      *(ulong *)(this + 0x88) = *(ulong *)(this + 0x88) & 0xfffffffffffffff8 | 1;
      local_f8 = *(long *)(param_1 + 0x90);
      if (local_f8 == 0) {
        uVar17 = 0;
        local_f0._0_2_ = 0;
      }
      else {
        local_f0._0_2_ = (ushort)*(byte *)(local_f8 + 0x11) << 8;
        uVar17 = *(undefined1 *)(local_f8 + 0x12);
      }
      local_f0._3_5_ = SUB85(uVar6,3);
      local_f0._0_3_ = CONCAT12(uVar17,(short)local_f0);
      local_e8 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)(param_1 + 0xb0);
      *(ParserBase<v8::internal::PreParser> ***)(param_1 + 0x90) = &local_100;
      local_e0 = (ParserBase<v8::internal::PreParser> *)
                 (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4);
      local_b8 = 0;
      if (local_f8 != 0) {
        if (*(byte *)(local_f8 + 0x10) < 3) {
          local_b8 = *(undefined1 *)(local_f8 + 0x48);
        }
        else {
          local_b8 = 0;
        }
      }
      local_d0 = (DeclarationScope *)0x0;
      uStack_c0 = 0xffffffff;
      local_c8 = 0xffffffff;
      local_100 = param_1;
      local_d8 = local_e0;
      uVar4 = ParsePrimaryExpression(param_1);
      bVar11 = *(byte *)(*(long *)(*(long *)(param_1 + 200) + 8) + 0x38);
      if (bVar11 < 4) {
        uVar4 = DoParseMemberExpressionContinuation(param_1);
        bVar11 = *(byte *)(*(long *)(*(long *)(param_1 + 200) + 8) + 0x38);
      }
      if (bVar11 < 6) {
        uVar4 = ParseLeftHandSideContinuation(param_1);
      }
      local_b0[0] = uVar4;
      pPVar19 = local_100;
      if ((uint)local_c8 <= local_c8._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_100 + 0x80),local_c8 & 0xffffffff,
                   local_c8._4_4_,(ulong)local_d0 & 0xffffffff,0);
        lVar14 = *(long *)(pPVar19 + 200);
        lVar18 = *(long *)(lVar14 + 0x18);
        if (*(char *)(lVar18 + 0x30) == '\0') {
          *(undefined4 *)(lVar14 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar18 + 0x30) = 1;
          *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)(lVar18 + 0x18);
          *(undefined1 *)(lVar14 + 0x60) = 0x6d;
          *(undefined1 *)(lVar14 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar14 + 0x100) = 0x6d;
        }
      }
      pPVar19 = (ParserBase<v8::internal::PreParser> *)
                (*(long *)(local_e8 + 8) - *(long *)local_e8 >> 4);
      if (local_e0 < pPVar19 || (long)local_e0 - (long)pPVar19 == 0) {
        if (local_e0 < pPVar19) {
          *(long *)(local_e8 + 8) = *(long *)local_e8 + (long)local_e0 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append(local_e8,(long)local_e0 - (long)pPVar19);
      }
      local_d8 = local_e0;
      *(long *)(local_100 + 0x90) = local_f8;
      *(ulong *)(this + 0x88) = *(ulong *)(this + 0x88) & 0xfffffffffffffff8;
      pSVar8 = *(Scanner **)(param_1 + 200);
    }
    uVar4 = Scanner::Next(pSVar8);
    if ((uVar4 & 0xff) != 8) {
      ReportUnexpectedToken(param_1,uVar4);
    }
    uVar4 = local_b0[0] & 7;
    while( true ) {
      while( true ) {
        pSVar8 = *(Scanner **)(param_1 + 200);
        if (*(char *)(*(long *)(pSVar8 + 8) + 0x38) != '\f') break;
        Scanner::Next(pSVar8);
      }
      if (*(char *)(*(long *)(pSVar8 + 8) + 0x38) == '\r') break;
      local_f8 = 0;
      local_f0 = 0;
      local_100 = (ParserBase<v8::internal::PreParser> *)0x0;
      local_e0 = (ParserBase<v8::internal::PreParser> *)CONCAT35(local_e0._5_3_,9);
      local_e8 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)0x1;
      ParseClassPropertyDefinition
                (param_1,(ClassInfo *)local_b0,(ParsePropertyInfo *)&local_100,uVar4 != 0);
      if (*(char *)(*(long *)(*(long *)(param_1 + 200) + 0x18) + 0x30) != '\0') {
        uVar6 = 1;
        goto LAB_01177a60;
      }
      if ((6 < (byte)local_e0) || ((99U >> (ulong)((byte)local_e0 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar15 = 0x3000101010201 >> (((ulong)local_e0 & 7) << 3);
      if (((local_a8._6_1_ == '\0') && (local_e0._3_1_ != '\0')) && (local_e0._1_1_ != '\0')) {
        local_a8._0_7_ = CONCAT16(1,(undefined6)local_a8);
      }
      uVar12 = (uint)uVar15;
      if (local_e0._2_1_ == '\0') {
        if ((local_e0._1_1_ != '\0') && ((uVar12 & 0xff) == 3)) {
          local_88 = local_88 + 1;
          uVar6 = ClassFieldVariableName(param_1,*(AstValueFactory **)(param_1 + 0x28),local_88);
          PreParser::DeclareVariableName((PreParser *)param_1,uVar6,1,this,local_104,0xffffffff,0);
        }
      }
      else {
        bVar3 = local_a0._3_1_;
        bVar11 = local_a0._1_1_ | (((ulong)local_e0 & 0x1000000) == 0 && (uVar12 & 0xff) != 3);
        local_a0._0_2_ = CONCAT11(bVar11,(char)local_a0);
        local_a0 = CONCAT13(bVar3 | (uVar15 & 0xff) == 0,(undefined3)local_a0);
        ClassScope::DeclarePrivateName
                  (this,local_f8,0x9070108 >> (ulong)((uVar12 & 3) << 3 ^ 0x10),
                   local_e0._3_1_ != '\0',local_104);
        if (local_104[0] == '\0') {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(param_1 + 0x80),0xffffffff,0,0xb0,local_f8
                    );
          lVar14 = *(long *)(param_1 + 200);
          lVar18 = *(long *)(lVar14 + 0x18);
          if (*(char *)(lVar18 + 0x30) == '\0') {
            *(undefined4 *)(lVar14 + 0x20) = 0xffffffff;
            *(undefined1 *)(lVar18 + 0x30) = 1;
            *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)(lVar18 + 0x18);
            *(undefined1 *)(lVar14 + 0x60) = 0x6d;
            *(undefined1 *)(lVar14 + 0xb0) = 0x6d;
            *(undefined1 *)(lVar14 + 0x100) = 0x6d;
          }
        }
      }
    }
    uVar4 = Scanner::Next(pSVar8);
    if ((uVar4 & 0xff) != 0xd) {
      ReportUnexpectedToken(param_1,uVar4);
    }
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(**(long **)(param_1 + 200) + 4);
    piVar9 = (int *)ClassScope::ResolvePrivateNamesPartially(this);
    if (piVar9 != (int *)0x0) {
      plVar16 = (long *)(piVar9 + 2);
      if ((*(byte *)((long)piVar9 + 5) & 1) != 0) {
        plVar16 = (long *)(*plVar16 + 8);
      }
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(param_1 + 0x80),*piVar9,*piVar9 + 1,0x103,
                 *plVar16);
      lVar14 = *(long *)(param_1 + 200);
      uVar6 = 1;
      lVar18 = *(long *)(lVar14 + 0x18);
      if (*(char *)(lVar18 + 0x30) == '\0') {
        *(undefined4 *)(lVar14 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar18 + 0x30) = 1;
        *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)(lVar18 + 0x18);
        *(undefined1 *)(lVar14 + 0x60) = 0x6d;
        *(undefined1 *)(lVar14 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar14 + 0x100) = 0x6d;
      }
      goto LAB_01177a60;
    }
    if (local_a0._1_1_ != '\0') {
      ClassScope::DeclareBrandVariable(this,*(undefined8 *)(param_1 + 0x28),0,0xffffffff);
    }
    if ((this[0x9b] == (ClassScope)0x0) && (this[0x99] == (ClassScope)0x0)) {
      if (this[0x98] == (ClassScope)0x0) {
        bVar11 = 0;
LAB_01177ab8:
        if (param_3 != 0) goto LAB_01177ac0;
      }
      else {
        bVar11 = (byte)this[0x81] >> 6 & 1;
        if (((byte)this[0x81] >> 6 & 1) == 0) goto LAB_01177ab8;
LAB_01177ac0:
        ClassScope::DeclareClassVariable(this,*(AstValueFactory **)(param_1 + 0x28),param_2,param_6)
        ;
        if (bVar11 != 0) goto LAB_01177918;
      }
    }
    else {
      ClassScope::DeclareClassVariable(this,*(AstValueFactory **)(param_1 + 0x28),param_2,param_6);
LAB_01177918:
      *(ushort *)(*(long *)(this + 0x90) + 0x28) =
           *(ushort *)(*(long *)(this + 0x90) + 0x28) | 0x800;
      *(ushort *)(*(long *)(this + 0x90) + 0x28) =
           *(ushort *)(*(long *)(this + 0x90) + 0x28) | 0x400;
    }
    if (local_a8._4_1_ == '\0') {
      pZVar7 = *(Zone **)(param_1 + 0x88);
      this_00 = *(DeclarationScope **)(pZVar7 + 0x10);
      uVar13 = 4;
      if ((local_b0[0] & 7) == 0) {
        uVar13 = 5;
      }
      if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this_00) < 0xe0) {
        this_00 = (DeclarationScope *)Zone::NewExpand(pZVar7,0xe0);
      }
      else {
        *(DeclarationScope **)(pZVar7 + 0x10) = this_00 + 0xe0;
      }
      DeclarationScope::DeclarationScope(this_00,pZVar7,*(undefined8 *)param_1,2,uVar13);
      pPVar19 = param_1 + 0x10;
      *(undefined1 *)(*(long *)pPVar19 + 0x3b) = 1;
      DeclarationScope::DeclareDefaultFunctionVariables
                (this_00,*(AstValueFactory **)(param_1 + 0x28));
      *(int *)(this_00 + 0x70) = param_6;
      *(int *)(this_00 + 0x74) = param_6;
      *(ushort *)(this_00 + 0x81) = *(ushort *)(this_00 + 0x81) | 1;
      local_f8 = *(long *)param_1;
      *(DeclarationScope **)param_1 = this_00;
      local_e8 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)((ulong)local_e8 & 0xffffffff00000000);
      local_f0 = 0;
      local_d8 = *(ParserBase<v8::internal::PreParser> **)pPVar19;
      local_c8 = local_c8 & 0xffffffff00000000;
      *(ParserBase<v8::internal::PreParser> ***)pPVar19 = &local_100;
      if (local_d8 != (ParserBase<v8::internal::PreParser> *)0x0) {
        PVar1 = local_d8[0x39];
        local_d8[0x39] = (ParserBase<v8::internal::PreParser>)0x0;
        local_d8[0x3a] = PVar1;
      }
      *(ParserBase<v8::internal::PreParser> **)(param_1 + 0x10) = local_d8;
      *(long *)param_1 = local_f8;
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
      local_100 = param_1;
      local_e0 = pPVar19;
      local_d0 = this_00;
    }
    if (local_a8._7_1_ != '\0') {
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
    }
    if ((char)local_a0 != '\0') {
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
    }
    uVar6 = 2;
LAB_01177a60:
    *(undefined8 *)param_1 = uVar10;
  }
  else {
    if ((param_5 & 1) == 0) {
      if ((param_3 & 0xfe) != 2) goto LAB_0117744c;
      pPVar5 = *(PendingCompilationErrorHandler **)(param_1 + 0x80);
      uVar10 = 0x128;
    }
    else {
      pPVar5 = *(PendingCompilationErrorHandler **)(param_1 + 0x80);
      uVar10 = 0x13c;
    }
    PendingCompilationErrorHandler::ReportMessageAt
              (pPVar5,param_4 & 0xffffffff,param_4 >> 0x20,uVar10,0);
    lVar14 = *(long *)(param_1 + 200);
    uVar6 = 1;
    lVar18 = *(long *)(lVar14 + 0x18);
    if (*(char *)(lVar18 + 0x30) == '\0') {
      *(undefined4 *)(lVar14 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar18 + 0x30) = 1;
      *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)(lVar18 + 0x18);
      *(undefined1 *)(lVar14 + 0x60) = 0x6d;
      *(undefined1 *)(lVar14 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar14 + 0x100) = 0x6d;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

