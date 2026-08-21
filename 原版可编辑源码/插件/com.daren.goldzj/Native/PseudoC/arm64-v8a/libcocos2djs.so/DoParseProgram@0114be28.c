
/* v8::internal::Parser::DoParseProgram(v8::internal::Isolate*, v8::internal::ParseInfo*) */

Parser * __thiscall
v8::internal::Parser::DoParseProgram(Parser *this,Isolate *param_1,ParseInfo *param_2)

{
  AstValueFactory *this_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  ParseInfo PVar6;
  Parser PVar7;
  ushort uVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  Zone *pZVar13;
  long lVar14;
  DeclarationScope *pDVar15;
  ModuleScope *pMVar16;
  ulong uVar17;
  int *piVar18;
  vector<void*,std::__ndk1::allocator<void*>> *pvVar19;
  Block *pBVar20;
  Expression *pEVar21;
  AstRawString *pAVar22;
  undefined4 uVar23;
  ulong *puVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_01;
  undefined8 uVar28;
  Parser *pPVar29;
  DeclarationScope *pDVar30;
  SourceTextModuleDescriptor *this_02;
  vector<void*,std::__ndk1::allocator<void*>> *local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined1 auStack_c4 [4];
  Parser *local_c0;
  ulong local_b8;
  ulong local_b0;
  Parser *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  Parser *local_88;
  long lStack_80;
  DeclarationScope *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  uVar1 = *(undefined4 *)(this + 0x2f0);
  *(undefined4 *)(this + 0x100) = 0;
  uVar28 = *(undefined8 *)(this + 8);
  *(uint *)(this + 0x2f0) = (byte)this[0x484] ^ 1;
  if (((byte)param_2[8] >> 2 & 1) == 0) {
    if (this[0xa1] != (Parser)0x0) {
      pZVar13 = *(Zone **)(this + 0xb8);
      pDVar30 = *(DeclarationScope **)(param_2 + 0x18);
      pMVar16 = *(ModuleScope **)(pZVar13 + 0x10);
      if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pMVar16) < 0xe8) {
        pMVar16 = (ModuleScope *)Zone::NewExpand(pZVar13,0xe8);
      }
      else {
        *(ModuleScope **)(pZVar13 + 0x10) = pMVar16 + 0xe8;
      }
      ModuleScope::ModuleScope(pMVar16,pDVar30,*(AstValueFactory **)(this + 0x60));
    }
  }
  else {
    pZVar13 = *(Zone **)(this + 0xb8);
    pDVar30 = *(DeclarationScope **)(pZVar13 + 0x10);
    if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pDVar30) < 0xe0) {
      pDVar30 = (DeclarationScope *)Zone::NewExpand(pZVar13,0xe0);
    }
    else {
      *(DeclarationScope **)(pZVar13 + 0x10) = pDVar30 + 0xe0;
    }
    DeclarationScope::DeclarationScope(pDVar30,*(undefined8 *)(this + 0xb8),uVar28,1,0);
  }
  pDVar30 = (DeclarationScope *)Scope::AsDeclarationScope();
  *(undefined4 *)(pDVar30 + 0x70) = 0;
  uStack_a0 = *(undefined8 *)this;
  local_88 = this + 0x10;
  *(DeclarationScope **)this = pDVar30;
  local_90 = 0;
  local_98 = 0;
  lStack_80 = *(long *)local_88;
  local_70 = 0;
  *(Parser ***)local_88 = &local_a8;
  if (lStack_80 != 0) {
    uVar5 = *(undefined1 *)(lStack_80 + 0x39);
    *(undefined1 *)(lStack_80 + 0x39) = 0;
    *(undefined1 *)(lStack_80 + 0x3a) = uVar5;
  }
  pPVar29 = this + 200;
  local_b8 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  iVar2 = *(int *)**(undefined8 **)(this + 0xf8);
  local_c0 = pPVar29;
  local_b0 = local_b8;
  local_a8 = this;
  local_78 = pDVar30;
  if (this[0xa1] == (Parser)0x0) {
    if (param_2[0x31] == (ParseInfo)0x4) {
      ParseWrapped(this,param_1,param_2,(ScopedList *)&local_c0,pDVar30,*(Zone **)(this + 0xb8));
    }
    else {
      *(ushort *)(*(long *)this + 0x81) =
           *(ushort *)(*(long *)this + 0x81) & 0xfffe | *(ushort *)(param_2 + 8) >> 3 & 1;
      lVar14 = *(long *)(this + 0xf8);
      puVar24 = *(ulong **)(lVar14 + 8);
      if ((char)puVar24[7] == 'Z') {
        do {
          uVar27 = *puVar24;
          if (*(char *)((long)puVar24 + 0x1c) == '\0') {
LAB_0114c300:
            bVar11 = false;
            bVar10 = false;
          }
          else {
            iVar12 = *(int *)((long)puVar24 + 4) - (int)uVar27;
            if (iVar12 == 9) {
              if ((int)puVar24[3] != 7) goto LAB_0114c300;
              iVar12 = strncmp("use asm",(char *)puVar24[1],7);
              bVar11 = iVar12 == 0;
              bVar10 = false;
            }
            else {
              if (((iVar12 != 0xc) || ((int)puVar24[3] != 10)) ||
                 (iVar12 = strncmp("use strict",(char *)puVar24[1],10), iVar12 != 0))
              goto LAB_0114c300;
              bVar11 = false;
              bVar10 = true;
            }
          }
          pvVar19 = (vector<void*,std::__ndk1::allocator<void*>> *)
                    ParserBase<v8::internal::Parser>::ParseStatementListItem
                              ((ParserBase<v8::internal::Parser> *)this);
          if (pvVar19 == (vector<void*,std::__ndk1::allocator<void*>> *)0x0) goto LAB_0114c474;
          local_e0 = pvVar19;
          if (*(undefined8 **)(local_c0 + 8) < *(undefined8 **)(local_c0 + 0x10)) {
            **(undefined8 **)(local_c0 + 8) = pvVar19;
            *(long *)(local_c0 + 8) = *(long *)(local_c0 + 8) + 8;
          }
          else {
            std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                      ((vector<void*,std::__ndk1::allocator<void*>> *)local_c0,&local_e0);
          }
          local_b0 = local_b0 + 1;
          if ((((*(uint *)(pvVar19 + 4) & 0x3f) != 9) || (*(long *)(pvVar19 + 8) == 0)) ||
             ((*(uint *)(*(long *)(pvVar19 + 8) + 4) & 0x7bf) != 0x1a9)) break;
          if (bVar10) {
            *(int *)(this + 0x334) = *(int *)(this + 0x334) + 1;
            *(ushort *)(*(long *)this + 0x81) = *(ushort *)(*(long *)this + 0x81) | 1;
            uVar17 = Scope::HasSimpleParameters(*(Scope **)this);
            if ((uVar17 & 1) == 0) {
              PendingCompilationErrorHandler::ReportMessageAt
                        (*(PendingCompilationErrorHandler **)(this + 0xb0),uVar27 & 0xffffffff,
                         uVar27 >> 0x20,0xf3,"use strict");
              lVar14 = *(long *)(this + 0x158);
              if (*(char *)(lVar14 + 0x30) == '\0') {
                *(undefined4 *)(this + 0x160) = 0xffffffff;
                *(undefined1 *)(lVar14 + 0x30) = 1;
                *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(lVar14 + 0x18);
                this[0x1a0] = (Parser)0x6d;
                this[0x1f0] = (Parser)0x6d;
                this[0x240] = (Parser)0x6d;
              }
              goto LAB_0114c474;
            }
          }
          else if (bVar11) {
            *(int *)(this + 0x310) = *(int *)(this + 0x310) + 1;
            pDVar15 = (DeclarationScope *)Scope::AsDeclarationScope();
            DeclarationScope::set_is_asm_module(pDVar15);
            *(uint *)(*(long *)(this + 0x138) + 8) = *(uint *)(*(long *)(this + 0x138) + 8) | 0x8000
            ;
          }
          else {
            lVar26 = *(long *)this;
            uVar8 = *(ushort *)(lVar26 + 0x81);
            lVar14 = 0x20;
            if ((uVar8 & 1) != 0) {
              lVar14 = 0x24;
            }
            *(int *)(this + lVar14 + 0x310) = *(int *)(this + lVar14 + 0x310) + 1;
            *(ushort *)(lVar26 + 0x81) = *(ushort *)(lVar26 + 0x81) & 0xfffe | uVar8 & 1;
          }
          puVar24 = *(ulong **)(*(long *)(this + 0xf8) + 8);
        } while ((char)puVar24[7] == 'Z');
        lVar14 = *(long *)(this + 0xf8);
      }
      uVar28 = *(undefined8 *)(this + 0x300);
      *(undefined8 *)(this + 0x300) = 0;
      lVar14 = *(long *)(lVar14 + 8);
      while ((*(char *)(lVar14 + 0x38) != '\x0e' &&
             (pvVar19 = (vector<void*,std::__ndk1::allocator<void*>> *)
                        ParserBase<v8::internal::Parser>::ParseStatementListItem
                                  ((ParserBase<v8::internal::Parser> *)this),
             pvVar19 != (vector<void*,std::__ndk1::allocator<void*>> *)0x0))) {
        if ((*(uint *)(pvVar19 + 4) & 0x3f) != 10) {
          local_e0 = pvVar19;
          if (*(undefined8 **)(local_c0 + 8) < *(undefined8 **)(local_c0 + 0x10)) {
            **(undefined8 **)(local_c0 + 8) = pvVar19;
            *(long *)(local_c0 + 8) = *(long *)(local_c0 + 8) + 8;
          }
          else {
            std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                      ((vector<void*,std::__ndk1::allocator<void*>> *)local_c0,&local_e0);
          }
          local_b0 = local_b0 + 1;
        }
        lVar14 = *(long *)(*(long *)(this + 0xf8) + 8);
      }
      *(undefined8 *)(this + 0x300) = uVar28;
    }
  }
  else {
    uVar28 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
    Scope::DeclareLocal((Scope *)pDVar30,uVar28,2,1,auStack_c4,1);
    lVar14 = DeclarationScope::DeclareParameter
                       (pDVar30,uVar28,2,0,0,*(undefined8 *)(this + 0x60),iVar2);
    *(undefined4 *)(lVar14 + 0x20) = 0;
    *(ushort *)(lVar14 + 0x28) = *(ushort *)(lVar14 + 0x28) & 0xfcff | 0x80;
    pDVar15 = (DeclarationScope *)Scope::AsDeclarationScope();
    DeclarationScope::DeclareGeneratorObjectVar
              (pDVar15,*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xe0));
    uVar28 = BuildInitialYield(this);
    pZVar13 = *(Zone **)(this + 0x68);
    local_e0 = *(vector<void*,std::__ndk1::allocator<void*>> **)(pZVar13 + 0x10);
    if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)local_e0) < 0x10) {
      local_e0 = (vector<void*,std::__ndk1::allocator<void*>> *)Zone::NewExpand(pZVar13,0x10);
    }
    else {
      *(vector<void*,std::__ndk1::allocator<void*>> **)(pZVar13 + 0x10) = local_e0 + 0x10;
    }
    *(undefined8 *)(local_e0 + 8) = uVar28;
    *(undefined8 *)local_e0 = 0x9ffffffff;
    if (*(undefined8 **)(local_c0 + 8) < *(undefined8 **)(local_c0 + 0x10)) {
      **(undefined8 **)(local_c0 + 8) = local_e0;
      *(long *)(local_c0 + 8) = *(long *)(local_c0 + 8) + 8;
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                ((vector<void*,std::__ndk1::allocator<void*>> *)local_c0,&local_e0);
    }
    local_b0 = local_b0 + 1;
    if (this[0x135] == (Parser)0x0) {
      ParseModuleItemList(this,(ScopedList *)&local_c0);
    }
    else {
      local_d8 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
      local_e0 = (vector<void*,std::__ndk1::allocator<void*>> *)pPVar29;
      local_d0 = local_d8;
      ParseModuleItemList(this,(ScopedList *)&local_e0);
      if (local_98._4_4_ < 2) {
        pBVar20 = (Block *)0x0;
        local_b0 = local_d0;
        local_d8 = local_d0;
      }
      else {
        pDVar30[0x85] = (DeclarationScope)0x2;
        pZVar13 = *(Zone **)(this + 0x68);
        pBVar20 = *(Block **)(pZVar13 + 0x10);
        if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pBVar20) < 0x20) {
          pBVar20 = (Block *)Zone::NewExpand(pZVar13,0x20);
        }
        else {
          *(Block **)(pZVar13 + 0x10) = pBVar20 + 0x20;
        }
        *(undefined8 *)(pBVar20 + 0x10) = 0;
        *(undefined8 *)(pBVar20 + 0x18) = 0;
        *(undefined8 *)pBVar20 = 0xc7ffffffff;
        *(undefined8 *)(pBVar20 + 8) = 0;
        ScopedList<v8::internal::Statement*,void*>::CopyTo
                  ((ScopedList<v8::internal::Statement*,void*> *)&local_e0,(ZoneList *)(pBVar20 + 8)
                   ,*(Zone **)(this + 0x68));
      }
      uVar27 = *(long *)(local_e0 + 8) - *(long *)local_e0 >> 3;
      if (local_d8 < uVar27 || local_d8 - uVar27 == 0) {
        if (local_d8 < uVar27) {
          *(ulong *)(local_e0 + 8) = *(long *)local_e0 + local_d8 * 8;
        }
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                  (local_e0,local_d8 - uVar27);
      }
      if (pDVar30[0x85] == (DeclarationScope)0x2) {
        pZVar13 = *(Zone **)(this + 0x68);
        pEVar21 = *(Expression **)(pZVar13 + 0x10);
        if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pEVar21) < 0x10) {
          pEVar21 = (Expression *)Zone::NewExpand(pZVar13,0x10);
        }
        else {
          *(Expression **)(pZVar13 + 0x10) = pEVar21 + 0x10;
        }
        *(undefined8 *)pEVar21 = 0x329ffffffff;
        RewriteAsyncFunctionBody(this,(ScopedList *)&local_c0,pBVar20,pEVar21);
      }
    }
    if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0') {
      lVar14 = Scope::AsModuleScope();
      this_02 = *(SourceTextModuleDescriptor **)(lVar14 + 0xe0);
      pMVar16 = (ModuleScope *)Scope::AsModuleScope();
      uVar27 = SourceTextModuleDescriptor::Validate
                         (this_02,pMVar16,*(PendingCompilationErrorHandler **)(this + 0xb0),
                          *(Zone **)(this + 0xb8));
      if ((uVar27 & 1) == 0) {
        lVar14 = *(long *)(this + 0xf8);
        lVar26 = *(long *)(lVar14 + 0x18);
        if (*(char *)(lVar26 + 0x30) == '\0') {
          *(undefined4 *)(lVar14 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar26 + 0x30) = 1;
          *(undefined8 *)(lVar26 + 0x10) = *(undefined8 *)(lVar26 + 0x18);
          *(undefined1 *)(lVar14 + 0x60) = 0x6d;
          *(undefined1 *)(lVar14 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar14 + 0x100) = 0x6d;
        }
      }
    }
  }
