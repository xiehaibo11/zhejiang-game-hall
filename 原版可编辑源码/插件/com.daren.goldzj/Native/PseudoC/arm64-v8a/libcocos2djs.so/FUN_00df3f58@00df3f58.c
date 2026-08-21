
uint FUN_00df3f58(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_2[-1];
  uVar2 = *param_2;
  uVar5 = ((uVar2 >> 0x18) + ((uint)param_1 >> 0x18)) - (uVar1 >> 0x18);
  uVar3 = ((uVar2 >> 0x10 & 0xff) + ((uint)((ulong)param_1 >> 0x10) & 0xff)) -
          (uVar1 >> 0x10 & 0xff);
  uVar4 = ((uVar2 >> 8 & 0xff) + ((uint)((ulong)param_1 >> 8) & 0xff)) - (uVar1 >> 8 & 0xff);
  uVar1 = ((uVar2 & 0xff) + ((uint)param_1 & 0xff)) - (uVar1 & 0xff);
  if (0xff < uVar5) {
    uVar5 = ~(uVar5 >> 0x18);
  }
  if (0xff < uVar3) {
    uVar3 = uVar3 >> 0x18 ^ 0xff;
  }
  if (0xff < uVar4) {
    uVar4 = uVar4 >> 0x18 ^ 0xff;
  }
  if (0xff < uVar1) {
    uVar1 = uVar1 >> 0x18 ^ 0xff;
  }
  return uVar1 | uVar5 << 0x18 | uVar3 << 0x10 | uVar4 << 8;
}

