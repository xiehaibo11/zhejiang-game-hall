
undefined8 FUN_00e5905c(long param_1,uint param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(ushort *)(param_1 + 0x1d0) <= param_2) {
    return 0x10;
  }
  lVar6 = *(long *)(param_1 + 0x378);
  if (lVar6 == 0) {
    return 7;
  }
  uVar3 = (**(code **)(lVar6 + 0x20))(0);
  *param_3 = uVar3;
  lVar4 = *(long *)(param_1 + 0x2f0);
  if (lVar4 == 0x25000) {
    if ((*(char *)(param_1 + 0x3f8) == '\0') && (iVar2 = FUN_00e5c750(param_1), iVar2 != 0)) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0x400) <= param_2) {
      return 0;
    }
    pcVar5 = *(code **)(lVar6 + 0x20);
    param_2 = (int)*(char *)(*(long *)(param_1 + 0x408) + (ulong)param_2) + param_2;
  }
  else {
    if (lVar4 != 0x20000) {
      if (lVar4 != 0x10000) {
        return 0;
      }
      if (0x101 < param_2) {
        return 0;
      }
      uVar3 = (**(code **)(lVar6 + 0x20))(param_2);
      goto LAB_00e59174;
    }
    if ((*(char *)(param_1 + 0x3f8) == '\0') && (iVar2 = FUN_00e5c750(param_1), iVar2 != 0)) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0x400) <= param_2) {
      return 0;
    }
    uVar1 = *(ushort *)(*(long *)(param_1 + 0x408) + (ulong)param_2 * 2);
    param_2 = (uint)uVar1;
    if (0x101 < uVar1) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x410) + (long)(int)(param_2 - 0x102) * 8);
      goto LAB_00e59174;
    }
    pcVar5 = *(code **)(lVar6 + 0x20);
  }
  uVar3 = (*pcVar5)(param_2);
LAB_00e59174:
  *param_3 = uVar3;
  return 0;
}

