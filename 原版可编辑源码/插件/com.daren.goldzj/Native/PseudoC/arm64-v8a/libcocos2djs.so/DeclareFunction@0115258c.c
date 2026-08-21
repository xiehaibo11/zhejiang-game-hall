
/* v8::internal::Parser::DeclareFunction(v8::internal::AstRawString const*,
   v8::internal::FunctionLiteral*, v8::internal::VariableMode, v8::internal::VariableKind, int, int,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

SloppyBlockFunctionStatement * __thiscall
v8::internal::Parser::DeclareFunction
          (Parser *this,undefined8 param_1,undefined8 param_2,undefined4 param_4,uint param_5,
          undefined4 param_6,undefined4 param_7,undefined8 *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  Zone *pZVar4;
  DeclarationScope *this_00;
  undefined4 *puVar5;
  SloppyBlockFunctionStatement *pSVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined1 auStack_44 [4];
  
  pZVar4 = *(Zone **)(this + 0x68);
  puVar5 = *(undefined4 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar5) < 0x20) {
    puVar5 = (undefined4 *)Zone::NewExpand(pZVar4,0x20);
  }
  else {
    *(undefined4 **)(pZVar4 + 0x10) = puVar5 + 8;
  }
  *puVar5 = param_6;
  puVar5[1] = 1;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = param_2;
  Declare(this,puVar5,param_1,param_5,param_4,1,*(undefined8 *)this,auStack_44,param_6,0xffffffff);
  if ((*(byte *)(*(long *)(this + 0x138) + 9) >> 2 & 1) != 0) {
    *(ushort *)(*(long *)(puVar5 + 2) + 0x28) = *(ushort *)(*(long *)(puVar5 + 2) + 0x28) | 0x800;
  }
  if (param_8 != (undefined8 *)0x0) {
    uVar2 = *(uint *)(param_8 + 1);
    uVar8 = *(uint *)((long)param_8 + 0xc);
    if ((int)uVar8 < (int)uVar2) {
      pvVar11 = (void *)*param_8;
    }
    else {
      pZVar4 = *(Zone **)(this + 0xb8);
      uVar1 = uVar2 << 1 | 1;
      uVar7 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      pvVar11 = *(void **)(pZVar4 + 0x10);
      if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pvVar11) < uVar7) {
        pvVar11 = (void *)Zone::NewExpand(pZVar4,uVar7);
      }
      else {
        *(ulong *)(pZVar4 + 0x10) = (long)pvVar11 + uVar7;
      }
      uVar8 = *(uint *)((long)param_8 + 0xc);
      if (0 < (int)uVar8) {
        MemCopy(pvVar11,(void *)*param_8,(ulong)uVar8 << 3);
        uVar8 = *(uint *)((long)param_8 + 0xc);
      }
      *param_8 = pvVar11;
      *(uint *)(param_8 + 1) = uVar1;
    }
    *(uint *)((long)param_8 + 0xc) = uVar8 + 1;
    *(undefined8 *)((long)pvVar11 + (long)(int)uVar8 * 8) = param_1;
  }
  if ((param_5 & 0xff) == 3) {
    pZVar4 = *(Zone **)(this + 0x68);
    uVar10 = *(undefined8 *)(puVar5 + 2);
    pSVar6 = *(SloppyBlockFunctionStatement **)(pZVar4 + 0x10);
    iVar3 = *(int *)(*(long *)(this + 0x10) + 0x18);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pSVar6) < 0x20) {
      pSVar6 = (SloppyBlockFunctionStatement *)Zone::NewExpand(pZVar4,0x20);
    }
    else {
      *(SloppyBlockFunctionStatement **)(pZVar4 + 0x10) = pSVar6 + 0x20;
    }
    uVar9 = 1099;
    if (iVar3 < 1) {
      uVar9 = 0x40b;
    }
    *(undefined8 *)(pSVar6 + 0x10) = *(undefined8 *)(this + 0x78);
    *(undefined8 *)(pSVar6 + 0x18) = 0;
    *(undefined8 *)(pSVar6 + 8) = uVar10;
    *(undefined4 *)pSVar6 = param_7;
    *(undefined4 *)(pSVar6 + 4) = uVar9;
    this_00 = (DeclarationScope *)Scope::GetDeclarationScope(*(Scope **)this);
    DeclarationScope::DeclareSloppyBlockFunction(this_00,pSVar6);
  }
  else {
    pSVar6 = *(SloppyBlockFunctionStatement **)(this + 0x78);
  }
  return pSVar6;
}

