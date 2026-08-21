
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00aa367c(long param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x2d4);
  if (iVar2 < 0) {
    return 0;
  }
  if (((param_3 == 4) && (param_2 == 0)) && ((*(byte *)(param_1 + 0x2f8) >> 5 & 1) != 0)) {
    *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) | 0x40;
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x220);
  lVar4 = *(long *)(lVar5 + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0xe0);
  *param_4 = *(undefined4 *)(param_1 + 0x2d0);
  lVar4 = lVar4 + (long)iVar2 * 8;
  uVar1 = *(ushort *)(lVar4 + 4) & ((ushort)param_2 ^ 0xffff) | (ushort)param_3;
  param_4[2] = (int)(short)*(ushort *)(lVar4 + 4);
  *(ushort *)(lVar4 + 4) = uVar1;
  param_4[1] = (int)(short)uVar1;
  if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                    (param_1,0x22,*(undefined8 *)(param_1 + 0x270),param_4,0);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  if ((param_2 & 1) != 0) {
    FUN_00ab4ee4(param_1,9);
  }
  if ((param_3 & 1) != 0) {
    FUN_00ab4ee4(param_1,5);
  }
  if ((param_2 >> 2 & 1) != 0) {
    FUN_00ab4ee4(param_1,10);
  }
  if ((param_3 >> 2 & 1) == 0) {
    if (param_4[2] == param_4[1]) {
      return 0;
    }
  }
  else {
    FUN_00ab4ee4(param_1,6);
    if (param_4[2] == param_4[1]) {
      return 0;
    }
  }
  iVar2 = lws_plat_change_pollfd(lVar5,param_1,lVar4);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(lVar5 + 0xc9c);
  if (iVar2 != 0) {
    uVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))(param_1,0x1f,0,0,0);
    if ((int)uVar3 == -1) {
      return uVar3;
    }
    if ((int)uVar3 != iVar2) {
      lws_cancel_service_pt(param_1);
    }
  }
  return 0;
}

