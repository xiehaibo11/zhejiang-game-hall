
/* v8::internal::Parser::ParseAndRewriteAsyncGeneratorFunctionBody(int, v8::internal::FunctionKind,
   v8::internal::ScopedList<v8::internal::Statement*, void*>*) */

void __thiscall
v8::internal::Parser::ParseAndRewriteAsyncGeneratorFunctionBody
          (Parser *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ushort uVar1;
  bool bVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  VariableProxy *pVVar8;
  DeclarationScope *this_00;
  Scope *pSVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  Parser *pPVar14;
  ulong *puVar15;
  long lVar16;
  long *plVar17;
  vector<void*,std::__ndk1::allocator<void*>> *this_01;
  Zone *pZVar18;
  long lVar19;
  ulong uVar20;
  Variable *pVVar21;
  Parser *this_02;
  Parser *local_90;
  ulong uStack_88;
  ulong local_80;
  VariableProxy *local_78;
  
  pPVar14 = this + 200;
  uStack_88 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  local_90 = pPVar14;
  local_80 = uStack_88;
  uVar6 = BuildInitialYield();
  pZVar18 = *(Zone **)(this + 0x68);
  local_78 = *(VariableProxy **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)local_78) < 0x10) {
    local_78 = (VariableProxy *)Zone::NewExpand(pZVar18,0x10);
  }
  else {
    *(VariableProxy **)(pZVar18 + 0x10) = local_78 + 0x10;
  }
  *(undefined8 *)(local_78 + 8) = uVar6;
  *(undefined8 *)local_78 = 0x9ffffffff;
  if (*(undefined8 **)(local_90 + 8) < *(undefined8 **)(local_90 + 0x10)) {
    **(undefined8 **)(local_90 + 8) = local_78;
    *(long *)(local_90 + 8) = *(long *)(local_90 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_90,&local_78);
  }
  local_80 = local_80 + 1;
  lVar19 = *(long *)(this + 0xf8);
  puVar15 = *(ulong **)(lVar19 + 8);
  if ((char)puVar15[7] == 'Z') {
    do {
      uVar20 = *puVar15;
      if (*(char *)((long)puVar15 + 0x1c) == '\0') {
LAB_01153ff4:
        bVar4 = false;
        bVar2 = false;
      }
      else {
        iVar5 = *(int *)((long)puVar15 + 4) - (int)uVar20;
        if (iVar5 == 9) {
          if ((int)puVar15[3] != 7) goto LAB_01153ff4;
          iVar5 = strncmp("use asm",(char *)puVar15[1],7);
          bVar4 = iVar5 == 0;
          bVar2 = false;
        }
        else {
          if (((iVar5 != 0xc) || ((int)puVar15[3] != 10)) ||
             (iVar5 = strncmp("use strict",(char *)puVar15[1],10), iVar5 != 0)) goto LAB_01153ff4;
          bVar4 = false;
          bVar2 = true;
        }
      }
      pVVar8 = (VariableProxy *)
               ParserBase<v8::internal::Parser>::ParseStatementListItem
                         ((ParserBase<v8::internal::Parser> *)this);
      if (pVVar8 == (VariableProxy *)0x0) goto LAB_0115415c;
      local_78 = pVVar8;
      if (*(undefined8 **)(local_90 + 8) < *(undefined8 **)(local_90 + 0x10)) {
        **(undefined8 **)(local_90 + 8) = pVVar8;
        *(long *)(local_90 + 8) = *(long *)(local_90 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_90,&local_78);
      }
      local_80 = local_80 + 1;
      if ((((*(uint *)(pVVar8 + 4) & 0x3f) != 9) || (*(long *)(pVVar8 + 8) == 0)) ||
         ((*(uint *)(*(long *)(pVVar8 + 8) + 4) & 0x7bf) != 0x1a9)) break;
      if (bVar2) {
        *(int *)(this + 0x334) = *(int *)(this + 0x334) + 1;
        *(ushort *)(*(long *)this + 0x81) = *(ushort *)(*(long *)this + 0x81) | 1;
        uVar7 = Scope::HasSimpleParameters(*(Scope **)this);
        if ((uVar7 & 1) == 0) {
          PendingCompilationErrorHandler::ReportMessageAt
                    (*(PendingCompilationErrorHandler **)(this + 0xb0),uVar20 & 0xffffffff,
                     uVar20 >> 0x20,0xf3,"use strict");
          lVar19 = *(long *)(this + 0x158);
          if (*(char *)(lVar19 + 0x30) == '\0') {
            *(undefined4 *)(this + 0x160) = 0xffffffff;
            *(undefined1 *)(lVar19 + 0x30) = 1;
            *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)(lVar19 + 0x18);
            this[0x1a0] = (Parser)0x6d;
            this[0x1f0] = (Parser)0x6d;
            this[0x240] = (Parser)0x6d;
          }
          goto LAB_0115415c;
        }
      }
      else if (bVar4) {
        *(int *)(this + 0x310) = *(int *)(this + 0x310) + 1;
        this_00 = (DeclarationScope *)Scope::AsDeclarationScope();
        DeclarationScope::set_is_asm_module(this_00);
        *(uint *)(*(long *)(this + 0x138) + 8) = *(uint *)(*(long *)(this + 0x138) + 8) | 0x8000;
      }
      else {
        lVar16 = *(long *)this;
        uVar1 = *(ushort *)(lVar16 + 0x81);
        lVar19 = 0x20;
        if ((uVar1 & 1) != 0) {
          lVar19 = 0x24;
        }
        *(int *)(this + lVar19 + 0x310) = *(int *)(this + lVar19 + 0x310) + 1;
        *(ushort *)(lVar16 + 0x81) = *(ushort *)(lVar16 + 0x81) & 0xfffe | uVar1 & 1;
      }
      puVar15 = *(ulong **)(*(long *)(this + 0xf8) + 8);
    } while ((char)puVar15[7] == 'Z');
    lVar19 = *(long *)(this + 0xf8);
  }
  uVar6 = *(undefined8 *)(this + 0x300);
  *(undefined8 *)(this + 0x300) = 0;
  lVar19 = *(long *)(lVar19 + 8);
  while ((*(char *)(lVar19 + 0x38) != '\r' &&
         (pVVar8 = (VariableProxy *)
                   ParserBase<v8::internal::Parser>::ParseStatementListItem
                             ((ParserBase<v8::internal::Parser> *)this),
         pVVar8 != (VariableProxy *)0x0))) {
    if ((*(uint *)(pVVar8 + 4) & 0x3f) != 10) {
      local_78 = pVVar8;
      if (*(undefined8 **)(local_90 + 8) < *(undefined8 **)(local_90 + 0x10)) {
        **(undefined8 **)(local_90 + 8) = pVVar8;
        *(long *)(local_90 + 8) = *(long *)(local_90 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_90,&local_78);
      }
      local_80 = local_80 + 1;
    }
    lVar19 = *(long *)(*(long *)(this + 0xf8) + 8);
  }
  *(undefined8 *)(this + 0x300) = uVar6;
