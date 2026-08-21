
void png_read_row(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  byte *__src;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  uint local_48 [2];
  ulong local_40;
  byte local_38;
  char local_37;
  undefined1 local_36;
  byte local_35;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x168) >> 6 & 1) == 0) {
    png_read_start_row(param_1);
  }
  local_35 = *(byte *)(param_1 + 0x2b2);
  local_48[0] = *(uint *)(param_1 + 0x248);
  local_38 = *(byte *)(param_1 + 0x2af);
  local_37 = *(char *)(param_1 + 0x2b0);
  local_36 = *(undefined1 *)(param_1 + 0x2b3);
  if ((ulong)local_35 < 8) {
    uVar8 = (ulong)local_48[0] * (ulong)local_35 + 7 >> 3;
  }
  else {
    uVar8 = (ulong)(local_35 >> 3) * (ulong)local_48[0];
  }
  local_40 = uVar8;
  if ((*(char *)(param_1 + 0x2ac) != '\0') && ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0)) {
    uVar4 = *(uint *)(param_1 + 0x24c);
    switch(*(undefined1 *)(param_1 + 0x2ad)) {
    case 0:
      if ((uVar4 & 7) != 0) {
LAB_00d68470:
        if (param_3 == 0) goto LAB_00d68484;
LAB_00d68474:
        png_combine_row(param_1,param_3,1);
LAB_00d68484:
        png_read_finish_row(param_1);
        return;
      }
      break;
    case 1:
      if (((uVar4 & 7) != 0) || (*(uint *)(param_1 + 0x230) < 5)) goto LAB_00d68470;
      break;
    case 2:
      if ((uVar4 & 7) != 4) {
        if (param_3 == 0) goto LAB_00d68484;
        uVar4 = uVar4 >> 2;
joined_r0x00d68458:
        if ((uVar4 & 1) == 0) goto LAB_00d68484;
        goto LAB_00d68474;
      }
      break;
    case 3:
      if (((uVar4 & 3) != 0) || (*(uint *)(param_1 + 0x230) < 3)) goto LAB_00d68470;
      break;
    case 4:
      if ((uVar4 & 3) != 2) {
        if (param_3 == 0) goto LAB_00d68484;
        uVar4 = uVar4 >> 1;
        goto joined_r0x00d68458;
      }
      break;
    case 5:
      if (((uVar4 & 1) != 0) || (*(uint *)(param_1 + 0x230) < 2)) goto LAB_00d68470;
      break;
    default:
      if ((uVar4 & 1) == 0) goto LAB_00d68484;
    }
  }
  if ((*(byte *)(param_1 + 0x164) >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Invalid attempt to read row data");
  }
  png_read_IDAT_data(param_1,*(undefined8 *)(param_1 + 0x260),uVar8 + 1);
  __src = *(byte **)(param_1 + 0x260);
  if (*__src != 0) {
    if (4 < *__src) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"bad adaptive filter value");
    }
    png_read_filter_row(param_1,local_48,__src + 1,*(long *)(param_1 + 600) + 1);
    __src = *(byte **)(param_1 + 0x260);
    uVar8 = local_40;
  }
  memcpy(*(void **)(param_1 + 600),__src,uVar8 + 1);
  if ((((*(byte *)(param_1 + 0x450) >> 2 & 1) != 0) && (*(char *)(param_1 + 0x454) == '@')) &&
     ((local_38 >> 1 & 1) != 0)) {
    if (local_37 == '\x10') {
      if (local_38 == 2) {
        lVar7 = 6;
      }
      else {
        if (local_38 != 6) goto LAB_00d68540;
        lVar7 = 8;
      }
      if (local_48[0] != 0) {
        puVar6 = (undefined1 *)(*(long *)(param_1 + 0x260) + 3);
        uVar4 = local_48[0];
        do {
          iVar1 = (uint)CONCAT11(*puVar6,puVar6[1]) + (uint)CONCAT11(puVar6[-2],puVar6[-1]);
          iVar2 = (uint)CONCAT11(puVar6[2],puVar6[3]) + (uint)CONCAT11(*puVar6,puVar6[1]);
          puVar6[-1] = (char)iVar1;
          uVar4 = uVar4 - 1;
          puVar6[3] = (char)iVar2;
          puVar6[-2] = (char)((uint)iVar1 >> 8);
          puVar6[2] = (char)((uint)iVar2 >> 8);
          puVar6 = puVar6 + lVar7;
        } while (uVar4 != 0);
      }
    }
    else if (local_37 == '\b') {
      if (local_38 == 2) {
        lVar7 = 3;
      }
      else {
        if (local_38 != 6) goto LAB_00d68540;
        lVar7 = 4;
      }
      if (local_48[0] != 0) {
        pcVar5 = (char *)(*(long *)(param_1 + 0x260) + 3);
        uVar4 = local_48[0];
        do {
          uVar4 = uVar4 - 1;
          pcVar5[-2] = pcVar5[-1] + pcVar5[-2];
          *pcVar5 = *pcVar5 + pcVar5[-1];
          pcVar5 = pcVar5 + lVar7;
        } while (uVar4 != 0);
      }
    }
  }
LAB_00d68540:
  if (*(int *)(param_1 + 0x16c) != 0) {
    png_do_read_transformations(param_1,local_48);
  }
  if (*(byte *)(param_1 + 0x2b7) == 0) {
    *(byte *)(param_1 + 0x2b7) = local_35;
    if (*(byte *)(param_1 + 0x2b6) < local_35) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"sequential row overflow");
    }
  }
  else if (*(byte *)(param_1 + 0x2b7) != local_35) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal sequential row size calculation error");
  }
  if ((*(char *)(param_1 + 0x2ac) == '\0') || ((*(uint *)(param_1 + 0x16c) >> 1 & 1) == 0)) {
    if (param_2 != 0) {
      png_combine_row(param_1,param_2,0xffffffff);
    }
    if (param_3 == 0) goto LAB_00d68604;
    uVar3 = 0xffffffff;
    param_2 = param_3;
  }
  else {
    if (*(byte *)(param_1 + 0x2ad) < 6) {
      png_do_read_interlace(local_48,*(long *)(param_1 + 0x260) + 1);
    }
    if (param_3 != 0) {
      png_combine_row(param_1,param_3,1);
    }
    if (param_2 == 0) goto LAB_00d68604;
    uVar3 = 0;
  }
  png_combine_row(param_1,param_2,uVar3);
LAB_00d68604:
  png_read_finish_row(param_1);
  if (*(code **)(param_1 + 0x348) != (code *)0x0) {
    (**(code **)(param_1 + 0x348))
              (param_1,*(undefined4 *)(param_1 + 0x24c),*(undefined1 *)(param_1 + 0x2ad));
  }
  return;
}

