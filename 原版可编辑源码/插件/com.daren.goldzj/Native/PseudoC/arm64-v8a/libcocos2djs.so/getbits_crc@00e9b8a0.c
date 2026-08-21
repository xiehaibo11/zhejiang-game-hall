
void getbits_crc(undefined8 param_1,uint param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = getNbits();
  if (param_4 != 0) {
    uVar5 = *param_3;
    uVar6 = (uint)(1 << (ulong)(param_2 & 0x1f)) >> 1;
    if (uVar6 != 0) {
      do {
        uVar3 = uVar6 & uVar4;
        uVar2 = uVar5 << 1;
        uVar1 = uVar5 >> 0xf;
        uVar6 = uVar6 >> 1;
        uVar5 = uVar2;
        if (((uVar1 ^ 0xffffffff) & 1) != (uint)(uVar3 == 0)) {
          uVar5 = uVar2 ^ 0x8005;
        }
      } while (uVar6 != 0);
      *param_3 = uVar5;
    }
    *param_3 = uVar5 & 0xffff;
  }
  return;
}

