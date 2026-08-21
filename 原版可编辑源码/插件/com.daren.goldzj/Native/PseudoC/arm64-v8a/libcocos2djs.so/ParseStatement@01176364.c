
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*, v8::internal::ZoneList<v8::internal::AstRawString const*>*,
   v8::internal::AllowLabelledFunctionStatement) */

int __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseStatement
          (ParserBase<v8::internal::PreParser> *this,ZoneList *param_1,ZoneList *param_2,
          undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ParserBase<v8::internal::PreParser> PVar3;
  long lVar4;
  ParserBase<v8::internal::PreParser> *pPVar5;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  *pvVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  Zone *pZVar10;
  AstRawString *pAVar11;
  PendingCompilationErrorHandler *pPVar12;
  Scope *pSVar13;
  Scope *pSVar14;
  Scope *extraout_x1;
  Scope *extraout_x1_00;
  undefined4 uVar15;
  undefined4 *puVar16;
  long lVar17;
  long *plVar18;
  undefined1 uVar19;
  long lVar20;
  long *plVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  Scanner *pSVar25;
  long *plVar26;
  ParserBase<v8::internal::PreParser> *local_a8;
  long lStack_a0;
  undefined8 local_98;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  *local_90;
  ulong local_88;
  ulong local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pSVar25 = *(Scanner **)(this + 200);
  puVar16 = *(undefined4 **)(pSVar25 + 8);
  switch(*(undefined1 *)(puVar16 + 0xe)) {
  case 8:
    iVar8 = ParseBlock((ZoneList *)this);
    break;
  case 0xc:
    Scanner::Next(pSVar25);
    iVar8 = 2;
    break;
  case 0x3f:
    iVar8 = ParseBreakStatement((ZoneList *)this);
    break;
  case 0x42:
    iVar8 = ParseContinueStatement(this);
    break;
  case 0x43:
    Scanner::Next(pSVar25);
    ExpectSemicolon(this);
    iVar8 = 2;
    break;
  case 0x45:
    iVar8 = ParseDoWhileStatement((ZoneList *)this,param_1);
    break;
  case 0x48:
    lVar17 = Scope::AsDeclarationScope();
    if (((*(byte *)(lVar17 + 0x85) - 10 < 5) ||
        ((this[0x105] != (ParserBase<v8::internal::PreParser>)0x0 &&
         (lVar17 = Scope::AsDeclarationScope(), *(byte *)(lVar17 + 0x85) - 1 < 2)))) &&
       (cVar7 = Scanner::PeekAhead(*(Scanner **)(this + 200)), cVar7 == '`')) {
      iVar8 = ParseForAwaitStatement((ZoneList *)this,param_1);
    }
    else {
      iVar8 = ParseForStatement(this,param_1,param_2);
    }
    break;
  case 0x49:
    uVar1 = *puVar16;
    uVar2 = puVar16[1];
    pPVar12 = *(PendingCompilationErrorHandler **)(this + 0x80);
    uVar15 = 0x125;
    if ((*(ushort *)(*(long *)this + 0x81) & 1) != 0) {
      uVar15 = 0x129;
    }
LAB_01176658:
    PendingCompilationErrorHandler::ReportMessageAt(pPVar12,uVar1,uVar2,uVar15,0);
    lVar17 = *(long *)(this + 200);
    iVar8 = 0;
    lVar20 = *(long *)(lVar17 + 0x18);
    if (*(char *)(lVar20 + 0x30) == '\0') {
      *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
      iVar8 = 0;
      *(undefined1 *)(lVar20 + 0x30) = 1;
      *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
      *(undefined1 *)(lVar17 + 0x60) = 0x6d;
      *(undefined1 *)(lVar17 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar17 + 0x100) = 0x6d;
    }
    break;
  case 0x4a:
    iVar8 = ParseIfStatement(this,param_1);
    break;
  case 0x4c:
    iVar8 = ParseReturnStatement(this);
    break;
  case 0x4d:
    iVar8 = ParseSwitchStatement((ZoneList *)this);
    break;
  case 0x4e:
    Scanner::Next(pSVar25);
    pvVar6 = local_98;
    if (*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x4c) == '\0') {
      lStack_a0 = *(long *)(this + 0x90);
      if (lStack_a0 == 0) {
        uVar19 = 0;
        local_98._0_2_ = 0;
      }
      else {
        local_98._0_2_ = (ushort)*(byte *)(lStack_a0 + 0x11) << 8;
        uVar19 = *(undefined1 *)(lStack_a0 + 0x12);
      }
      local_98._3_5_ = SUB85(pvVar6,3);
      local_98._0_3_ = CONCAT12(uVar19,(short)local_98);
      local_90 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)(this + 0xb0);
      *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_a8;
      local_88 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
      local_60 = 0;
      if (lStack_a0 != 0) {
        if (*(byte *)(lStack_a0 + 0x10) < 3) {
          local_60 = *(undefined1 *)(lStack_a0 + 0x48);
        }
        else {
          local_60 = 0;
        }
      }
      uStack_78 = 0;
      uStack_68 = 0xffffffff;
      local_70 = 0xffffffff;
      PVar3 = this[0x100];
      this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
      local_a8 = this;
      local_80 = local_88;
      ParseExpressionCoverGrammar(this);
      pPVar5 = local_a8;
      if ((uint)local_70 <= local_70._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_a8 + 0x80),local_70 & 0xffffffff,
                   local_70._4_4_,uStack_78 & 0xffffffff,0);
        lVar17 = *(long *)(pPVar5 + 200);
        lVar20 = *(long *)(lVar17 + 0x18);
        if (*(char *)(lVar20 + 0x30) == '\0') {
          *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar20 + 0x30) = 1;
          *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
          *(undefined1 *)(lVar17 + 0x60) = 0x6d;
          *(undefined1 *)(lVar17 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar17 + 0x100) = 0x6d;
        }
      }
      this[0x100] = PVar3;
      uVar24 = *(long *)(local_90 + 8) - *(long *)local_90 >> 4;
      if (local_88 < uVar24 || local_88 - uVar24 == 0) {
        if (local_88 < uVar24) {
          *(ulong *)(local_90 + 8) = *(long *)local_90 + local_88 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append(local_90,local_88 - uVar24);
      }
      local_80 = local_88;
      *(long *)(local_a8 + 0x90) = lStack_a0;
      ExpectSemicolon(this);
      iVar8 = 3;
      break;
    }
    uVar23 = 0x116;
