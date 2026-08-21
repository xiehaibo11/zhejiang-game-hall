
/* v8::internal::ParserBase<v8::internal::Parser>::ParseStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*, v8::internal::ZoneList<v8::internal::AstRawString const*>*,
   v8::internal::AllowLabelledFunctionStatement) */

undefined8 * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseStatement
          (ParserBase<v8::internal::Parser> *this,ZoneList *param_1,ZoneList *param_2,
          undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  Scanner *pSVar9;
  Zone *pZVar10;
  Block *pBVar11;
  AstRawString *pAVar12;
  long lVar13;
  PendingCompilationErrorHandler *pPVar14;
  undefined8 *puVar15;
  ParserBase<v8::internal::Parser> *pPVar16;
  long lVar17;
  undefined8 uVar18;
  Block *pBVar19;
  Scope *pSVar20;
  int iVar21;
  undefined1 uVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  long *plVar25;
  Scanner *pSVar26;
  long *plVar27;
  int *piVar28;
  ulong uVar29;
  Block *pBVar30;
  undefined8 uVar31;
  long lVar32;
  long *plVar33;
  Scope *pSVar34;
  undefined8 uVar35;
  undefined8 local_118;
  undefined8 *puStack_110;
  undefined8 local_108;
  ParserBase<v8::internal::Parser> *local_100;
  ulong uStack_f8;
  ulong local_f0;
  ParserBase<v8::internal::Parser> *local_e8;
  long lStack_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  ParserBase<v8::internal::Parser> *local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  Scope *local_70;
  
  pSVar9 = *(Scanner **)(this + 0xf8);
  puVar24 = *(undefined4 **)(pSVar9 + 8);
  switch(*(undefined1 *)(puVar24 + 0xe)) {
  case 8:
    puVar15 = (undefined8 *)ParseBlock(this,param_1);
    return puVar15;
  default:
switchD_011687e8_caseD_9:
    puVar15 = (undefined8 *)ParseExpressionOrLabelledStatement(this,param_1,param_2,param_4);
    return puVar15;
  case 0xc:
    Scanner::Next(pSVar9);
    puVar15 = *(undefined8 **)(this + 0x78);
    break;
  case 0x3f:
    puVar15 = (undefined8 *)ParseBreakStatement(this,param_1);
    return puVar15;
  case 0x42:
    puVar15 = (undefined8 *)ParseContinueStatement(this);
    return puVar15;
  case 0x43:
    uVar1 = *puVar24;
    Scanner::Next(pSVar9);
    ExpectSemicolon(this);
    pZVar10 = *(Zone **)(this + 0x68);
    puVar15 = *(undefined8 **)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)puVar15) < 8) {
      puVar15 = (undefined8 *)Zone::NewExpand(pZVar10,8);
    }
    else {
      *(undefined8 **)(pZVar10 + 0x10) = puVar15 + 1;
    }
    *(undefined4 *)puVar15 = uVar1;
    *(undefined4 *)((long)puVar15 + 4) = 0x13;
    break;
  case 0x45:
    puVar15 = (undefined8 *)ParseDoWhileStatement(this,param_1,param_2);
    return puVar15;
  case 0x48:
    lVar13 = Scope::AsDeclarationScope();
    if (((*(byte *)(lVar13 + 0x85) - 10 < 5) ||
        ((this[0x135] != (ParserBase<v8::internal::Parser>)0x0 &&
         (lVar13 = Scope::AsDeclarationScope(), *(byte *)(lVar13 + 0x85) - 1 < 2)))) &&
       (cVar7 = Scanner::PeekAhead(*(Scanner **)(this + 0xf8)), cVar7 == '`')) {
      puVar15 = (undefined8 *)ParseForAwaitStatement(this,param_1,param_2);
      return puVar15;
    }
    puVar15 = (undefined8 *)ParseForStatement(this,param_1,param_2);
    return puVar15;
  case 0x49:
    uVar1 = *puVar24;
    uVar2 = puVar24[1];
    pPVar14 = *(PendingCompilationErrorHandler **)(this + 0xb0);
    uVar23 = 0x125;
    if ((*(ushort *)(*(long *)this + 0x81) & 1) != 0) {
      uVar23 = 0x129;
    }
    goto LAB_01168be0;
  case 0x4a:
    puVar15 = (undefined8 *)ParseIfStatement(this,param_1);
    return puVar15;
  case 0x4c:
    puVar15 = (undefined8 *)ParseReturnStatement(this);
    return puVar15;
  case 0x4d:
    puVar15 = (undefined8 *)ParseSwitchStatement(this,param_1);
    return puVar15;
  case 0x4e:
    puVar15 = (undefined8 *)ParseThrowStatement(this);
    return puVar15;
  case 0x4f:
    if (param_1 != (ZoneList *)0x0) {
      pPVar16 = this + 200;
      uStack_f8 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
      pZVar10 = *(Zone **)(this + 0x68);
      puVar15 = *(undefined8 **)(pZVar10 + 0x10);
      local_100 = pPVar16;
      local_f0 = uStack_f8;
      if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)puVar15) < 0x28) {
        puVar15 = (undefined8 *)Zone::NewExpand(pZVar10,0x28);
      }
      else {
        *(undefined8 **)(pZVar10 + 0x10) = puVar15 + 5;
      }
      local_118 = this + 0x300;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[4] = param_1;
      *puVar15 = 0x147ffffffff;
      puVar15[1] = 0;
      local_108 = *(undefined8 *)(this + 0x300);
      *(undefined8 **)(this + 0x300) = &local_118;
      puStack_110 = puVar15;
      Scanner::Next(*(Scanner **)(this + 0xf8));
      iVar3 = *(int *)**(undefined8 **)(this + 0xf8);
      pBVar11 = (Block *)ParseBlock(this,(ZoneList *)0x0);
      local_78 = 0;
      local_70 = (Scope *)0x0;
      local_80 = 0;
      pSVar9 = *(Scanner **)(this + 0xf8);
      cVar7 = *(char *)(*(undefined4 **)(pSVar9 + 8) + 0xe);
      if ((cVar7 != 'A') && (cVar7 != 'G')) {
        ReportMessage(this,0x117);
        local_e8 = (ParserBase<v8::internal::Parser> *)0x0;
        goto LAB_01169568;
      }
      local_b0 = 0xffffffffffffffff;
      local_a8 = **(undefined4 **)(pSVar9 + 8);
      local_a4 = 0xffffffff;
      if (cVar7 == 'A') {
        Scanner::Next(pSVar9);
        if (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) == '\x05') {
          Scanner::Next(*(Scanner **)(this + 0xf8));
          pZVar10 = *(Zone **)(this + 0xb8);
          uVar31 = *(undefined8 *)this;
          pSVar34 = *(Scope **)(pZVar10 + 0x10);
          if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pSVar34) < 0x88) {
            pSVar34 = (Scope *)Zone::NewExpand(pZVar10,0x88);
          }
          else {
            *(Scope **)(pZVar10 + 0x10) = pSVar34 + 0x88;
          }
          Scope::Scope(pSVar34,*(undefined8 *)(this + 0xb8),uVar31,5);
          *(undefined4 *)(pSVar34 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 0xf8);
          uVar31 = *(undefined8 *)this;
          *(Scope **)this = pSVar34;
          local_98 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
          pZVar10 = *(Zone **)(this + 0xb8);
          pSVar20 = *(Scope **)(pZVar10 + 0x10);
          local_a0 = pPVar16;
          local_90 = local_98;
          local_70 = pSVar34;
          if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pSVar20) < 0x88) {
            pSVar20 = (Scope *)Zone::NewExpand(pZVar10,0x88);
          }
          else {
            *(Scope **)(pZVar10 + 0x10) = pSVar20 + 0x88;
          }
          Scope::Scope(pSVar20,pZVar10,*(undefined8 *)this,6);
          uVar35 = *(undefined8 *)this;
          *(Scope **)this = pSVar20;
          *(undefined4 *)(pSVar20 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 0xf8);
          if (*(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) - 0x5c < 10) {
            pAVar12 = (AstRawString *)ParseNonRestrictedIdentifier(this);
            if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0') {
              lVar13 = Scope::DeclareCatchVariableName(pSVar34,pAVar12);
              lVar32 = 0;
              local_78 = lVar13;
LAB_01169178:
              uVar8 = Scanner::Next(*(Scanner **)(this + 0xf8));
              if ((uVar8 & 0xff) != 6) {
                ReportUnexpectedToken(this,uVar8);
              }
              pPVar16 = (ParserBase<v8::internal::Parser> *)ParseBlock(this,(ZoneList *)0x0);
              local_e8 = pPVar16;
              if (*(undefined8 **)(local_a0 + 8) < *(undefined8 **)(local_a0 + 0x10)) {
                **(undefined8 **)(local_a0 + 8) = pPVar16;
                *(long *)(local_a0 + 8) = *(long *)(local_a0 + 8) + 8;
              }
              else {
                std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::
                __push_back_slow_path<void*>
                          ((vector<void*,std::__ndk1::allocator<void*>> *)local_a0,&local_e8);
              }
              local_90 = local_90 + 1;
              lVar17 = Scope::GetDeclarationScope(*(Scope **)this);
              if (((*(byte *)(lVar17 + 0x84) >> 2 & 1) == 0) &&
                 (pSVar34 = *(Scope **)(pPVar16 + 0x18), pSVar34 != (Scope *)0x0)) {
                if (lVar32 == 0) {
                  pAVar12 = *(AstRawString **)(lVar13 + 8);
                  lVar13 = VariableMap::Lookup((VariableMap *)(pSVar34 + 0x20),pAVar12);
                  if (lVar13 == 0) goto LAB_0116940c;
                }
                else {
                  pAVar12 = (AstRawString *)
                            Scope::FindVariableDeclaredIn(pSVar34,*(undefined8 *)this,2);
                }
                if (pAVar12 != (AstRawString *)0x0) {
                  pSVar20 = pSVar34 + 0x58;
                  while (pSVar20 != *(Scope **)(pSVar34 + 0x60)) {
                    piVar28 = *(int **)pSVar20;
                    if (*(AstRawString **)(*(long *)(piVar28 + 2) + 8) == pAVar12) {
                      iVar4 = *piVar28;
                      if (iVar4 == -1) {
                        iVar21 = 0;
                      }
                      else {
                        iVar5 = *(int *)(pAVar12 + 0x10);
                        iVar21 = iVar5;
                        if (iVar5 < 0) {
                          iVar21 = iVar5 + 1;
                        }
                        iVar21 = iVar21 >> 1;
                        if (pAVar12[0x1c] != (AstRawString)0x0) {
                          iVar21 = iVar5;
                        }
                        iVar21 = iVar21 + iVar4;
                      }
                      PendingCompilationErrorHandler::ReportMessageAt
                                (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar4,iVar21,0xb0
                                 ,pAVar12);
                      lVar13 = *(long *)(this + 0x158);
                      if (*(char *)(lVar13 + 0x30) == '\0') {
                        *(undefined4 *)(this + 0x160) = 0xffffffff;
                        *(undefined1 *)(lVar13 + 0x30) = 1;
                        *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
                        this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
                        this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
                        this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
                      }
                      goto LAB_0116940c;
                    }
                    pSVar20 = (Scope *)(piVar28 + 4);
                  }
                  goto LAB_01169388;
                }
              }
LAB_0116940c:
              *(undefined4 *)(*(long *)this + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
              pZVar10 = *(Zone **)(this + 0x68);
              pBVar30 = *(Block **)(pZVar10 + 0x10);
              if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pBVar30) < 0x20) {
                pBVar30 = (Block *)Zone::NewExpand(pZVar10,0x20);
              }
              else {
                *(Block **)(pZVar10 + 0x10) = pBVar30 + 0x20;
              }
              *(undefined8 *)(pBVar30 + 0x10) = 0;
              *(undefined8 *)(pBVar30 + 0x18) = 0;
              *(undefined8 *)pBVar30 = 0x47ffffffff;
              *(undefined8 *)(pBVar30 + 8) = 0;
              ScopedList<v8::internal::Statement*,void*>::CopyTo
                        ((ScopedList<v8::internal::Statement*,void*> *)&local_a0,
                         (ZoneList *)(pBVar30 + 8),*(Zone **)(this + 0x68));
              uVar18 = Scope::FinalizeBlockScope(*(Scope **)this);
              bVar6 = false;
              *(undefined8 *)(pBVar30 + 0x18) = uVar18;
            }
            else {
              pBVar30 = (Block *)0x0;
              bVar6 = true;
            }
          }
          else {
            lVar13 = Scope::DeclareCatchVariableName
                               (pSVar34,*(AstRawString **)
                                         (*(long *)(*(long *)(this + 0x60) + 0x38) + 0x108));
            uVar18 = local_d8;
            plVar33 = *(long **)(*(long *)this + 0x60);
            lStack_e0 = *(long *)(this + 0xc0);
            if (lStack_e0 == 0) {
              local_d8._0_2_ = 5;
              uVar22 = 0;
            }
            else {
              local_d8._0_2_ = CONCAT11(*(undefined1 *)(lStack_e0 + 0x11),5);
              uVar22 = *(undefined1 *)(lStack_e0 + 0x12);
            }
            local_d8._0_3_ = CONCAT12(uVar22,(undefined2)local_d8);
            *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_e8;
            local_d8._4_4_ = SUB84(uVar18,4);
            local_d8._0_4_ = (uint)(uint3)local_d8;
            local_d0 = (void *)0x0;
            local_e8 = this;
            local_78 = lVar13;
            lVar32 = ParseBindingPattern(this);
            plVar27 = *(long **)(this + 0xf8);
            plVar25 = *(long **)(*(long *)this + 0x60);
            if (plVar33 != plVar25) {
              uVar1 = *(undefined4 *)(*plVar27 + 4);
              do {
                *(undefined4 *)(*(long *)(*plVar33 + 8) + 0x24) = uVar1;
                plVar33 = (long *)(*plVar33 + 0x10);
              } while (plVar33 != plVar25);
              plVar27 = *(long **)(this + 0xf8);
            }
            local_80 = lVar32;
            if (*(char *)(plVar27[3] + 0x30) == '\0') {
              local_88 = (void *)Parser::RewriteCatchPattern((Parser *)this,(CatchInfo *)&local_80);
              if (*(undefined8 **)(local_a0 + 8) < *(undefined8 **)(local_a0 + 0x10)) {
                **(undefined8 **)(local_a0 + 8) = local_88;
                *(long *)(local_a0 + 8) = *(long *)(local_a0 + 8) + 8;
              }
              else {
                std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::
                __push_back_slow_path<void*>
                          ((vector<void*,std::__ndk1::allocator<void*>> *)local_a0,
                           (void **)&local_88);
              }
              local_90 = local_90 + 1;
              *(long *)(local_e8 + 0xc0) = lStack_e0;
              goto LAB_01169178;
            }
            pBVar30 = (Block *)0x0;
            bVar6 = true;
            *(long *)(local_e8 + 0xc0) = lStack_e0;
          }
          *(undefined8 *)this = uVar35;
          uVar29 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 3;
          if (local_98 < uVar29 || local_98 - uVar29 == 0) {
            if (local_98 < uVar29) {
              *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 8;
            }
            *(undefined8 *)this = uVar31;
          }
          else {
            std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                      ((vector<void*,std::__ndk1::allocator<void*>> *)local_a0,local_98 - uVar29);
            *(undefined8 *)this = uVar31;
          }
          if (bVar6) {
            local_e8 = (ParserBase<v8::internal::Parser> *)0x0;
            local_a4 = *(undefined4 *)(*(long *)pSVar9 + 4);
            goto LAB_01169568;
          }
          *(undefined4 *)(local_70 + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
        }
        else {
          pBVar30 = (Block *)ParseBlock(this,(ZoneList *)0x0);
        }
      }
      else {
        pBVar30 = (Block *)0x0;
      }
      local_a4 = *(undefined4 *)(*(long *)pSVar9 + 4);
      pSVar9 = *(Scanner **)(this + 0xf8);
      local_b0 = CONCAT44(local_b0._4_4_,**(undefined4 **)(pSVar9 + 8));
      if (*(char *)(*(undefined4 **)(pSVar9 + 8) + 0xe) == 'G') {
        Scanner::Next(pSVar9);
        pBVar19 = (Block *)ParseBlock(this,(ZoneList *)0x0);
        pSVar26 = *(Scanner **)(this + 0xf8);
      }
      else {
        pBVar19 = (Block *)0x0;
        pSVar26 = pSVar9;
      }
      local_b0 = CONCAT44(*(undefined4 *)(*(long *)pSVar9 + 4),(undefined4)local_b0);
      if (*(char *)(*(long *)(pSVar26 + 0x18) + 0x30) == '\0') {
        local_e8 = (ParserBase<v8::internal::Parser> *)
                   Parser::RewriteTryStatement
                             ((Parser *)this,pBVar11,pBVar30,(SourceRange *)&local_a8,pBVar19,
                              (SourceRange *)&local_b0,(CatchInfo *)&local_80,iVar3);
      }
      else {
        local_e8 = (ParserBase<v8::internal::Parser> *)0x0;
      }
