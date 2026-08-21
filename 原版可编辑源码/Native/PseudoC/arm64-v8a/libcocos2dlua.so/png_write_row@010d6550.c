
void png_write_row(long param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  uint local_38 [2];
  size_t local_30;
  byte local_28;
  char local_27;
  char local_26;
  byte local_25;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x24c) == 0) && (*(char *)(param_1 + 0x2ad) == '\0')) {
    if ((*(byte *)(param_1 + 0x165) >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"png_write_info was never called before png_write_row");
    }
    png_write_start_row(param_1);
    cVar1 = *(char *)(param_1 + 0x2ac);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x2ac);
  }
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0)) {
    switch(*(undefined1 *)(param_1 + 0x2ad)) {
    case 0:
      if ((*(byte *)(param_1 + 0x24c) & 7) != 0) goto LAB_010d6774;
      break;
    case 1:
      if (((*(byte *)(param_1 + 0x24c) & 7) != 0) || (*(uint *)(param_1 + 0x230) < 5))
      goto LAB_010d6774;
      break;
    case 2:
      if ((*(uint *)(param_1 + 0x24c) & 7) != 4) goto LAB_010d6774;
      break;
    case 3:
                    /* try { // try from 010d6730 to 011d679f has its CatchHandler @ 010d6730
                       catch(type#1 @ 00000000) { ... } // from try @ 010d6730 with catch @ 010d6730
                        */
      if (((*(byte *)(param_1 + 0x24c) & 3) != 0) || (*(uint *)(param_1 + 0x230) < 3))
      goto LAB_010d6774;
      break;
    case 4:
      if ((*(uint *)(param_1 + 0x24c) & 3) != 2) goto LAB_010d6774;
      break;
    case 5:
      if (((*(byte *)(param_1 + 0x24c) & 1) != 0) || (*(uint *)(param_1 + 0x230) < 2))
      goto LAB_010d6774;
      break;
    case 6:
      if ((*(byte *)(param_1 + 0x24c) & 1) == 0) goto LAB_010d6774;
    }
  }
  local_28 = *(byte *)(param_1 + 0x2af);
  local_26 = *(char *)(param_1 + 0x2b4);
  local_27 = *(char *)(param_1 + 0x2b1);
  local_38[0] = *(uint *)(param_1 + 0x23c);
  local_25 = local_27 * local_26;
  if ((local_25 & 0xf8) < 8) {
    local_30 = (ulong)local_38[0] * (ulong)local_25 + 7 >> 3;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d64dc with catch @ 010d65c4
                        */
    local_30 = (ulong)(local_25 >> 3) * (ulong)local_38[0];
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d647c with catch @ 010d65dc
                        */
  memcpy((void *)(*(long *)(param_1 + 0x260) + 1),param_2,local_30);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d631c with catch @ 010d65f0
                        */
  if ((((*(char *)(param_1 + 0x2ac) != '\0') && (*(byte *)(param_1 + 0x2ad) < 6)) &&
      ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0)) &&
     (png_do_write_interlace(local_38,*(long *)(param_1 + 0x260) + 1), local_38[0] == 0)) {
LAB_010d6774:
    png_write_finish_row(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x16c) != 0) {
    png_do_write_transformations(param_1,local_38);
  }
  if ((local_25 != *(byte *)(param_1 + 0x2b2)) || (local_25 != *(byte *)(param_1 + 0x2b7))) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal write transform logic error");
  }
  if ((((*(byte *)(param_1 + 0x450) >> 2 & 1) != 0) && (*(char *)(param_1 + 0x454) == '@')) &&
     ((local_28 >> 1 & 1) != 0)) {
    if (local_27 == '\x10') {
      if (local_28 == 2) {
        lVar7 = 6;
      }
      else {
        if (local_28 != 6) goto LAB_010d6834;
        lVar7 = 8;
      }
      if (local_38[0] != 0) {
        puVar6 = (undefined1 *)(*(long *)(param_1 + 0x260) + 3);
        uVar4 = local_38[0];
        do {
          iVar2 = (uint)CONCAT11(puVar6[-2],puVar6[-1]) - (uint)CONCAT11(*puVar6,puVar6[1]);
          iVar3 = (uint)CONCAT11(puVar6[2],puVar6[3]) - (uint)CONCAT11(*puVar6,puVar6[1]);
          puVar6[-1] = (char)iVar2;
          uVar4 = uVar4 - 1;
          puVar6[3] = (char)iVar3;
          puVar6[-2] = (char)((uint)iVar2 >> 8);
          puVar6[2] = (char)((uint)iVar3 >> 8);
          puVar6 = puVar6 + lVar7;
        } while (uVar4 != 0);
      }
    }
    else if (local_27 == '\b') {
      if (local_28 == 2) {
        lVar7 = 3;
      }
      else {
        if (local_28 != 6) goto LAB_010d6834;
        lVar7 = 4;
      }
                    /* try { // try from 010d67a0 to 011d67a3 has its CatchHandler @ 010d67b0 */
      if (local_38[0] != 0) {
        pcVar5 = (char *)(*(long *)(param_1 + 0x260) + 3);
        uVar4 = local_38[0];
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d67a0 with catch @ 010d67b0
                        */
          uVar4 = uVar4 - 1;
          pcVar5[-2] = pcVar5[-2] - pcVar5[-1];
          *pcVar5 = *pcVar5 - pcVar5[-1];
          pcVar5 = pcVar5 + lVar7;
        } while (uVar4 != 0);
      }
    }
  }
LAB_010d6834:
  if ((local_28 == 3) && (-1 < *(int *)(param_1 + 0x2a4))) {
    png_do_check_palette_indexes(param_1,local_38);
  }
  png_write_find_filter(param_1,local_38);
  if (*(code **)(param_1 + 0x350) != (code *)0x0) {
    (**(code **)(param_1 + 0x350))
              (param_1,*(undefined4 *)(param_1 + 0x24c),*(undefined1 *)(param_1 + 0x2ad));
  }
  return;
}

