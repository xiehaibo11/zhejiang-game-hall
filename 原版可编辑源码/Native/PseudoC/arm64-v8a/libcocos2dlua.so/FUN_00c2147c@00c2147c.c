
undefined8 FUN_00c2147c(long *param_1,uint *param_2,double *param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar2 = *param_2;
  if (uVar2 >> 0x1c != 0xb) {
    if (uVar2 >> 0x1c == 10) {
      uVar5 = FUN_00c22184();
      return uVar5;
    }
    uVar3 = (ulong)(uVar2 & 0xffff);
    lVar6 = *param_1;
    lVar1 = uVar3 * 0x18;
    uVar2 = *(uint *)(lVar6 + lVar1);
    if ((uVar2 & 0xf0800000) != 0x20800000) goto LAB_00c21500;
    uVar3 = (ulong)(uVar2 & 0xffff);
    param_4 = (undefined8 *)*param_4;
    uVar4 = uVar3;
    while( true ) {
      lVar1 = uVar4 * 0x18;
      uVar2 = *(uint *)(lVar6 + lVar1);
LAB_00c21500:
      if (uVar2 >> 0x1c != 8) break;
      uVar4 = (ulong)(ushort)uVar2;
    }
    uVar5 = FUN_00c21fa4(param_1,lVar6 + lVar1,uVar3,param_3,param_4);
    return uVar5;
  }
  if ((*(uint *)(*param_1 + (ulong)(ushort)uVar2 * 0x18) >> 0x17 & 1) == 0) {
    uVar2 = param_2[1];
  }
  else {
    uVar2 = param_2[1];
    if ((int)uVar2 < 0) {
      *param_3 = (double)uVar2;
      return 0;
    }
  }
  *(uint *)param_3 = uVar2;
  *(uint *)((long)param_3 + 4) = 0xfff90000;
  return 0;
}

