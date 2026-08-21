
undefined8 poly1305_init(undefined8 *param_1,ulong *param_2,undefined8 *param_3)

{
  code *pcVar1;
  code *pcVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar4 = OPENSSL_armcap_P;
  uVar6 = 0;
  if (param_2 != (ulong *)0x0) {
    uVar3 = param_2[1];
    param_1[4] = *param_2 & 0xffffffc0fffffff;
    param_1[5] = uVar3 & 0xffffffc0ffffffc;
    bVar5 = (uVar4 & 1) != 0;
    pcVar1 = poly1305_blocks;
    if (bVar5) {
      pcVar1 = (code *)&LAB_00bdf4e0;
    }
    pcVar2 = poly1305_emit;
    if (bVar5) {
      pcVar2 = (code *)&LAB_00bdfb80;
    }
    *param_3 = pcVar1;
    param_3[1] = pcVar2;
    uVar6 = 1;
  }
  return uVar6;
}

