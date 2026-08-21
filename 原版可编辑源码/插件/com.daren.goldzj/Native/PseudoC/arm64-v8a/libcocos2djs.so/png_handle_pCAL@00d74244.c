
void png_handle_pCAL(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  
  uVar11 = (ulong)param_3;
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) >> 2 & 1) != 0) {
    png_crc_finish(param_1,uVar11);
    pcVar7 = "out of place";
    goto LAB_00d743e0;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 9) >> 2 & 1) != 0)) {
    png_crc_finish(param_1,uVar11);
    pcVar7 = "duplicate";
    goto LAB_00d743e0;
  }
  lVar10 = *(long *)(param_1 + 0x4d0);
  uVar12 = (ulong)(param_3 + 1);
  if (lVar10 == 0) {
LAB_00d742b4:
    lVar10 = png_malloc_base(param_1,uVar12);
    if (lVar10 != 0) {
      *(long *)(param_1 + 0x4d0) = lVar10;
      *(ulong *)(param_1 + 0x4d8) = uVar12;
      goto LAB_00d742d0;
    }
    png_crc_finish(param_1,param_3);
  }
  else {
    if (*(ulong *)(param_1 + 0x4d8) < uVar12) {
      *(undefined8 *)(param_1 + 0x4d0) = 0;
      *(undefined8 *)(param_1 + 0x4d8) = 0;
      png_free(param_1,lVar10);
      goto LAB_00d742b4;
    }
LAB_00d742d0:
    png_read_data(param_1,lVar10,uVar11);
    png_calculate_crc(param_1,lVar10,uVar11);
    iVar5 = png_crc_finish(param_1,0);
    if (iVar5 != 0) {
      return;
    }
    pcVar7 = (char *)(lVar10 + uVar11);
    *pcVar7 = '\0';
    pcVar13 = (char *)(lVar10 + 0xb);
    do {
      pcVar8 = pcVar13;
      pcVar13 = pcVar8 + 1;
    } while (pcVar8[-0xb] != '\0');
    if (pcVar7 <= pcVar8 + 1) {
      pcVar7 = "invalid";
      goto LAB_00d743e0;
    }
    bVar1 = pcVar8[-2];
    bVar2 = pcVar8[-1];
    uVar11 = (ulong)bVar2;
    if ((((bVar1 == 0) && (bVar2 != 2)) || ((bVar1 - 1 < 2 && (bVar2 != 3)))) ||
       ((bVar1 == 3 && (bVar2 != 4)))) {
      pcVar7 = "invalid parameter count";
      goto LAB_00d743e0;
    }
    pcVar13 = pcVar8 + -1;
    uVar3 = (*(uint *)(pcVar8 + -10) & 0xff00ff00) >> 8 | (*(uint *)(pcVar8 + -10) & 0xff00ff) << 8;
    uVar4 = (*(uint *)(pcVar8 + -6) & 0xff00ff00) >> 8 | (*(uint *)(pcVar8 + -6) & 0xff00ff) << 8;
    if (3 < bVar1) {
      png_chunk_benign_error(param_1,"unrecognized equation type");
    }
    do {
      pcVar13 = pcVar13 + 1;
    } while (*pcVar13 != '\0');
    lVar6 = png_malloc_warn(param_1,uVar11 << 3);
    if (lVar6 != 0) {
      if (bVar2 != 0) {
        lVar9 = 0;
        do {
          pcVar13 = pcVar13 + 1;
          *(char **)(lVar6 + lVar9 * 8) = pcVar13;
          while( true ) {
            if (pcVar7 < pcVar13) {
              png_free(param_1,lVar6);
              pcVar7 = "invalid data";
              goto LAB_00d743e0;
            }
            if (*pcVar13 == '\0') break;
            pcVar13 = pcVar13 + 1;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (long)uVar11);
      }
      png_set_pCAL(param_1,param_2,lVar10,uVar3 >> 0x10 | uVar3 << 0x10,
                   uVar4 >> 0x10 | uVar4 << 0x10,bVar1,uVar11,pcVar8,lVar6);
      png_free(param_1,lVar6);
      return;
    }
  }
  pcVar7 = "out of memory";
LAB_00d743e0:
  png_chunk_benign_error(param_1,pcVar7);
  return;
}