LAB_01176490:
    ReportMessage(this,uVar23);
    iVar8 = 0;
    break;
  case 0x4f:
    Scanner::Next(pSVar25);
    ParseBlock((ZoneList *)this);
    pSVar25 = *(Scanner **)(this + 200);
    cVar7 = *(char *)(*(long *)(pSVar25 + 8) + 0x38);
    if (param_1 == (ZoneList *)0x0) {
      if (cVar7 != 'A') {
        if (cVar7 != 'G') {
          uVar23 = 0x117;
          goto LAB_01176490;
        }
      }
      else {
        Scanner::Next(pSVar25);
        if (*(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) == '\x05') {
          Scanner::Next(*(Scanner **)(this + 200));
          pZVar10 = *(Zone **)(this + 0x88);
          uVar23 = *(undefined8 *)this;
          pSVar13 = *(Scope **)(pZVar10 + 0x10);
          if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pSVar13) < 0x88) {
            pSVar13 = (Scope *)Zone::NewExpand(pZVar10,0x88);
          }
          else {
            *(Scope **)(pZVar10 + 0x10) = pSVar13 + 0x88;
          }
          Scope::Scope(pSVar13,*(undefined8 *)(this + 0x88),uVar23,5);
          *(undefined4 *)(pSVar13 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 200);
          pZVar10 = *(Zone **)(this + 0x88);
          uVar23 = *(undefined8 *)this;
          *(Scope **)this = pSVar13;
          pSVar14 = *(Scope **)(pZVar10 + 0x10);
          if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pSVar14) < 0x88) {
            pSVar14 = (Scope *)Zone::NewExpand(pZVar10,0x88);
          }
          else {
            *(Scope **)(pZVar10 + 0x10) = pSVar14 + 0x88;
          }
          Scope::Scope(pSVar14,pZVar10,*(undefined8 *)this,6);
          *(Scope **)this = pSVar14;
          *(undefined4 *)(pSVar14 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 200);
          if (*(byte *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) - 0x5c < 10) {
            pAVar11 = (AstRawString *)ParseNonRestrictedIdentifier(this);
            if (*(char *)(*(long *)(*(long *)(this + 200) + 0x18) + 0x30) != '\0') {
LAB_01176b84:
              iVar8 = 0;
              *(undefined8 *)this = uVar23;
              break;
            }
            lVar17 = Scope::DeclareCatchVariableName(pSVar13,pAVar11);
            uVar24 = 0;
          }
          else {
            lVar17 = Scope::DeclareCatchVariableName
                               (pSVar13,*(AstRawString **)
                                         (*(long *)(*(long *)(this + 0x28) + 0x38) + 0x108));
            pvVar6 = local_98;
            plVar26 = *(long **)(*(long *)this + 0x60);
            lStack_a0 = *(long *)(this + 0x90);
            if (lStack_a0 == 0) {
              local_98._0_2_ = 5;
              uVar19 = 0;
            }
            else {
              local_98._0_2_ = CONCAT11(*(undefined1 *)(lStack_a0 + 0x11),5);
              uVar19 = *(undefined1 *)(lStack_a0 + 0x12);
            }
            local_98._0_3_ = CONCAT12(uVar19,(short)local_98);
            *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_a8;
            local_98._4_4_ = SUB84(pvVar6,4);
            local_98._0_4_ = (uint)(uint3)local_98;
            local_90 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                        *)0x0;
            local_a8 = this;
            uVar24 = ParseBindingPattern(this);
            plVar21 = *(long **)(this + 200);
            plVar18 = *(long **)(*(long *)this + 0x60);
            if (plVar26 != plVar18) {
              uVar1 = *(undefined4 *)(*plVar21 + 4);
              do {
                *(undefined4 *)(*(long *)(*plVar26 + 8) + 0x24) = uVar1;
                plVar26 = (long *)(*plVar26 + 0x10);
              } while (plVar26 != plVar18);
              plVar21 = *(long **)(this + 200);
            }
            cVar7 = *(char *)(plVar21[3] + 0x30);
            *(long *)(local_a8 + 0x90) = lStack_a0;
            if (cVar7 != '\0') goto LAB_01176b84;
          }
          uVar9 = Scanner::Next(*(Scanner **)(this + 200));
          if ((uVar9 & 0xff) != 6) {
            ReportUnexpectedToken(this,uVar9);
          }
          ParseBlock((ZoneList *)this);
          if (extraout_x1_00 != (Scope *)0x0) {
            if ((uVar24 & 7) == 0) {
              pAVar11 = *(AstRawString **)(lVar17 + 8);
              lVar17 = VariableMap::Lookup((VariableMap *)(extraout_x1_00 + 0x20),pAVar11);
              if (lVar17 == 0) goto LAB_01176d1c;
            }
            else {
              pAVar11 = (AstRawString *)
                        Scope::FindVariableDeclaredIn(extraout_x1_00,*(undefined8 *)this,2);
            }
            if (pAVar11 != (AstRawString *)0x0) {
              puVar22 = *(undefined1 **)(this + 0x80);
              *puVar22 = 1;
              puVar22[2] = 1;
              lVar17 = *(long *)(this + 200);
              lVar20 = *(long *)(lVar17 + 0x18);
              if (*(char *)(lVar20 + 0x30) == '\0') {
                *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
                *(undefined1 *)(lVar20 + 0x30) = 1;
                *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
                *(undefined1 *)(lVar17 + 0x60) = 0x6d;
                *(undefined1 *)(lVar17 + 0xb0) = 0x6d;
                *(undefined1 *)(lVar17 + 0x100) = 0x6d;
              }
            }
          }
