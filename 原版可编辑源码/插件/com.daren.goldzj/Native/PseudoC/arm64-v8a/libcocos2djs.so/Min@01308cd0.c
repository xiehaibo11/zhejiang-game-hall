
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::BitsetType::Min(unsigned int) */

undefined1  [16] v8::internal::compiler::BitsetType::Min(uint param_1)

{
  ulong uVar1;
  ulong *puVar2;
  undefined1 auVar3 [16];
  ulong local_8;
  
  if ((param_1 | 0x10) == param_1) {
    uVar1 = 0;
joined_r0x01308d8c:
    if ((param_1 >> 0xb & 1) != 0) goto LAB_01308d14;
LAB_01308ce8:
    puVar2 = (ulong *)(BoundariesArray + uVar1 * 0x10 + 8);
  }
  else {
    if ((param_1 | 8) != param_1) {
      if ((param_1 | 0x40) == param_1) {
        uVar1 = 2;
      }
      else if ((param_1 | 0x400) == param_1) {
        uVar1 = 3;
      }
      else {
        if ((param_1 | 2) != param_1) {
          uVar1 = 0;
          if ((param_1 | 4) != param_1) goto LAB_01308d3c;
          uVar1 = 5;
          goto joined_r0x01308dac;
        }
        uVar1 = 4;
      }
      goto joined_r0x01308d8c;
    }
    uVar1 = 1;
joined_r0x01308dac:
    if ((param_1 >> 0xb & 1) == 0) goto LAB_01308ce8;
LAB_01308d14:
    local_8 = 0;
    puVar2 = (ulong *)(BoundariesArray + uVar1 * 0x10 + 8);
    if (2 < uVar1) {
      puVar2 = &local_8;
    }
  }
  uVar1 = *puVar2;
LAB_01308d3c:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return auVar3;
}

