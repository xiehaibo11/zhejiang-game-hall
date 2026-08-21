
undefined8 FUN_00dba6b4(long param_1,long param_2,ushort *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  ulong local_38;
  uint local_24;
  
  if (*(long *)(param_2 + 8) != 1) {
    return 1;
  }
  uVar1 = 2;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    uVar4 = (ushort)*(byte *)(param_2 + 0x10);
    break;
  default:
    goto switchD_00dba700_caseD_2;
  case 3:
    uVar5 = *(uint *)(param_1 + 0x10);
    *param_3 = *(ushort *)(param_2 + 0x10);
    if ((uVar5 >> 7 & 1) != 0) {
      TIFFSwabShort(param_3);
      return 0;
    }
    return 0;
  case 4:
  case 9:
    uVar6 = (ulong)*(uint *)(param_2 + 0x10);
    local_38 = CONCAT44(local_38._4_4_,*(uint *)(param_2 + 0x10));
    if (*(char *)(param_1 + 0x10) < '\0') {
      TIFFSwabLong(&local_38);
      uVar6 = local_38 & 0xffffffff;
    }
    uVar4 = (ushort)uVar6;
    if ((uVar6 & 0xffff0000) != 0) goto LAB_00dba824;
    break;
  case 6:
    uVar4 = (ushort)*(char *)(param_2 + 0x10);
    if (*(char *)(param_2 + 0x10) < '\0') goto LAB_00dba824;
    break;
  case 8:
    uVar4 = *(ushort *)(param_2 + 0x10);
    local_38 = CONCAT62(local_38._2_6_,uVar4);
    if ((*(uint *)(param_1 + 0x10) >> 7 & 1) != 0) {
      TIFFSwabShort(&local_38);
      uVar4 = (ushort)local_38;
    }
    if ((short)uVar4 < 0) goto LAB_00dba824;
    break;
  case 0x10:
  case 0x11:
    uVar5 = *(uint *)(param_1 + 0x10);
    if ((uVar5 >> 0x13 & 1) == 0) {
      local_24 = *(uint *)(param_2 + 0x10);
      if ((uVar5 >> 7 & 1) != 0) {
        TIFFSwabLong(&local_24);
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      uVar6 = (ulong)local_24;
      if ((uVar5 >> 0xb & 1) == 0) {
        uVar2 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar6,0);
        if ((uVar2 != uVar6) ||
           (lVar3 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),&local_38,8),
           lVar3 != 8)) {
          return 3;
        }
      }
      else {
        if (*(ulong *)(param_1 + 0x3a0) < uVar6 + 8) {
          return 3;
        }
        _TIFFmemcpy(&local_38,(void *)(*(long *)(param_1 + 0x398) + uVar6),8);
      }
      uVar5 = *(uint *)(param_1 + 0x10);
    }
    else {
      local_38 = *(ulong *)(param_2 + 0x10);
    }
    if ((uVar5 >> 7 & 1) != 0) {
      TIFFSwabLong8(&local_38);
    }
    if (local_38 >> 0x10 == 0) {
      *param_3 = (ushort)local_38;
      return 0;
    }
LAB_00dba824:
    uVar1 = 4;
    goto switchD_00dba700_caseD_2;
  }
  uVar1 = 0;
  *param_3 = uVar4;
switchD_00dba700_caseD_2:
  return uVar1;
}

