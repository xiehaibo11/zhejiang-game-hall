
undefined8 FT_Get_Advance(long param_1,uint param_2,uint param_3,ulong *param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_4 == (ulong *)0x0) {
    return 6;
  }
  if (*(uint *)(param_1 + 0x20) <= param_2) {
    return 0x10;
  }
  pcVar3 = *(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x18) + 0xa8);
  if ((pcVar3 != (code *)0x0) && (((param_3 & 3) != 0 || ((param_3 & 0xf0000) == 0x10000)))) {
    uVar2 = (*pcVar3)(param_1,param_2,1,param_3,param_4);
    if ((uint)uVar2 == 0) {
      if ((param_3 & 1) != 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0xa0) != 0) {
        lVar1 = 0x20;
        if ((param_3 & 0x10) != 0) {
          lVar1 = 0x28;
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + lVar1);
        uVar4 = *param_4;
        lVar1 = -lVar7;
        if (-1 < lVar7) {
          lVar1 = lVar7;
        }
        uVar6 = -uVar4;
        if (-1 < (long)uVar4) {
          uVar6 = uVar4;
        }
        uVar6 = uVar6 * lVar1 + 0x20 >> 6;
        if (lVar7 < 0) {
          uVar5 = -uVar6;
          if (-1 >= (long)uVar4) {
            uVar5 = uVar6;
          }
        }
        else {
          uVar5 = -uVar6;
          if (-1 < (long)uVar4) {
            uVar5 = uVar6;
          }
        }
        *param_4 = uVar5;
        return 0;
      }
      return 0x24;
    }
    if (((uint)uVar2 & 0xff) != 7) {
      return uVar2;
    }
  }
  uVar2 = FT_Get_Advances(param_1,param_2,1,param_3,param_4);
  return uVar2;
}

