
/* v8::internal::Parser::ParseExportDefault() */

undefined8 * __thiscall v8::internal::Parser::ParseExportDefault(Parser *this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  Parser PVar4;
  long lVar5;
  Parser *pPVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  Scanner *pSVar10;
  Expression *this_00;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  VariableProxy *this_01;
  int *piVar14;
  Assignment *pAVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  Zone *pZVar18;
  ulong uVar19;
  undefined8 uVar20;
  int iVar21;
  AstRawString *pAVar22;
  Expression *pEVar23;
  Scope *pSVar24;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [4];
  char local_bc [4];
  Parser *local_b8;
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
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar9 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar9 & 0xff) != 0x44) {
    ParserBase<v8::internal::Parser>::ReportUnexpectedToken
              ((ParserBase<v8::internal::Parser> *)this,uVar9);
  }
  pZVar18 = *(Zone **)(this + 0xb8);
  local_d0 = *(undefined8 **)(pZVar18 + 0x10);
  uVar20 = *(undefined8 *)**(undefined8 **)(this + 0xf8);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)local_d0) < 8) {
    local_d0 = (undefined8 *)Zone::NewExpand(pZVar18,8);
  }
  else {
    *(undefined8 **)(pZVar18 + 0x10) = local_d0 + 1;
  }
  local_c8 = 1;
  pSVar10 = *(Scanner **)(this + 0xf8);
  cVar8 = *(char *)(*(long *)(pSVar10 + 8) + 0x38);
  if (cVar8 == 'g') {
    Scanner::Next(pSVar10);
    puVar12 = (undefined8 *)
              ParserBase<v8::internal::Parser>::ParseClassDeclaration
                        ((ParserBase<v8::internal::Parser> *)this,(ZoneList *)&local_d0,true);
    goto joined_r0x01151450;
  }
  if (cVar8 == '_') {
    cVar8 = Scanner::PeekAhead(pSVar10);
    if ((cVar8 == 'I') &&
       (pSVar10 = *(Scanner **)(this + 0xf8), Scanner::PeekAhead(pSVar10),
       *(char *)(*(long *)(pSVar10 + 0x10) + 0x4c) == '\0')) {
      Scanner::Next(*(Scanner **)(this + 0xf8));
      pSVar10 = *(Scanner **)(this + 0xf8);
      piVar14 = *(int **)pSVar10;
      iVar21 = *piVar14;
      iVar2 = (piVar14[1] - iVar21) + -2;
      if ((char)piVar14[0xe] != 'Z') {
        iVar2 = piVar14[1] - iVar21;
      }
      if (piVar14[6] >> ((*(byte *)(piVar14 + 7) ^ 1) & 0x1f) != iVar2) {
        ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                  ((ParserBase<v8::internal::Parser> *)this,0x6e);
        pSVar10 = *(Scanner **)(this + 0xf8);
        iVar21 = **(int **)pSVar10;
      }
      Scanner::Next(pSVar10);
      uVar7 = 2;
      goto LAB_011511a0;
    }
  }
  else if (cVar8 == 'I') {
    Scanner::Next(pSVar10);
    pSVar10 = *(Scanner **)(this + 0xf8);
    iVar21 = **(int **)pSVar10;
    uVar7 = *(char *)(*(long *)(pSVar10 + 8) + 0x38) == '(';
    if ((bool)uVar7) {
      Scanner::Next(pSVar10);
    }
LAB_011511a0:
    puVar12 = (undefined8 *)
              ParserBase<v8::internal::Parser>::ParseHoistableDeclaration
                        ((ParserBase<v8::internal::Parser> *)this,iVar21,uVar7,&local_d0,1);
    goto joined_r0x01151450;
  }
  PVar4 = this[0x130];
  iVar2 = *(int *)**(undefined8 **)(this + 0xf8);
  lStack_b0 = *(long *)(this + 0xc0);
  this[0x130] = (Parser)0x1;
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
  *(Parser ***)(this + 0xc0) = &local_b8;
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
  this_00 = (Expression *)
            ParserBase<v8::internal::Parser>::ParseAssignmentExpressionCoverGrammar
                      ((ParserBase<v8::internal::Parser> *)this);
  pPVar6 = local_b8;
  if ((uint)local_80 <= local_80._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_b8 + 0xb0),local_80 & 0xffffffff,
               local_80._4_4_,local_88 & 0xffffffff,0);
    lVar13 = *(long *)(pPVar6 + 0x158);
    if (*(char *)(lVar13 + 0x30) == '\0') {
      *(undefined4 *)(pPVar6 + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar13 + 0x30) = 1;
      *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
      pPVar6[0x1a0] = (Parser)0x6d;
      pPVar6[0x1f0] = (Parser)0x6d;
      pPVar6[0x240] = (Parser)0x6d;
    }
  }
  uVar19 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
  if (local_98 < uVar19 || local_98 - uVar19 == 0) {
    if (local_98 < uVar19) {
      *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
    ::__append(local_a0,local_98 - uVar19);
  }
  local_90 = local_98;
  *(long *)(local_b8 + 0xc0) = lStack_b0;
  pAVar22 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xb8);
  uVar19 = Expression::IsAnonymousFunctionDefinition(this_00);
  if ((((uVar19 & 1) != 0) ||
      (uVar19 = Expression::IsConciseMethodDefinition(this_00), (uVar19 & 1) != 0)) ||
     (uVar19 = Expression::IsAccessorFunctionDefinition(this_00), (uVar19 & 1) != 0)) {
    pEVar23 = this_00;
    if ((*(uint *)(this_00 + 4) & 0x3f) != 0x26) {
      pEVar23 = (Expression *)0x0;
    }
    if ((*(uint *)(this_00 + 4) & 0x3f) == 0x1f) {
      pEVar23 = *(Expression **)(this_00 + 0x20);
    }
    if (pEVar23 != (Expression *)0x0) {
      if (pAVar22 == (AstRawString *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = AstValueFactory::NewConsString(*(AstValueFactory **)(this + 0x60),pAVar22);
      }
      *(undefined8 *)(pEVar23 + 0x20) = uVar11;
    }
  }
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xd0);
  uVar9 = local_c8._4_4_;
  if ((int)(uint)local_c8 <= (int)local_c8._4_4_) {
    pZVar18 = *(Zone **)(this + 0xb8);
    uVar1 = (uint)local_c8 << 1 | 1;
    uVar19 = -(ulong)(((uint)local_c8 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
             (ulong)uVar1 << 3;
    puVar12 = *(undefined8 **)(pZVar18 + 0x10);
    if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)puVar12) < uVar19) {
      puVar12 = (undefined8 *)Zone::NewExpand(pZVar18,uVar19);
    }
    else {
      *(ulong *)(pZVar18 + 0x10) = (long)puVar12 + uVar19;
    }
    uVar9 = local_c8._4_4_;
    if (0 < (int)local_c8._4_4_) {
      MemCopy(puVar12,local_d0,(ulong)local_c8._4_4_ << 3);
      uVar9 = local_c8._4_4_;
    }
    local_c8 = (ulong)uVar1;
    local_d0 = puVar12;
  }
  local_c8 = CONCAT44(uVar9 + 1,(uint)local_c8);
  local_d0[(int)uVar9] = uVar11;
  pZVar18 = *(Zone **)(this + 0x68);
  this_01 = *(VariableProxy **)(pZVar18 + 0x10);
  uVar3 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)this_01) < 0x18) {
    this_01 = (VariableProxy *)Zone::NewExpand(pZVar18,0x18);
  }
  else {
    *(VariableProxy **)(pZVar18 + 0x10) = this_01 + 0x18;
  }
  *(undefined8 *)(this_01 + 8) = uVar11;
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined4 *)this_01 = uVar3;
  *(undefined4 *)(this_01 + 4) = 0x835;
  pZVar18 = *(Zone **)(this + 0x68);
  pSVar24 = *(Scope **)this;
  piVar14 = *(int **)(pZVar18 + 0x10);
  iVar21 = *(int *)(**(long **)(this + 0xf8) + 4);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)piVar14) < 0x18) {
    piVar14 = (int *)Zone::NewExpand(pZVar18,0x18);
  }
  else {
    *(int **)(pZVar18 + 0x10) = piVar14 + 6;
  }
  piVar14[4] = 0;
  piVar14[5] = 0;
  *piVar14 = iVar2;
  piVar14[1] = 0;
  local_b8 = (Parser *)CONCAT71(local_b8._1_7_,1);
  local_bc[0] = '\0';
  Scope::DeclareVariable(pSVar24,piVar14,uVar11,iVar2,1,0,0,auStack_c0,local_bc,&local_b8);
  if ((char)local_b8 == '\0') {
    if (iVar21 == -1) {
      iVar21 = iVar2 + 1;
    }
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar2,iVar21,0xb0,
               *(undefined8 *)(*(long *)(piVar14 + 2) + 8));
    lVar13 = *(long *)(this + 0x158);
    if (*(char *)(lVar13 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar13 + 0x30) = 1;
      *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
      this[0x1a0] = (Parser)0x6d;
      this[0x1f0] = (Parser)0x6d;
      this[0x240] = (Parser)0x6d;
    }
  }
  else if (local_bc[0] != '\0') {
    *(int *)(this + 0x368) = *(int *)(this + 0x368) + 1;
  }
  VariableProxy::BindTo(this_01,*(Variable **)(piVar14 + 2));
  *(undefined4 *)(*(long *)(this_01 + 8) + 0x24) = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  pZVar18 = *(Zone **)(this + 0x68);
  pAVar15 = *(Assignment **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pAVar15) < 0x18) {
    pAVar15 = (Assignment *)Zone::NewExpand(pZVar18,0x18);
  }
  else {
    *(Assignment **)(pZVar18 + 0x10) = pAVar15 + 0x18;
  }
  Assignment::Assignment(pAVar15,0x18,0x10,this_01,this_00,0xffffffff);
  pZVar18 = *(Zone **)(this + 0x68);
  puVar16 = *(undefined8 **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)puVar16) < 0x10) {
    puVar16 = (undefined8 *)Zone::NewExpand(pZVar18,0x10);
  }
  else {
    *(undefined8 **)(pZVar18 + 0x10) = puVar16 + 2;
  }
  puVar16[1] = pAVar15;
  *puVar16 = 0x9ffffffff;
  pZVar18 = *(Zone **)(this + 0x68);
  puVar12 = *(undefined8 **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)puVar12) < 0x20) {
    puVar12 = (undefined8 *)Zone::NewExpand(pZVar18,0x20);
  }
  else {
    *(undefined8 **)(pZVar18 + 0x10) = puVar12 + 4;
  }
  pZVar18 = *(Zone **)(this + 0x68);
  *puVar12 = 0x47ffffffff;
  puVar17 = *(undefined8 **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)puVar17) < 8) {
    puVar17 = (undefined8 *)Zone::NewExpand(pZVar18,8);
  }
  else {
    *(undefined8 **)(pZVar18 + 0x10) = puVar17 + 1;
  }
  puVar12[1] = puVar17;
  puVar12[3] = 0;
  puVar12[2] = 0x100000001;
  *(uint *)((long)puVar12 + 4) = *(uint *)((long)puVar12 + 4) | 0x80;
  *puVar17 = puVar16;
  ParserBase<v8::internal::Parser>::ExpectSemicolon((ParserBase<v8::internal::Parser> *)this);
  this[0x130] = PVar4;
joined_r0x01151450:
  if (puVar12 != (undefined8 *)0x0) {
    lVar13 = Scope::AsModuleScope();
    SourceTextModuleDescriptor::AddExport
              (*(SourceTextModuleDescriptor **)(lVar13 + 0xe0),*local_d0,
               *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xb8),uVar20,
               *(undefined8 *)(this + 0xb8));
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

