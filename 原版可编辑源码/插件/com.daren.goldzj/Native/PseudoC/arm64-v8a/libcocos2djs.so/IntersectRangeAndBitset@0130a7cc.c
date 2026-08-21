
/* v8::internal::compiler::Type::IntersectRangeAndBitset(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::Zone*) */

undefined1  [16] v8::internal::compiler::Type::IntersectRangeAndBitset(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  param_2 = param_2 & 0x45e;
  if (param_2 == 0) {
    dVar4 = 1.0;
    goto LAB_0130a8b4;
  }
  if ((param_2 | 0x10) == param_2) {
    dVar4 = -INFINITY;
    goto LAB_0130a8b4;
  }
  if ((param_2 | 8) == param_2) {
    lVar2 = 1;
LAB_0130a874:
    dVar4 = *(double *)(BitsetType::BoundariesArray + lVar2 * 0x10 + 8);
  }
  else {
    if ((param_2 | 0x40) == param_2) {
      lVar2 = 2;
      goto LAB_0130a874;
    }
    if ((param_2 | 0x400) == param_2) {
      lVar2 = 3;
      goto LAB_0130a874;
    }
    if ((param_2 | 2) == param_2) {
      lVar2 = 4;
      goto LAB_0130a874;
    }
    dVar4 = 0.0;
    if ((param_2 | 4) == param_2) {
      lVar2 = 5;
      goto LAB_0130a874;
    }
  }
  lVar2 = 0;
  do {
    if (lVar2 + -0x10 == -0x70) break;
    lVar1 = lVar2 + 0x50;
    lVar2 = lVar2 + -0x10;
  } while ((*(uint *)(BitsetType::BoundariesArray + lVar1) | param_2) != param_2);
LAB_0130a8b4:
  if (dVar4 <= *(double *)(param_1 + 8)) {
    dVar4 = *(double *)(param_1 + 8);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar4;
  return auVar3;
}

