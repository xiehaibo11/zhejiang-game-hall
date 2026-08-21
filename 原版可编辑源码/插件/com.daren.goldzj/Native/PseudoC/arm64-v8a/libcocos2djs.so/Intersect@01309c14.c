
/* v8::internal::compiler::Type::Intersect(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::Zone*) */

int * v8::internal::compiler::Type::Intersect(int *param_1,int *param_2,Zone *param_3)

{
  double dVar1;
  double dVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  UnionType *pUVar11;
  ulong *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  long lVar15;
  double local_70;
  double dStack_68;
  int *local_58;
  int *local_50;
  undefined4 *local_48;
  
  if (((ulong)param_2 & (ulong)param_1 & 1) != 0) {
    return (int *)((ulong)param_2 & (ulong)param_1 & 0xfffffffe | 1);
  }
  if (param_1 == (int *)0x1) {
    return (int *)0x1;
  }
  if (param_2 == (int *)0x1) {
    return (int *)0x1;
  }
  if (param_2 == (int *)&DAT_ffffffff) {
    return param_1;
  }
  if (param_1 == (int *)&DAT_ffffffff) {
    return param_2;
  }
  if (param_1 == param_2) {
    return param_2;
  }
  local_58 = param_2;
  local_50 = param_1;
  uVar8 = SlowIs((Type *)&local_50,param_2);
  piVar10 = local_50;
  if ((uVar8 & 1) != 0) {
    return local_50;
  }
  if (local_50 == param_2) {
    return param_2;
  }
  uVar8 = SlowIs((Type *)&local_58,local_50);
  piVar3 = local_58;
  if ((uVar8 & 1) != 0) {
    return local_58;
  }
  if ((piVar10 == local_58) ||
     (uVar8 = SlowIs((Type *)&local_50,local_58), piVar10 = local_50, (uVar8 & 1) != 0)) {
    local_58 = (int *)&DAT_ffffffff;
  }
  else if ((piVar3 == local_50) || (uVar8 = SlowIs((Type *)&local_58,local_50), (uVar8 & 1) != 0)) {
    piVar10 = (int *)&DAT_ffffffff;
    local_50 = (int *)&DAT_ffffffff;
  }
  uVar5 = BitsetGlb((Type *)&local_50);
  uVar6 = BitsetGlb((Type *)&local_58);
  if ((((ulong)piVar10 & 1) == 0) && (*piVar10 == 3)) {
    iVar7 = piVar10[1];
    if (((ulong)local_58 & 1) != 0) goto LAB_01309d80;
LAB_01309d64:
    if (*local_58 != 3) goto LAB_01309d80;
    bVar4 = SCARRY4(iVar7,local_58[1]);
    iVar7 = iVar7 + local_58[1];
  }
  else {
    iVar7 = 1;
    if (((ulong)local_58 & 1) == 0) goto LAB_01309d64;
LAB_01309d80:
    bVar4 = SCARRY4(iVar7,1);
    iVar7 = iVar7 + 1;
  }
  if (bVar4) {
LAB_01309d94:
    return (int *)&DAT_ffffffff;
  }
  uVar14 = iVar7 + 2;
  if (SCARRY4(iVar7,2)) goto LAB_01309d94;
  pUVar11 = *(UnionType **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)pUVar11) < 0x10) {
    pUVar11 = (UnionType *)Zone::NewExpand(param_3,0x10);
  }
  else {
    *(UnionType **)(param_3 + 0x10) = pUVar11 + 0x10;
  }
  *(undefined4 *)pUVar11 = 3;
  *(uint *)(pUVar11 + 4) = uVar14;
  puVar12 = *(ulong **)(param_3 + 0x10);
  uVar8 = -(ulong)(uVar14 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar14 << 3;
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar12) < uVar8) {
    puVar12 = (ulong *)Zone::NewExpand(param_3,uVar8);
  }
  else {
    *(ulong *)(param_3 + 0x10) = (long)puVar12 + uVar8;
  }
  *(ulong **)(pUVar11 + 8) = puVar12;
  *puVar12 = (ulong)(uVar6 & uVar5 | 1);
  dStack_68 = 0.0;
  local_70 = 1.0;
  iVar7 = IntersectAux(local_50,local_58,pUVar11,1,&local_70,param_3);
  dVar2 = dStack_68;
  dVar1 = local_70;
  if (dStack_68 < local_70) goto LAB_01309fb8;
  if (-2147483648.0 <= local_70) {
    uVar14 = 0;
LAB_01309e48:
    if ((((((-1073741824.0 <= local_70) || (uVar14 = uVar14 | 8, -1073741824.0 <= dStack_68)) &&
          ((0.0 <= local_70 || (uVar14 = uVar14 | 0x40, 0.0 <= dStack_68)))) &&
         ((1073741824.0 <= local_70 || (uVar14 = uVar14 | 0x400, 1073741824.0 <= dStack_68)))) &&
        ((2147483648.0 <= local_70 || (uVar14 = uVar14 | 2, 2147483648.0 <= dStack_68)))) &&
       ((4294967296.0 <= local_70 || (uVar14 = uVar14 | 4, 4294967296.0 <= dStack_68)))) {
      uVar14 = uVar14 | 0x10;
    }
  }
  else {
    uVar14 = 0x10;
    if (-2147483648.0 <= dStack_68) goto LAB_01309e48;
  }
  puVar13 = *(undefined4 **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar13) < 0x18) {
    puVar13 = (undefined4 *)Zone::NewExpand(param_3,0x18);
  }
  else {
    *(undefined4 **)(param_3 + 0x10) = puVar13 + 6;
  }
  *puVar13 = 4;
  puVar13[1] = uVar14;
  *(double *)(puVar13 + 2) = dVar1;
  *(double *)(puVar13 + 4) = dVar2;
  lVar15 = *(long *)(pUVar11 + 8);
  if (iVar7 == 1) {
    *(undefined4 **)(lVar15 + 8) = puVar13;
    uVar8 = 2;
  }
  else {
    uVar8 = (ulong)(iVar7 + 1);
    *(undefined8 *)(lVar15 + (long)iVar7 * 8) = *(undefined8 *)(lVar15 + 8);
    *(undefined4 **)(*(long *)(pUVar11 + 8) + 8) = puVar13;
    if (1 < iVar7) {
      iVar7 = 2;
      do {
        while( true ) {
          lVar15 = *(long *)(pUVar11 + 8);
          local_48 = *(undefined4 **)(lVar15 + (long)iVar7 * 8);
          if (local_48 != puVar13) break;
LAB_01309f54:
          uVar8 = (long)(int)uVar8 - 1;
          *(undefined8 *)(lVar15 + (long)iVar7 * 8) = *(undefined8 *)(lVar15 + uVar8 * 8);
          if ((int)uVar8 <= iVar7) goto LAB_01309fa0;
        }
        uVar9 = SlowIs((Type *)&local_48,puVar13);
        if ((uVar9 & 1) != 0) {
          lVar15 = *(long *)(pUVar11 + 8);
          goto LAB_01309f54;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar8);
    }
  }
LAB_01309fa0:
  iVar7 = (int)uVar8;
  **(ulong **)(pUVar11 + 8) = (ulong)(uVar6 & uVar5 & 0xfffffba0 | 1);
LAB_01309fb8:
  piVar10 = (int *)NormalizeUnion(pUVar11,iVar7,param_3);
  return piVar10;
}

