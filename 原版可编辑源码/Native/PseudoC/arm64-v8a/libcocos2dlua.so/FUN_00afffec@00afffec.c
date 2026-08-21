
/* WARNING: Removing unreachable block (ram,0x00b000d8) */

int FUN_00afffec(long *param_1,uchar *param_2,undefined4 *param_3,char *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  uchar **ppuVar5;
  undefined1 *__src;
  int *piVar6;
  undefined1 local_24 [4];
  uchar *local_18;
  
  local_18 = param_2;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (pcVar4 = *(code **)(*(long *)(param_4 + 0x20) + 0x30), pcVar4 != (code *)0x0)) {
    iVar1 = (*pcVar4)();
    return iVar1;
  }
  if ((*param_4 == '\0') && (*(long *)(param_4 + 8) == 1)) {
LAB_00b00050:
    if (*(long *)(param_4 + 8) == -4) {
      puVar2 = (undefined4 *)*param_1;
      param_1 = (long *)(puVar2 + 2);
      uVar3 = *puVar2;
      *param_3 = uVar3;
    }
    else {
      uVar3 = *param_3;
    }
  }
  else {
    if (*param_1 == 0) {
      return -1;
    }
    if (*param_4 != '\x05') goto LAB_00b00050;
    uVar3 = *(undefined4 *)(*param_1 + 4);
    *param_3 = uVar3;
  }
  iVar1 = 0;
  switch(uVar3) {
  case 1:
    iVar1 = (int)*param_1;
    if (iVar1 == -1) {
      return -1;
    }
    if (*(long *)(param_4 + 8) != -4) {
      if (iVar1 == 0) {
        if (*(long *)(param_4 + 0x28) == 0) {
          return -1;
        }
      }
      else if (0 < *(long *)(param_4 + 0x28)) {
        return -1;
      }
    }
    local_24[0] = (undefined1)iVar1;
    iVar1 = 1;
    __src = local_24;
    goto LAB_00b00130;
  case 2:
  case 10:
    ppuVar5 = &local_18;
    if (param_2 == (uchar *)0x0) {
      ppuVar5 = (uchar **)0x0;
    }
    iVar1 = i2c_ASN1_INTEGER((ASN1_INTEGER *)*param_1,ppuVar5);
    break;
  case 3:
    ppuVar5 = &local_18;
    if (param_2 == (uchar *)0x0) {
      ppuVar5 = (uchar **)0x0;
    }
    iVar1 = i2c_ASN1_BIT_STRING((ASN1_BIT_STRING *)*param_1,ppuVar5);
    break;
  default:
    piVar6 = (int *)*param_1;
    if ((*(long *)(param_4 + 0x28) == 0x800) && ((*(byte *)(piVar6 + 4) >> 4 & 1) != 0)) {
      if (param_2 != (uchar *)0x0) {
        *(uchar **)(piVar6 + 2) = param_2;
        *piVar6 = 0;
      }
      return -2;
    }
    __src = *(undefined1 **)(piVar6 + 2);
    iVar1 = *piVar6;
    goto joined_r0x00b0012c;
  case 5:
    break;
  case 6:
    __src = *(undefined1 **)(*param_1 + 0x18);
    iVar1 = *(int *)(*param_1 + 0x14);
joined_r0x00b0012c:
    if (iVar1 != 0) {
LAB_00b00130:
      if (param_2 != (uchar *)0x0) {
        memcpy(param_2,__src,(long)iVar1);
      }
    }
  }
  return iVar1;
}

