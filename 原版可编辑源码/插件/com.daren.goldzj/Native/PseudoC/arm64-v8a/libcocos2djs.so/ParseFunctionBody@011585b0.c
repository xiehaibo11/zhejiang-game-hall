
/* v8::internal::ParserBase<v8::internal::Parser>::ParseFunctionBody(v8::internal::ScopedList<v8::internal::Statement*,
   void*>*, v8::internal::AstRawString const*, int, v8::internal::ParserFormalParameters const&,
   v8::internal::FunctionKind, v8::internal::FunctionSyntaxKind,
   v8::internal::ParserBase<v8::internal::Parser>::FunctionBodyType) */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseFunctionBody
          (ParserBase<v8::internal::Parser> *this,undefined8 *param_1,AstRawString *param_2,
          undefined8 param_4_00,ParserFormalParameters *param_4,byte param_6,char param_7,
          int param_8)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  DeclarationScope *pDVar8;
  Expression *pEVar9;
  ulong uVar10;
  DeclarationScope *this_00;
  ParserBase<v8::internal::Parser> *pPVar11;
  Scope *pSVar12;
  Zone *pZVar13;
  vector<void*,std::__ndk1::allocator<void*>> *this_01;
  Block *pBVar14;
  BlockSourceRanges *pBVar15;
  int iVar16;
  bool bVar17;
  ushort uVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  Scope *pSVar22;
  uint uVar23;
  long lVar24;
  int *piVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  DeclarationScope *this_02;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_03;
  ParserBase<v8::internal::Parser> *local_e0;
  ulong local_d8;
  ulong local_d0;
  BlockSourceRanges *local_c8;
  ParserBase<v8::internal::Parser> *local_c0;
  long local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  ParserBase<v8::internal::Parser> *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar27 = *(undefined8 *)(this + 0xc0);
  *(undefined8 *)(this + 0xc0) = 0;
  if ((param_6 - 10 < 7) || (param_6 - 1 < 2)) {
    pDVar8 = (DeclarationScope *)Scope::AsDeclarationScope();
    DeclarationScope::DeclareGeneratorObjectVar
              (pDVar8,*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xe0));
  }
  this_02 = *(DeclarationScope **)param_4;
  bVar3 = param_6 - 10;
  pDVar8 = this_02;
  if (param_4[9] != (ParserFormalParameters)0x1) {
    if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) != '\0') goto LAB_01159338;
    local_c0 = (ParserBase<v8::internal::Parser> *)
               Parser::BuildParameterInitializationBlock((Parser *)this,param_4);
    if ((bVar3 < 5) && (1 < (byte)(param_6 - 0xd))) {
      local_c0 = (ParserBase<v8::internal::Parser> *)
                 Parser::BuildRejectPromiseOnException((Parser *)this,(Block *)local_c0);
    }
    this_01 = (vector<void*,std::__ndk1::allocator<void*>> *)*param_1;
    if (*(undefined8 **)(this_01 + 8) < *(undefined8 **)(this_01 + 0x10)) {
      **(undefined8 **)(this_01 + 8) = local_c0;
      *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                (this_01,&local_c0);
    }
    param_1[2] = param_1[2] + 1;
    if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) != '\0') goto LAB_01159338;
    pZVar13 = *(Zone **)(this + 0xb8);
    pDVar8 = *(DeclarationScope **)(pZVar13 + 0x10);
    if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pDVar8) < 0xe0) {
      pDVar8 = (DeclarationScope *)Zone::NewExpand(pZVar13,0xe0);
    }
    else {
      *(DeclarationScope **)(pZVar13 + 0x10) = pDVar8 + 0xe0;
    }
    DeclarationScope::DeclarationScope(pDVar8,*(undefined8 *)(this + 0xb8),*(undefined8 *)this,6,0);
    *(undefined4 *)(pDVar8 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  }
  local_e0 = this + 200;
  local_d8 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  lVar19 = *(long *)this;
  *(DeclarationScope **)this = pDVar8;
  local_d0 = local_d8;
  if (param_8 == 0) {
    local_b8 = *(long *)(this + 0xc0);
    local_b0 = 0;
    if (local_b8 == 0) {
      local_ae = 0;
      local_af = 0;
    }
    else {
      local_af = *(undefined1 *)(local_b8 + 0x11);
      local_ae = *(undefined1 *)(local_b8 + 0x12);
    }
    local_a8 = this + 0xe0;
    *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_c0;
    local_a0 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
    if (local_b8 == 0) {
      local_78 = 0;
    }
    else if (*(byte *)(local_b8 + 0x10) < 3) {
      local_78 = *(undefined1 *)(local_b8 + 0x48);
    }
    else {
      local_78 = 0;
    }
    local_90 = 0;
    uStack_80 = 0xffffffff;
    local_88 = 0xffffffff;
    local_c0 = this;
    local_98 = local_a0;
    pEVar9 = (Expression *)ParseAssignmentExpressionCoverGrammar(this);
    pPVar11 = local_c0;
    if ((uint)local_88 <= local_88._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_c0 + 0xb0),local_88 & 0xffffffff,
                 local_88._4_4_,local_90 & 0xffffffff,0);
      lVar24 = *(long *)(pPVar11 + 0x158);
      if (*(char *)(lVar24 + 0x30) == '\0') {
        *(undefined4 *)(pPVar11 + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar24 + 0x30) = 1;
        *(undefined8 *)(lVar24 + 0x10) = *(undefined8 *)(lVar24 + 0x18);
        pPVar11[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar11[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        pPVar11[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
    }
    uVar26 = *(long *)(local_a8 + 8) - *(long *)local_a8 >> 4;
    if (local_a0 < uVar26 || local_a0 - uVar26 == 0) {
      if (local_a0 < uVar26) {
        *(ulong *)(local_a8 + 8) = *(long *)local_a8 + local_a0 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                  *)local_a8,local_a0 - uVar26);
    }
    local_98 = local_a0;
    *(long *)(local_c0 + 0xc0) = local_b8;
    if (bVar3 < 5) {
      pZVar13 = *(Zone **)(this + 0x68);
      pBVar14 = *(Block **)(pZVar13 + 0x10);
      if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pBVar14) < 0x20) {
        pBVar14 = (Block *)Zone::NewExpand(pZVar13,0x20);
      }
      else {
        *(Block **)(pZVar13 + 0x10) = pBVar14 + 0x20;
      }
      pZVar13 = *(Zone **)(this + 0x68);
      *(undefined8 *)pBVar14 = 0x47ffffffff;
      lVar24 = *(long *)(pZVar13 + 0x10);
      if ((ulong)(*(long *)(pZVar13 + 0x18) - lVar24) < 8) {
        lVar24 = Zone::NewExpand(pZVar13,8);
      }
      else {
        *(long *)(pZVar13 + 0x10) = lVar24 + 8;
      }
      *(long *)(pBVar14 + 8) = lVar24;
      *(undefined8 *)(pBVar14 + 0x18) = 0;
      *(undefined8 *)(pBVar14 + 0x10) = 1;
      *(uint *)(pBVar14 + 4) = *(uint *)(pBVar14 + 4) | 0x80;
      Parser::RewriteAsyncFunctionBody((Parser *)this,(ScopedList *)&local_e0,pBVar14,pEVar9);
    }
    else {
      local_c0 = (ParserBase<v8::internal::Parser> *)
                 BuildReturnStatement(this,pEVar9,*(int *)pEVar9,-1);
      if (*(undefined8 **)(local_e0 + 8) < *(undefined8 **)(local_e0 + 0x10)) {
        **(undefined8 **)(local_e0 + 8) = local_c0;
        *(long *)(local_e0 + 8) = *(long *)(local_e0 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_e0,&local_c0);
      }
      local_d0 = local_d0 + 1;
    }
  }
  else {
    uVar23 = 0xd;
    if (param_7 == '\x04') {
      uVar23 = 0xe;
    }
    if ((byte)(param_6 - 0xd) < 2) {
      Parser::ParseAndRewriteAsyncGeneratorFunctionBody((Parser *)this);
    }
    else if ((byte)(param_6 - 0xd) < 4) {
      Parser::ParseAndRewriteGeneratorFunctionBody((Parser *)this);
    }
    else if (bVar3 < 5) {
      ParseAsyncFunctionBody(this,(Scope *)pDVar8,(ScopedList *)&local_e0);
    }
    else {
      lVar24 = *(long *)(this + 0xf8);
      puVar20 = *(ulong **)(lVar24 + 8);
      if ((char)puVar20[7] == 'Z') {
        do {
          uVar26 = *puVar20;
          if (*(char *)((long)puVar20 + 0x1c) == '\0') {
LAB_01158a0c:
            bVar5 = false;
            bVar17 = false;
          }
          else {
            iVar6 = *(int *)((long)puVar20 + 4) - (int)uVar26;
            if (iVar6 == 9) {
              if ((int)puVar20[3] != 7) goto LAB_01158a0c;
              iVar6 = strncmp("use asm",(char *)puVar20[1],7);
              bVar5 = iVar6 == 0;
              bVar17 = false;
            }
            else {
              if (((iVar6 != 0xc) || ((int)puVar20[3] != 10)) ||
                 (iVar6 = strncmp("use strict",(char *)puVar20[1],10), iVar6 != 0))
              goto LAB_01158a0c;
              bVar5 = false;
              bVar17 = true;
            }
          }
          pPVar11 = (ParserBase<v8::internal::Parser> *)ParseStatementListItem(this);
          if (pPVar11 == (ParserBase<v8::internal::Parser> *)0x0) goto LAB_01158b80;
          local_c0 = pPVar11;
          if (*(undefined8 **)(local_e0 + 8) < *(undefined8 **)(local_e0 + 0x10)) {
            **(undefined8 **)(local_e0 + 8) = pPVar11;
            *(long *)(local_e0 + 8) = *(long *)(local_e0 + 8) + 8;
          }
          else {
            std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                      ((vector<void*,std::__ndk1::allocator<void*>> *)local_e0,&local_c0);
          }
          local_d0 = local_d0 + 1;
          if ((((*(uint *)(pPVar11 + 4) & 0x3f) != 9) || (*(long *)(pPVar11 + 8) == 0)) ||
             ((*(uint *)(*(long *)(pPVar11 + 8) + 4) & 0x7bf) != 0x1a9)) break;
          if (bVar17) {
            *(int *)(this + 0x334) = *(int *)(this + 0x334) + 1;
            *(ushort *)(*(long *)this + 0x81) = *(ushort *)(*(long *)this + 0x81) | 1;
            uVar10 = Scope::HasSimpleParameters(*(Scope **)this);
            if ((uVar10 & 1) == 0) {
              PendingCompilationErrorHandler::ReportMessageAt
                        (*(PendingCompilationErrorHandler **)(this + 0xb0),uVar26 & 0xffffffff,
                         uVar26 >> 0x20,0xf3,"use strict");
              lVar24 = *(long *)(this + 0x158);
              if (*(char *)(lVar24 + 0x30) == '\0') {
                *(undefined4 *)(this + 0x160) = 0xffffffff;
                *(undefined1 *)(lVar24 + 0x30) = 1;
                *(undefined8 *)(lVar24 + 0x10) = *(undefined8 *)(lVar24 + 0x18);
                this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
                this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
                this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
              }
              goto LAB_01158b80;
            }
          }
          else if (bVar5) {
            *(int *)(this + 0x310) = *(int *)(this + 0x310) + 1;
            this_00 = (DeclarationScope *)Scope::AsDeclarationScope();
            DeclarationScope::set_is_asm_module(this_00);
            *(uint *)(*(long *)(this + 0x138) + 8) = *(uint *)(*(long *)(this + 0x138) + 8) | 0x8000
            ;
          }
          else {
            lVar21 = *(long *)this;
            uVar18 = *(ushort *)(lVar21 + 0x81);
            lVar24 = 0x20;
            if ((uVar18 & 1) != 0) {
              lVar24 = 0x24;
            }
            *(int *)(this + lVar24 + 0x310) = *(int *)(this + lVar24 + 0x310) + 1;
            *(ushort *)(lVar21 + 0x81) = *(ushort *)(lVar21 + 0x81) & 0xfffe | uVar18 & 1;
          }
          puVar20 = *(ulong **)(*(long *)(this + 0xf8) + 8);
        } while ((char)puVar20[7] == 'Z');
        lVar24 = *(long *)(this + 0xf8);
      }
      uVar28 = *(undefined8 *)(this + 0x300);
      *(undefined8 *)(this + 0x300) = 0;
      lVar24 = *(long *)(lVar24 + 8);
      while ((*(byte *)(lVar24 + 0x38) != uVar23 &&
             (pPVar11 = (ParserBase<v8::internal::Parser> *)ParseStatementListItem(this),
             pPVar11 != (ParserBase<v8::internal::Parser> *)0x0))) {
        if ((*(uint *)(pPVar11 + 4) & 0x3f) != 10) {
          local_c0 = pPVar11;
          if (*(undefined8 **)(local_e0 + 8) < *(undefined8 **)(local_e0 + 0x10)) {
            **(undefined8 **)(local_e0 + 8) = pPVar11;
            *(long *)(local_e0 + 8) = *(long *)(local_e0 + 8) + 8;
          }
          else {
            std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                      ((vector<void*,std::__ndk1::allocator<void*>> *)local_e0,&local_c0);
          }
          local_d0 = local_d0 + 1;
        }
        lVar24 = *(long *)(*(long *)(this + 0xf8) + 8);
      }
      *(undefined8 *)(this + 0x300) = uVar28;
LAB_01158b80:
      if ((byte)(param_6 - 5) < 2) {
        local_b8 = *(long *)(this + 0xc0);
        local_b0 = 0;
        if (local_b8 == 0) {
          local_ae = 0;
          local_af = 0;
        }
        else {
          local_af = *(undefined1 *)(local_b8 + 0x11);
          local_ae = *(undefined1 *)(local_b8 + 0x12);
        }
        local_a8 = this + 0xe0;
        *(ParserBase<v8::internal::Parser> ***)(this + 0xc0) = &local_c0;
        local_a0 = *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 4;
        local_78 = 0;
        if (local_b8 != 0) {
          if (*(byte *)(local_b8 + 0x10) < 3) {
            local_78 = *(undefined1 *)(local_b8 + 0x48);
          }
          else {
            local_78 = 0;
          }
        }
        local_90 = 0;
        uStack_80 = 0xffffffff;
        local_88 = 0xffffffff;
        local_c0 = this;
        local_98 = local_a0;
        pSVar22 = (Scope *)Scope::GetClosureScope(*(Scope **)this);
        pSVar12 = (Scope *)Scope::GetReceiverScope(pSVar22);
        lVar24 = *(long *)(pSVar12 + 0xb0);
        *(ushort *)(lVar24 + 0x28) = *(ushort *)(lVar24 + 0x28) | 0x800;
        if (pSVar22 == pSVar12) {
          lVar24 = *(long *)(this + 0xc0);
          do {
            if (*(byte *)(lVar24 + 0x10) - 1 < 2) {
              *(undefined1 *)(lVar24 + 0x59) = 1;
            }
            lVar24 = *(long *)(lVar24 + 8);
          } while (lVar24 != 0);
        }
        else {
          *(ushort *)(pSVar22 + 0x83) = *(ushort *)(pSVar22 + 0x83) | 0x800;
          *(ushort *)(lVar24 + 0x28) = *(ushort *)(lVar24 + 0x28) | 0x400;
        }
        *(uint *)(*(long *)(this + 0x80) + 4) = *(uint *)(*(long *)(this + 0x80) + 4) & 0xffffffbf;
        pZVar13 = *(Zone **)(this + 0x68);
        uVar28 = *(undefined8 *)(this + 0x80);
        local_c8 = *(BlockSourceRanges **)(pZVar13 + 0x10);
        if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)local_c8) < 0x18) {
          local_c8 = (BlockSourceRanges *)Zone::NewExpand(pZVar13,0x18);
        }
        else {
          *(BlockSourceRanges **)(pZVar13 + 0x10) = local_c8 + 0x18;
        }
        *(undefined8 *)(local_c8 + 8) = uVar28;
        *(undefined4 *)(local_c8 + 0x10) = 0xffffffff;
        *(undefined8 *)local_c8 = 0xfffffffff;
        if (*(undefined8 **)(local_e0 + 8) < *(undefined8 **)(local_e0 + 0x10)) {
          **(undefined8 **)(local_e0 + 8) = local_c8;
          *(long *)(local_e0 + 8) = *(long *)(local_e0 + 8) + 8;
        }
        else {
          std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                    ((vector<void*,std::__ndk1::allocator<void*>> *)local_e0,&local_c8);
        }
        pPVar11 = local_c0;
        local_d0 = local_d0 + 1;
        if ((uint)local_88 <= local_88._4_4_) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(local_c0 + 0xb0),local_88 & 0xffffffff,
                     local_88._4_4_,local_90 & 0xffffffff,0);
          lVar24 = *(long *)(pPVar11 + 0x158);
          if (*(char *)(lVar24 + 0x30) == '\0') {
            *(undefined4 *)(pPVar11 + 0x160) = 0xffffffff;
            *(undefined1 *)(lVar24 + 0x30) = 1;
            *(undefined8 *)(lVar24 + 0x10) = *(undefined8 *)(lVar24 + 0x18);
            pPVar11[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
            pPVar11[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
            pPVar11[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
          }
        }
        uVar26 = *(long *)(local_a8 + 8) - *(long *)local_a8 >> 4;
        if (local_a0 < uVar26 || local_a0 - uVar26 == 0) {
          if (local_a0 < uVar26) {
            *(ulong *)(local_a8 + 8) = *(long *)local_a8 + local_a0 * 0x10;
          }
        }
        else {
          std::__ndk1::
          vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
          ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                      *)local_a8,local_a0 - uVar26);
        }
        local_98 = local_a0;
        *(long *)(local_c0 + 0xc0) = local_b8;
      }
    }
    uVar7 = Scanner::Next(*(Scanner **)(this + 0xf8));
    if ((uVar7 & 0xff) != uVar23) {
      ReportUnexpectedToken(this,uVar7);
    }
  }
  *(long *)this = lVar19;
  *(undefined4 *)(lVar19 + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
  if ((*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0') &&
     (piVar25 = (int *)DeclarationScope::CheckConflictingVarDeclarations(pDVar8),
     piVar25 != (int *)0x0)) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),*piVar25,*piVar25 + 1,0xb0,
               *(undefined8 *)(*(long *)(piVar25 + 2) + 8));
    lVar19 = *(long *)(this + 0x158);
    if (*(char *)(lVar19 + 0x30) != '\0') goto LAB_01158de4;
    *(undefined4 *)(this + 0x160) = 0xffffffff;
    *(undefined1 *)(lVar19 + 0x30) = 1;
    *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)(lVar19 + 0x18);
    this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
    this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
    if (param_4[9] == (ParserFormalParameters)0x0) goto LAB_01158eac;
