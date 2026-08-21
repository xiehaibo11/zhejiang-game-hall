
/* v8::internal::compiler::Type::Union(v8::internal::compiler::Type, v8::internal::compiler::Type,
   v8::internal::Zone*) */

int * v8::internal::compiler::Type::Union(int *param_1,int *param_2,Zone *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  UnionType *pUVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint local_3c;
  int *local_38;
  int *local_18;
  
  if (((uint)param_1 & (uint)param_2 & 1) != 0) {
    return (int *)((ulong)((uint)param_2 | (uint)param_1) & 0xfffffffe | 1);
  }
  if (param_1 == (int *)&DAT_ffffffff) {
    return (int *)&DAT_ffffffff;
  }
  if (param_2 == (int *)0x1) {
    return param_1;
  }
  if (param_2 == (int *)&DAT_ffffffff) goto LAB_0130b178;
  if (param_1 == (int *)0x1) {
    return param_2;
  }
  if (param_1 == param_2) {
    return param_2;
  }
  local_38 = param_2;
  local_18 = param_1;
  uVar4 = SlowIs((Type *)&local_18,param_2);
  piVar10 = local_18;
  if ((uVar4 & 1) != 0) {
    return param_2;
  }
  if (local_18 == param_2) {
    return param_2;
  }
  uVar4 = SlowIs((Type *)&local_38,local_18);
  if ((uVar4 & 1) != 0) {
    return piVar10;
  }
  if ((((ulong)piVar10 & 1) == 0) && (*piVar10 == 3)) {
    iVar3 = piVar10[1];
    if (((ulong)local_38 & 1) != 0) goto LAB_0130b234;
LAB_0130b218:
    if (*local_38 != 3) goto LAB_0130b234;
    iVar9 = iVar3 + local_38[1];
    if (SCARRY4(iVar3,local_38[1])) goto LAB_0130b178;
  }
  else {
    iVar3 = 1;
    if (((ulong)local_38 & 1) == 0) goto LAB_0130b218;
LAB_0130b234:
    iVar9 = iVar3 + 1;
    if (SCARRY4(iVar3,1)) goto LAB_0130b178;
  }
  uVar1 = iVar9 + 2;
  if (SCARRY4(iVar9,2)) {
LAB_0130b178:
    return (int *)&DAT_ffffffff;
  }
  pUVar7 = *(UnionType **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)pUVar7) < 0x10) {
    pUVar7 = (UnionType *)Zone::NewExpand(param_3,0x10);
  }
  else {
    *(UnionType **)(param_3 + 0x10) = pUVar7 + 0x10;
  }
  *(undefined4 *)pUVar7 = 3;
  *(uint *)(pUVar7 + 4) = uVar1;
  lVar6 = *(long *)(param_3 + 0x10);
  uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  if ((ulong)(*(long *)(param_3 + 0x18) - lVar6) < uVar4) {
    lVar6 = Zone::NewExpand(param_3,uVar4);
  }
  else {
    *(ulong *)(param_3 + 0x10) = lVar6 + uVar4;
  }
  *(long *)(pUVar7 + 8) = lVar6;
  uVar1 = BitsetGlb((Type *)&local_18);
  local_3c = BitsetGlb((Type *)&local_38);
  local_3c = local_3c | uVar1;
  if ((((ulong)local_18 & 1) != 0) ||
     ((piVar10 = local_18, *local_18 != 4 &&
      (((*local_18 != 3 ||
        (piVar10 = *(int **)(*(long *)(local_18 + 2) + 8), ((ulong)piVar10 & 1) != 0)) ||
       (*piVar10 != 4)))))) {
    piVar10 = (int *)0x0;
  }
  if ((((ulong)local_38 & 1) != 0) ||
     ((piVar5 = local_38, *local_38 != 4 &&
      (((*local_38 != 3 ||
        (piVar5 = *(int **)(*(long *)(local_38 + 2) + 8), ((ulong)piVar5 & 1) != 0)) ||
       (*piVar5 != 4)))))) {
    piVar5 = (int *)0x0;
  }
  if (piVar10 == (int *)0x0) {
    piVar10 = piVar5;
    if (piVar5 == (int *)0x0) {
      lVar6 = 1;
      goto LAB_0130b468;
    }
  }
  else if (piVar5 != (int *)0x0) {
    dVar15 = *(double *)(piVar10 + 2);
    dVar16 = *(double *)(piVar10 + 4);
    dVar13 = *(double *)(piVar5 + 2);
    dVar11 = *(double *)(piVar5 + 4);
    dVar12 = dVar11;
    dVar14 = dVar13;
    if ((dVar15 <= dVar16) && (dVar12 = dVar16, dVar14 = dVar15, dVar13 <= dVar11)) {
      if (dVar15 <= dVar13) {
        dVar13 = dVar15;
      }
      dVar12 = dVar11;
      dVar14 = dVar13;
      if (dVar11 <= dVar16) {
        dVar12 = dVar16;
      }
    }
    if (-2147483648.0 <= dVar14) {
      uVar1 = 0;
LAB_0130b390:
      if ((((-1073741824.0 <= dVar14) || (uVar1 = uVar1 | 8, -1073741824.0 <= dVar12)) &&
          (((0.0 <= dVar14 || (uVar1 = uVar1 | 0x40, 0.0 <= dVar12)) &&
           ((1073741824.0 <= dVar14 || (uVar1 = uVar1 | 0x400, 1073741824.0 <= dVar12)))))) &&
         (((2147483648.0 <= dVar14 || (uVar1 = uVar1 | 2, 2147483648.0 <= dVar12)) &&
          ((4294967296.0 <= dVar14 || (uVar1 = uVar1 | 4, 4294967296.0 <= dVar12)))))) {
        uVar1 = uVar1 | 0x10;
      }
    }
    else {
      uVar1 = 0x10;
      if (-2147483648.0 <= dVar12) goto LAB_0130b390;
    }
    piVar10 = *(int **)(param_3 + 0x10);
    if ((ulong)(*(long *)(param_3 + 0x18) - (long)piVar10) < 0x18) {
      piVar10 = (int *)Zone::NewExpand(param_3,0x18);
    }
    else {
      *(int **)(param_3 + 0x10) = piVar10 + 6;
    }
    *piVar10 = 4;
    piVar10[1] = uVar1;
    *(double *)(piVar10 + 2) = dVar14;
    *(double *)(piVar10 + 4) = dVar12;
  }
  lVar6 = NormalizeRangeAndBitset(piVar10,&local_3c,param_3);
LAB_0130b468:
  **(ulong **)(pUVar7 + 8) = (ulong)local_3c | 1;
  if (lVar6 == 1) {
    uVar8 = 1;
  }
  else {
    uVar8 = 2;
    *(long *)(*(long *)(pUVar7 + 8) + 8) = lVar6;
  }
  uVar2 = AddToUnion(local_18,pUVar7,uVar8,param_3);
  iVar3 = AddToUnion(local_38,pUVar7,uVar2,param_3);
  piVar10 = (int *)NormalizeUnion(pUVar7,iVar3,param_3);
  return piVar10;
}

