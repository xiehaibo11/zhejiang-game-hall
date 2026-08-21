
/* v8::internal::compiler::Type::ToLimits(unsigned int, v8::internal::Zone*) */

undefined1  [16] v8::internal::compiler::Type::ToLimits(uint param_1,Zone *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = param_1 & 0x45e;
  if (uVar1 == 0) {
    return ZEXT816(0x3ff0000000000000);
  }
  if ((uVar1 | 0x10) == uVar1) {
    return ZEXT816(0xfff0000000000000);
  }
  if ((uVar1 | 8) == uVar1) {
    lVar3 = 1;
  }
  else if ((uVar1 | 0x40) == uVar1) {
    lVar3 = 2;
  }
  else if ((uVar1 | 0x400) == uVar1) {
    lVar3 = 3;
  }
  else if ((uVar1 | 2) == uVar1) {
    lVar3 = 4;
  }
  else {
    uVar4 = 0;
    if ((uVar1 | 4) != uVar1) goto LAB_0130a790;
    lVar3 = 5;
  }
  uVar4 = *(ulong *)(BitsetType::BoundariesArray + lVar3 * 0x10 + 8);
LAB_0130a790:
  lVar3 = 0;
  do {
    if (lVar3 + -0x10 == -0x70) break;
    lVar2 = lVar3 + 0x50;
    lVar3 = lVar3 + -0x10;
  } while ((*(uint *)(BitsetType::BoundariesArray + lVar2) | uVar1) != uVar1);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar4;
  return auVar5;
}