LAB_01158dec:
    uVar18 = *(ushort *)(this_02 + 0x81);
    if (((uVar18 & 1) == 0) &&
       ((this_02[0x80] != (DeclarationScope)0x1 || (*(long *)(this_02 + 8) != *(long *)(this + 8))))
       ) {
      DeclarationScope::HoistSloppyBlockFunctions(this_02,(AstNodeFactory *)(this + 0x68));
      uVar18 = *(ushort *)(this_02 + 0x81);
    }
    if ((uVar18 & 1) != 0) goto LAB_0115929c;
    bVar17 = 2 < (byte)(param_6 - 0x10) && (param_6 & 0xfe) != 0xc;
  }
  else {
LAB_01158de4:
    if (param_4[9] != (ParserFormalParameters)0x0) goto LAB_01158dec;
LAB_01158eac:
    uVar18 = *(ushort *)(pDVar8 + 0x81);
    lVar19 = 0x20;
    if ((uVar18 & 1) != 0) {
      lVar19 = 0x24;
    }
    *(int *)(this + lVar19 + 0x310) = *(int *)(this + lVar19 + 0x310) + 1;
    *(ushort *)(this_02 + 0x81) = *(ushort *)(this_02 + 0x81) & 0xfffe | uVar18 & 1;
    if ((((byte)*(Scope *)(pDVar8 + 0x81) & 1) == 0) &&
       ((*(Scope *)(pDVar8 + 0x80) != (Scope)0x1 || (*(long *)(pDVar8 + 8) != *(long *)(this + 8))))
       ) {
      DeclarationScope::HoistSloppyBlockFunctions(pDVar8,(AstNodeFactory *)(this + 0x68));
    }
    *(undefined4 *)(pDVar8 + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
    lVar19 = Scope::FinalizeBlockScope((Scope *)pDVar8);
    if (lVar19 != 0) {
      pZVar13 = *(Zone **)(this + 0x68);
      pBVar14 = *(Block **)(pZVar13 + 0x10);
      if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pBVar14) < 0x20) {
        pBVar14 = (Block *)Zone::NewExpand(pZVar13,0x20);
      }
      else {
        *(Block **)(pZVar13 + 0x10) = pBVar14 + 0x20;
      }
      *(undefined8 *)(pBVar14 + 0x10) = 0;
      *(undefined8 *)(pBVar14 + 0x18) = 0;
      *(undefined8 *)pBVar14 = 0xc7ffffffff;
      *(undefined8 *)(pBVar14 + 8) = 0;
      ScopedList<v8::internal::Statement*,void*>::CopyTo
                ((ScopedList<v8::internal::Statement*,void*> *)&local_e0,(ZoneList *)(pBVar14 + 8),
                 *(Zone **)(this + 0x68));
      uVar26 = *(long *)(local_e0 + 8) - *(long *)local_e0 >> 3;
      if (local_d8 < uVar26 || local_d8 - uVar26 == 0) {
        if (local_d8 < uVar26) {
          *(ulong *)(local_e0 + 8) = *(long *)local_e0 + local_d8 * 8;
        }
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_e0,local_d8 - uVar26);
      }
      local_d0 = local_d8;
      local_c0 = (ParserBase<v8::internal::Parser> *)pBVar14;
      if (*(undefined8 **)(local_e0 + 8) < *(undefined8 **)(local_e0 + 0x10)) {
        **(undefined8 **)(local_e0 + 8) = pBVar14;
        *(long *)(local_e0 + 8) = *(long *)(local_e0 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_e0,&local_c0);
      }
      local_d0 = local_d0 + 1;
      *(DeclarationScope **)(pBVar14 + 0x18) = pDVar8;
      this_03 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                  **)(this + 0x2f8);
      pSVar22 = *(Scope **)this;
      if (this_03 !=
          (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
           *)0x0) {
        pZVar13 = *(Zone **)(this + 0xb8);
        uVar1 = *(undefined4 *)(pSVar22 + 0x74);
        pBVar15 = *(BlockSourceRanges **)(pZVar13 + 0x10);
        if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pBVar15) < 0x10) {
          pBVar15 = (BlockSourceRanges *)Zone::NewExpand(pZVar13,0x10);
        }
        else {
          *(BlockSourceRanges **)(pZVar13 + 0x10) = pBVar15 + 0x10;
        }
        *(undefined4 *)(pBVar15 + 8) = uVar1;
        *(undefined ***)pBVar15 = &PTR__AstNodeSourceRanges_01cb5248;
        local_c8 = pBVar15;
        local_c0 = (ParserBase<v8::internal::Parser> *)pBVar14;
        std::__ndk1::
        __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
        ::__emplace_unique_impl<v8::internal::Block*&,v8::internal::BlockSourceRanges*&>
                  (this_03,(Block **)&local_c0,&local_c8);
        pSVar22 = *(Scope **)this;
      }
      lVar19 = Scope::GetDeclarationScope(pSVar22);
      if (((*(byte *)(lVar19 + 0x84) >> 2 & 1) == 0) &&
         (lVar19 = Scope::FindVariableDeclaredIn((Scope *)pDVar8,this_02,1), lVar19 != 0)) {
        pSVar22 = (Scope *)(pDVar8 + 0x58);
        while( true ) {
          if (pSVar22 == *(Scope **)(pDVar8 + 0x60)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          piVar25 = *(int **)pSVar22;
          if (*(long *)(*(long *)(piVar25 + 2) + 8) == lVar19) break;
          pSVar22 = (Scope *)(piVar25 + 4);
        }
        iVar6 = *piVar25;
        if (iVar6 == -1) {
          iVar16 = 0;
        }
        else {
          iVar2 = *(int *)(lVar19 + 0x10);
          iVar16 = iVar2;
          if (iVar2 < 0) {
            iVar16 = iVar2 + 1;
          }
          iVar16 = iVar16 >> 1;
          if (*(char *)(lVar19 + 0x1c) != '\0') {
            iVar16 = iVar2;
          }
          iVar16 = iVar16 + iVar6;
        }
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0xb0),iVar6,iVar16,0xb0);
        lVar19 = *(long *)(this + 0x158);
        if (*(char *)(lVar19 + 0x30) == '\0') {
          *(undefined4 *)(this + 0x160) = 0xffffffff;
          *(undefined1 *)(lVar19 + 0x30) = 1;
          *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)(lVar19 + 0x18);
          this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
          this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
        }
      }
      Parser::InsertShadowingVarBindingInitializers((Parser *)this,pBVar14);
    }
LAB_0115929c:
    bVar17 = false;
  }
  ValidateFormalParameters(this,*(ushort *)(*(long *)this + 0x81) & 1,param_4,bVar17);
  if (1 < (byte)(param_6 - 9)) {
    DeclarationScope::DeclareArguments(this_02,*(AstValueFactory **)(this + 0x60));
  }
  if ((param_7 == '\x01') &&
     (lVar19 = VariableMap::Lookup((VariableMap *)(this_02 + 0x20),param_2), lVar19 == 0)) {
    DeclarationScope::DeclareFunctionVar(this_02,param_2,(Scope *)0x0);
  }
  param_1[2] = local_d0;
  local_d8 = local_d0;
  uVar26 = *(long *)(local_e0 + 8) - *(long *)local_e0 >> 3;
  if (local_d0 < uVar26 || local_d0 - uVar26 == 0) {
    if (local_d0 < uVar26) {
      *(ulong *)(local_e0 + 8) = *(long *)local_e0 + local_d0 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_e0,local_d0 - uVar26);
  }
LAB_01159338:
  *(undefined8 *)(this + 0xc0) = uVar27;
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

