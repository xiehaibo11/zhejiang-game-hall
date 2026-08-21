
ulong FUN_01100318(long param_1,ulong param_2,ulong param_3,long param_4,int param_5)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  if ((int)param_3 < param_5) {
    iVar2 = FUN_011001c4(param_1,param_2,param_3,param_5);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    param_2 = *(ulong *)(param_1 + 0x10);
    param_3 = (ulong)*(uint *)(param_1 + 0x18);
  }
  uVar4 = (int)param_3 - param_5;
  uVar5 = (ulong)uVar4;
  uVar6 = (ulong)(int)(*(uint *)(&DAT_01479120 + (long)param_5 * 4) &
                      (uint)((long)param_2 >> (uVar5 & 0x3f)));
  lVar7 = (long)param_5;
  if (*(long *)(param_4 + (long)param_5 * 8) < (long)uVar6) {
    do {
      iVar2 = (int)uVar5;
      if (iVar2 < 1) {
        iVar2 = FUN_011001c4(param_1,param_2,uVar5,1);
        if (iVar2 == 0) {
          return 0xffffffff;
        }
        param_2 = *(ulong *)(param_1 + 0x10);
        iVar2 = *(int *)(param_1 + 0x18);
      }
      lVar1 = lVar7 * 8;
      uVar4 = iVar2 - 1;
      uVar5 = (ulong)uVar4;
      uVar6 = param_2 >> (uVar5 & 0x3f) & 1 | uVar6 << 1;
      lVar7 = lVar7 + 1;
    } while (*(long *)(param_4 + lVar1 + 8) < (long)uVar6);
    param_5 = (int)lVar7;
  }
  *(ulong *)(param_1 + 0x10) = param_2;
  *(uint *)(param_1 + 0x18) = uVar4;
  if (param_5 < 0x11) {
    uVar5 = (ulong)*(byte *)(*(long *)(param_4 + 0x118) +
                             (long)(*(int *)(param_4 + lVar7 * 8 + 0x90) + (int)uVar6) + 0x11);
  }
  else {
    plVar3 = *(long **)(param_1 + 0x20);
    lVar7 = *plVar3;
    *(undefined4 *)(lVar7 + 0x28) = 0x79;
    (**(code **)(lVar7 + 8))(plVar3,0xffffffff);
    uVar5 = 0;
  }
  return uVar5;
}

