
/* v8::internal::ParserBase<v8::internal::Parser>::ParseClassDeclaration(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*, bool) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseClassDeclaration
          (ParserBase<v8::internal::Parser> *this,ZoneList *param_1,bool param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  ParserBase<v8::internal::Parser> *pPVar5;
  byte bVar6;
  Expression *pEVar7;
  undefined8 uVar8;
  AstRawString *pAVar9;
  long lVar10;
  ulong uVar11;
  AstRawString *pAVar12;
  ParserBase<v8::internal::Parser> *local_a8;
  long lStack_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  ParserBase<v8::internal::Parser> *local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  iVar1 = *(int *)**(undefined8 **)(this + 0xf8);
  cVar2 = *(char *)((*(undefined8 **)(this + 0xf8))[1] + 0x38);
  if ((param_2) && ((cVar2 == 'j' || (cVar2 == '\b')))) {
    pAVar9 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xb8);
    pAVar12 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xd0);
    goto LAB_0115165c;
  }
  lVar10 = Scope::AsDeclarationScope();
  cVar3 = *(char *)(lVar10 + 0x85);
  bVar6 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((bVar6 & 0xfc) == 0x5c) {
LAB_01151648:
    pAVar9 = (AstRawString *)
             Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
    pAVar12 = pAVar9;
  }
  else {
    if (bVar6 == 0x61) {
      if (3 < (byte)(cVar3 - 0xdU)) {
LAB_01151854:
        if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_01151648;
      }
    }
    else if (bVar6 == 0x60) {
      if ((4 < (byte)(cVar3 - 10U)) && (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0))
      goto LAB_01151648;
    }
    else if ((byte)(bVar6 + 0x9f) < 5) goto LAB_01151854;
    ReportUnexpectedToken(this);
    pAVar9 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
    pAVar12 = pAVar9;
  }
LAB_0115165c:
  lStack_a0 = *(long *)(this + 0xc0);
  local_98 = 0;
  if (lStack_a0 == 0) {
    local_96 = 0;
    local_97 = 0;
  }
  else {
    local_97 = *(undefined1 *)(lStack_a0 + 0x11);
    local_96 = *(undefined1 *)(lStack_a0 + 0x12);
  }
  local_90 = this + 0xe0;
  *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_a8;
  local_88 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
  local_60 = 0;
  if (lStack_a0 != 0) {
    if (*(byte *)(lStack_a0 + 0x10) < 3) {
      local_60 = *(undefined1 *)(lStack_a0 + 0x48);
    }
    else {
      local_60 = 0;
    }
  }
  local_78 = 0;
  uStack_68 = 0xffffffff;
  local_70 = 0xffffffff;
  local_a8 = this;
  local_80 = local_88;
  pEVar7 = (Expression *)
           ParseClassLiteral(this,pAVar9,*(undefined8 *)**(undefined8 **)(this + 0xf8),
                             (byte)(cVar2 + 0x9fU) < 5,iVar1);
  pPVar5 = local_a8;
  if ((uint)local_70 <= local_70._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_a8 + 0xb0),local_70 & 0xffffffff,
               local_70._4_4_,local_78 & 0xffffffff,0);
    lVar10 = *(long *)(pPVar5 + 0x158);
    if (*(char *)(lVar10 + 0x30) == '\0') {
      *(undefined4 *)(pPVar5 + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar10 + 0x30) = 1;
      *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
      pPVar5[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      pPVar5[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      pPVar5[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
  }
  uVar8 = Parser::DeclareClass
                    ((Parser *)this,pAVar12,pEVar7,param_1,iVar1,
                     *(int *)**(undefined8 **)(this + 0xf8));
  uVar11 = *(long *)(local_90 + 8) - *(long *)local_90 >> 4;
  if (local_88 < uVar11 || local_88 - uVar11 == 0) {
    if (local_88 < uVar11) {
      *(ulong *)(local_90 + 8) = *(long *)local_90 + local_88 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
    ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)local_90,local_88 - uVar11);
  }
  local_80 = local_88;
  *(long *)(local_a8 + 0xc0) = lStack_a0;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

