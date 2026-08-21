
/* v8::internal::ParserBase<v8::internal::Parser>::ParseExpressionOrLabelledStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*, v8::internal::ZoneList<v8::internal::AstRawString const*>*,
   v8::internal::AllowLabelledFunctionStatement) */

undefined4 * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseExpressionOrLabelledStatement
          (ParserBase<v8::internal::Parser> *this,ZoneList *param_1,ZoneList *param_2,int param_4)

{
  int iVar1;
  byte bVar2;
  ParserBase<v8::internal::Parser> PVar3;
  long lVar4;
  bool bVar5;
  ParserBase<v8::internal::Parser> *pPVar6;
  char cVar7;
  undefined4 uVar8;
  Scanner *pSVar9;
  Zone *this_00;
  long lVar10;
  long lVar11;
  VariableProxy *pVVar12;
  int *piVar13;
  long *plVar14;
  ulong uVar15;
  undefined4 *puVar16;
  VariableProxy *pVVar17;
  ZoneList *local_b8;
  ZoneList *pZStack_b0;
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
  pSVar9 = *(Scanner **)(this + 0xf8);
  bVar2 = *(byte *)(*(undefined4 **)(pSVar9 + 8) + 0xe);
  uVar8 = **(undefined4 **)(pSVar9 + 8);
  local_b8 = param_2;
  pZStack_b0 = param_1;
  if (bVar2 < 0x67) {
    if (bVar2 == 0x62) {
      cVar7 = Scanner::PeekAhead(pSVar9);
      if ((cVar7 == '\x03') ||
         (((cVar7 == '\\' || (cVar7 == '\b')) &&
          (pSVar9 = *(Scanner **)(this + 0xf8), Scanner::PeekAhead(pSVar9),
          *(char *)(*(long *)(pSVar9 + 0x10) + 0x4c) == '\0')))) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0xb0),
                   **(undefined4 **)(*(long *)(this + 0xf8) + 8),
                   (*(undefined4 **)(*(long *)(this + 0xf8) + 8))[1],0x146,0);
        lVar10 = *(long *)(this + 0x158);
        puVar16 = (undefined4 *)0x0;
        if (*(char *)(lVar10 + 0x30) == '\0') {
          *(undefined4 *)(this + 0x160) = 0xffffffff;
          puVar16 = (undefined4 *)0x0;
          *(undefined1 *)(lVar10 + 0x30) = 1;
          *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
          this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
        goto LAB_0116d248;
      }
    }
    else if ((bVar2 == 8) || (bVar2 == 0x49)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  else if (bVar2 == 0x67) {
    uVar8 = Scanner::Next(pSVar9);
    ReportUnexpectedToken(this,uVar8);
    puVar16 = (undefined4 *)0x0;
    goto LAB_0116d248;
  }
  lStack_a0 = *(long *)(this + 0xc0);
  cVar7 = *(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38);
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
  PVar3 = this[0x130];
  this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
  local_a8 = this;
  local_80 = local_88;
  lVar10 = ParseExpressionCoverGrammar(this);
  pPVar6 = local_a8;
  if ((uint)local_70 <= local_70._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_a8 + 0xb0),local_70 & 0xffffffff,
               local_70._4_4_,local_78 & 0xffffffff,0);
    lVar11 = *(long *)(pPVar6 + 0x158);
    if (*(char *)(lVar11 + 0x30) == '\0') {
      *(undefined4 *)(pPVar6 + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar11 + 0x30) = 1;
      *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
      pPVar6[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      pPVar6[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      pPVar6[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
  }
  puVar16 = (undefined4 *)0x0;
  bVar5 = true;
  if (((byte)(cVar7 + 0xa4U) < 10) &&
     (*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) == '\t')) {
    puVar16 = (undefined4 *)0x0;
    bVar5 = true;
    if ((lVar10 != 0) && ((*(uint *)(lVar10 + 4) & 0x43f) == 0x35)) {
      pVVar17 = *(VariableProxy **)(*(long *)local_90 + local_88 * 0x10);
      pVVar12 = pVVar17 + 8;
      if (((byte)pVVar17[5] & 1) != 0) {
        pVVar12 = (VariableProxy *)(*(long *)pVVar12 + 8);
      }
      Parser::DeclareLabel((Parser *)this,&pZStack_b0,&local_b8,*(AstRawString **)pVVar12);
      Scope::DeleteUnresolved(*(Scope **)this,pVVar17);
      Scanner::Next(*(Scanner **)(this + 0xf8));
      if (((*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) == 'I') && (param_4 == 0)) &&
         ((*(ushort *)(*(long *)this + 0x81) & 1) == 0)) {
        puVar16 = (undefined4 *)ParseFunctionDeclaration(this);
      }
      else {
        puVar16 = (undefined4 *)ParseStatement(this,pZStack_b0,local_b8,param_4);
      }
      bVar5 = false;
    }
  }
  this[0x130] = PVar3;
  uVar15 = *(long *)(local_90 + 8) - *(long *)local_90 >> 4;
  if (local_88 < uVar15 || local_88 - uVar15 == 0) {
    if (local_88 < uVar15) {
      *(ulong *)(local_90 + 8) = *(long *)local_90 + local_88 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
    ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)local_90,local_88 - uVar15);
  }
  local_80 = local_88;
  *(long *)(local_a8 + 0xc0) = lStack_a0;
  if (bVar5) {
    if (*(long *)(this + 0x18) != 0) {
      lVar11 = (*(undefined8 **)(this + 0xf8))[1];
      if (((*(char *)(lVar11 + 0x38) == 'I') && (*(char *)(lVar11 + 0x4c) == '\0')) &&
         ((*(uint *)(lVar10 + 4) & 0x3f) == 0x35)) {
        plVar14 = (long *)(lVar10 + 8);
        if ((*(uint *)(lVar10 + 4) >> 8 & 1) != 0) {
          plVar14 = (long *)(*plVar14 + 8);
        }
        if (*plVar14 == *(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x160)) {
          piVar13 = (int *)**(undefined8 **)(this + 0xf8);
          iVar1 = (piVar13[1] - *piVar13) + -2;
          if ((char)piVar13[0xe] != 'Z') {
            iVar1 = piVar13[1] - *piVar13;
          }
          if (piVar13[6] >> ((*(byte *)(piVar13 + 7) ^ 1) & 0x1f) == iVar1) {
            puVar16 = (undefined4 *)ParseNativeDeclaration(this);
            goto LAB_0116d248;
          }
        }
      }
    }
    ExpectSemicolon(this);
    if ((*(uint *)(lVar10 + 4) & 0x3f) == 0x38) {
      puVar16 = (undefined4 *)0x0;
    }
    else {
      this_00 = *(Zone **)(this + 0x68);
      puVar16 = *(undefined4 **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar16) < 0x10) {
        puVar16 = (undefined4 *)Zone::NewExpand(this_00,0x10);
      }
      else {
        *(undefined4 **)(this_00 + 0x10) = puVar16 + 4;
      }
      *puVar16 = uVar8;
      puVar16[1] = 9;
      *(long *)(puVar16 + 2) = lVar10;
    }
  }
LAB_0116d248:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return puVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

