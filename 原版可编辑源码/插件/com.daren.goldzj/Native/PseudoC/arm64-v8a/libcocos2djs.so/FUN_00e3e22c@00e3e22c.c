
undefined8 FUN_00e3e22c(long param_1,uint param_2,uint param_3,uint param_4,ulong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ushort local_6c [2];
  ushort local_68 [2];
  undefined1 auStack_64 [4];
  
  lVar6 = *(long *)(param_1 + 0x98);
  if (((uint)*(ulong *)(param_1 + 0x10) >> 3 & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 0x10) & 0x8000;
    uVar5 = *(ulong *)(param_1 + 8) & 0x7fff0000;
    if ((param_4 >> 4 & 1) == 0) {
      if ((uVar5 != 0 || uVar7 != 0) && ((*(byte *)(param_1 + 0x4c8) >> 1 & 1) == 0)) {
        return 7;
      }
      if (*(short *)(param_1 + 0x1b6) != 0) {
        if (param_3 == 0) {
          return 0;
        }
        uVar7 = (ulong)param_3;
        do {
          (**(code **)(*(long *)(param_1 + 0x370) + 0x118))(param_1,0,param_2,auStack_64,local_6c);
          uVar7 = uVar7 - 1;
          param_2 = param_2 + 1;
          *param_5 = (ulong)local_6c[0];
          param_5 = param_5 + 1;
        } while (uVar7 != 0);
        return 0;
      }
    }
    else {
      if ((uVar5 != 0 || uVar7 != 0) && ((*(byte *)(param_1 + 0x4c8) >> 4 & 1) == 0)) {
        return 7;
      }
      if (*(char *)(param_1 + 0x1f0) != '\0') {
        if (param_3 == 0) {
          return 0;
        }
        uVar7 = (ulong)param_3;
        do {
          (**(code **)(*(long *)(param_1 + 0x370) + 0x118))(param_1,1,param_2,auStack_64,local_68);
          uVar7 = uVar7 - 1;
          param_2 = param_2 + 1;
          *param_5 = (ulong)local_68[0];
          param_5 = param_5 + 1;
        } while (uVar7 != 0);
        return 0;
      }
    }
  }
  if (param_3 != 0) {
    lVar4 = 0x70;
    if ((param_4 & 0x10) != 0) {
      lVar4 = 0x78;
    }
    if (lVar6 == 0) {
      return 0x25;
    }
    uVar7 = 0;
    do {
      plVar3 = *(long **)(param_1 + 0xa0);
      uVar8 = 0x103;
      if (plVar3 != (long *)0x0) {
        uVar8 = 0;
      }
      if ((plVar3 == (long *)0x0) || (((uVar8 | param_4) & 1) != 0)) {
        uVar2 = FUN_00e41f80(lVar6,0,param_2 + uVar7);
        iVar1 = (int)uVar2;
      }
      else {
        if (*plVar3 != *(long *)(lVar6 + 8)) {
          return 0x23;
        }
        uVar2 = FUN_00e41f80(lVar6,plVar3,param_2 + uVar7);
        iVar1 = (int)uVar2;
      }
      if (iVar1 != 0) {
        return uVar2;
      }
      param_5[uVar7] = *(ulong *)(lVar6 + lVar4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3);
  }
  return 0;
}

