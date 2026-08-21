
int FUN_00e141b0(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = *(uint *)(param_1 + 2);
  uVar7 = (ulong)uVar2;
  uVar1 = (int)param_1[10] + param_2 + (int)param_1[0x13];
  if (uVar1 <= uVar2) {
    return 0;
  }
  lVar4 = *param_1;
  lVar5 = param_1[0xb];
  uVar1 = uVar1 + 1 & 0xfffffffe;
  uVar6 = (ulong)uVar1;
  if (uVar1 == 0) {
    if (lVar5 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,lVar5);
      lVar5 = 0;
      param_1[0xb] = 0;
      goto LAB_00e142ac;
    }
LAB_00e142a8:
    param_1[0xb] = lVar5;
  }
  else {
    if (0x2aaaaaa < uVar1) {
      return 10;
    }
    if (uVar2 == 0) {
      lVar5 = (**(code **)(lVar4 + 8))(lVar4,uVar6 * 0x30);
      iVar3 = (uint)(lVar5 == 0) << 6;
      if (uVar1 != 0) goto LAB_00e14284;
    }
    else {
      lVar4 = (**(code **)(lVar4 + 0x18))(lVar4,uVar7 * 0x30,uVar6 * 0x30,lVar5);
      iVar3 = (uint)(lVar4 == 0) << 6;
      if (lVar4 != 0) {
        lVar5 = lVar4;
      }
      if (uVar2 < uVar1) {
LAB_00e14284:
        if ((iVar3 == 0) && (lVar5 != 0)) {
          memset((void *)(lVar5 + uVar7 * 0x30),0,(uVar6 - uVar7) * 0x30);
          goto LAB_00e142a8;
        }
      }
    }
    param_1[0xb] = lVar5;
    if (iVar3 != 0) {
      return iVar3;
    }
  }
LAB_00e142ac:
  *(uint *)(param_1 + 2) = uVar1;
  param_1[0x14] = lVar5 + (ulong)*(uint *)(param_1 + 10) * 0x30;
  return 0;
}

