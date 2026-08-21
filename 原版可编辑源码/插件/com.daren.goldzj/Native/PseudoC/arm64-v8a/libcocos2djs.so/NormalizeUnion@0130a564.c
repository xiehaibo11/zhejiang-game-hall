
/* v8::internal::compiler::Type::NormalizeUnion(v8::internal::compiler::UnionType*, int,
   v8::internal::Zone*) */

UnionType *
v8::internal::compiler::Type::NormalizeUnion(UnionType *param_1,int param_2,Zone *param_3)

{
  UnionType *pUVar1;
  uint uVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  
  pUVar1 = (UnionType *)**(undefined8 **)(param_1 + 8);
  if (param_2 == 1) {
    return pUVar1;
  }
  if ((((param_2 != 2) || ((int)pUVar1 != 1)) ||
      (piVar3 = (int *)(*(undefined8 **)(param_1 + 8))[1], ((ulong)piVar3 & 1) != 0)) ||
     (*piVar3 != 4)) {
    *(int *)(param_1 + 4) = param_2;
    return param_1;
  }
  dVar4 = *(double *)(piVar3 + 2);
  dVar5 = *(double *)(piVar3 + 4);
  if (-2147483648.0 <= dVar4) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
    if (dVar5 < -2147483648.0) goto LAB_0130a694;
  }
  if ((((((-1073741824.0 <= dVar4) || (uVar2 = uVar2 | 8, -1073741824.0 <= dVar5)) &&
        ((0.0 <= dVar4 || (uVar2 = uVar2 | 0x40, 0.0 <= dVar5)))) &&
       ((1073741824.0 <= dVar4 || (uVar2 = uVar2 | 0x400, 1073741824.0 <= dVar5)))) &&
      ((2147483648.0 <= dVar4 || (uVar2 = uVar2 | 2, 2147483648.0 <= dVar5)))) &&
     ((4294967296.0 <= dVar4 || (uVar2 = uVar2 | 4, 4294967296.0 <= dVar5)))) {
    uVar2 = uVar2 | 0x10;
  }
LAB_0130a694:
  pUVar1 = *(UnionType **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)pUVar1) < 0x18) {
    pUVar1 = (UnionType *)Zone::NewExpand(param_3,0x18);
  }
  else {
    *(UnionType **)(param_3 + 0x10) = pUVar1 + 0x18;
  }
  *(undefined4 *)pUVar1 = 4;
  *(uint *)(pUVar1 + 4) = uVar2;
  *(double *)(pUVar1 + 8) = dVar4;
  *(double *)(pUVar1 + 0x10) = dVar5;
  return pUVar1;
}