LAB_0114c474:
  *(undefined4 *)(pDVar30 + 0x74) = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
  if ((*(byte *)(*(long *)this + 0x81) & 1) != 0) {
    plVar25 = *(long **)(this + 0xf8);
    uVar3 = *(uint *)((long)plVar25 + 0x154);
    if ((((int)uVar3 <= *(int *)(*plVar25 + 4)) &&
        (uVar4 = *(uint *)(plVar25 + 0x2a), iVar2 <= (int)uVar4)) && (uVar4 <= uVar3)) {
      lVar14 = plVar25[0x2b];
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0xb0),uVar4,uVar3,(int)lVar14,0);
      lVar26 = *(long *)(this + 0x158);
      if (*(char *)(lVar26 + 0x30) == '\0') {
        *(undefined4 *)(this + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar26 + 0x30) = 1;
        *(undefined8 *)(lVar26 + 0x10) = *(undefined8 *)(lVar26 + 0x18);
        this[0x1a0] = (Parser)0x6d;
        this[0x1f0] = (Parser)0x6d;
        this[0x240] = (Parser)0x6d;
      }
      lVar26 = *(long *)(this + 0xf8);
      *(undefined8 *)(lVar26 + 0x150) = 0xffffffff;
      *(undefined4 *)(lVar26 + 0x158) = 0;
      if ((int)lVar14 == 299) {
        *(int *)(this + 0x390) = *(int *)(this + 0x390) + 1;
      }
    }
  }
  if (((*(byte *)(*(long *)this + 0x81) & 1) == 0) &&
     ((pDVar30[0x80] != (DeclarationScope)0x1 || (*(long *)(pDVar30 + 8) != *(long *)(this + 8)))))
  {
    DeclarationScope::HoistSloppyBlockFunctions(pDVar30,(AstNodeFactory *)(this + 0x68));
  }
  if (((byte)param_2[8] >> 2 & 1) != 0) {
    AstValueFactory::Internalize(*(AstValueFactory **)(param_2 + 0x70),param_1);
  }
  if ((*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0') &&
     (piVar18 = (int *)DeclarationScope::CheckConflictingVarDeclarations(pDVar30),
     piVar18 != (int *)0x0)) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0xb0),*piVar18,*piVar18 + 1,0xb0,
               *(undefined8 *)(*(long *)(piVar18 + 2) + 8));
    lVar14 = *(long *)(this + 0x158);
    if (*(char *)(lVar14 + 0x30) == '\0') {
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined1 *)(lVar14 + 0x30) = 1;
      *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(lVar14 + 0x18);
      this[0x1a0] = (Parser)0x6d;
      this[0x1f0] = (Parser)0x6d;
      this[0x240] = (Parser)0x6d;
      PVar6 = param_2[8];
      goto joined_r0x0114c4ec;
    }
  }
  PVar6 = param_2[8];
