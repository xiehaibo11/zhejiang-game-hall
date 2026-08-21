
void FUN_00c26d5c(long param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_10 = 0;
  local_c = 0;
LAB_00c26d98:
  switch(param_3) {
  case 0:
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 0x3f) {
      FUN_00c2593c(param_1);
      FUN_00c26d04(param_1,&local_10);
      FUN_00c263a0(param_1,0x3a);
      FUN_00c273ac(param_1,&local_8,0);
      uVar3 = local_10;
      if (*param_2 == 0) {
        uVar3 = local_8;
      }
      *param_2 = uVar3;
      uVar3 = local_c;
      if (local_c < local_4) {
        uVar3 = local_4;
      }
      param_2[1] = uVar3;
      goto LAB_00c26d98;
    }
    break;
  case 1:
    iVar2 = *(int *)(param_1 + 4);
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 4);
    goto LAB_00c26f84;
  case 3:
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 != 0x7c) goto LAB_00c26f94;
    goto LAB_00c27060;
  case 4:
    iVar2 = *(int *)(param_1 + 4);
    goto LAB_00c26f94;
  case 5:
    iVar2 = *(int *)(param_1 + 4);
    goto LAB_00c26f38;
  case 6:
    iVar2 = *(int *)(param_1 + 4);
    goto LAB_00c26eec;
  case 7:
    iVar2 = *(int *)(param_1 + 4);
    goto LAB_00c26e90;
  case 8:
    iVar2 = *(int *)(param_1 + 4);
    goto LAB_00c26e44;
  case 9:
    iVar2 = *(int *)(param_1 + 4);
    goto LAB_00c26dcc;
  case 10:
    iVar2 = *(int *)(param_1 + 4);
    goto joined_r0x00c27020;
  default:
    return;
  }
  if (iVar2 == 0x104) {
    FUN_00c2593c(param_1);
    FUN_00c273ac(param_1,&local_10,2);
    uVar3 = 1;
    if (*param_2 == 0) {
      uVar3 = (uint)(local_10 != 0);
    }
  }
  else {
LAB_00c26f84:
    if (iVar2 == 0x105) {
      FUN_00c2593c(param_1);
      FUN_00c273ac(param_1,&local_10,3);
      uVar3 = 0;
      if (*param_2 != 0) {
        uVar3 = (uint)(local_10 != 0);
      }
      goto LAB_00c270f8;
    }
    if (iVar2 == 0x7c) {
LAB_00c27060:
      FUN_00c2593c(param_1);
      FUN_00c273ac(param_1,&local_10,4);
      *param_2 = *param_2 | local_10;
LAB_00c26f68:
      if (param_2[1] < local_c) {
        param_2[1] = local_c;
      }
      goto LAB_00c26d98;
    }
LAB_00c26f94:
    if (iVar2 == 0x5e) {
      FUN_00c2593c(param_1);
      FUN_00c273ac(param_1,&local_10,5);
      *param_2 = *param_2 ^ local_10;
      goto LAB_00c26f68;
    }
LAB_00c26f38:
    if (iVar2 == 0x26) {
      FUN_00c2593c(param_1);
      FUN_00c273ac(param_1,&local_10,6);
      *param_2 = *param_2 & local_10;
      goto LAB_00c26f68;
    }
LAB_00c26eec:
    if (iVar2 == 0x106) {
      FUN_00c2593c(param_1);
      FUN_00c273ac(param_1,&local_10,7);
      param_2[1] = 9;
      *param_2 = (uint)(*param_2 == local_10);
      goto LAB_00c26d98;
    }
    if (iVar2 == 0x107) {
      FUN_00c2593c(param_1);
      FUN_00c273ac(param_1,&local_10,7);
      param_2[1] = 9;
      *param_2 = (uint)(*param_2 != local_10);
      goto LAB_00c26d98;
    }
LAB_00c26e90:
    if (iVar2 == 0x3c) {
      FUN_00c2593c(param_1);
      FUN_00c273ac(param_1,&local_10,8);
      if ((param_2[1] == 9) && (local_c == 9)) {
        uVar3 = (uint)((int)*param_2 < (int)local_10);
      }
      else {
        uVar3 = (uint)(*param_2 < local_10);
      }
    }
    else if (iVar2 == 0x3e) {
      FUN_00c2593c(param_1);
      FUN_00c273ac(param_1,&local_10,8);
      if ((param_2[1] == 9) && (local_c == 9)) {
        uVar3 = (uint)((int)local_10 < (int)*param_2);
      }
      else {
        uVar3 = (uint)(local_10 < *param_2);
      }
    }
    else {
      if (iVar2 == 0x108) {
        FUN_00c2593c(param_1);
        FUN_00c273ac(param_1,&local_10,8);
        if ((param_2[1] == 9) && (local_c == 9)) {
          uVar3 = (uint)((int)*param_2 <= (int)local_10);
        }
        else {
          uVar3 = (uint)(*param_2 <= local_10);
        }
        goto LAB_00c270f8;
      }
      if (iVar2 != 0x109) {
LAB_00c26e44:
        if (iVar2 == 0x10a) {
          FUN_00c2593c(param_1);
          FUN_00c273ac(param_1,&local_10,9);
          *param_2 = *param_2 << (ulong)(local_10 & 0x1f);
          goto LAB_00c26d98;
        }
        if (iVar2 == 0x10b) {
          FUN_00c2593c(param_1);
          FUN_00c273ac(param_1,&local_10,9);
          if (param_2[1] == 9) {
            *param_2 = (int)*param_2 >> (local_10 & 0x1f);
          }
          else {
            *param_2 = *param_2 >> (ulong)(local_10 & 0x1f);
          }
          goto LAB_00c26d98;
        }
LAB_00c26dcc:
        if (iVar2 == 0x2b) {
          FUN_00c2593c(param_1);
          FUN_00c273ac(param_1,&local_10,10);
          *param_2 = *param_2 + local_10;
        }
        else {
          if (iVar2 == 0x2d) {
            FUN_00c2593c(param_1);
            FUN_00c273ac(param_1,&local_10,10);
            *param_2 = *param_2 - local_10;
            goto LAB_00c26f68;
          }
joined_r0x00c27020:
          if (iVar2 != 0x2a) {
            if (iVar2 == 0x2f) {
              FUN_00c2593c(param_1);
              FUN_00c26828(param_1,&local_10);
              if (param_2[1] < local_c) {
                param_2[1] = local_c;
              }
              if (local_10 != 0) {
                uVar3 = *param_2;
                if (param_2[1] != 9) {
                  uVar1 = 0;
                  if (local_10 != 0) {
                    uVar1 = uVar3 / local_10;
                  }
                  *param_2 = uVar1;
                  goto LAB_00c26d98;
                }
                if ((uVar3 != 0x80000000) || (local_10 != 0xffffffff)) {
                  uVar1 = 0;
                  if (local_10 != 0) {
                    uVar1 = (int)uVar3 / (int)local_10;
                  }
                  *param_2 = uVar1;
                  goto LAB_00c26d98;
                }
              }
            }
            else {
              if (iVar2 != 0x25) {
                return;
              }
              FUN_00c2593c(param_1);
              FUN_00c26828(param_1,&local_10);
              if (param_2[1] < local_c) {
                param_2[1] = local_c;
              }
              if (local_10 != 0) {
                uVar3 = *param_2;
                if (param_2[1] != 9) {
                  uVar1 = 0;
                  if (local_10 != 0) {
                    uVar1 = uVar3 / local_10;
                  }
                  *param_2 = uVar3 - uVar1 * local_10;
                  goto LAB_00c26d98;
                }
                if ((uVar3 != 0x80000000) || (local_10 != 0xffffffff)) {
                  iVar2 = 0;
                  if (local_10 != 0) {
                    iVar2 = (int)uVar3 / (int)local_10;
                  }
                  *param_2 = uVar3 - iVar2 * local_10;
                  goto LAB_00c26d98;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_00c2520c(param_1,0x219);
          }
          FUN_00c2593c(param_1);
          FUN_00c26828(param_1,&local_10);
          *param_2 = *param_2 * local_10;
        }
        goto LAB_00c26f68;
      }
      FUN_00c2593c(param_1);
      FUN_00c273ac(param_1,&local_10,8);
      if ((param_2[1] == 9) && (local_c == 9)) {
        uVar3 = (uint)((int)local_10 <= (int)*param_2);
      }
      else {
        uVar3 = (uint)(local_10 <= *param_2);
      }
    }
  }
LAB_00c270f8:
  *param_2 = uVar3;
  param_2[1] = 9;
  goto LAB_00c26d98;
}

