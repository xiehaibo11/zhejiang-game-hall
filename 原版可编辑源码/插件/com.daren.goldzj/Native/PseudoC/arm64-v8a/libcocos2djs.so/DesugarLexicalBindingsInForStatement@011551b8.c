
/* v8::internal::Parser::DesugarLexicalBindingsInForStatement(v8::internal::ForStatement*,
   v8::internal::Statement*, v8::internal::Expression*, v8::internal::Statement*,
   v8::internal::Statement*, v8::internal::Scope*,
   v8::internal::ParserBase<v8::internal::Parser>::ForInfo const&) */

undefined8 * __thiscall
v8::internal::Parser::DesugarLexicalBindingsInForStatement
          (Parser *this,ForStatement *param_1,Statement *param_2,Expression *param_3,
          Statement *param_4,Statement *param_5,Scope *param_6,ForInfo *param_7)

{
  uint uVar1;
  ForInfo FVar2;
  Zone *pZVar3;
  Variable *pVVar4;
  Variable *pVVar5;
  VariableProxy *pVVar6;
  Assignment *pAVar7;
  Assignment *pAVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  VariableProxy *pVVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  AstRawString *pAVar23;
  ulong uVar24;
  Parser *pPVar25;
  long lVar26;
  vector<void*,std::__ndk1::allocator<void*>> *this_00;
  Scope *this_01;
  ulong uVar27;
  int iVar28;
  Assignment *pAVar29;
  undefined8 uVar30;
  void *pvVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  Variable *local_88;
  
  this_00 = (vector<void*,std::__ndk1::allocator<void*>> *)(this + 200);
  lVar21 = *(long *)this_00;
  lVar22 = *(long *)(this + 0xd0);
  pPVar25 = this + 0x68;
  pZVar3 = *(Zone **)pPVar25;
  uVar27 = (long)*(int *)(param_7 + 0xc) + 4;
  puVar9 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar9) < 0x20) {
    puVar9 = (undefined8 *)Zone::NewExpand(pZVar3,0x20);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar9 + 4;
  }
  pZVar3 = *(Zone **)pPVar25;
  iVar28 = (int)uVar27;
  *puVar9 = 0x47ffffffff;
  if (iVar28 < 1) {
    puVar33 = (undefined8 *)0x0;
    uVar18 = 0x47;
  }
  else {
    puVar33 = *(undefined8 **)(pZVar3 + 0x10);
    uVar17 = (uVar27 & 0xffffffff) * 8;
    if (uVar17 < (ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar33) ||
        uVar17 - (*(long *)(pZVar3 + 0x18) - (long)puVar33) == 0) {
      *(undefined8 **)(pZVar3 + 0x10) = puVar33 + (uVar27 & 0xffffffff);
    }
    else {
      puVar33 = (undefined8 *)Zone::NewExpand(pZVar3,uVar17);
    }
    uVar18 = *(undefined4 *)((long)puVar9 + 4);
  }
  puVar9[1] = puVar33;
  *(int *)(puVar9 + 2) = iVar28;
  *(undefined4 *)((long)puVar9 + 0x14) = 0;
  puVar9[3] = 0;
  *(undefined4 *)((long)puVar9 + 4) = uVar18;
  if (iVar28 < 1) {
    pZVar3 = *(Zone **)(this + 0xb8);
    uVar27 = uVar27 * 2 | 1;
    uVar17 = uVar27 * 8;
    pvVar31 = *(void **)(pZVar3 + 0x10);
    if (uVar17 < (ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar31) ||
        uVar17 - (*(long *)(pZVar3 + 0x18) - (long)pvVar31) == 0) {
      *(void **)(pZVar3 + 0x10) = (void *)((long)pvVar31 + uVar17);
    }
    else {
      pvVar31 = (void *)Zone::NewExpand(pZVar3,uVar17);
    }
    uVar19 = *(uint *)((long)puVar9 + 0x14);
    if (0 < (int)uVar19) {
      MemCopy(pvVar31,(void *)puVar9[1],(ulong)uVar19 << 3);
      uVar19 = *(uint *)((long)puVar9 + 0x14);
    }
    puVar33 = (undefined8 *)((long)pvVar31 + (long)(int)uVar19 * 8);
    puVar9[1] = pvVar31;
    *(int *)(puVar9 + 2) = (int)uVar27;
    *(uint *)((long)puVar9 + 0x14) = uVar19 + 1;
  }
  else {
    *(undefined4 *)((long)puVar9 + 0x14) = 1;
  }
  *puVar33 = param_2;
  pAVar23 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xd8);
  if (*(int *)(param_7 + 0xc) != 0) {
    puVar33 = *(undefined8 **)param_7;
    lVar26 = (long)*(int *)(param_7 + 0xc) << 3;
    do {
      pZVar3 = *(Zone **)(this + 0x68);
      uVar30 = *puVar33;
      this_01 = *(Scope **)this;
      pVVar11 = *(VariableProxy **)(pZVar3 + 0x10);
      uVar18 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar11) < 0x18) {
        pVVar11 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(VariableProxy **)(pZVar3 + 0x10) = pVVar11 + 0x18;
      }
      *(undefined8 *)(pVVar11 + 8) = uVar30;
      *(undefined8 *)(pVVar11 + 0x10) = 0;
      *(undefined4 *)pVVar11 = uVar18;
      *(undefined4 *)(pVVar11 + 4) = 0x835;
      Scope::AddUnresolved(this_01,pVVar11);
      pVVar4 = (Variable *)Scope::NewTemporary(*(Scope **)this,pAVar23);
      pZVar3 = *(Zone **)(this + 0x68);
      pVVar6 = *(VariableProxy **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar6) < 0x18) {
        pVVar6 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(VariableProxy **)(pZVar3 + 0x10) = pVVar6 + 0x18;
      }
      VariableProxy::VariableProxy(pVVar6,pVVar4,-1);
      uVar19 = *(uint *)(pVVar6 + 4);
      if (((uVar19 & 0x3f) == 0x35) &&
         (*(uint *)(pVVar6 + 4) = uVar19 | 0x80, (uVar19 >> 8 & 1) != 0)) {
        Variable::SetMaybeAssigned(*(Variable **)(pVVar6 + 8));
      }
      pZVar3 = *(Zone **)pPVar25;
      pAVar8 = *(Assignment **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pAVar8) < 0x18) {
        pAVar8 = (Assignment *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(Assignment **)(pZVar3 + 0x10) = pAVar8 + 0x18;
      }
      Assignment::Assignment(pAVar8,0x18,0x11,pVVar6,pVVar11,0xffffffff);
      pZVar3 = *(Zone **)pPVar25;
      puVar10 = *(undefined8 **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar10) < 0x10) {
        puVar10 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
      }
      else {
        *(undefined8 **)(pZVar3 + 0x10) = puVar10 + 2;
      }
      *puVar10 = 0x9ffffffff;
      puVar10[1] = pAVar8;
      uVar19 = *(uint *)(puVar9 + 2);
      uVar20 = *(uint *)((long)puVar9 + 0x14);
      if ((int)uVar20 < (int)uVar19) {
        pvVar31 = (void *)puVar9[1];
      }
      else {
        pZVar3 = *(Zone **)(this + 0xb8);
        uVar1 = uVar19 << 1 | 1;
        uVar27 = -(ulong)((uVar19 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        pvVar31 = *(void **)(pZVar3 + 0x10);
        if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar31) < uVar27) {
          pvVar31 = (void *)Zone::NewExpand(pZVar3,uVar27);
        }
        else {
          *(ulong *)(pZVar3 + 0x10) = (long)pvVar31 + uVar27;
        }
        uVar20 = *(uint *)((long)puVar9 + 0x14);
        if (0 < (int)uVar20) {
          MemCopy(pvVar31,(void *)puVar9[1],(ulong)uVar20 << 3);
          uVar20 = *(uint *)((long)puVar9 + 0x14);
        }
        puVar9[1] = pvVar31;
        *(uint *)(puVar9 + 2) = uVar1;
      }
      *(uint *)((long)puVar9 + 0x14) = uVar20 + 1;
      *(undefined8 **)((long)pvVar31 + (long)(int)uVar20 * 8) = puVar10;
      local_88 = pVVar4;
      if (*(undefined8 **)(this + 0xd0) < *(undefined8 **)(this + 0xd8)) {
        **(undefined8 **)(this + 0xd0) = pVVar4;
        *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  (this_00,&local_88);
      }
      lVar26 = lVar26 + -8;
      puVar33 = puVar33 + 1;
    } while (lVar26 != 0);
  }
  if (param_4 == (Statement *)0x0) {
    pVVar4 = (Variable *)0x0;
  }
  else {
    pVVar4 = (Variable *)Scope::NewTemporary(*(Scope **)this,pAVar23);
    pZVar3 = *(Zone **)(this + 0x68);
    pVVar11 = *(VariableProxy **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar11) < 0x18) {
      pVVar11 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
    }
    else {
      *(VariableProxy **)(pZVar3 + 0x10) = pVVar11 + 0x18;
    }
    VariableProxy::VariableProxy(pVVar11,pVVar4,-1);
    pZVar3 = *(Zone **)pPVar25;
    puVar33 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar33) < 0x10) {
      puVar33 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar33 + 2;
    }
    *(undefined4 *)(puVar33 + 1) = 1;
    *puVar33 = 0x29ffffffff;
    uVar19 = *(uint *)(pVVar11 + 4);
    if (((uVar19 & 0x3f) == 0x35) &&
       (*(uint *)(pVVar11 + 4) = uVar19 | 0x80, (uVar19 >> 8 & 1) != 0)) {
      Variable::SetMaybeAssigned(*(Variable **)(pVVar11 + 8));
    }
    pZVar3 = *(Zone **)pPVar25;
    pAVar8 = *(Assignment **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pAVar8) < 0x18) {
      pAVar8 = (Assignment *)Zone::NewExpand(pZVar3,0x18);
    }
    else {
      *(Assignment **)(pZVar3 + 0x10) = pAVar8 + 0x18;
    }
    Assignment::Assignment(pAVar8,0x18,0x11,pVVar11,puVar33,0xffffffff);
    pZVar3 = *(Zone **)pPVar25;
    puVar33 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar33) < 0x10) {
      puVar33 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar33 + 2;
    }
    puVar33[1] = pAVar8;
    *puVar33 = 0x9ffffffff;
    uVar19 = *(uint *)(puVar9 + 2);
    uVar20 = *(uint *)((long)puVar9 + 0x14);
    if ((int)uVar20 < (int)uVar19) {
      pvVar31 = (void *)puVar9[1];
    }
    else {
      pZVar3 = *(Zone **)(this + 0xb8);
      uVar1 = uVar19 << 1 | 1;
      uVar27 = -(ulong)((uVar19 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      pvVar31 = *(void **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar31) < uVar27) {
        pvVar31 = (void *)Zone::NewExpand(pZVar3,uVar27);
      }
      else {
        *(ulong *)(pZVar3 + 0x10) = (long)pvVar31 + uVar27;
      }
      uVar20 = *(uint *)((long)puVar9 + 0x14);
      if (0 < (int)uVar20) {
        MemCopy(pvVar31,(void *)puVar9[1],(ulong)uVar20 << 3);
        uVar20 = *(uint *)((long)puVar9 + 0x14);
      }
      puVar9[1] = pvVar31;
      *(uint *)(puVar9 + 2) = uVar1;
    }
    *(uint *)((long)puVar9 + 0x14) = uVar20 + 1;
    *(undefined8 **)((long)pvVar31 + (long)(int)uVar20 * 8) = puVar33;
  }
  pZVar3 = *(Zone **)pPVar25;
  puVar33 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar33) < 0x10) {
    puVar33 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar33 + 2;
  }
  *puVar33 = 0x329ffffffff;
  pZVar3 = *(Zone **)pPVar25;
  puVar10 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar10) < 0x10) {
    puVar10 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar10 + 2;
  }
  puVar10[1] = puVar33;
  *puVar10 = 0x9ffffffff;
  uVar19 = *(uint *)(puVar9 + 2);
  uVar20 = *(uint *)((long)puVar9 + 0x14);
  if ((int)uVar20 < (int)uVar19) {
    pvVar31 = (void *)puVar9[1];
  }
  else {
    pZVar3 = *(Zone **)(this + 0xb8);
    uVar1 = uVar19 << 1 | 1;
    uVar27 = -(ulong)((uVar19 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar31 = *(void **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar31) < uVar27) {
      pvVar31 = (void *)Zone::NewExpand(pZVar3,uVar27);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = (long)pvVar31 + uVar27;
    }
    uVar20 = *(uint *)((long)puVar9 + 0x14);
    if (0 < (int)uVar20) {
      MemCopy(pvVar31,(void *)puVar9[1],(ulong)uVar20 << 3);
      uVar20 = *(uint *)((long)puVar9 + 0x14);
    }
    puVar9[1] = pvVar31;
    *(uint *)(puVar9 + 2) = uVar1;
  }
  *(uint *)((long)puVar9 + 0x14) = uVar20 + 1;
  *(undefined8 **)((long)pvVar31 + (long)(int)uVar20 * 8) = puVar10;
  pZVar3 = *(Zone **)pPVar25;
  puVar33 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar33) < 0x38) {
    puVar33 = (undefined8 *)Zone::NewExpand(pZVar3,0x38);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar33 + 7;
  }
  puVar33[2] = 0;
  puVar33[1] = 0;
  puVar33[4] = 0;
  puVar33[3] = 0;
  puVar33[6] = 0;
  puVar33[5] = 0;
  *puVar33 = 0x4ffffffff;
  uVar19 = *(uint *)(puVar9 + 2);
  uVar20 = *(uint *)((long)puVar9 + 0x14);
  if ((int)uVar20 < (int)uVar19) {
    pvVar31 = (void *)puVar9[1];
  }
  else {
    pZVar3 = *(Zone **)(this + 0xb8);
    uVar1 = uVar19 << 1 | 1;
    uVar27 = -(ulong)((uVar19 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar31 = *(void **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar31) < uVar27) {
      pvVar31 = (void *)Zone::NewExpand(pZVar3,uVar27);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = (long)pvVar31 + uVar27;
    }
    uVar20 = *(uint *)((long)puVar9 + 0x14);
    if (0 < (int)uVar20) {
      MemCopy(pvVar31,(void *)puVar9[1],(ulong)uVar20 << 3);
      uVar20 = *(uint *)((long)puVar9 + 0x14);
    }
    puVar9[1] = pvVar31;
    *(uint *)(puVar9 + 2) = uVar1;
  }
  *(uint *)((long)puVar9 + 0x14) = uVar20 + 1;
  *(undefined8 **)((long)pvVar31 + (long)(int)uVar20 * 8) = puVar33;
  puVar9[3] = *(undefined8 *)this;
  pZVar3 = *(Zone **)(this + 0x68);
  puVar10 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar10) < 0x20) {
    puVar10 = (undefined8 *)Zone::NewExpand(pZVar3,0x20);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar10 + 4;
  }
  pZVar3 = *(Zone **)pPVar25;
  *puVar10 = 0x47ffffffff;
  lVar26 = *(long *)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - lVar26) < 0x18) {
    lVar26 = Zone::NewExpand(pZVar3,0x18);
  }
  else {
    *(long *)(pZVar3 + 0x10) = lVar26 + 0x18;
  }
  puVar10[1] = lVar26;
  puVar10[3] = 0;
  puVar10[2] = 3;
  uVar30 = *(undefined8 *)this;
  pZVar3 = *(Zone **)(this + 0x68);
  *(Scope **)this = param_6;
  puVar13 = *(undefined8 **)(pZVar3 + 0x10);
  uVar19 = *(int *)(param_7 + 0xc) + 3;
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar13) < 0x20) {
    puVar13 = (undefined8 *)Zone::NewExpand(pZVar3,0x20);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar13 + 4;
  }
  pZVar3 = *(Zone **)pPVar25;
  uVar27 = lVar22 - lVar21 >> 3;
  *puVar13 = 0x47ffffffff;
  if ((int)uVar19 < 1) {
    lVar21 = 0;
    uVar20 = 0x47;
  }
  else {
    lVar21 = *(long *)(pZVar3 + 0x10);
    uVar17 = (ulong)uVar19 * 8;
    if (uVar17 < (ulong)(*(long *)(pZVar3 + 0x18) - lVar21) ||
        uVar17 - (*(long *)(pZVar3 + 0x18) - lVar21) == 0) {
      *(ulong *)(pZVar3 + 0x10) = lVar21 + uVar17;
    }
    else {
      lVar21 = Zone::NewExpand(pZVar3,uVar17);
    }
    uVar20 = *(uint *)((long)puVar13 + 4);
  }
  puVar13[1] = lVar21;
  *(uint *)(puVar13 + 2) = uVar19;
  *(undefined4 *)((long)puVar13 + 0x14) = 0;
  puVar13[3] = 0;
  *(uint *)((long)puVar13 + 4) = uVar20 | 0x80;
  lVar21 = *(long *)(this + 200);
  lVar22 = *(long *)(this + 0xd0);
  if (0 < *(int *)(param_7 + 0xc)) {
    lVar26 = 0;
    do {
      pZVar3 = *(Zone **)(this + 0x68);
      FVar2 = param_7[0x18];
      pVVar11 = *(VariableProxy **)(pZVar3 + 0x10);
      uVar32 = *(undefined8 *)(*(long *)param_7 + lVar26 * 8);
      uVar18 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar11) < 0x18) {
        pVVar11 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(VariableProxy **)(pZVar3 + 0x10) = pVVar11 + 0x18;
      }
      *(undefined8 *)(pVVar11 + 8) = uVar32;
      *(undefined8 *)(pVVar11 + 0x10) = 0;
      *(undefined4 *)pVVar11 = uVar18;
      *(undefined4 *)(pVVar11 + 4) = 0x835;
      pVVar5 = (Variable *)
               DeclareVariable(this,uVar32,0,FVar2,FVar2 == (ForInfo)0x2,*(undefined8 *)this,
                               &local_88,0xffffffff,*(undefined4 *)(**(long **)(this + 0xf8) + 4));
      VariableProxy::BindTo(pVVar11,pVVar5);
      local_88 = *(Variable **)(pVVar11 + 8);
      if (*(undefined8 **)(this + 0xd0) < *(undefined8 **)(this + 0xd8)) {
        **(undefined8 **)(this + 0xd0) = local_88;
        *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  (this_00,&local_88);
      }
      pZVar3 = *(Zone **)pPVar25;
      pVVar6 = *(VariableProxy **)(pZVar3 + 0x10);
      pVVar5 = *(Variable **)(*(long *)this_00 + uVar27 * 8 + lVar26 * 8);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar6) < 0x18) {
        pVVar6 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(VariableProxy **)(pZVar3 + 0x10) = pVVar6 + 0x18;
      }
      VariableProxy::VariableProxy(pVVar6,pVVar5,-1);
      pZVar3 = *(Zone **)pPVar25;
      pAVar8 = *(Assignment **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pAVar8) < 0x18) {
        pAVar8 = (Assignment *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(Assignment **)(pZVar3 + 0x10) = pAVar8 + 0x18;
      }
      Assignment::Assignment(pAVar8,0x18,0x10,pVVar11,pVVar6,0xffffffff);
      pZVar3 = *(Zone **)pPVar25;
      puVar14 = *(undefined8 **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar14) < 0x10) {
        puVar14 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
      }
      else {
        *(undefined8 **)(pZVar3 + 0x10) = puVar14 + 2;
      }
      *puVar14 = 0x9ffffffff;
      puVar14[1] = pAVar8;
      *(undefined4 *)(*(long *)(pVVar11 + 8) + 0x24) = *(undefined4 *)(param_7 + 0x1c);
      uVar19 = *(uint *)(puVar13 + 2);
      uVar20 = *(uint *)((long)puVar13 + 0x14);
      if ((int)uVar20 < (int)uVar19) {
        pvVar31 = (void *)puVar13[1];
      }
      else {
        pZVar3 = *(Zone **)(this + 0xb8);
        uVar1 = uVar19 << 1 | 1;
        uVar17 = -(ulong)((uVar19 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        pvVar31 = *(void **)(pZVar3 + 0x10);
        if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar31) < uVar17) {
          pvVar31 = (void *)Zone::NewExpand(pZVar3,uVar17);
        }
        else {
          *(ulong *)(pZVar3 + 0x10) = (long)pvVar31 + uVar17;
        }
        uVar20 = *(uint *)((long)puVar13 + 0x14);
        if (0 < (int)uVar20) {
          MemCopy(pvVar31,(void *)puVar13[1],(ulong)uVar20 << 3);
          uVar20 = *(uint *)((long)puVar13 + 0x14);
        }
        puVar13[1] = pvVar31;
        *(uint *)(puVar13 + 2) = uVar1;
      }
      *(uint *)((long)puVar13 + 0x14) = uVar20 + 1;
      *(undefined8 **)((long)pvVar31 + (long)(int)uVar20 * 8) = puVar14;
      lVar26 = lVar26 + 1;
    } while (lVar26 < *(int *)(param_7 + 0xc));
  }
  if (param_4 != (Statement *)0x0) {
    pZVar3 = *(Zone **)pPVar25;
    puVar14 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar14) < 0x10) {
      puVar14 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar14 + 2;
    }
    *(undefined4 *)(puVar14 + 1) = 1;
    *puVar14 = 0x29ffffffff;
    pZVar3 = *(Zone **)pPVar25;
    pVVar11 = *(VariableProxy **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar11) < 0x18) {
      pVVar11 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
    }
    else {
      *(VariableProxy **)(pZVar3 + 0x10) = pVVar11 + 0x18;
    }
    VariableProxy::VariableProxy(pVVar11,pVVar4,-1);
    pZVar3 = *(Zone **)pPVar25;
    puVar12 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar12) < 0x18) {
      puVar12 = (undefined8 *)Zone::NewExpand(pZVar3,0x18);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar12 + 3;
    }
    puVar12[1] = pVVar11;
    puVar12[2] = puVar14;
    *puVar12 = 0x1aa0ffffffff;
    pZVar3 = *(Zone **)pPVar25;
    pVVar11 = *(VariableProxy **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar11) < 0x18) {
      pVVar11 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
    }
    else {
      *(VariableProxy **)(pZVar3 + 0x10) = pVVar11 + 0x18;
    }
    VariableProxy::VariableProxy(pVVar11,pVVar4,-1);
    pZVar3 = *(Zone **)pPVar25;
    puVar14 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar14) < 0x10) {
      puVar14 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar14 + 2;
    }
    *(undefined4 *)(puVar14 + 1) = 0;
    *puVar14 = 0x29ffffffff;
    uVar19 = *(uint *)(pVVar11 + 4);
    if (((uVar19 & 0x3f) == 0x35) &&
       (*(uint *)(pVVar11 + 4) = uVar19 | 0x80, (uVar19 >> 8 & 1) != 0)) {
      Variable::SetMaybeAssigned(*(Variable **)(pVVar11 + 8));
    }
    pZVar3 = *(Zone **)pPVar25;
    pAVar8 = *(Assignment **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pAVar8) < 0x18) {
      pAVar8 = (Assignment *)Zone::NewExpand(pZVar3,0x18);
    }
    else {
      *(Assignment **)(pZVar3 + 0x10) = pAVar8 + 0x18;
    }
    Assignment::Assignment(pAVar8,0x18,0x11,pVVar11,puVar14,0xffffffff);
    pZVar3 = *(Zone **)pPVar25;
    puVar14 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar14) < 0x10) {
      puVar14 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar14 + 2;
    }
    *puVar14 = 0x9ffffffff;
    puVar14[1] = pAVar8;
    pZVar3 = *(Zone **)pPVar25;
    puVar15 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar15) < 0x20) {
      puVar15 = (undefined8 *)Zone::NewExpand(pZVar3,0x20);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar15 + 4;
    }
    puVar15[1] = puVar12;
    puVar15[2] = puVar14;
    *puVar15 = 0xcffffffff;
    puVar15[3] = param_4;
    uVar19 = *(uint *)(puVar13 + 2);
    uVar20 = *(uint *)((long)puVar13 + 0x14);
    if ((int)uVar20 < (int)uVar19) {
      pvVar31 = (void *)puVar13[1];
    }
    else {
      pZVar3 = *(Zone **)(this + 0xb8);
      uVar1 = uVar19 << 1 | 1;
      uVar17 = -(ulong)((uVar19 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      pvVar31 = *(void **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar31) < uVar17) {
        pvVar31 = (void *)Zone::NewExpand(pZVar3,uVar17);
      }
      else {
        *(ulong *)(pZVar3 + 0x10) = (long)pvVar31 + uVar17;
      }
      uVar20 = *(uint *)((long)puVar13 + 0x14);
      if (0 < (int)uVar20) {
        MemCopy(pvVar31,(void *)puVar13[1],(ulong)uVar20 << 3);
        uVar20 = *(uint *)((long)puVar13 + 0x14);
      }
      puVar13[1] = pvVar31;
      *(uint *)(puVar13 + 2) = uVar1;
    }
    *(uint *)((long)puVar13 + 0x14) = uVar20 + 1;
    *(undefined8 **)((long)pvVar31 + (long)(int)uVar20 * 8) = puVar15;
  }
  pVVar4 = (Variable *)Scope::NewTemporary(*(Scope **)this,pAVar23);
  pZVar3 = *(Zone **)(this + 0x68);
  pVVar11 = *(VariableProxy **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar11) < 0x18) {
    pVVar11 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
  }
  else {
    *(VariableProxy **)(pZVar3 + 0x10) = pVVar11 + 0x18;
  }
  VariableProxy::VariableProxy(pVVar11,pVVar4,-1);
  pZVar3 = *(Zone **)pPVar25;
  puVar14 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar14) < 0x10) {
    puVar14 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar14 + 2;
  }
  *(undefined4 *)(puVar14 + 1) = 1;
  *puVar14 = 0x29ffffffff;
  uVar19 = *(uint *)(pVVar11 + 4);
  if (((uVar19 & 0x3f) == 0x35) && (*(uint *)(pVVar11 + 4) = uVar19 | 0x80, (uVar19 >> 8 & 1) != 0))
  {
    Variable::SetMaybeAssigned(*(Variable **)(pVVar11 + 8));
  }
  pZVar3 = *(Zone **)pPVar25;
  pAVar8 = *(Assignment **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pAVar8) < 0x18) {
    pAVar8 = (Assignment *)Zone::NewExpand(pZVar3,0x18);
  }
  else {
    *(Assignment **)(pZVar3 + 0x10) = pAVar8 + 0x18;
  }
  Assignment::Assignment(pAVar8,0x18,0x11,pVVar11,puVar14,0xffffffff);
  pZVar3 = *(Zone **)pPVar25;
  puVar14 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar14) < 0x10) {
    puVar14 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar14 + 2;
  }
  *puVar14 = 0x9ffffffff;
  puVar14[1] = pAVar8;
  uVar19 = *(uint *)(puVar13 + 2);
  uVar20 = *(uint *)((long)puVar13 + 0x14);
  if ((int)uVar20 < (int)uVar19) {
    pvVar31 = (void *)puVar13[1];
  }
  else {
    pZVar3 = *(Zone **)(this + 0xb8);
    uVar1 = uVar19 << 1 | 1;
    uVar17 = -(ulong)((uVar19 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar31 = *(void **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar31) < uVar17) {
      pvVar31 = (void *)Zone::NewExpand(pZVar3,uVar17);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = (long)pvVar31 + uVar17;
    }
    uVar20 = *(uint *)((long)puVar13 + 0x14);
    if (0 < (int)uVar20) {
      MemCopy(pvVar31,(void *)puVar13[1],(ulong)uVar20 << 3);
      uVar20 = *(uint *)((long)puVar13 + 0x14);
    }
    puVar13[1] = pvVar31;
    *(uint *)(puVar13 + 2) = uVar1;
  }
  *(uint *)((long)puVar13 + 0x14) = uVar20 + 1;
  *(undefined8 **)((long)pvVar31 + (long)(int)uVar20 * 8) = puVar14;
  if (param_3 != (Expression *)0x0) {
    pZVar3 = *(Zone **)pPVar25;
    puVar14 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar14) < 0x10) {
      puVar14 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar14 + 2;
    }
    *puVar14 = 0xeffffffff;
    puVar14[1] = puVar33;
    pZVar3 = *(Zone **)(this + 0x68);
    uVar32 = *(undefined8 *)(this + 0x78);
    uVar18 = *(undefined4 *)param_3;
    puVar16 = *(undefined4 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar16) < 0x20) {
      puVar16 = (undefined4 *)Zone::NewExpand(pZVar3,0x20);
    }
    else {
      *(undefined4 **)(pZVar3 + 0x10) = puVar16 + 8;
    }
    *(Expression **)(puVar16 + 2) = param_3;
    *(undefined8 *)(puVar16 + 4) = uVar32;
    *(undefined8 **)(puVar16 + 6) = puVar14;
    *puVar16 = uVar18;
    puVar16[1] = 0xc;
    uVar19 = *(uint *)(puVar13 + 2);
    uVar20 = *(uint *)((long)puVar13 + 0x14);
    if ((int)uVar20 < (int)uVar19) {
      pvVar31 = (void *)puVar13[1];
    }
    else {
      pZVar3 = *(Zone **)(this + 0xb8);
      uVar1 = uVar19 << 1 | 1;
      uVar17 = -(ulong)((uVar19 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      pvVar31 = *(void **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar31) < uVar17) {
        pvVar31 = (void *)Zone::NewExpand(pZVar3,uVar17);
      }
      else {
        *(ulong *)(pZVar3 + 0x10) = (long)pvVar31 + uVar17;
      }
      uVar20 = *(uint *)((long)puVar13 + 0x14);
      if (0 < (int)uVar20) {
        MemCopy(pvVar31,(void *)puVar13[1],(ulong)uVar20 << 3);
        uVar20 = *(uint *)((long)puVar13 + 0x14);
      }
      puVar13[1] = pvVar31;
      *(uint *)(puVar13 + 2) = uVar1;
    }
    *(uint *)((long)puVar13 + 0x14) = uVar20 + 1;
    *(undefined4 **)((long)pvVar31 + (long)(int)uVar20 * 8) = puVar16;
  }
  uVar19 = *(uint *)(puVar10 + 2);
  uVar20 = *(uint *)((long)puVar10 + 0x14);
  if ((int)uVar20 < (int)uVar19) {
    pvVar31 = (void *)puVar10[1];
  }
  else {
    pZVar3 = *(Zone **)(this + 0xb8);
    uVar1 = uVar19 << 1 | 1;
    uVar17 = -(ulong)((uVar19 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar31 = *(void **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar31) < uVar17) {
      pvVar31 = (void *)Zone::NewExpand(pZVar3,uVar17);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = (long)pvVar31 + uVar17;
    }
    uVar20 = *(uint *)((long)puVar10 + 0x14);
    if (0 < (int)uVar20) {
      MemCopy(pvVar31,(void *)puVar10[1],(ulong)uVar20 << 3);
      uVar20 = *(uint *)((long)puVar10 + 0x14);
    }
    puVar10[1] = pvVar31;
    *(uint *)(puVar10 + 2) = uVar1;
  }
  *(uint *)((long)puVar10 + 0x14) = uVar20 + 1;
  *(undefined8 **)((long)pvVar31 + (long)(int)uVar20 * 8) = puVar13;
  pZVar3 = *(Zone **)pPVar25;
  puVar13 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar13) < 0x10) {
    puVar13 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar13 + 2;
  }
  *puVar13 = 0x29ffffffff;
  *(undefined4 *)(puVar13 + 1) = 1;
  pZVar3 = *(Zone **)pPVar25;
  pVVar11 = *(VariableProxy **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar11) < 0x18) {
    pVVar11 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
  }
  else {
    *(VariableProxy **)(pZVar3 + 0x10) = pVVar11 + 0x18;
  }
  VariableProxy::VariableProxy(pVVar11,pVVar4,-1);
  pZVar3 = *(Zone **)pPVar25;
  puVar14 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar14) < 0x18) {
    puVar14 = (undefined8 *)Zone::NewExpand(pZVar3,0x18);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar14 + 3;
  }
  puVar14[1] = pVVar11;
  puVar14[2] = puVar13;
  *puVar14 = 0x1aa0ffffffff;
  pZVar3 = *(Zone **)pPVar25;
  pVVar11 = *(VariableProxy **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar11) < 0x18) {
    pVVar11 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
  }
  else {
    *(VariableProxy **)(pZVar3 + 0x10) = pVVar11 + 0x18;
  }
  VariableProxy::VariableProxy(pVVar11,pVVar4,-1);
  pZVar3 = *(Zone **)pPVar25;
  puVar13 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar13) < 0x10) {
    puVar13 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar13 + 2;
  }
  *(undefined4 *)(puVar13 + 1) = 0;
  *puVar13 = 0x29ffffffff;
  uVar19 = *(uint *)(pVVar11 + 4);
  if (((uVar19 & 0x3f) == 0x35) && (*(uint *)(pVVar11 + 4) = uVar19 | 0x80, (uVar19 >> 8 & 1) != 0))
  {
    Variable::SetMaybeAssigned(*(Variable **)(pVVar11 + 8));
  }
  pZVar3 = *(Zone **)pPVar25;
  pAVar8 = *(Assignment **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pAVar8) < 0x18) {
    pAVar8 = (Assignment *)Zone::NewExpand(pZVar3,0x18);
  }
  else {
    *(Assignment **)(pZVar3 + 0x10) = pAVar8 + 0x18;
  }
  uVar17 = lVar22 - lVar21 >> 3;
  Assignment::Assignment(pAVar8,0x18,0x11,pVVar11,puVar13,0xffffffff);
  if (0 < *(int *)(param_7 + 0xc)) {
    lVar21 = 0;
    iVar28 = *(int *)**(undefined8 **)(this + 0xf8);
    pAVar29 = pAVar8;
    do {
      pZVar3 = *(Zone **)pPVar25;
      pVVar11 = *(VariableProxy **)(pZVar3 + 0x10);
      pVVar5 = *(Variable **)(*(long *)this_00 + uVar27 * 8 + lVar21 * 8);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar11) < 0x18) {
        pVVar11 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(VariableProxy **)(pZVar3 + 0x10) = pVVar11 + 0x18;
      }
      VariableProxy::VariableProxy(pVVar11,pVVar5,-1);
      pZVar3 = *(Zone **)pPVar25;
      pVVar6 = *(VariableProxy **)(pZVar3 + 0x10);
      pVVar5 = *(Variable **)(*(long *)this_00 + uVar17 * 8 + lVar21 * 8);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar6) < 0x18) {
        pVVar6 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(VariableProxy **)(pZVar3 + 0x10) = pVVar6 + 0x18;
      }
      VariableProxy::VariableProxy(pVVar6,pVVar5,iVar28);
      uVar19 = *(uint *)(pVVar11 + 4);
      if (((uVar19 & 0x3f) == 0x35) &&
         (*(uint *)(pVVar11 + 4) = uVar19 | 0x80, (uVar19 >> 8 & 1) != 0)) {
        Variable::SetMaybeAssigned(*(Variable **)(pVVar11 + 8));
      }
      pZVar3 = *(Zone **)pPVar25;
      pAVar7 = *(Assignment **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pAVar7) < 0x18) {
        pAVar7 = (Assignment *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(Assignment **)(pZVar3 + 0x10) = pAVar7 + 0x18;
      }
      Assignment::Assignment(pAVar7,0x18,0x11,pVVar11,pVVar6,0xffffffff);
      pZVar3 = *(Zone **)pPVar25;
      pAVar8 = *(Assignment **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pAVar8) < 0x18) {
        pAVar8 = (Assignment *)Zone::NewExpand(pZVar3,0x18);
      }
      else {
        *(Assignment **)(pZVar3 + 0x10) = pAVar8 + 0x18;
      }
      *(Assignment **)(pAVar8 + 8) = pAVar29;
      *(Assignment **)(pAVar8 + 0x10) = pAVar7;
      *(undefined8 *)pAVar8 = 0xf1affffffff;
      lVar21 = lVar21 + 1;
      pAVar29 = pAVar8;
    } while (lVar21 < *(int *)(param_7 + 0xc));
  }
  pZVar3 = *(Zone **)pPVar25;
  puVar13 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar13) < 0x10) {
    puVar13 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar13 + 2;
  }
  *puVar13 = 0x9ffffffff;
  puVar13[1] = pAVar8;
  *(Statement **)(param_1 + 0x18) = param_5;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 **)(param_1 + 0x28) = puVar14;
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  uVar19 = *(uint *)(puVar10 + 2);
  uVar20 = *(uint *)((long)puVar10 + 0x14);
  if ((int)uVar20 < (int)uVar19) {
    pvVar31 = (void *)puVar10[1];
  }
  else {
    pZVar3 = *(Zone **)(this + 0xb8);
    pvVar31 = *(void **)(pZVar3 + 0x10);
    uVar1 = uVar19 << 1 | 1;
    uVar24 = -(ulong)((uVar19 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar31) < uVar24) {
      pvVar31 = (void *)Zone::NewExpand(pZVar3,uVar24);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = (long)pvVar31 + uVar24;
    }
    uVar20 = *(uint *)((long)puVar10 + 0x14);
    if (0 < (int)uVar20) {
      MemCopy(pvVar31,(void *)puVar10[1],(ulong)uVar20 << 3);
      uVar20 = *(uint *)((long)puVar10 + 0x14);
    }
    puVar10[1] = pvVar31;
    *(uint *)(puVar10 + 2) = uVar1;
  }
  *(uint *)((long)puVar10 + 0x14) = uVar20 + 1;
  *(ForStatement **)((long)pvVar31 + (long)(int)uVar20 * 8) = param_1;
  pZVar3 = *(Zone **)pPVar25;
  puVar13 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar13) < 0x10) {
    puVar13 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar13 + 2;
  }
  *puVar13 = 0x29ffffffff;
  *(undefined4 *)(puVar13 + 1) = 1;
  pZVar3 = *(Zone **)pPVar25;
  pVVar11 = *(VariableProxy **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pVVar11) < 0x18) {
    pVVar11 = (VariableProxy *)Zone::NewExpand(pZVar3,0x18);
  }
  else {
    *(VariableProxy **)(pZVar3 + 0x10) = pVVar11 + 0x18;
  }
  VariableProxy::VariableProxy(pVVar11,pVVar4,-1);
  pZVar3 = *(Zone **)pPVar25;
  puVar14 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar14) < 0x18) {
    puVar14 = (undefined8 *)Zone::NewExpand(pZVar3,0x18);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar14 + 3;
  }
  puVar14[1] = pVVar11;
  puVar14[2] = puVar13;
  *puVar14 = 0x1aa0ffffffff;
  pZVar3 = *(Zone **)pPVar25;
  puVar13 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar13) < 0x10) {
    puVar13 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar13 + 2;
  }
  puVar13[1] = puVar33;
  *puVar13 = 0xeffffffff;
  pZVar3 = *(Zone **)(this + 0x68);
  uVar32 = *(undefined8 *)(this + 0x78);
  puVar12 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar12) < 0x20) {
    puVar12 = (undefined8 *)Zone::NewExpand(pZVar3,0x20);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar12 + 4;
  }
  puVar12[1] = puVar14;
  puVar12[2] = puVar13;
  puVar12[3] = uVar32;
  *puVar12 = 0xcffffffff;
  pZVar3 = *(Zone **)pPVar25;
  puVar13 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar13) < 0x20) {
    puVar13 = (undefined8 *)Zone::NewExpand(pZVar3,0x20);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar13 + 4;
  }
  pZVar3 = *(Zone **)pPVar25;
  *puVar13 = 0x47ffffffff;
  puVar14 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar14) < 8) {
    puVar14 = (undefined8 *)Zone::NewExpand(pZVar3,8);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar14 + 1;
  }
  puVar13[1] = puVar14;
  puVar13[3] = 0;
  puVar13[2] = 0x100000001;
  *(uint *)((long)puVar13 + 4) = *(uint *)((long)puVar13 + 4) | 0x80;
  *puVar14 = puVar12;
  uVar19 = *(uint *)(puVar10 + 2);
  uVar20 = *(uint *)((long)puVar10 + 0x14);
  if ((int)uVar20 < (int)uVar19) {
    pvVar31 = (void *)puVar10[1];
  }
  else {
    pZVar3 = *(Zone **)(this + 0xb8);
    uVar1 = uVar19 << 1 | 1;
    uVar24 = -(ulong)((uVar19 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar31 = *(void **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar31) < uVar24) {
      pvVar31 = (void *)Zone::NewExpand(pZVar3,uVar24);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = (long)pvVar31 + uVar24;
    }
    uVar20 = *(uint *)((long)puVar10 + 0x14);
    if (0 < (int)uVar20) {
      MemCopy(pvVar31,(void *)puVar10[1],(ulong)uVar20 << 3);
      uVar20 = *(uint *)((long)puVar10 + 0x14);
    }
    puVar10[1] = pvVar31;
    *(uint *)(puVar10 + 2) = uVar1;
  }
  *(uint *)((long)puVar10 + 0x14) = uVar20 + 1;
  *(undefined8 **)((long)pvVar31 + (long)(int)uVar20 * 8) = puVar13;
  puVar10[3] = param_6;
  uVar24 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  if (uVar17 < uVar24 || uVar17 - uVar24 == 0) {
    if (uVar17 < uVar24) {
      *(ulong *)(this + 0xd0) = *(long *)(this + 200) + uVar17 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append(this_00,uVar17 - uVar24);
  }
  *(undefined8 *)this = uVar30;
  puVar33[5] = 0;
  puVar33[6] = 0;
  puVar33[3] = puVar10;
  puVar33[4] = 0;
  uVar17 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  if (uVar27 < uVar17 || uVar27 - uVar17 == 0) {
    if (uVar27 < uVar17) {
      *(ulong *)(this + 0xd0) = *(long *)(this + 200) + uVar27 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append(this_00,uVar27 - uVar17);
  }
  return puVar9;
}

