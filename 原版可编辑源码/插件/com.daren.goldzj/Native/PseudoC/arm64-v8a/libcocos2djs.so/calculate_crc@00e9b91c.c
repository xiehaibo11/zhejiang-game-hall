
void calculate_crc(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_3;
  uVar5 = (uint)(1 << (ulong)(param_2 & 0x1f)) >> 1;
  if (uVar5 != 0) {
    do {
      uVar3 = uVar5 & param_1;
      uVar2 = uVar4 << 1;
      uVar1 = uVar4 >> 0xf;
      uVar5 = uVar5 >> 1;
      uVar4 = uVar2;
      if (((uVar1 ^ 0xffffffff) & 1) != (uint)(uVar3 == 0)) {
        uVar4 = uVar2 ^ 0x8005;
      }
    } while (uVar5 != 0);
    *param_3 = uVar4;
  }
  *param_3 = uVar4 & 0xffff;
  return;
}

