
/* v8::internal::compiler::BitsetType::Max(unsigned int) */

undefined1  [16] v8::internal::compiler::BitsetType::Max(uint param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  if ((param_1 | 0x10) == param_1) {
    return ZEXT816(0x7ff0000000000000);
  }
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    if (lVar2 + -0x10 == -0x70) {
      return ZEXT816(0);
    }
    lVar1 = lVar2 + -0x10;
  } while ((*(uint *)(BoundariesArray + lVar2 + 0x50) | param_1) != param_1);
  dVar3 = *(double *)(BoundariesArray + lVar2 + 0x68) + -1.0;
  if (((param_1 >> 0xb & 1) != 0) && (dVar3 <= 0.0)) {
    dVar3 = 0.0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar3;
  return auVar4;
}

