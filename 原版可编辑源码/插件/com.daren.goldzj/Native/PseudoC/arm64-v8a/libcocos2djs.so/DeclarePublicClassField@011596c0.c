
/* v8::internal::Parser::DeclarePublicClassField(v8::internal::ClassScope*,
   v8::internal::ClassLiteralProperty*, bool, bool,
   v8::internal::ParserBase<v8::internal::Parser>::ClassInfo*) */

void __thiscall
v8::internal::Parser::DeclarePublicClassField
          (Parser *this,ClassScope *param_1,ClassLiteralProperty *param_2,bool param_3,bool param_4,
          ClassInfo *param_5)

{
  uint uVar1;
  uint uVar2;
  Zone *pZVar3;
  AstRawString *pAVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  void *pvVar8;
  uint *puVar9;
  undefined8 *puVar10;
  
  if (param_3) {
    puVar10 = *(undefined8 **)(param_5 + 0x18);
  }
  else {
    puVar10 = *(undefined8 **)(param_5 + 0x20);
  }
  pZVar3 = *(Zone **)(this + 0xb8);
  puVar9 = (uint *)((long)puVar10 + 0xc);
  uVar7 = *puVar9;
  uVar2 = *(uint *)(puVar10 + 1);
  if ((int)uVar7 < (int)uVar2) {
    pvVar8 = (void *)*puVar10;
  }
  else {
    pvVar8 = *(void **)(pZVar3 + 0x10);
    uVar1 = uVar2 << 1 | 1;
    uVar6 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar8) < uVar6) {
      pvVar8 = (void *)Zone::NewExpand(pZVar3,uVar6);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = (long)pvVar8 + uVar6;
    }
    uVar7 = *puVar9;
    if (0 < (int)uVar7) {
      MemCopy(pvVar8,(void *)*puVar10,(ulong)uVar7 << 3);
      uVar7 = *(uint *)((long)puVar10 + 0xc);
    }
    *puVar10 = pvVar8;
    *(uint *)(puVar10 + 1) = uVar1;
  }
  *puVar9 = uVar7 + 1;
  *(ClassLiteralProperty **)((long)pvVar8 + (long)(int)uVar7 * 8) = param_2;
  if (param_4) {
    pAVar4 = (AstRawString *)
             ParserBase<v8::internal::Parser>::ClassFieldVariableName
                       ((ParserBase<v8::internal::Parser> *)this,*(AstValueFactory **)(this + 0x60),
                        *(int *)(param_5 + 0x48));
    uVar5 = CreateSyntheticContextVariable(this,pAVar4);
    *(undefined8 *)(param_2 + 0x18) = uVar5;
    puVar10 = *(undefined8 **)(param_5 + 8);
    uVar2 = *(uint *)(puVar10 + 1);
    uVar7 = *(uint *)((long)puVar10 + 0xc);
    if ((int)uVar7 < (int)uVar2) {
      pvVar8 = (void *)*puVar10;
    }
    else {
      pZVar3 = *(Zone **)(this + 0xb8);
      uVar1 = uVar2 << 1 | 1;
      uVar6 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      pvVar8 = *(void **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar8) < uVar6) {
        pvVar8 = (void *)Zone::NewExpand(pZVar3,uVar6);
      }
      else {
        *(ulong *)(pZVar3 + 0x10) = (long)pvVar8 + uVar6;
      }
      uVar7 = *(uint *)((long)puVar10 + 0xc);
      if (0 < (int)uVar7) {
        MemCopy(pvVar8,(void *)*puVar10,(ulong)uVar7 << 3);
        uVar7 = *(uint *)((long)puVar10 + 0xc);
      }
      *puVar10 = pvVar8;
      *(uint *)(puVar10 + 1) = uVar1;
    }
    *(uint *)((long)puVar10 + 0xc) = uVar7 + 1;
    *(ClassLiteralProperty **)((long)pvVar8 + (long)(int)uVar7 * 8) = param_2;
  }
  return;
}

