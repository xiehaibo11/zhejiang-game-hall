
undefined8 FUN_00e27e70(long param_1,int param_2,uint param_3,uint param_4,ulong *param_5)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort local_40 [2];
  undefined1 auStack_3c [4];
  ushort local_38 [2];
  short local_34 [2];
  
  uVar4 = *(ulong *)(param_1 + 8) & 0x7fff0000;
  if ((param_4 >> 4 & 1) == 0) {
    if (((uVar4 != 0) || (*(char *)(param_1 + 0x11) < '\0')) &&
       ((*(byte *)(param_1 + 0x4c8) >> 1 & 1) == 0)) {
      return 7;
    }
    if (param_3 != 0) {
      uVar4 = (ulong)param_3;
      do {
        (**(code **)(*(long *)(param_1 + 0x370) + 0x118))(param_1,0,param_2,auStack_3c,local_40);
        uVar4 = uVar4 - 1;
        param_2 = param_2 + 1;
        *param_5 = (ulong)local_40[0];
        param_5 = param_5 + 1;
      } while (uVar4 != 0);
    }
  }
  else {
    if (((uVar4 != 0) || (*(char *)(param_1 + 0x11) < '\0')) &&
       ((*(byte *)(param_1 + 0x4c8) >> 4 & 1) == 0)) {
      return 7;
    }
    if (param_3 != 0) {
      uVar4 = (ulong)param_3;
      do {
        if (*(char *)(param_1 + 0x1f0) == '\0') {
          if (*(short *)(param_1 + 0x268) == -1) {
            local_34[0] = *(short *)(param_1 + 0x198);
            sVar2 = *(short *)(param_1 + 0x19a);
          }
          else {
            local_34[0] = *(short *)(param_1 + 0x2c2);
            sVar2 = *(short *)(param_1 + 0x2c4);
          }
          uVar3 = (int)local_34[0] - (int)sVar2;
          uVar1 = -uVar3;
          if (-1 < (int)uVar3) {
            uVar1 = uVar3;
          }
          uVar5 = (ulong)uVar1;
          local_38[0] = (ushort)uVar1;
        }
        else {
          (**(code **)(*(long *)(param_1 + 0x370) + 0x118))(param_1,1,param_2,local_34,local_38);
          uVar5 = (ulong)local_38[0];
        }
        uVar4 = uVar4 - 1;
        *param_5 = uVar5 & 0xffff;
        param_2 = param_2 + 1;
        param_5 = param_5 + 1;
      } while (uVar4 != 0);
    }
  }
  return 0;
}

