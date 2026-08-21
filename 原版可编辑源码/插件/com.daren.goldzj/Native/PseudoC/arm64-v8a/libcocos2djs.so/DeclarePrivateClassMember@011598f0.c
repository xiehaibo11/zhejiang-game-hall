
/* v8::internal::Parser::DeclarePrivateClassMember(v8::internal::ClassScope*,
   v8::internal::AstRawString const*, v8::internal::ClassLiteralProperty*,
   v8::internal::ClassLiteralProperty::Kind, bool,
   v8::internal::ParserBase<v8::internal::Parser>::ClassInfo*) */

void __thiscall
v8::internal::Parser::DeclarePrivateClassMember
          (Parser *this,undefined8 param_1,undefined8 param_2,ulong *param_3,char param_5,
          uint param_6,long param_7)

{
  uint uVar1;
  uint uVar2;
  Zone *pZVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  uint *puVar9;
  undefined8 *puVar10;
  
  if (param_5 == '\x03') {
    if ((param_6 & 1) == 0) {
      puVar10 = *(undefined8 **)(param_7 + 0x20);
    }
    else {
      puVar10 = *(undefined8 **)(param_7 + 0x18);
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
      uVar4 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar8) < uVar4) {
        pvVar8 = (void *)Zone::NewExpand(pZVar3,uVar4);
      }
      else {
        *(ulong *)(pZVar3 + 0x10) = (long)pvVar8 + uVar4;
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
    *(ulong **)((long)pvVar8 + (long)(int)uVar7 * 8) = param_3;
    uVar5 = 1;
  }
  else if (param_5 == '\0') {
    uVar5 = 7;
  }
  else if (param_5 == '\x02') {
    uVar5 = 8;
  }
  else {
    uVar5 = 9;
  }
  uVar4 = CreatePrivateNameVariable(this,param_1,uVar5,param_6 & 1,param_2);
  iVar6 = *(int *)param_3[1];
  if (iVar6 == -1) {
    iVar6 = *(int *)(*param_3 & 0xfffffffffffffffc);
  }
  *(int *)(uVar4 + 0x24) = iVar6;
  param_3[3] = uVar4;
  puVar10 = *(undefined8 **)(param_7 + 0x10);
  uVar2 = *(uint *)(puVar10 + 1);
  uVar7 = *(uint *)((long)puVar10 + 0xc);
  if ((int)uVar7 < (int)uVar2) {
    pvVar8 = (void *)*puVar10;
  }
  else {
    pZVar3 = *(Zone **)(this + 0xb8);
    uVar1 = uVar2 << 1 | 1;
    uVar4 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar8 = *(void **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar8) < uVar4) {
      pvVar8 = (void *)Zone::NewExpand(pZVar3,uVar4);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = (long)pvVar8 + uVar4;
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
  *(ulong **)((long)pvVar8 + (long)(int)uVar7 * 8) = param_3;
  return;
}

