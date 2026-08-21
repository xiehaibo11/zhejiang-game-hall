
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
    goto LAB_010d0888;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 9) >> 2 & 1) != 0)) {
    png_crc_finish(param_1,uVar11);
    pcVar7 = "duplicate";
    goto LAB_010d0888;
  }
  lVar10 = *(long *)(param_1 + 0x4d0);
  uVar12 = (ulong)(param_3 + 1);
  if (lVar10 == 0) {
LAB_010d075c:
    lVar10 = png_malloc_base(param_1,uVar12);
    if (lVar10 != 0) {
      *(long *)(param_1 + 0x4d0) = lVar10;
      *(ulong *)(param_1 + 0x4d8) = uVar12;
      goto LAB_010d0778;
    }
    png_crc_finish(param_1,param_3);
  }
  else {
    if (*(ulong *)(param_1 + 0x4d8) < uVar12) {
      *(undefined8 *)(param_1 + 0x4d0) = 0;
      *(undefined8 *)(param_1 + 0x4d8) = 0;
      png_free(param_1,lVar10);
      goto LAB_010d075c;
    }
LAB_010d0778:
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
                    /* catch() { ... } // from try @ 010d03e8 with catch @ 010d0880 */
                    /* catch() { ... } // from try @ 010d03b0 with catch @ 010d0884 */
      pcVar7 = "invalid";
      goto LAB_010d0888;
    }
    bVar1 = pcVar8[-2];
    bVar2 = pcVar8[-1];
    uVar11 = (ulong)bVar2;
    if ((((bVar1 == 0) && (bVar2 != 2)) || ((bVar1 - 1 < 2 && (bVar2 != 3)))) ||
       ((bVar1 == 3 && (bVar2 != 4)))) {
      pcVar7 = "invalid parameter count";
      goto LAB_010d0888;
    }
    pcVar13 = pcVar8 + -1;
    uVar3 = (*(uint *)(pcVar8 + -10) & 0xff00ff00) >> 8 | (*(uint *)(pcVar8 + -10) & 0xff00ff) << 8;
    uVar4 = (*(uint *)(pcVar8 + -6) & 0xff00ff00) >> 8 | (*(uint *)(pcVar8 + -6) & 0xff00ff) << 8;
                    /* catch() { ... } // from try @ 010d03c0 with catch @ 010d08c0 */
    if (3 < bVar1) {
      png_chunk_benign_error(param_1,"unrecognized equation type");
    }
    do {
      pcVar13 = pcVar13 + 1;
    } while (*pcVar13 != '\0');
                    /* catch() { ... } // from try @ 010d0584 with catch @ 010d08e0 */
    lVar6 = png_malloc_warn(param_1,uVar11 << 3);
                    /* catch() { ... } // from try @ 010d0408 with catch @ 010d08f0 */
    if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 010d0570 with catch @ 010d08f4 */
      if (bVar2 != 0) {
        lVar9 = 0;
        do {
          pcVar13 = pcVar13 + 1;
          *(char **)(lVar6 + lVar9 * 8) = pcVar13;
          while( true ) {
            if (pcVar7 < pcVar13) {
              png_free(param_1,lVar6);
              pcVar7 = "invalid data";
              goto LAB_010d0888;
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
                    /* catch() { ... } // from try @ 010d0550 with catch @ 010d0874 */
                    /* catch() { ... } // from try @ 010d0518 with catch @ 010d0878 */
  pcVar7 = "out of memory";
                    /* catch() { ... } // from try @ 010d04cc with catch @ 010d087c */
LAB_010d0888:
                    /* catch() { ... } // from try @ 010d0670 with catch @ 010d0888 */
                    /* catch() { ... } // from try @ 010d05c0 with catch @ 010d088c */
                    /* catch() { ... } // from try @ 010d04dc with catch @ 010d0890 */
                    /* catch() { ... } // from try @ 010d0430 with catch @ 010d0894 */
                    /* catch() { ... } // from try @ 010d062c with catch @ 010d0898 */
                    /* catch() { ... } // from try @ 010d0528 with catch @ 010d08a0 */
  png_chunk_benign_error(param_1,pcVar7);
  return;
}

