
undefined8
FT_Get_Kerning(long param_1,undefined8 param_2,undefined8 param_3,int param_4,ulong *param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_5 != (ulong *)0x0) {
    lVar2 = *(long *)(param_1 + 0xb0);
    *param_5 = 0;
    param_5[1] = 0;
    pcVar3 = *(code **)(*(long *)(lVar2 + 0x18) + 0x98);
    if (pcVar3 == (code *)0x0) {
      return 0;
    }
    uVar1 = (*pcVar3)(param_1,param_2,param_3,param_5);
    if ((param_4 != 2) && ((int)uVar1 == 0)) {
      lVar8 = *(long *)(param_1 + 0xa0);
      lVar2 = *(long *)(lVar8 + 0x20) * *param_5;
      lVar2 = lVar2 + (lVar2 >> 0x3f) + 0x8000;
      uVar4 = lVar2 >> 0x10;
      *param_5 = uVar4;
      lVar6 = *(long *)(lVar8 + 0x28) * param_5[1];
      lVar6 = lVar6 + (lVar6 >> 0x3f) + 0x8000;
      uVar7 = lVar6 >> 0x10;
      param_5[1] = uVar7;
      if (param_4 != 1) {
        if ((ulong)*(ushort *)(lVar8 + 0x18) < 0x19) {
          uVar5 = -uVar4;
          if (-1 < lVar2) {
            uVar5 = uVar4;
          }
          uVar5 = (uVar5 * *(ushort *)(lVar8 + 0x18) + 0xc) / 0x19;
          uVar4 = -uVar5;
          if (-1 < lVar2) {
            uVar4 = uVar5;
          }
          *param_5 = uVar4;
        }
        if ((ulong)*(ushort *)(lVar8 + 0x1a) < 0x19) {
          uVar5 = -uVar7;
          if (-1 < lVar6) {
            uVar5 = uVar7;
          }
          uVar5 = (uVar5 * *(ushort *)(lVar8 + 0x1a) + 0xc) / 0x19;
          uVar7 = -uVar5;
          if (-1 < lVar6) {
            uVar7 = uVar5;
          }
          param_5[1] = uVar7;
        }
        *param_5 = uVar4 + 0x20 & 0xffffffffffffffc0;
        param_5[1] = uVar7 + 0x20 & 0xffffffffffffffc0;
        return 0;
      }
      uVar1 = 0;
    }
    return uVar1;
  }
  return 6;
}

