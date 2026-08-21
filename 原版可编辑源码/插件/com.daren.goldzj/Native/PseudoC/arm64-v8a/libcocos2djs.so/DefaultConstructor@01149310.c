
/* v8::internal::Parser::DefaultConstructor(v8::internal::AstRawString const*, bool, int, int) */

FunctionLiteral *
v8::internal::Parser::DefaultConstructor(AstRawString *param_1,bool param_2,int param_3,int param_4)

{
  AstValueFactory *this;
  int iVar1;
  undefined1 uVar2;
  AstRawString AVar3;
  long lVar4;
  Variable *pVVar5;
  undefined8 uVar6;
  DeclarationScope *this_00;
  FunctionLiteral *this_01;
  VariableProxy *this_02;
  int *piVar7;
  AstRawString *pAVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  Zone *pZVar12;
  AstRawString *pAVar13;
  AstRawString *local_e0;
  ulong uStack_d8;
  ulong local_d0;
  AstRawString *local_c8;
  ulong uStack_c0;
  ulong local_b8;
  int *local_b0;
  AstRawString *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  AstRawString *local_88;
  long lStack_80;
  DeclarationScope *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pZVar12 = *(Zone **)(param_1 + 0xb8);
  uVar10 = 4;
  if ((param_3 & 1U) != 0) {
    uVar10 = 5;
  }
  this_00 = *(DeclarationScope **)(pZVar12 + 0x10);
  if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)this_00) < 0xe0) {
    this_00 = (DeclarationScope *)Zone::NewExpand(pZVar12,0xe0);
  }
  else {
    *(DeclarationScope **)(pZVar12 + 0x10) = this_00 + 0xe0;
  }
  DeclarationScope::DeclarationScope(this_00,pZVar12,*(undefined8 *)param_1,2,uVar10);
  pAVar13 = param_1 + 0x10;
  *(undefined1 *)(*(long *)pAVar13 + 0x3b) = 1;
  DeclarationScope::DeclareDefaultFunctionVariables(this_00,*(AstValueFactory **)(param_1 + 0x60));
  pAVar8 = param_1 + 200;
  *(int *)(param_1 + 0x334) = *(int *)(param_1 + 0x334) + 1;
  *(int *)(this_00 + 0x70) = param_4;
  *(int *)(this_00 + 0x74) = param_4;
  *(ushort *)(this_00 + 0x81) = *(ushort *)(this_00 + 0x81) | 1;
  uStack_c0 = *(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200) >> 3;
  uStack_a0 = *(undefined8 *)param_1;
  *(DeclarationScope **)param_1 = this_00;
  local_90 = 0;
  local_98 = 0;
  lStack_80 = *(long *)pAVar13;
  local_70 = 0;
  *(AstRawString ***)pAVar13 = &local_a8;
  if (lStack_80 != 0) {
    uVar2 = *(undefined1 *)(lStack_80 + 0x39);
    *(undefined1 *)(lStack_80 + 0x39) = 0;
    *(undefined1 *)(lStack_80 + 0x3a) = uVar2;
  }
  local_c8 = pAVar8;
  local_b8 = uStack_c0;
  local_a8 = param_1;
  local_88 = pAVar13;
  local_78 = this_00;
  if ((param_3 & 1U) == 0) {
    uVar10 = 0;
  }
  else {
    pVVar5 = (Variable *)
             DeclarationScope::DeclareParameter
                       (this_00,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x38) + 0x110)
                        ,3,0,1,*(long *)(param_1 + 0x60),param_4);
    uStack_d8 = *(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200) >> 3;
    pZVar12 = *(Zone **)(param_1 + 0x68);
    this_02 = *(VariableProxy **)(pZVar12 + 0x10);
    local_e0 = pAVar8;
    local_d0 = uStack_d8;
    if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)this_02) < 0x18) {
      this_02 = (VariableProxy *)Zone::NewExpand(pZVar12,0x18);
    }
    else {
      *(VariableProxy **)(pZVar12 + 0x10) = this_02 + 0x18;
    }
    VariableProxy::VariableProxy(this_02,pVVar5,-1);
    pZVar12 = *(Zone **)(param_1 + 0x68);
    local_b0 = *(int **)(pZVar12 + 0x10);
    if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)local_b0) < 0x18) {
      local_b0 = (int *)Zone::NewExpand(pZVar12,0x18);
    }
    else {
      *(int **)(pZVar12 + 0x10) = local_b0 + 6;
    }
    local_b0[1] = 0x2d;
    local_b0[2] = param_4;
    *(VariableProxy **)(local_b0 + 4) = this_02;
    *local_b0 = param_4;
    if (*(long **)(local_e0 + 8) < *(long **)(local_e0 + 0x10)) {
      **(long **)(local_e0 + 8) = (long)local_b0;
      *(long *)(local_e0 + 8) = *(long *)(local_e0 + 8) + 8;
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                ((vector<void*,std::__ndk1::allocator<void*>> *)local_e0,&local_b0);
    }
    local_d0 = local_d0 + 1;
    uVar6 = NewSuperCallReference((Parser *)param_1,param_4);
    pZVar12 = *(Zone **)(param_1 + 0x68);
    piVar7 = *(int **)(pZVar12 + 0x10);
    if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)piVar7) < 0x20) {
      piVar7 = (int *)Zone::NewExpand(pZVar12,0x20);
    }
    else {
      *(int **)(pZVar12 + 0x10) = piVar7 + 8;
    }
    pZVar12 = *(Zone **)(param_1 + 0x68);
    *(undefined8 *)(piVar7 + 2) = uVar6;
    *(undefined8 *)(piVar7 + 4) = 0;
    piVar7[6] = 0;
    piVar7[7] = 0;
    *piVar7 = param_4;
    piVar7[1] = 0x1c;
    ScopedList<v8::internal::Expression*,void*>::CopyTo
              ((ScopedList<v8::internal::Expression*,void*> *)&local_e0,(ZoneList *)(piVar7 + 4),
               pZVar12);
    uVar11 = *(long *)(local_e0 + 8) - *(long *)local_e0 >> 3;
    if (uStack_d8 < uVar11 || uStack_d8 - uVar11 == 0) {
      if (uStack_d8 < uVar11) {
        *(ulong *)(local_e0 + 8) = *(long *)local_e0 + uStack_d8 * 8;
      }
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                ((vector<void*,std::__ndk1::allocator<void*>> *)local_e0,uStack_d8 - uVar11);
    }
    pZVar12 = *(Zone **)(param_1 + 0x68);
    pAVar8 = *(AstRawString **)(pZVar12 + 0x10);
    if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)pAVar8) < 0x18) {
      pAVar8 = (AstRawString *)Zone::NewExpand(pZVar12,0x18);
    }
    else {
      *(AstRawString **)(pZVar12 + 0x10) = pAVar8 + 0x18;
    }
    *(int **)(pAVar8 + 8) = piVar7;
    *(int *)(pAVar8 + 0x10) = -1;
    *(int *)pAVar8 = param_4;
    *(int *)(pAVar8 + 4) = 0xf;
    local_e0 = pAVar8;
    if (*(long **)(local_c8 + 8) < *(long **)(local_c8 + 0x10)) {
      **(long **)(local_c8 + 8) = (long)pAVar8;
      *(long *)(local_c8 + 8) = *(long *)(local_c8 + 8) + 8;
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                ((vector<void*,std::__ndk1::allocator<void*>> *)local_c8,&local_e0);
    }
    local_b8 = local_b8 + 1;
    uVar10 = (undefined4)local_98;
  }
  *(long *)local_88 = lStack_80;
  *(undefined8 *)local_a8 = uStack_a0;
  iVar1 = *(int *)(param_1 + 0x100);
  pZVar12 = *(Zone **)(param_1 + 0x68);
  AVar3 = param_1[0x108];
  *(int *)(param_1 + 0x100) = iVar1 + 1;
  this_01 = *(FunctionLiteral **)(pZVar12 + 0x10);
  if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)this_01) < 0x58) {
    this_01 = (FunctionLiteral *)Zone::NewExpand(pZVar12,0x58);
  }
  else {
    *(FunctionLiteral **)(pZVar12 + 0x10) = this_01 + 0x58;
  }
  pZVar12 = *(Zone **)(param_1 + 0x68);
  this = *(AstValueFactory **)(param_1 + 0x70);
  *(undefined4 *)(this_01 + 4) = 0x26;
  *(undefined4 *)(this_01 + 8) = uVar10;
  *(int *)this_01 = param_4;
  *(undefined8 *)(this_01 + 0x14) = 0xffffffff;
  *(undefined8 *)(this_01 + 0xc) = 0;
  *(int *)(this_01 + 0x1c) = iVar1 + 1;
  if ((AstRawString *)(ulong)param_2 == (AstRawString *)0x0) {
    uVar6 = 0;
    uVar9 = 0x200026;
  }
  else {
    uVar6 = AstValueFactory::NewConsString(this,(AstRawString *)(ulong)param_2);
    uVar9 = *(uint *)(this_01 + 4) | 0x200000;
  }
  *(undefined8 *)(this_01 + 0x30) = 0;
  *(undefined8 *)(this_01 + 0x20) = uVar6;
  *(DeclarationScope **)(this_01 + 0x28) = this_00;
  *(undefined8 *)(this_01 + 0x38) = 0;
  uVar6 = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(this_01 + 0x48) = 0;
  *(undefined8 *)(this_01 + 0x50) = 0;
  *(uint *)(this_01 + 4) = uVar9;
  *(undefined8 *)(this_01 + 0x40) = uVar6;
  if (AVar3 == (AstRawString)0x0) {
    FunctionLiteral::SetShouldEagerCompile(this_01);
  }
  ScopedList<v8::internal::Statement*,void*>::CopyTo
            ((ScopedList<v8::internal::Statement*,void*> *)&local_c8,(ZoneList *)(this_01 + 0x30),
             pZVar12);
  uVar11 = *(long *)(local_c8 + 8) - *(long *)local_c8 >> 3;
  if (uStack_c0 < uVar11 || uStack_c0 - uVar11 == 0) {
    if (uStack_c0 < uVar11) {
      *(ulong *)(local_c8 + 8) = *(long *)local_c8 + uStack_c0 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_c8,uStack_c0 - uVar11);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