LAB_01169568:
      if (*(undefined8 **)(local_100 + 8) < *(undefined8 **)(local_100 + 0x10)) {
        **(undefined8 **)(local_100 + 8) = local_e8;
        *(long *)(local_100 + 8) = *(long *)(local_100 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_100,&local_e8);
      }
      local_f0 = local_f0 + 1;
      ScopedList<v8::internal::Statement*,void*>::CopyTo
                ((ScopedList<v8::internal::Statement*,void*> *)&local_100,(ZoneList *)(puVar15 + 1),
                 *(Zone **)(this + 0xb8));
      *(undefined8 *)local_118 = local_108;
      uVar29 = *(long *)(local_100 + 8) - *(long *)local_100 >> 3;
      if (uVar29 <= uStack_f8 && uStack_f8 - uVar29 != 0) {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_100,uStack_f8 - uVar29);
        return puVar15;
      }
      if (uVar29 <= uStack_f8) {
        return puVar15;
      }
      *(ulong *)(local_100 + 8) = *(long *)local_100 + uStack_f8 * 8;
      return puVar15;
    }
    Scanner::Next(pSVar9);
    iVar3 = *(int *)**(undefined8 **)(this + 0xf8);
    pBVar11 = (Block *)ParseBlock(this,(ZoneList *)0x0);
    local_78 = 0;
    local_70 = (Scope *)0x0;
    local_80 = 0;
    pSVar9 = *(Scanner **)(this + 0xf8);
    cVar7 = *(char *)(*(undefined4 **)(pSVar9 + 8) + 0xe);
    if ((cVar7 != 'A') && (cVar7 != 'G')) {
      ReportMessage(this,0x117);
      return (undefined8 *)0x0;
    }
    local_88 = (void *)0xffffffffffffffff;
    local_118 = (ParserBase<v8::internal::Parser> *)
                CONCAT44(0xffffffff,**(undefined4 **)(pSVar9 + 8));
    if (cVar7 != 'A') {
      pBVar30 = (Block *)0x0;
      goto LAB_01169708;
    }
    Scanner::Next(pSVar9);
    if (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) != '\x05') {
      pBVar30 = (Block *)ParseBlock(this,(ZoneList *)0x0);
      goto LAB_01169708;
    }
    Scanner::Next(*(Scanner **)(this + 0xf8));
    pZVar10 = *(Zone **)(this + 0xb8);
    uVar31 = *(undefined8 *)this;
    pSVar34 = *(Scope **)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pSVar34) < 0x88) {
      pSVar34 = (Scope *)Zone::NewExpand(pZVar10,0x88);
    }
    else {
      *(Scope **)(pZVar10 + 0x10) = pSVar34 + 0x88;
    }
    Scope::Scope(pSVar34,*(undefined8 *)(this + 0xb8),uVar31,5);
    local_a0 = this + 200;
    *(undefined4 *)(pSVar34 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 0xf8);
    uVar31 = *(undefined8 *)this;
    *(Scope **)this = pSVar34;
    local_98 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
    pZVar10 = *(Zone **)(this + 0xb8);
    pSVar20 = *(Scope **)(pZVar10 + 0x10);
    local_90 = local_98;
    local_70 = pSVar34;
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pSVar20) < 0x88) {
      pSVar20 = (Scope *)Zone::NewExpand(pZVar10,0x88);
    }
    else {
      *(Scope **)(pZVar10 + 0x10) = pSVar20 + 0x88;
    }
    Scope::Scope(pSVar20,pZVar10,*(undefined8 *)this,6);
    uVar35 = *(undefined8 *)this;
    *(Scope **)this = pSVar20;
    *(undefined4 *)(pSVar20 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 0xf8);
    if (*(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) - 0x5c < 10) {
      pAVar12 = (AstRawString *)ParseNonRestrictedIdentifier(this);
      if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0') {
        lVar13 = Scope::DeclareCatchVariableName(pSVar34,pAVar12);
        lVar32 = 0;
        local_78 = lVar13;
LAB_0116922c:
        uVar8 = Scanner::Next(*(Scanner **)(this + 0xf8));
        if ((uVar8 & 0xff) != 6) {
          ReportUnexpectedToken(this,uVar8);
        }
        pPVar16 = (ParserBase<v8::internal::Parser> *)ParseBlock(this,(ZoneList *)0x0);
        local_e8 = pPVar16;
        if (*(undefined8 **)(local_a0 + 8) < *(undefined8 **)(local_a0 + 0x10)) {
          **(undefined8 **)(local_a0 + 8) = pPVar16;
          *(long *)(local_a0 + 8) = *(long *)(local_a0 + 8) + 8;
        }
        else {
          std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                    ((vector<void*,std::__ndk1::allocator<void*>> *)local_a0,&local_e8);
        }
        local_90 = local_90 + 1;
        lVar17 = Scope::GetDeclarationScope(*(Scope **)this);
        if (((*(byte *)(lVar17 + 0x84) >> 2 & 1) == 0) &&
           (pSVar34 = *(Scope **)(pPVar16 + 0x18), pSVar34 != (Scope *)0x0)) {
          if (lVar32 == 0) {
            pAVar12 = *(AstRawString **)(lVar13 + 8);
            lVar13 = VariableMap::Lookup((VariableMap *)(pSVar34 + 0x20),pAVar12);
            if (lVar13 == 0) goto LAB_0116963c;
          }
          else {
            pAVar12 = (AstRawString *)Scope::FindVariableDeclaredIn(pSVar34,*(undefined8 *)this,2);
          }
          if (pAVar12 != (AstRawString *)0x0) {
            pSVar20 = pSVar34 + 0x58;
            while (pSVar20 != *(Scope **)(pSVar34 + 0x60)) {
              piVar28 = *(int **)pSVar20;
              if (*(AstRawString **)(*(long *)(piVar28 + 2) + 8) == pAVar12) {
                iVar4 = *piVar28;
                if (iVar4 == -1) {
                  iVar21 = 0;
                }
                else {
                  iVar5 = *(int *)(pAVar12 + 0x10);
                  iVar21 = iVar5;
                  if (iVar5 < 0) {
                    iVar21 = iVar5 + 1;
                  }
                  iVar21 = iVar21 >> 1;
                  if (pAVar12[0x1c] != (AstRawString)0x0) {
                    iVar21 = iVar5;
                  }
                  iVar21 = iVar21 + iVar4;
                }
                PendingCompilationErrorHandler::ReportMessageAt
                          (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar4,iVar21,0xb0,
                           pAVar12);
                lVar13 = *(long *)(this + 0x158);
                if (*(char *)(lVar13 + 0x30) == '\0') {
                  *(undefined4 *)(this + 0x160) = 0xffffffff;
                  *(undefined1 *)(lVar13 + 0x30) = 1;
                  *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
                  this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
                  this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
                  this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
                }
                goto LAB_0116963c;
              }
              pSVar20 = (Scope *)(piVar28 + 4);
            }
LAB_01169388:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
        }
LAB_0116963c:
        *(undefined4 *)(*(long *)this + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
        pZVar10 = *(Zone **)(this + 0x68);
        pBVar30 = *(Block **)(pZVar10 + 0x10);
        if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pBVar30) < 0x20) {
          pBVar30 = (Block *)Zone::NewExpand(pZVar10,0x20);
        }
        else {
          *(Block **)(pZVar10 + 0x10) = pBVar30 + 0x20;
        }
        *(undefined8 *)(pBVar30 + 0x10) = 0;
        *(undefined8 *)(pBVar30 + 0x18) = 0;
        *(undefined8 *)pBVar30 = 0x47ffffffff;
        *(undefined8 *)(pBVar30 + 8) = 0;
        ScopedList<v8::internal::Statement*,void*>::CopyTo
                  ((ScopedList<v8::internal::Statement*,void*> *)&local_a0,(ZoneList *)(pBVar30 + 8)
                   ,*(Zone **)(this + 0x68));
        uVar18 = Scope::FinalizeBlockScope(*(Scope **)this);
        bVar6 = false;
        *(undefined8 *)(pBVar30 + 0x18) = uVar18;
      }
      else {
        pBVar30 = (Block *)0x0;
        bVar6 = true;
      }
    }
    else {
      lVar13 = Scope::DeclareCatchVariableName
                         (pSVar34,*(AstRawString **)
                                   (*(long *)(*(long *)(this + 0x60) + 0x38) + 0x108));
      uVar18 = local_d8;
      plVar33 = *(long **)(*(long *)this + 0x60);
      lStack_e0 = *(long *)(this + 0xc0);
      if (lStack_e0 == 0) {
        local_d8._0_2_ = 5;
        uVar22 = 0;
      }
      else {
        local_d8._0_2_ = CONCAT11(*(undefined1 *)(lStack_e0 + 0x11),5);
        uVar22 = *(undefined1 *)(lStack_e0 + 0x12);
      }
      local_d8._0_3_ = CONCAT12(uVar22,(undefined2)local_d8);
      *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_e8;
      local_d8._4_4_ = SUB84(uVar18,4);
      local_d8._0_4_ = (uint)(uint3)local_d8;
      local_d0 = (void *)0x0;
      local_e8 = this;
      local_78 = lVar13;
      lVar32 = ParseBindingPattern(this);
      plVar27 = *(long **)(this + 0xf8);
      plVar25 = *(long **)(*(long *)this + 0x60);
      if (plVar33 != plVar25) {
        uVar1 = *(undefined4 *)(*plVar27 + 4);
        do {
          *(undefined4 *)(*(long *)(*plVar33 + 8) + 0x24) = uVar1;
          plVar33 = (long *)(*plVar33 + 0x10);
        } while (plVar33 != plVar25);
        plVar27 = *(long **)(this + 0xf8);
      }
      local_80 = lVar32;
      if (*(char *)(plVar27[3] + 0x30) == '\0') {
        local_100 = (ParserBase<v8::internal::Parser> *)
                    Parser::RewriteCatchPattern((Parser *)this,(CatchInfo *)&local_80);
        if (*(long **)(local_a0 + 8) < *(long **)(local_a0 + 0x10)) {
          **(long **)(local_a0 + 8) = (long)local_100;
          *(long *)(local_a0 + 8) = *(long *)(local_a0 + 8) + 8;
        }
        else {
          std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                    ((vector<void*,std::__ndk1::allocator<void*>> *)local_a0,&local_100);
        }
        local_90 = local_90 + 1;
        *(long *)(local_e8 + 0xc0) = lStack_e0;
        goto LAB_0116922c;
      }
      pBVar30 = (Block *)0x0;
      bVar6 = true;
      *(long *)(local_e8 + 0xc0) = lStack_e0;
    }
    *(undefined8 *)this = uVar35;
    uVar29 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 3;
    if (local_98 < uVar29 || local_98 - uVar29 == 0) {
      if (local_98 < uVar29) {
        *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 8;
      }
      *(undefined8 *)this = uVar31;
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                ((vector<void*,std::__ndk1::allocator<void*>> *)local_a0,local_98 - uVar29);
      *(undefined8 *)this = uVar31;
    }
    if (bVar6) {
      return (undefined8 *)0x0;
    }
    *(undefined4 *)(local_70 + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
LAB_01169708:
    local_118 = (ParserBase<v8::internal::Parser> *)
                CONCAT44(*(undefined4 *)(*(long *)pSVar9 + 4),(undefined4)local_118);
    pSVar9 = *(Scanner **)(this + 0xf8);
    local_88 = (void *)CONCAT44(local_88._4_4_,**(undefined4 **)(pSVar9 + 8));
    if (*(char *)(*(undefined4 **)(pSVar9 + 8) + 0xe) == 'G') {
      Scanner::Next(pSVar9);
      pBVar19 = (Block *)ParseBlock(this,(ZoneList *)0x0);
      pSVar26 = *(Scanner **)(this + 0xf8);
    }
    else {
      pBVar19 = (Block *)0x0;
      pSVar26 = pSVar9;
    }
    local_88 = (void *)CONCAT44(*(undefined4 *)(*(long *)pSVar9 + 4),(undefined4)local_88);
    if (*(char *)(*(long *)(pSVar26 + 0x18) + 0x30) == '\0') {
      puVar15 = (undefined8 *)
                Parser::RewriteTryStatement
                          ((Parser *)this,pBVar11,pBVar30,(SourceRange *)&local_118,pBVar19,
                           (SourceRange *)&local_88,(CatchInfo *)&local_80,iVar3);
      return puVar15;
    }
    return (undefined8 *)0x0;
  case 0x50:
    local_d0 = (void *)0x0;
    uStack_c8 = 0;
    local_d8 = (void *)0x0;
    uStack_b8 = 0xffffffff;
    local_c0 = 0xffffffff;
    ParseVariableDeclarations(this,1,&local_e8,0);
    ExpectSemicolon(this);
    puVar15 = (undefined8 *)
              Parser::BuildInitializationBlock((Parser *)this,(DeclarationParsingResult *)&local_e8)
    ;
    if (local_d8 != (void *)0x0) {
      local_d0 = local_d8;
      operator_delete(local_d8);
    }
    break;
  case 0x51:
    puVar15 = (undefined8 *)ParseWhileStatement(this,param_1,param_2);
    return puVar15;
  case 0x52:
    puVar15 = (undefined8 *)ParseWithStatement(this,param_1);
    return puVar15;
  case 0x5f:
    lVar13 = Scope::GetDeclarationScope(*(Scope **)this);
    if ((((*(byte *)(lVar13 + 0x84) >> 2 & 1) != 0) ||
        (pSVar9 = *(Scanner **)(this + 0xf8), Scanner::PeekAhead(pSVar9),
        *(char *)(*(long *)(pSVar9 + 0x10) + 0x4c) != '\0')) ||
       (cVar7 = Scanner::PeekAhead(*(Scanner **)(this + 0xf8)), cVar7 != 'I'))
    goto switchD_011687e8_caseD_9;
    pPVar14 = *(PendingCompilationErrorHandler **)(this + 0xb0);
    uVar23 = 0xef;
    uVar1 = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
    uVar2 = (*(undefined4 **)(*(long *)(this + 0xf8) + 8))[1];
LAB_01168be0:
    PendingCompilationErrorHandler::ReportMessageAt(pPVar14,uVar1,uVar2,uVar23,0);
    lVar13 = *(long *)(this + 0x158);
    puVar15 = (undefined8 *)0x0;
    if (*(char *)(lVar13 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      puVar15 = (undefined8 *)0x0;
      *(undefined1 *)(lVar13 + 0x30) = 1;
      *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
      this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
      this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    }
  }
  return puVar15;
}

