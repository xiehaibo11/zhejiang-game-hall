
/* v8::internal::compiler::Type::NormalizeRangeAndBitset(v8::internal::compiler::Type, unsigned
   int*, v8::internal::Zone*) */

undefined4 *
v8::internal::compiler::Type::NormalizeRangeAndBitset
          (undefined4 *param_1,uint *param_2,Zone *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 *local_48;
  
  uVar5 = *param_2 & 0x45e;
  if (uVar5 == 0) {
    return param_1;
  }
  local_48 = param_1;
  uVar1 = BitsetLub((Type *)&local_48);
  if ((*param_2 | uVar1) == *param_2) {
    return (undefined4 *)0x1;
  }
  if ((uVar5 | 0x10) == uVar5) {
    dVar9 = INFINITY;
    dVar8 = -INFINITY;
  }
  else {
    if ((uVar5 | 8) == uVar5) {
      lVar3 = 1;
LAB_0130aa9c:
      dVar8 = *(double *)(BitsetType::BoundariesArray + lVar3 * 0x10 + 8);
    }
    else {
      if ((uVar5 | 0x40) == uVar5) {
        lVar3 = 2;
        goto LAB_0130aa9c;
      }
      if ((uVar5 | 0x400) == uVar5) {
        lVar3 = 3;
        goto LAB_0130aa9c;
      }
      if ((uVar5 | 2) == uVar5) {
        lVar3 = 4;
        goto LAB_0130aa9c;
      }
      dVar8 = 0.0;
      if ((uVar5 | 4) == uVar5) {
        lVar3 = 5;
        goto LAB_0130aa9c;
      }
    }
    lVar3 = 0;
    do {
      lVar4 = lVar3;
      if (lVar4 + -0x10 == -0x70) {
        dVar9 = 0.0;
        goto LAB_0130aae4;
      }
      lVar3 = lVar4 + -0x10;
    } while ((*(uint *)(BitsetType::BoundariesArray + lVar4 + 0x50) | uVar5) != uVar5);
    dVar9 = *(double *)(BitsetType::BoundariesArray + lVar4 + 0x68) + -1.0;
  }
LAB_0130aae4:
  dVar6 = (double)Min((Type *)&local_48);
  dVar7 = (double)Max((Type *)&local_48);
  *param_2 = *param_2 & (uVar5 ^ 0xffffffff);
  if ((dVar6 <= dVar8) && (dVar9 <= dVar7)) {
    return param_1;
  }
  if (dVar6 <= dVar8) {
    dVar8 = dVar6;
  }
  if (dVar9 <= dVar7) {
    dVar9 = dVar7;
  }
  if (-2147483648.0 <= dVar8) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x10;
    if (dVar9 < -2147483648.0) goto LAB_0130abf8;
  }
  if ((((((-1073741824.0 <= dVar8) || (uVar5 = uVar5 | 8, -1073741824.0 <= dVar9)) &&
        ((0.0 <= dVar8 || (uVar5 = uVar5 | 0x40, 0.0 <= dVar9)))) &&
       ((1073741824.0 <= dVar8 || (uVar5 = uVar5 | 0x400, 1073741824.0 <= dVar9)))) &&
      ((2147483648.0 <= dVar8 || (uVar5 = uVar5 | 2, 2147483648.0 <= dVar9)))) &&
     ((4294967296.0 <= dVar8 || (uVar5 = uVar5 | 4, 4294967296.0 <= dVar9)))) {
    uVar5 = uVar5 | 0x10;
  }
LAB_0130abf8:
  puVar2 = *(undefined4 **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar2) < 0x18) {
    puVar2 = (undefined4 *)Zone::NewExpand(param_3,0x18);
  }
  else {
    *(undefined4 **)(param_3 + 0x10) = puVar2 + 6;
  }
  *puVar2 = 4;
  puVar2[1] = uVar5;
  *(double *)(puVar2 + 2) = dVar8;
  *(double *)(puVar2 + 4) = dVar9;
  return puVar2;
}