LAB_01176d1c:
          *(undefined4 *)(*(long *)this + 0x74) = *(undefined4 *)(**(long **)(this + 200) + 4);
          Scope::FinalizeBlockScope(*(Scope **)this);
          *(undefined8 *)this = uVar23;
          *(undefined4 *)(pSVar13 + 0x74) = *(undefined4 *)(**(long **)(this + 200) + 4);
        }
        else {
          ParseBlock((ZoneList *)this);
        }
      }
      pSVar25 = *(Scanner **)(this + 200);
      if (*(char *)(*(long *)(pSVar25 + 8) + 0x38) == 'G') {
        Scanner::Next(pSVar25);
        ParseBlock((ZoneList *)this);
        pSVar25 = *(Scanner **)(this + 200);
      }
      iVar8 = (uint)(*(char *)(*(long *)(pSVar25 + 0x18) + 0x30) == '\0') << 1;
      break;
    }
    if (cVar7 != 'A') {
      if (cVar7 != 'G') {
        ReportMessage(this,0x117);
        iVar8 = 2;
        break;
      }
    }
    else {
      Scanner::Next(pSVar25);
      if (*(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) == '\x05') {
        Scanner::Next(*(Scanner **)(this + 200));
        pZVar10 = *(Zone **)(this + 0x88);
        uVar23 = *(undefined8 *)this;
        pSVar13 = *(Scope **)(pZVar10 + 0x10);
        if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pSVar13) < 0x88) {
          pSVar13 = (Scope *)Zone::NewExpand(pZVar10,0x88);
        }
        else {
          *(Scope **)(pZVar10 + 0x10) = pSVar13 + 0x88;
        }
        Scope::Scope(pSVar13,*(undefined8 *)(this + 0x88),uVar23,5);
        *(undefined4 *)(pSVar13 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 200);
        pZVar10 = *(Zone **)(this + 0x88);
        uVar23 = *(undefined8 *)this;
        *(Scope **)this = pSVar13;
        pSVar14 = *(Scope **)(pZVar10 + 0x10);
        if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pSVar14) < 0x88) {
          pSVar14 = (Scope *)Zone::NewExpand(pZVar10,0x88);
        }
        else {
          *(Scope **)(pZVar10 + 0x10) = pSVar14 + 0x88;
        }
        Scope::Scope(pSVar14,pZVar10,*(undefined8 *)this,6);
        *(Scope **)this = pSVar14;
        *(undefined4 *)(pSVar14 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 200);
        if (*(byte *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) - 0x5c < 10) {
          pAVar11 = (AstRawString *)ParseNonRestrictedIdentifier(this);
          if (*(char *)(*(long *)(*(long *)(this + 200) + 0x18) + 0x30) != '\0') {
LAB_01176ab8:
            *(undefined8 *)this = uVar23;
            iVar8 = 2;
            break;
          }
          lVar17 = Scope::DeclareCatchVariableName(pSVar13,pAVar11);
          uVar24 = 0;
        }
        else {
          lVar17 = Scope::DeclareCatchVariableName
                             (pSVar13,*(AstRawString **)
                                       (*(long *)(*(long *)(this + 0x28) + 0x38) + 0x108));
          pvVar6 = local_98;
          plVar26 = *(long **)(*(long *)this + 0x60);
          lStack_a0 = *(long *)(this + 0x90);
          if (lStack_a0 == 0) {
            local_98._0_2_ = 5;
            uVar19 = 0;
          }
          else {
            local_98._0_2_ = CONCAT11(*(undefined1 *)(lStack_a0 + 0x11),5);
            uVar19 = *(undefined1 *)(lStack_a0 + 0x12);
          }
          local_98._0_3_ = CONCAT12(uVar19,(short)local_98);
          *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_a8;
          local_98._4_4_ = SUB84(pvVar6,4);
          local_98._0_4_ = (uint)(uint3)local_98;
          local_90 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                      *)0x0;
          local_a8 = this;
          uVar24 = ParseBindingPattern(this);
          plVar21 = *(long **)(this + 200);
          plVar18 = *(long **)(*(long *)this + 0x60);
          if (plVar26 != plVar18) {
            uVar1 = *(undefined4 *)(*plVar21 + 4);
            do {
              *(undefined4 *)(*(long *)(*plVar26 + 8) + 0x24) = uVar1;
              plVar26 = (long *)(*plVar26 + 0x10);
            } while (plVar26 != plVar18);
            plVar21 = *(long **)(this + 200);
          }
          cVar7 = *(char *)(plVar21[3] + 0x30);
          *(long *)(local_a8 + 0x90) = lStack_a0;
          if (cVar7 != '\0') goto LAB_01176ab8;
        }
        uVar9 = Scanner::Next(*(Scanner **)(this + 200));
        if ((uVar9 & 0xff) != 6) {
          ReportUnexpectedToken(this,uVar9);
        }
        ParseBlock((ZoneList *)this);
        if (extraout_x1 != (Scope *)0x0) {
          if ((uVar24 & 7) == 0) {
            pAVar11 = *(AstRawString **)(lVar17 + 8);
            lVar17 = VariableMap::Lookup((VariableMap *)(extraout_x1 + 0x20),pAVar11);
            if (lVar17 == 0) goto LAB_01176c38;
          }
          else {
            pAVar11 = (AstRawString *)
                      Scope::FindVariableDeclaredIn(extraout_x1,*(undefined8 *)this,2);
          }
          if (pAVar11 != (AstRawString *)0x0) {
            puVar22 = *(undefined1 **)(this + 0x80);
            *puVar22 = 1;
            puVar22[2] = 1;
            lVar17 = *(long *)(this + 200);
            lVar20 = *(long *)(lVar17 + 0x18);
            if (*(char *)(lVar20 + 0x30) == '\0') {
              *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
              *(undefined1 *)(lVar20 + 0x30) = 1;
              *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
              *(undefined1 *)(lVar17 + 0x60) = 0x6d;
              *(undefined1 *)(lVar17 + 0xb0) = 0x6d;
              *(undefined1 *)(lVar17 + 0x100) = 0x6d;
            }
          }
        }
