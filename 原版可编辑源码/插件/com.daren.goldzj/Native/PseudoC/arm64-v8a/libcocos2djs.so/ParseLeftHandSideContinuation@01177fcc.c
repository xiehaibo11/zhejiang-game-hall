
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseLeftHandSideContinuation(v8::internal::PreParserExpression)
    */

uint __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseLeftHandSideContinuation
          (ParserBase<v8::internal::PreParser> *this,uint param_2)

{
  uint uVar1;
  char cVar2;
  ParserBase<v8::internal::PreParser> PVar3;
  ushort uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  Scanner *this_00;
  ulong uVar9;
  DeclarationScope *pDVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  Scope *pSVar16;
  undefined1 auStack_f4 [4];
  undefined4 local_f0 [2];
  ulong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ParserBase<v8::internal::PreParser> *local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  ParserBase<v8::internal::PreParser> *local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined2 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if ((param_2 & 7) == 3) {
    lVar14 = (*(undefined8 **)(this + 200))[1];
    if ((((*(char *)(lVar14 + 0x38) == '\x05') &&
         (piVar12 = (int *)**(undefined8 **)(this + 200), (char)piVar12[0xe] == '_')) &&
        (*(char *)(lVar14 + 0x4c) == '\0')) &&
       (piVar12[6] >> ((*(byte *)(piVar12 + 7) ^ 1) & 0x1f) == piVar12[1] - *piVar12)) {
      uStack_c0 = *(undefined8 *)(this + 0x90);
      local_b8 = 0x102;
      local_b0 = this + 0xb0;
      local_b6 = 1;
      *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_c8;
      local_7c = 0xffffffff;
      local_a8 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
      local_80 = 1;
      uStack_88 = 0xffffffff;
      local_90 = 0xffffffff;
      local_74 = 0;
      uStack_98 = 0;
      local_70 = 1;
      pSVar16 = *(Scope **)this;
      local_e8 = (ulong)(*(ushort *)(pSVar16 + 0x81) >> 1) & 1 | (ulong)pSVar16;
      local_e0 = *(undefined8 *)(pSVar16 + 0x10);
      local_d8 = *(undefined8 *)(pSVar16 + 0x50);
      local_c8 = this;
      local_a0 = local_a8;
      lVar14 = Scope::GetClosureScope(pSVar16);
      local_d0 = *(undefined8 *)(lVar14 + 0x40);
      *(ushort *)((local_e8 & 0xfffffffffffffffe) + 0x81) =
           *(ushort *)((local_e8 & 0xfffffffffffffffe) + 0x81) & 0xfff9;
      local_f0[0] = 0;
      ParseArguments(this,local_f0,auStack_f4,1);
      if (*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) == '\x0f') {
        pDVar10 = (DeclarationScope *)
                  ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
                  ValidateAndCreateScope
                            ((ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>
                              *)&local_c8);
        *(DeclarationScope **)(this + 0xf8) = pDVar10;
        Scope::Snapshot::Reparent((Snapshot *)&local_e8,pDVar10);
        bVar7 = false;
        uVar8 = 10;
      }
      else {
        ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
        ValidateExpression((ArrowHeadParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>
                            *)&local_c8);
        param_2 = 0x52;
        uVar8 = 0x52;
        bVar7 = *(byte *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) < 6;
      }
      if ((1 < local_e8) && ((local_e8 & 1) != 0)) {
        pSVar16 = (Scope *)(local_e8 & 0xfffffffffffffffe);
        *(ushort *)(pSVar16 + 0x81) = *(ushort *)(pSVar16 + 0x81) | 2;
        lVar14 = Scope::GetDeclarationScope(pSVar16);
        uVar4 = *(ushort *)(lVar14 + 0x81);
        *(ushort *)(lVar14 + 0x81) = uVar4 | 2;
        if (((uVar4 & 1) == 0) &&
           ((*(char *)(lVar14 + 0x80) != '\x01' && (*(char *)(lVar14 + 0x80) != '\x04')))) {
          *(ushort *)(lVar14 + 0x81) = uVar4 | 6;
          *(undefined4 *)(lVar14 + 0x7c) = 3;
        }
        lVar14 = *(long *)(pSVar16 + 8);
        *(ushort *)(pSVar16 + 0x81) = *(ushort *)(pSVar16 + 0x81) | 0x40;
        while ((lVar14 != 0 && ((*(ushort *)(lVar14 + 0x81) >> 6 & 1) == 0))) {
          *(ushort *)(lVar14 + 0x81) = *(ushort *)(lVar14 + 0x81) | 0x40;
          lVar14 = *(long *)(lVar14 + 8);
        }
      }
      uVar11 = *(long *)(local_b0 + 8) - *(long *)local_b0 >> 4;
      if (local_a8 < uVar11 || local_a8 - uVar11 == 0) {
        if (local_a8 < uVar11) {
          *(ulong *)(local_b0 + 8) = *(long *)local_b0 + local_a8 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)local_b0,local_a8 - uVar11);
      }
      local_a0 = local_a8;
      *(undefined8 *)(local_c8 + 0x90) = uStack_c0;
      if (!bVar7) goto LAB_011782d4;
    }
  }
  bVar7 = false;
  do {
    bVar6 = false;
    while( true ) {
      this_00 = *(Scanner **)(this + 200);
      puVar13 = *(undefined4 **)(this_00 + 8);
      cVar2 = *(char *)(puVar13 + 0xe);
      if (cVar2 != '\x04') break;
      if (bVar6) {
        uVar11 = 4;
        goto LAB_011782cc;
      }
      Scanner::Next(this_00);
      bVar6 = true;
      bVar7 = true;
    }
    if (cVar2 == '\x02') {
      uVar11 = Scanner::Next(this_00);
      if (bVar6) {
        uVar11 = uVar11 & 0xffffffff;
LAB_011782cc:
        ReportUnexpectedToken(this,uVar11);
        uVar8 = 1;
        goto LAB_011782d4;
      }
      uVar8 = ParsePropertyOrPrivatePropertyName(this);
      if (((uVar8 & 7) == 3) && (uVar1 = param_2 & 0xf7, (uVar8 & 0xff0) == 0x80)) {
        param_2 = 0x22;
        if (uVar1 != 2) {
          param_2 = 0x42;
        }
      }
      else if ((param_2 & 0xf7) == 2) {
        param_2 = 0x12;
      }
      else {
        param_2 = 0x32;
      }
    }
    else if (cVar2 == '\x03') {
      Scanner::Next(this_00);
      PVar3 = this[0x100];
      this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
      uVar8 = ParseExpressionCoverGrammar(this);
      if ((uVar8 & 7) == 3) {
        uVar1 = param_2 & 0xf7;
        if ((uVar8 & 0xff0) == 0x80) {
          param_2 = 0x22;
          if (uVar1 != 2) {
            param_2 = 0x42;
          }
        }
        else {
          if (uVar1 == 2) goto LAB_01178220;
LAB_01178270:
          param_2 = 0x32;
        }
      }
      else {
        if ((param_2 & 0xf7) != 2) goto LAB_01178270;
LAB_01178220:
        param_2 = 0x12;
      }
      uVar8 = Scanner::Next(*(Scanner **)(this + 200));
      if ((uVar8 & 0xff) != 7) {
        ReportUnexpectedToken(this,uVar8);
      }
      this[0x100] = PVar3;
    }
    else if (cVar2 == '\x05') {
      local_c8 = (ParserBase<v8::internal::PreParser> *)((ulong)local_c8 & 0xffffffff00000000);
      ParseArguments(this,&local_c8,&local_e8,0);
      if ((param_2 & 0xff7) == 0x23) {
        pSVar16 = *(Scope **)this;
        *(undefined1 *)(*(long *)(this + 0x10) + 0x3b) = 1;
        *(ushort *)(pSVar16 + 0x81) = *(ushort *)(pSVar16 + 0x81) | 2;
        lVar14 = Scope::GetDeclarationScope(pSVar16);
        uVar4 = *(ushort *)(lVar14 + 0x81);
        *(ushort *)(lVar14 + 0x81) = uVar4 | 2;
        if ((((uVar4 & 1) == 0) && (*(char *)(lVar14 + 0x80) != '\x01')) &&
           (*(char *)(lVar14 + 0x80) != '\x04')) {
          *(ushort *)(lVar14 + 0x81) = uVar4 | 6;
          *(undefined4 *)(lVar14 + 0x7c) = 3;
        }
        lVar14 = *(long *)(pSVar16 + 8);
        *(ushort *)(pSVar16 + 0x81) = *(ushort *)(pSVar16 + 0x81) | 0x40;
        while ((lVar14 != 0 && ((*(ushort *)(lVar14 + 0x81) >> 6 & 1) == 0))) {
          *(ushort *)(lVar14 + 0x81) = *(ushort *)(lVar14 + 0x81) | 0x40;
          lVar14 = *(long *)(lVar14 + 8);
        }
        param_2 = 0x62;
      }
      else {
        param_2 = 0x52;
      }
    }
    else if (bVar6) {
      uVar9 = Scanner::Next(this_00);
      uVar11 = uVar9 & 0xffffffff;
      if (((byte)Token::token_flags[uVar9 & 0xff] >> 1 & 1) == 0) goto LAB_011782cc;
      uVar8 = param_2 & 0xf7;
      param_2 = 0x12;
      if (uVar8 != 2) {
        param_2 = 0x32;
      }
    }
    else {
      if (bVar7) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0x80),*puVar13,puVar13[1],0x17a,0);
        lVar14 = *(long *)(this + 200);
        lVar15 = *(long *)(lVar14 + 0x18);
        uVar8 = 1;
        if (*(char *)(lVar15 + 0x30) == '\0') {
          *(undefined4 *)(lVar14 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar15 + 0x30) = 1;
          *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
          *(undefined1 *)(lVar14 + 0x60) = 0x6d;
          *(undefined1 *)(lVar14 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar14 + 0x100) = 0x6d;
        }
        goto LAB_011782d4;
      }
      param_2 = ParseTemplateLiteral(this,param_2,**(undefined4 **)this_00,1);
    }
  } while (*(byte *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) < 6);
  uVar8 = 2;
  if (!bVar7) {
    uVar8 = param_2;
  }
LAB_011782d4:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

