
void png_set_alpha_mode_fixed(long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x168);
  if ((uVar5 >> 6 & 1) != 0) {
    png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
    return;
  }
  iVar6 = 0x250ac;
  *(uint *)(param_1 + 0x168) = uVar5 | 0x4000;
  if (param_3 < -2) {
    if (param_3 == -100000) {
LAB_00d6d1f8:
      iVar6 = 220000;
      *(uint *)(param_1 + 0x168) = uVar5 | 0x5000;
    }
    else {
      iVar6 = 0x250ac;
      if (param_3 != -50000) {
LAB_00d6d210:
        iVar6 = param_3;
        if (230000 < param_3 - 70000U) {
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"output gamma out of expected range");
        }
      }
    }
  }
  else if (param_3 != -2) {
    if (param_3 != -1) goto LAB_00d6d210;
    goto LAB_00d6d1f8;
  }
  iVar4 = png_reciprocal(iVar6);
  switch(param_2) {
  case 0:
    bVar3 = false;
    uVar2 = *(uint *)(param_1 + 0x16c) & 0xff7fffff;
    uVar5 = *(uint *)(param_1 + 0x168) & 0xffffdfff;
    *(uint *)(param_1 + 0x16c) = uVar2;
    goto LAB_00d6d2b8;
  case 1:
    uVar5 = *(uint *)(param_1 + 0x168);
    iVar6 = 100000;
    uVar2 = *(uint *)(param_1 + 0x16c) & 0xff7fffff;
    break;
  case 2:
    uVar2 = *(uint *)(param_1 + 0x16c) & 0xff7fffff;
    uVar5 = *(uint *)(param_1 + 0x168) | 0x2000;
    goto LAB_00d6d2b0;
  case 3:
    uVar5 = *(uint *)(param_1 + 0x168);
    uVar2 = *(uint *)(param_1 + 0x16c) | 0x800000;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"invalid alpha mode");
  }
  uVar5 = uVar5 & 0xffffdfff;
LAB_00d6d2b0:
  *(uint *)(param_1 + 0x16c) = uVar2;
  bVar3 = true;
LAB_00d6d2b8:
  iVar1 = *(int *)(param_1 + 0x510);
  *(uint *)(param_1 + 0x168) = uVar5;
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x510) = iVar4;
    *(ushort *)(param_1 + 0x55a) = *(ushort *)(param_1 + 0x55a) | 1;
    *(int *)(param_1 + 0x2ec) = iVar6;
    iVar1 = iVar4;
  }
  else {
    *(int *)(param_1 + 0x2ec) = iVar6;
  }
  if (bVar3) {
    *(undefined2 *)(param_1 + 0x2c8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(int *)(param_1 + 700) = iVar1;
    *(undefined1 *)(param_1 + 0x2ba) = 2;
    *(uint *)(param_1 + 0x16c) = uVar2 & 0xfffffeff;
    if ((uVar2 >> 7 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"conflicting calls to set alpha mode and background");
    }
    *(uint *)(param_1 + 0x16c) = uVar2 & 0xfffffeff | 0x80;
  }
  return;
}

