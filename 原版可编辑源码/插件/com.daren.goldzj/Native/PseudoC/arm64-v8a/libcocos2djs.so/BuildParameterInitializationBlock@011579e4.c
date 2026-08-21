
/* WARNING: Removing unreachable block (ram,0x01157c98) */
/* WARNING: Removing unreachable block (ram,0x01157cb8) */
/* WARNING: Removing unreachable block (ram,0x01157cbc) */
/* WARNING: Removing unreachable block (ram,0x01157cb0) */
/* WARNING: Removing unreachable block (ram,0x01157cc4) */
/* v8::internal::Parser::BuildParameterInitializationBlock(v8::internal::ParserFormalParameters
   const&) */

undefined8 * __thiscall
v8::internal::Parser::BuildParameterInitializationBlock
          (Parser *this,ParserFormalParameters *param_1)

{
  Parser *pPVar1;
  undefined4 uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  Zone *pZVar6;
  Scope *this_00;
  long lVar7;
  VariableProxy *this_01;
  VariableProxy *this_02;
  undefined8 *puVar8;
  Expression *pEVar9;
  undefined8 *puVar10;
  ParserFormalParameters *pPVar11;
  ulong uVar12;
  Variable *pVVar13;
  ScopedList<v8::internal::Statement*,void*> *pSVar14;
  undefined8 uVar15;
  ParserFormalParameters *pPVar16;
  long lVar17;
  ulong *puVar18;
  vector<void*,std::__ndk1::allocator<void*>> *local_d8;
  ulong local_d0;
  ulong local_c8;
  Parser *local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined8 *local_a8;
  ulong local_a0;
  Expression *pEStack_98;
  undefined4 local_90;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  pPVar1 = this + 200;
  pPVar16 = param_1 + 0x18;
  local_b8 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  pPVar11 = *(ParserFormalParameters **)(param_1 + 0x20);
  local_c0 = pPVar1;
  local_b0 = local_b8;
  if (pPVar16 != pPVar11) {
    lVar17 = 0;
    do {
      pZVar6 = *(Zone **)(this + 0x68);
      puVar18 = *(ulong **)pPVar16;
      this_01 = *(VariableProxy **)(pZVar6 + 0x10);
      pVVar13 = *(Variable **)(*(long *)(*(long *)param_1 + 0x90) + lVar17 * 8);
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)this_01) < 0x18) {
        this_01 = (VariableProxy *)Zone::NewExpand(pZVar6,0x18);
      }
      else {
        *(VariableProxy **)(pZVar6 + 0x10) = this_01 + 0x18;
      }
      VariableProxy::VariableProxy(this_01,pVVar13,-1);
      pEVar9 = (Expression *)this_01;
      if (3 < *puVar18) {
        pZVar6 = *(Zone **)(this + 0x68);
        this_02 = *(VariableProxy **)(pZVar6 + 0x10);
        pVVar13 = *(Variable **)(*(long *)(*(long *)param_1 + 0x90) + lVar17 * 8);
        if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)this_02) < 0x18) {
          this_02 = (VariableProxy *)Zone::NewExpand(pZVar6,0x18);
        }
        else {
          *(VariableProxy **)(pZVar6 + 0x10) = this_02 + 0x18;
        }
        VariableProxy::VariableProxy(this_02,pVVar13,-1);
        pZVar6 = *(Zone **)(this + 0x68);
        puVar10 = *(undefined8 **)(pZVar6 + 0x10);
        if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar10) < 0x10) {
          puVar10 = (undefined8 *)Zone::NewExpand(pZVar6,0x10);
        }
        else {
          *(undefined8 **)(pZVar6 + 0x10) = puVar10 + 2;
        }
        *puVar10 = 0x329ffffffff;
        pZVar6 = *(Zone **)(this + 0x68);
        puVar8 = *(undefined8 **)(pZVar6 + 0x10);
        if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar8) < 0x18) {
          puVar8 = (undefined8 *)Zone::NewExpand(pZVar6,0x18);
        }
        else {
          *(undefined8 **)(pZVar6 + 0x10) = puVar8 + 3;
        }
        puVar8[1] = this_02;
        puVar8[2] = puVar10;
        *puVar8 = 0x1b20ffffffff;
        pZVar6 = *(Zone **)(this + 0x68);
        uVar12 = *puVar18;
        pEVar9 = *(Expression **)(pZVar6 + 0x10);
        if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pEVar9) < 0x20) {
          pEVar9 = (Expression *)Zone::NewExpand(pZVar6,0x20);
        }
        else {
          *(Expression **)(pZVar6 + 0x10) = pEVar9 + 0x20;
        }
        *(VariableProxy **)(pEVar9 + 0x18) = this_01;
        *(undefined8 *)pEVar9 = 0x22ffffffff;
        *(undefined8 **)(pEVar9 + 8) = puVar8;
        *(ulong *)(pEVar9 + 0x10) = uVar12 & 0xfffffffffffffffc;
      }
      this_00 = (Scope *)Scope::AsDeclarationScope();
      bVar5 = false;
      local_d8 = (vector<void*,std::__ndk1::allocator<void*>> *)
                 ((ulong)local_d8 & 0xffffffffffffff00);
      if ((((*(uint *)(puVar18[1] + 4) & 0x3f) == 0x35) && (*puVar18 == 0)) ||
         (((byte)this_00[0x81] >> 2 & 1) == 0)) {
        pSVar14 = (ScopedList<v8::internal::Statement*,void*> *)&local_c0;
      }
      else {
        pZVar6 = *(Zone **)(this + 0xb8);
        this_00 = *(Scope **)(pZVar6 + 0x10);
        if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)this_00) < 0xe0) {
          this_00 = (Scope *)Zone::NewExpand(pZVar6,0xe0);
        }
        else {
          *(Scope **)(pZVar6 + 0x10) = this_00 + 0xe0;
        }
        DeclarationScope::DeclarationScope
                  ((DeclarationScope *)this_00,*(undefined8 *)(this + 0xb8),*(undefined8 *)this,6,0)
        ;
        *(undefined4 *)(this_00 + 0x70) = *(undefined4 *)puVar18[1];
        uVar2 = *(undefined4 *)((long)puVar18 + 0x14);
        *(ushort *)(this_00 + 0x81) = *(ushort *)(this_00 + 0x81) | 2;
        *(undefined4 *)(this_00 + 0x74) = uVar2;
        lVar7 = Scope::GetDeclarationScope(this_00);
        uVar3 = *(ushort *)(lVar7 + 0x81);
        *(ushort *)(lVar7 + 0x81) = uVar3 | 2;
        if ((((uVar3 & 1) == 0) && (*(char *)(lVar7 + 0x80) != '\x01')) &&
           (*(char *)(lVar7 + 0x80) != '\x04')) {
          *(ushort *)(lVar7 + 0x81) = uVar3 | 6;
          *(undefined4 *)(lVar7 + 0x7c) = 3;
        }
        lVar7 = *(long *)(this_00 + 8);
        *(ushort *)(this_00 + 0x81) = *(ushort *)(this_00 + 0x81) | 0x40;
        while ((lVar7 != 0 && ((*(ushort *)(lVar7 + 0x81) >> 6 & 1) == 0))) {
          *(ushort *)(lVar7 + 0x81) = *(ushort *)(lVar7 + 0x81) | 0x40;
          lVar7 = *(long *)(lVar7 + 8);
        }
        bVar5 = true;
        local_d0 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
        local_d8 = (vector<void*,std::__ndk1::allocator<void*>> *)pPVar1;
        local_c8 = local_d0;
        ReparentExpressionScope(*(ulong *)(this + 0xa8),(Expression *)puVar18[1],this_00);
        ReparentExpressionScope(*(ulong *)(this + 0xa8),pEVar9,this_00);
        pSVar14 = (ScopedList<v8::internal::Statement*,void*> *)&local_d8;
      }
      uVar15 = *(undefined8 *)this;
      *(Scope **)this = this_00;
      local_a0 = puVar18[1];
      local_90 = 0xffffffff;
      pEStack_98 = pEVar9;
      InitializeVariables(this,pSVar14);
      if (pSVar14 != (ScopedList<v8::internal::Statement*,void*> *)&local_c0) {
        pZVar6 = *(Zone **)(this + 0x68);
        puVar10 = *(undefined8 **)(pZVar6 + 0x10);
        if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar10) < 0x20) {
          puVar10 = (undefined8 *)Zone::NewExpand(pZVar6,0x20);
        }
        else {
          *(undefined8 **)(pZVar6 + 0x10) = puVar10 + 4;
        }
        *puVar10 = 0xc7ffffffff;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[1] = 0;
        ScopedList<v8::internal::Statement*,void*>::CopyTo
                  ((ScopedList<v8::internal::Statement*,void*> *)&local_d8,(ZoneList *)(puVar10 + 1)
                   ,*(Zone **)(this + 0x68));
        if (bVar5) {
          uVar12 = *(long *)(local_d8 + 8) - *(long *)local_d8 >> 3;
          if (local_d0 < uVar12 || local_d0 - uVar12 == 0) {
            if (local_d0 < uVar12) {
              *(ulong *)(local_d8 + 8) = *(long *)local_d8 + local_d0 * 8;
            }
          }
          else {
            std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                      (local_d8,local_d0 - uVar12);
          }
          bVar5 = false;
          local_c8 = local_d0;
        }
        puVar10[3] = this_00;
        Scope::FinalizeBlockScope(this_00);
        Scope::AsDeclarationScope();
        local_a8 = puVar10;
        if (*(undefined8 **)(local_c0 + 8) < *(undefined8 **)(local_c0 + 0x10)) {
          **(undefined8 **)(local_c0 + 8) = puVar10;
          *(long *)(local_c0 + 8) = *(long *)(local_c0 + 8) + 8;
        }
        else {
          std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                    ((vector<void*,std::__ndk1::allocator<void*>> *)local_c0,&local_a8);
        }
        local_b0 = local_b0 + 1;
      }
      *(undefined8 *)this = uVar15;
      lVar17 = lVar17 + 1;
      if (bVar5) {
        uVar12 = *(long *)(local_d8 + 8) - *(long *)local_d8 >> 3;
        if (uVar12 <= local_d0 && local_d0 - uVar12 != 0) {
          std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                    (local_d8,local_d0 - uVar12);
        }
        else if (uVar12 > local_d0) {
          *(ulong *)(local_d8 + 8) = *(long *)local_d8 + local_d0 * 8;
        }
        local_c8 = local_d0;
      }
      pPVar16 = (ParserFormalParameters *)(*(long *)pPVar16 + 0x18);
    } while (pPVar16 != pPVar11);
  }
  pZVar6 = *(Zone **)(this + 0x68);
  puVar10 = *(undefined8 **)(pZVar6 + 0x10);
  if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar10) < 0x20) {
    puVar10 = (undefined8 *)Zone::NewExpand(pZVar6,0x20);
  }
  else {
    *(undefined8 **)(pZVar6 + 0x10) = puVar10 + 4;
  }
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0xc7ffffffff;
  puVar10[1] = 0;
  ScopedList<v8::internal::Statement*,void*>::CopyTo
            ((ScopedList<v8::internal::Statement*,void*> *)&local_c0,(ZoneList *)(puVar10 + 1),
             *(Zone **)(this + 0x68));
  uVar12 = *(long *)(local_c0 + 8) - *(long *)local_c0 >> 3;
  if (local_b8 < uVar12 || local_b8 - uVar12 == 0) {
    if (local_b8 < uVar12) {
      *(ulong *)(local_c0 + 8) = *(long *)local_c0 + local_b8 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_c0,local_b8 - uVar12);
  }
  if (*(long *)(lVar4 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar10;
}

