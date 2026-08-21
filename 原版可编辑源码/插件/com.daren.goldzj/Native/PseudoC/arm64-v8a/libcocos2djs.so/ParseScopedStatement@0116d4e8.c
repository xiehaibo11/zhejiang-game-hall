
/* v8::internal::ParserBase<v8::internal::Parser>::ParseScopedStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*) */

undefined8 * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseScopedStatement
          (ParserBase<v8::internal::Parser> *this,ZoneList *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  Scope *pSVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  Zone *pZVar9;
  void *pvVar10;
  undefined8 uVar11;
  
  if (((*(byte *)(*(long *)this + 0x81) & 1) == 0) &&
     (*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) == 'I')) {
    pZVar9 = *(Zone **)(this + 0xb8);
    pSVar4 = *(Scope **)(pZVar9 + 0x10);
    if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)pSVar4) < 0x88) {
      pSVar4 = (Scope *)Zone::NewExpand(pZVar9,0x88);
    }
    else {
      *(Scope **)(pZVar9 + 0x10) = pSVar4 + 0x88;
    }
    Scope::Scope(pSVar4,pZVar9,*(undefined8 *)this,6);
    uVar11 = *(undefined8 *)this;
    *(Scope **)this = pSVar4;
    *(undefined4 *)(pSVar4 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 0xf8);
    pZVar9 = *(Zone **)(this + 0x68);
    puVar5 = *(undefined8 **)(pZVar9 + 0x10);
    if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)puVar5) < 0x20) {
      puVar5 = (undefined8 *)Zone::NewExpand(pZVar9,0x20);
    }
    else {
      *(undefined8 **)(pZVar9 + 0x10) = puVar5 + 4;
    }
    pZVar9 = *(Zone **)(this + 0x68);
    *puVar5 = 0x47ffffffff;
    lVar6 = *(long *)(pZVar9 + 0x10);
    if ((ulong)(*(long *)(pZVar9 + 0x18) - lVar6) < 8) {
      lVar6 = Zone::NewExpand(pZVar9,8);
    }
    else {
      *(long *)(pZVar9 + 0x10) = lVar6 + 8;
    }
    puVar5[1] = lVar6;
    puVar5[3] = 0;
    puVar5[2] = 1;
    uVar3 = ParseFunctionDeclaration(this);
    uVar2 = *(uint *)(puVar5 + 2);
    uVar8 = *(uint *)((long)puVar5 + 0x14);
    if ((int)uVar8 < (int)uVar2) {
      pvVar10 = (void *)puVar5[1];
    }
    else {
      pZVar9 = *(Zone **)(this + 0xb8);
      uVar1 = uVar2 << 1 | 1;
      uVar7 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      pvVar10 = *(void **)(pZVar9 + 0x10);
      if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)pvVar10) < uVar7) {
        pvVar10 = (void *)Zone::NewExpand(pZVar9,uVar7);
      }
      else {
        *(ulong *)(pZVar9 + 0x10) = (long)pvVar10 + uVar7;
      }
      uVar8 = *(uint *)((long)puVar5 + 0x14);
      if (0 < (int)uVar8) {
        MemCopy(pvVar10,(void *)puVar5[1],(ulong)uVar8 << 3);
        uVar8 = *(uint *)((long)puVar5 + 0x14);
      }
      puVar5[1] = pvVar10;
      *(uint *)(puVar5 + 2) = uVar1;
    }
    *(uint *)((long)puVar5 + 0x14) = uVar8 + 1;
    *(undefined8 *)((long)pvVar10 + (long)(int)uVar8 * 8) = uVar3;
    *(undefined4 *)(*(long *)this + 0x74) = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
    uVar3 = Scope::FinalizeBlockScope(*(Scope **)this);
    puVar5[3] = uVar3;
    *(undefined8 *)this = uVar11;
    return puVar5;
  }
  puVar5 = (undefined8 *)ParseStatement(this,param_1,0,1);
  return puVar5;
}

