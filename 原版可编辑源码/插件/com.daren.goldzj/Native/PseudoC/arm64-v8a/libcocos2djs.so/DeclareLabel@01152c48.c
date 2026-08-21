
/* v8::internal::Parser::DeclareLabel(v8::internal::ZoneList<v8::internal::AstRawString const*>**,
   v8::internal::ZoneList<v8::internal::AstRawString const*>**, v8::internal::AstRawString const*)
    */

void __thiscall
v8::internal::Parser::DeclareLabel
          (Parser *this,ZoneList **param_1,ZoneList **param_2,AstRawString *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ZoneList *pZVar8;
  long lVar9;
  Zone *pZVar10;
  void *pvVar11;
  long lVar12;
  
  pZVar8 = *param_1;
  if (pZVar8 != (ZoneList *)0x0) {
    lVar12 = (long)*(int *)(pZVar8 + 0xc);
    while (0 < lVar12) {
      lVar9 = lVar12 * 8;
      lVar12 = lVar12 + -1;
      if (*(AstRawString **)(*(long *)pZVar8 + lVar9 + -8) == param_3) {
LAB_01152cec:
        ParserBase<v8::internal::Parser>::ReportMessage<v8::internal::AstRawString_const*>
                  ((ParserBase<v8::internal::Parser> *)this,0x10d,param_3);
        return;
      }
    }
  }
  lVar12 = *(long *)(this + 0x300);
  if (lVar12 == 0) {
    if (pZVar8 == (ZoneList *)0x0) goto LAB_01152d14;
LAB_01152ca8:
    if (*param_2 != (ZoneList *)0x0) goto LAB_01152dac;
  }
  else {
    do {
      plVar4 = (long *)BreakableStatement::labels(*(BreakableStatement **)(lVar12 + 8));
      if (plVar4 != (long *)0x0) {
        lVar9 = (long)*(int *)((long)plVar4 + 0xc);
        while (0 < lVar9) {
          lVar1 = lVar9 * 8;
          lVar9 = lVar9 + -1;
          if (*(AstRawString **)(*plVar4 + lVar1 + -8) == param_3) goto LAB_01152cec;
        }
      }
      lVar12 = *(long *)(lVar12 + 0x10);
    } while (lVar12 != 0);
    if (*param_1 != (ZoneList *)0x0) goto LAB_01152ca8;
LAB_01152d14:
    pZVar10 = *(Zone **)(this + 0xb8);
    pZVar8 = *(ZoneList **)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pZVar8) < 0x10) {
      pZVar8 = (ZoneList *)Zone::NewExpand(pZVar10,0x10);
    }
    else {
      *(ZoneList **)(pZVar10 + 0x10) = pZVar8 + 0x10;
    }
    pZVar10 = *(Zone **)(this + 0xb8);
    lVar12 = *(long *)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - lVar12) < 8) {
      lVar12 = Zone::NewExpand(pZVar10,8);
    }
    else {
      *(long *)(pZVar10 + 0x10) = lVar12 + 8;
    }
    *(long *)pZVar8 = lVar12;
    *(long *)(pZVar8 + 8) = 1;
    *param_1 = pZVar8;
  }
  pZVar10 = *(Zone **)(this + 0xb8);
  pZVar8 = *(ZoneList **)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pZVar8) < 0x10) {
    pZVar8 = (ZoneList *)Zone::NewExpand(pZVar10,0x10);
  }
  else {
    *(ZoneList **)(pZVar10 + 0x10) = pZVar8 + 0x10;
  }
  pZVar10 = *(Zone **)(this + 0xb8);
  lVar12 = *(long *)(pZVar10 + 0x10);
  if ((ulong)(*(long *)(pZVar10 + 0x18) - lVar12) < 8) {
    lVar12 = Zone::NewExpand(pZVar10,8);
  }
  else {
    *(long *)(pZVar10 + 0x10) = lVar12 + 8;
  }
  *(long *)pZVar8 = lVar12;
  *(long *)(pZVar8 + 8) = 1;
  *param_2 = pZVar8;
LAB_01152dac:
  pZVar8 = *param_1;
  uVar7 = *(uint *)(pZVar8 + 8);
  uVar6 = *(uint *)(pZVar8 + 0xc);
  if ((int)uVar6 < (int)uVar7) {
    pvVar11 = *(void **)pZVar8;
  }
  else {
    pZVar10 = *(Zone **)(this + 0xb8);
    uVar2 = uVar7 << 1 | 1;
    uVar5 = -(ulong)((uVar7 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar2 << 3;
    pvVar11 = *(void **)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pvVar11) < uVar5) {
      pvVar11 = (void *)Zone::NewExpand(pZVar10,uVar5);
    }
    else {
      *(ulong *)(pZVar10 + 0x10) = (long)pvVar11 + uVar5;
    }
    uVar6 = *(uint *)(pZVar8 + 0xc);
    if (0 < (int)uVar6) {
      MemCopy(pvVar11,*(void **)pZVar8,(ulong)uVar6 << 3);
      uVar6 = *(uint *)(pZVar8 + 0xc);
    }
    *(void **)pZVar8 = pvVar11;
    *(uint *)(pZVar8 + 8) = uVar2;
  }
  *(uint *)(pZVar8 + 0xc) = uVar6 + 1;
  *(AstRawString **)((long)pvVar11 + (long)(int)uVar6 * 8) = param_3;
  pZVar8 = *param_2;
  uVar7 = *(uint *)(pZVar8 + 8);
  iVar3 = *(int *)(pZVar8 + 0xc);
  if (iVar3 < (int)uVar7) {
    *(int *)(pZVar8 + 0xc) = iVar3 + 1;
    *(AstRawString **)(*(long *)pZVar8 + (long)iVar3 * 8) = param_3;
  }
  else {
    pZVar10 = *(Zone **)(this + 0xb8);
    uVar6 = uVar7 << 1 | 1;
    uVar5 = -(ulong)((uVar7 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar6 << 3;
    pvVar11 = *(void **)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pvVar11) < uVar5) {
      pvVar11 = (void *)Zone::NewExpand(pZVar10,uVar5);
    }
    else {
      *(ulong *)(pZVar10 + 0x10) = (long)pvVar11 + uVar5;
    }
    uVar7 = *(uint *)(pZVar8 + 0xc);
    if (0 < (int)uVar7) {
      MemCopy(pvVar11,*(void **)pZVar8,(ulong)uVar7 << 3);
      uVar7 = *(uint *)(pZVar8 + 0xc);
    }
    *(void **)pZVar8 = pvVar11;
    *(uint *)(pZVar8 + 8) = uVar6;
    *(uint *)(pZVar8 + 0xc) = uVar7 + 1;
    *(AstRawString **)((long)pvVar11 + (long)(int)uVar7 * 8) = param_3;
  }
  return;
}

