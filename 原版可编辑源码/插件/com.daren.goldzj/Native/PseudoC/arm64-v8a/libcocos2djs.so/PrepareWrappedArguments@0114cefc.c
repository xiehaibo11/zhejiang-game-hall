
/* v8::internal::Parser::PrepareWrappedArguments(v8::internal::Isolate*, v8::internal::ParseInfo*,
   v8::internal::Zone*) */

long * __thiscall
v8::internal::Parser::PrepareWrappedArguments
          (Parser *this,Isolate *param_1,ParseInfo *param_2,Zone *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  AstValueFactory *pAVar13;
  int iVar14;
  long lVar15;
  
  pIVar1 = param_1 + 0x95a0;
  uVar12 = **(ulong **)(param_2 + 0x50) & 0xffffffff00000000 |
           (ulong)*(uint *)(**(ulong **)(param_2 + 0x50) + 0x23);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar12;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
    uVar12 = *puVar5;
  }
  plVar9 = *(long **)(param_3 + 0x10);
  iVar14 = *(int *)(uVar12 + 3);
  uVar2 = iVar14 >> 1;
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)plVar9) < 0x10) {
    plVar9 = (long *)Zone::NewExpand(param_3,0x10);
  }
  else {
    *(long **)(param_3 + 0x10) = plVar9 + 2;
  }
  if (iVar14 < 2) {
    *plVar9 = 0;
    *(uint *)(plVar9 + 1) = uVar2;
    *(undefined4 *)((long)plVar9 + 0xc) = 0;
  }
  else {
    lVar10 = *(long *)(param_3 + 0x10);
    uVar12 = (ulong)uVar2 * 8;
    if (uVar12 < (ulong)(*(long *)(param_3 + 0x18) - lVar10) ||
        uVar12 - (*(long *)(param_3 + 0x18) - lVar10) == 0) {
      *(ulong *)(param_3 + 0x10) = lVar10 + uVar12;
    }
    else {
      lVar10 = Zone::NewExpand(param_3,uVar12);
    }
    iVar14 = 0;
    lVar15 = 0;
    *(uint *)(plVar9 + 1) = uVar2;
    *(undefined4 *)((long)plVar9 + 0xc) = 0;
    *plVar9 = lVar10;
    do {
      pAVar13 = *(AstValueFactory **)(this + 0x60);
      uVar12 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + (long)iVar14 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)pIVar1;
        if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar6 + 1;
        *puVar6 = uVar12;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
      }
      uVar7 = AstValueFactory::GetString(pAVar13,puVar6);
      uVar4 = *(uint *)(plVar9 + 1);
      uVar11 = *(uint *)((long)plVar9 + 0xc);
      if ((int)uVar11 < (int)uVar4) {
        pvVar8 = (void *)*plVar9;
      }
      else {
        pvVar8 = *(void **)(param_3 + 0x10);
        uVar3 = uVar4 << 1 | 1;
        uVar12 = -(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar3 << 3;
        if ((ulong)(*(long *)(param_3 + 0x18) - (long)pvVar8) < uVar12) {
          pvVar8 = (void *)Zone::NewExpand(param_3,uVar12);
        }
        else {
          *(ulong *)(param_3 + 0x10) = (long)pvVar8 + uVar12;
        }
        uVar11 = *(uint *)((long)plVar9 + 0xc);
        if (0 < (int)uVar11) {
          MemCopy(pvVar8,(void *)*plVar9,(ulong)uVar11 << 3);
          uVar11 = *(uint *)((long)plVar9 + 0xc);
        }
        *plVar9 = (long)pvVar8;
        *(uint *)(plVar9 + 1) = uVar3;
      }
      lVar15 = lVar15 + 1;
      iVar14 = iVar14 + 4;
      *(uint *)((long)plVar9 + 0xc) = uVar11 + 1;
      *(undefined8 *)((long)pvVar8 + (long)(int)uVar11 * 8) = uVar7;
    } while (lVar15 < (int)uVar2);
  }
  return plVar9;
}