LAB_0115415c:
  pZVar18 = *(Zone **)(this + 0x68);
  puVar12 = *(undefined8 **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)puVar12) < 0x20) {
    puVar12 = (undefined8 *)Zone::NewExpand(pZVar18,0x20);
  }
  else {
    *(undefined8 **)(pZVar18 + 0x10) = puVar12 + 4;
  }
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = 0x47ffffffff;
  puVar12[1] = 0;
  ScopedList<v8::internal::Statement*,void*>::CopyTo
            ((ScopedList<v8::internal::Statement*,void*> *)&local_90,(ZoneList *)(puVar12 + 1),
             *(Zone **)(this + 0x68));
  uVar20 = *(long *)(local_90 + 8) - *(long *)local_90 >> 3;
  if (uStack_88 < uVar20 || uStack_88 - uVar20 == 0) {
    if (uStack_88 < uVar20) {
      *(ulong *)(local_90 + 8) = *(long *)local_90 + uStack_88 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_90,uStack_88 - uVar20);
  }
  pZVar18 = *(Zone **)(this + 0xb8);
  uVar6 = *(undefined8 *)this;
  pSVar9 = *(Scope **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pSVar9) < 0x88) {
    pSVar9 = (Scope *)Zone::NewExpand(pZVar18,0x88);
  }
  else {
    *(Scope **)(pZVar18 + 0x10) = pSVar9 + 0x88;
  }
  Scope::Scope(pSVar9,*(undefined8 *)(this + 0xb8),uVar6,5);
  Scope::DeclareLocal(pSVar9,*(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x108),2,0,
                      &local_90,1);
  *(ushort *)(pSVar9 + 0x81) = *(ushort *)(pSVar9 + 0x81) | 0x10;
  uStack_88 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  local_90 = pPVar14;
  local_80 = uStack_88;
  lVar19 = Scope::AsDeclarationScope();
  if (*(long *)(lVar19 + 0xd8) == 0) {
    pVVar21 = (Variable *)0x0;
  }
  else {
    pVVar21 = *(Variable **)(*(long *)(lVar19 + 0xd8) + 8);
  }
  pZVar18 = *(Zone **)(this + 0x68);
  pVVar8 = *(VariableProxy **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pVVar8) < 0x18) {
    pVVar8 = (VariableProxy *)Zone::NewExpand(pZVar18,0x18);
  }
  else {
    *(VariableProxy **)(pZVar18 + 0x10) = pVVar8 + 0x18;
  }
  VariableProxy::VariableProxy(pVVar8,pVVar21,-1);
  local_78 = pVVar8;
  if (*(undefined8 **)(local_90 + 8) < *(undefined8 **)(local_90 + 0x10)) {
    **(undefined8 **)(local_90 + 8) = pVVar8;
    *(long *)(local_90 + 8) = *(long *)(local_90 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_90,&local_78);
  }
  local_80 = local_80 + 1;
  plVar3 = *(long **)(pSVar9 + 0x20);
  do {
    plVar17 = plVar3;
    plVar3 = plVar17 + 3;
  } while (*plVar17 == 0);
  pZVar18 = *(Zone **)(this + 0x68);
  pVVar21 = (Variable *)plVar17[1];
  pVVar8 = *(VariableProxy **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pVVar8) < 0x18) {
    pVVar8 = (VariableProxy *)Zone::NewExpand(pZVar18,0x18);
  }
  else {
    *(VariableProxy **)(pZVar18 + 0x10) = pVVar8 + 0x18;
  }
  VariableProxy::VariableProxy(pVVar8,pVVar21,-1);
  local_78 = pVVar8;
  if (*(undefined8 **)(local_90 + 8) < *(undefined8 **)(local_90 + 0x10)) {
    **(undefined8 **)(local_90 + 8) = pVVar8;
    *(long *)(local_90 + 8) = *(long *)(local_90 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_90,&local_78);
  }
  local_80 = local_80 + 1;
  pZVar18 = *(Zone **)(this + 0x68);
  puVar13 = *(undefined8 **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)puVar13) < 0x28) {
    puVar13 = (undefined8 *)Zone::NewExpand(pZVar18,0x28);
  }
  else {
    *(undefined8 **)(pZVar18 + 0x10) = puVar13 + 5;
  }
  pZVar18 = *(Zone **)(this + 0x68);
  uVar6 = Runtime::FunctionForId(0x1e5);
  puVar13[2] = uVar6;
  *puVar13 = 0x1effffffff;
  puVar13[3] = 0;
  puVar13[4] = 0;
  ScopedList<v8::internal::Expression*,void*>::CopyTo
            ((ScopedList<v8::internal::Expression*,void*> *)&local_90,(ZoneList *)(puVar13 + 3),
             pZVar18);
  pZVar18 = *(Zone **)(this + 0x68);
  puVar10 = *(undefined8 **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)puVar10) < 0x18) {
    puVar10 = (undefined8 *)Zone::NewExpand(pZVar18,0x18);
  }
  else {
    *(undefined8 **)(pZVar18 + 0x10) = puVar10 + 3;
  }
  puVar10[1] = puVar13;
  *(undefined4 *)(puVar10 + 2) = 0xffffffff;
  *puVar10 = 0xfffffffff;
  pZVar18 = *(Zone **)(this + 0x68);
  puVar13 = *(undefined8 **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)puVar13) < 0x20) {
    puVar13 = (undefined8 *)Zone::NewExpand(pZVar18,0x20);
  }
  else {
    *(undefined8 **)(pZVar18 + 0x10) = puVar13 + 4;
  }
  pZVar18 = *(Zone **)(this + 0x68);
  *puVar13 = 0x47ffffffff;
  puVar11 = *(undefined8 **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)puVar11) < 8) {
    puVar11 = (undefined8 *)Zone::NewExpand(pZVar18,8);
  }
  else {
    *(undefined8 **)(pZVar18 + 0x10) = puVar11 + 1;
  }
  puVar13[1] = puVar11;
  puVar13[3] = 0;
  puVar13[2] = 0x100000001;
  *(uint *)((long)puVar13 + 4) = *(uint *)((long)puVar13 + 4) | 0x80;
  *puVar11 = puVar10;
  uVar20 = *(long *)(local_90 + 8) - *(long *)local_90 >> 3;
  if (uStack_88 < uVar20 || uStack_88 - uVar20 == 0) {
    if (uStack_88 < uVar20) {
      *(ulong *)(local_90 + 8) = *(long *)local_90 + uStack_88 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_90,uStack_88 - uVar20);
  }
  uStack_88 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  pZVar18 = *(Zone **)(this + 0x68);
  pVVar8 = *(VariableProxy **)(pZVar18 + 0x10);
  local_80 = uStack_88;
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pVVar8) < 0x28) {
    local_90 = pPVar14;
    pVVar8 = (VariableProxy *)Zone::NewExpand(pZVar18,0x28);
  }
  else {
    *(VariableProxy **)(pZVar18 + 0x10) = pVVar8 + 0x28;
    local_90 = pPVar14;
  }
  *(undefined8 **)(pVVar8 + 8) = puVar12;
  *(Scope **)(pVVar8 + 0x10) = pSVar9;
  *(undefined8 **)(pVVar8 + 0x18) = puVar13;
  *(undefined4 *)(pVVar8 + 0x20) = 4;
  *(undefined8 *)pVVar8 = 0x11ffffffff;
  local_78 = pVVar8;
  if (*(undefined8 **)(local_90 + 8) < *(undefined8 **)(local_90 + 0x10)) {
    **(undefined8 **)(local_90 + 8) = pVVar8;
    *(long *)(local_90 + 8) = *(long *)(local_90 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_90,&local_78);
  }
  local_80 = local_80 + 1;
  pZVar18 = *(Zone **)(this + 0x68);
  puVar12 = *(undefined8 **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)puVar12) < 0x20) {
    puVar12 = (undefined8 *)Zone::NewExpand(pZVar18,0x20);
  }
  else {
    *(undefined8 **)(pZVar18 + 0x10) = puVar12 + 4;
  }
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = 0x47ffffffff;
  puVar12[1] = 0;
  ScopedList<v8::internal::Statement*,void*>::CopyTo
            ((ScopedList<v8::internal::Statement*,void*> *)&local_90,(ZoneList *)(puVar12 + 1),
             *(Zone **)(this + 0x68));
  uVar20 = *(long *)(local_90 + 8) - *(long *)local_90 >> 3;
  if (uStack_88 < uVar20 || uStack_88 - uVar20 == 0) {
    if (uStack_88 < uVar20) {
      *(ulong *)(local_90 + 8) = *(long *)local_90 + uStack_88 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_90,uStack_88 - uVar20);
  }
  uStack_88 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  local_90 = pPVar14;
  local_80 = uStack_88;
  lVar19 = Scope::AsDeclarationScope();
  if (*(long *)(lVar19 + 0xd8) == 0) {
    pVVar21 = (Variable *)0x0;
  }
  else {
    pVVar21 = *(Variable **)(*(long *)(lVar19 + 0xd8) + 8);
  }
  pZVar18 = *(Zone **)(this + 0x68);
  pVVar8 = *(VariableProxy **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pVVar8) < 0x18) {
    pVVar8 = (VariableProxy *)Zone::NewExpand(pZVar18,0x18);
    this_02 = local_90;
  }
  else {
    *(VariableProxy **)(pZVar18 + 0x10) = pVVar8 + 0x18;
    this_02 = pPVar14;
  }
  VariableProxy::VariableProxy(pVVar8,pVVar21,-1);
  local_78 = pVVar8;
  if (*(undefined8 **)(this_02 + 8) < *(undefined8 **)(this_02 + 0x10)) {
    **(undefined8 **)(this_02 + 8) = pVVar8;
    *(long *)(this_02 + 8) = *(long *)(this_02 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              ((vector<void*,std::__ndk1::allocator<void*>> *)this_02,&local_78);
  }
  local_80 = local_80 + 1;
  pZVar18 = *(Zone **)(this + 0x68);
  puVar13 = *(undefined8 **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)puVar13) < 0x28) {
    puVar13 = (undefined8 *)Zone::NewExpand(pZVar18,0x28);
  }
  else {
    *(undefined8 **)(pZVar18 + 0x10) = puVar13 + 5;
  }
  pZVar18 = *(Zone **)(this + 0x68);
  uVar6 = Runtime::FunctionForId(0x1e9);
  *puVar13 = 0x1effffffff;
  puVar13[2] = uVar6;
  puVar13[3] = 0;
  puVar13[4] = 0;
  ScopedList<v8::internal::Expression*,void*>::CopyTo
            ((ScopedList<v8::internal::Expression*,void*> *)&local_90,(ZoneList *)(puVar13 + 3),
             pZVar18);
  uVar20 = *(long *)(local_90 + 8) - *(long *)local_90 >> 3;
  if (uStack_88 < uVar20 || uStack_88 - uVar20 == 0) {
    if (uStack_88 < uVar20) {
      *(ulong *)(local_90 + 8) = *(long *)local_90 + uStack_88 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_90,uStack_88 - uVar20);
  }
  uStack_88 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  pZVar18 = *(Zone **)(this + 0x68);
  pVVar8 = *(VariableProxy **)(pZVar18 + 0x10);
  local_80 = uStack_88;
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pVVar8) < 0x10) {
    local_90 = pPVar14;
    pVVar8 = (VariableProxy *)Zone::NewExpand(pZVar18,0x10);
  }
  else {
    *(VariableProxy **)(pZVar18 + 0x10) = pVVar8 + 0x10;
    local_90 = pPVar14;
  }
  *(undefined8 *)pVVar8 = 0x9ffffffff;
  *(undefined8 **)(pVVar8 + 8) = puVar13;
  local_78 = pVVar8;
  if (*(undefined8 **)(local_90 + 8) < *(undefined8 **)(local_90 + 0x10)) {
    **(undefined8 **)(local_90 + 8) = pVVar8;
    *(long *)(local_90 + 8) = *(long *)(local_90 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_90,&local_78);
  }
  local_80 = local_80 + 1;
  pZVar18 = *(Zone **)(this + 0x68);
  puVar13 = *(undefined8 **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)puVar13) < 0x20) {
    puVar13 = (undefined8 *)Zone::NewExpand(pZVar18,0x20);
  }
  else {
    *(undefined8 **)(pZVar18 + 0x10) = puVar13 + 4;
  }
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0x47ffffffff;
  puVar13[1] = 0;
  ScopedList<v8::internal::Statement*,void*>::CopyTo
            ((ScopedList<v8::internal::Statement*,void*> *)&local_90,(ZoneList *)(puVar13 + 1),
             *(Zone **)(this + 0x68));
  uVar20 = *(long *)(local_90 + 8) - *(long *)local_90 >> 3;
  if (uStack_88 < uVar20 || uStack_88 - uVar20 == 0) {
    if (uStack_88 < uVar20) {
      *(ulong *)(local_90 + 8) = *(long *)local_90 + uStack_88 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_90,uStack_88 - uVar20);
  }
  pZVar18 = *(Zone **)(this + 0x68);
  pPVar14 = *(Parser **)(pZVar18 + 0x10);
  if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pPVar14) < 0x18) {
    pPVar14 = (Parser *)Zone::NewExpand(pZVar18,0x18);
  }
  else {
    *(Parser **)(pZVar18 + 0x10) = pPVar14 + 0x18;
  }
  *(undefined8 **)(pPVar14 + 8) = puVar12;
  *(undefined8 **)(pPVar14 + 0x10) = puVar13;
  *(undefined8 *)pPVar14 = 0x12ffffffff;
  this_01 = (vector<void*,std::__ndk1::allocator<void*>> *)*param_4;
  if (*(undefined8 **)(this_01 + 8) < *(undefined8 **)(this_01 + 0x10)) {
    **(undefined8 **)(this_01 + 8) = pPVar14;
    *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
  }
  else {
    local_90 = pPVar14;
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              (this_01,&local_90);
  }
  param_4[2] = param_4[2] + 1;
  return;
}

