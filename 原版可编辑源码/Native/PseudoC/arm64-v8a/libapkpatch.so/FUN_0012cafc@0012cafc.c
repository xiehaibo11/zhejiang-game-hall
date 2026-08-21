
undefined4 FUN_0012cafc(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  switch(*param_1) {
  case 0:
    break;
  case 1:
    param_1[3] = param_1[3] | (param_2 & 0xff) << 8;
    return 2;
  case 2:
    param_1[3] = (param_1[3] | param_2 & 0xff) + 1;
    uVar5 = 6;
    if (*(char *)(param_1 + 1) < '\0') {
      uVar5 = 3;
    }
    return uVar5;
  case 3:
    param_1[2] = (param_2 & 0xff) << 8;
    return 4;
  case 4:
    param_1[2] = (param_1[2] | param_2 & 0xff) + 1;
    uVar5 = 5;
    if ((*(byte *)(param_1 + 1) & 0x40) == 0) {
      uVar5 = 6;
    }
    return uVar5;
  case 5:
    if ((param_2 & 0xff) < 0xe1) {
      uVar1 = param_2 & 0xff;
      uVar2 = uVar1 / 9;
      iVar3 = param_2 - (uVar2 * 8 + uVar1 / 9);
      iVar4 = uVar2 - ((uVar2 / 5) * 4 + uVar2 / 5);
      *(char *)((long)param_1 + 0x12) =
           (char)((param_2 - (uVar1 * 0x6d >> 8) >> 1 & 0x7f) + (uVar1 * 0x6d >> 8) >> 5);
      if ((iVar4 + iVar3 & 0xffU) < 5) {
        *(char *)(param_1 + 4) = (char)iVar3;
        *(char *)((long)param_1 + 0x11) = (char)iVar4;
        return 6;
      }
    }
  default:
    return 9;
  }
  *(undefined1 *)((long)param_1 + 6) = 0;
  *(char *)(param_1 + 1) = (char)param_2;
  if ((param_2 & 0xff) == 0) {
    return 8;
  }
  if ((param_2 & 0xff) >> 7 == 0) {
    if ((param_2 & 0xff) == 1) {
      *(undefined1 *)((long)param_1 + 5) = 0xc0;
    }
    else {
      if (2 < (param_2 & 0xff)) {
        return 9;
      }
      if (*(char *)((long)param_1 + 5) == -0x20) {
        return 9;
      }
    }
  }
  else {
    if ((param_2 & 0xff) < (uint)*(byte *)((long)param_1 + 5)) {
      return 9;
    }
    *(undefined1 *)((long)param_1 + 5) = 0;
    param_1[3] = (param_2 & 0x1f) << 0x10;
  }
  return 1;
}