LAB_01176c38:
        *(undefined4 *)(*(long *)this + 0x74) = *(undefined4 *)(**(long **)(this + 200) + 4);
        Scope::FinalizeBlockScope(*(Scope **)this);
        *(undefined8 *)this = uVar23;
        *(undefined4 *)(pSVar13 + 0x74) = *(undefined4 *)(**(long **)(this + 200) + 4);
      }
      else {
        ParseBlock((ZoneList *)this);
      }
    }
    if (*(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) == 'G') {
      Scanner::Next(*(Scanner **)(this + 200));
      ParseBlock((ZoneList *)this);
    }
    goto LAB_01176c8c;
  case 0x50:
    local_90 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)0x0;
    local_88 = 0;
    local_98 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)0x0;
    uStack_78 = 0xffffffff;
    local_80 = 0xffffffff;
    ParseVariableDeclarations(this,1,&local_a8,0);
    ExpectSemicolon(this);
    if (local_98 !=
        (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
         *)0x0) {
      local_90 = local_98;
      operator_delete(local_98);
    }
LAB_01176c8c:
    iVar8 = 2;
    break;
  case 0x51:
    iVar8 = ParseWhileStatement((ZoneList *)this,param_1);
    break;
  case 0x52:
    iVar8 = ParseWithStatement(this,param_1);
    break;
  case 0x5f:
    Scanner::PeekAhead(pSVar25);
    if ((*(char *)(*(long *)(pSVar25 + 0x10) + 0x4c) == '\0') &&
       (cVar7 = Scanner::PeekAhead(*(Scanner **)(this + 200)), cVar7 == 'I')) {
      pPVar12 = *(PendingCompilationErrorHandler **)(this + 0x80);
      uVar15 = 0xef;
      uVar1 = **(undefined4 **)(*(long *)(this + 200) + 8);
      uVar2 = (*(undefined4 **)(*(long *)(this + 200) + 8))[1];
      goto LAB_01176658;
    }
  default:
    iVar8 = ParseExpressionOrLabelledStatement(this,param_1,param_2,param_4);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}