joined_r0x0114c4ec:
  if ((((byte)PVar6 >> 5 & 1) != 0) &&
     ((((int)local_b0 - (int)local_b8 != 1 ||
       (lVar14 = *(long *)(*(long *)local_c0 + local_b8 * 8), (*(uint *)(lVar14 + 4) & 0x3f) != 9))
      || ((*(uint *)(*(long *)(lVar14 + 8) + 4) & 0x3f) != 0x26)))) {
    ParserBase<v8::internal::Parser>::ReportMessage((ParserBase<v8::internal::Parser> *)this,0x124);
  }
  pZVar13 = *(Zone **)(this + 0x68);
  PVar7 = this[0xa1];
  uVar23 = (undefined4)local_98;
  pPVar29 = *(Parser **)(pZVar13 + 0x10);
  if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pPVar29) < 0x58) {
    pPVar29 = (Parser *)Zone::NewExpand(pZVar13,0x58);
  }
  else {
    *(Parser **)(pZVar13 + 0x10) = pPVar29 + 0x58;
  }
  pZVar13 = *(Zone **)(this + 0x68);
  this_00 = *(AstValueFactory **)(this + 0x70);
  pAVar22 = *(AstRawString **)(*(long *)(this_00 + 0x38) + 0x110);
  *(undefined8 *)pPVar29 = 0x2600000000;
  *(undefined4 *)(pPVar29 + 8) = uVar23;
  *(uint *)(pPVar29 + 0xc) = (uint)(byte)PVar7;
  *(uint *)(pPVar29 + 0x10) = (uint)(byte)PVar7;
  *(undefined8 *)(pPVar29 + 0x14) = 0xffffffff;
  *(undefined4 *)(pPVar29 + 0x1c) = 0;
  if (pAVar22 == (AstRawString *)0x0) {
    uVar28 = 0;
    uVar23 = 0x26;
  }
  else {
    uVar28 = AstValueFactory::NewConsString(this_00,pAVar22);
    uVar23 = *(undefined4 *)(pPVar29 + 4);
  }
  *(undefined8 *)(pPVar29 + 0x30) = 0;
  *(undefined8 *)(pPVar29 + 0x20) = uVar28;
  *(DeclarationScope **)(pPVar29 + 0x28) = pDVar30;
  *(undefined8 *)(pPVar29 + 0x38) = 0;
  uVar28 = *(undefined8 *)(this_00 + 0x40);
  *(undefined8 *)(pPVar29 + 0x48) = 0;
  *(undefined8 *)(pPVar29 + 0x50) = 0;
  *(undefined8 *)(pPVar29 + 0x40) = uVar28;
  *(undefined4 *)(pPVar29 + 4) = uVar23;
  ScopedList<v8::internal::Statement*,void*>::CopyTo
            ((ScopedList<v8::internal::Statement*,void*> *)&local_c0,(ZoneList *)(pPVar29 + 0x30),
             pZVar13);
  *(int *)(pPVar29 + 0x18) = local_98._4_4_;
  uVar27 = *(long *)(local_c0 + 8) - *(long *)local_c0 >> 3;
  if (local_b8 < uVar27 || local_b8 - uVar27 == 0) {
    if (local_b8 < uVar27) {
      *(ulong *)(local_c0 + 8) = *(long *)local_c0 + local_b8 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_c0,local_b8 - uVar27);
  }
  *(long *)local_88 = lStack_80;
  *(undefined8 *)local_a8 = uStack_a0;
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(this + 0x100);
  if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0') {
    this_01 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                **)(this + 0x2f8);
    if (this_01 !=
        (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
         *)0x0) {
      pZVar13 = *(Zone **)(this + 0xb8);
      pvVar19 = *(vector<void*,std::__ndk1::allocator<void*>> **)(pZVar13 + 0x10);
      if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pvVar19) < 8) {
        pvVar19 = (vector<void*,std::__ndk1::allocator<void*>> *)Zone::NewExpand(pZVar13,8);
      }
      else {
        *(vector<void*,std::__ndk1::allocator<void*>> **)(pZVar13 + 0x10) = pvVar19 + 8;
      }
      *(undefined ***)pvVar19 = &PTR__AstNodeSourceRanges_01cb50f8;
      local_c0 = (Parser *)pvVar19;
      local_a8 = pPVar29;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
      ::
      __emplace_unique_impl<v8::internal::FunctionLiteral*&,v8::internal::FunctionLiteralSourceRanges*&>
                (this_01,(FunctionLiteral **)&local_a8,(FunctionLiteralSourceRanges **)&local_c0);
    }
  }
  else {
    pPVar29 = (Parser *)0x0;
  }
  *(undefined4 *)(this + 0x2f0) = uVar1;
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return pPVar29;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

