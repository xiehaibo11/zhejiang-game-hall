
void png_read_IDAT_data(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_468 [1024];
  long local_68;
  
                    /* catch() { ... } // from try @ 010d23ac with catch @ 010d23f4 */
                    /* try { // try from 010d2410 to 011d2467 has its CatchHandler @ 010d2410
                       catch() { ... } // from try @ 010d2410 with catch @ 010d2410
                       catch() { ... } // from try @ 010d2474 with catch @ 010d2410 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar7 = 0;
  if (param_2 != 0) {
    uVar7 = param_3;
  }
  *(long *)(param_1 + 400) = param_2;
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (param_2 == 0) {
    do {
      if (*(int *)(param_1 + 0x180) == 0) {
        uVar2 = *(uint *)(param_1 + 0x290);
        while (uVar2 == 0) {
          png_crc_finish(param_1,0);
          uVar2 = png_read_chunk_header(param_1);
          *(uint *)(param_1 + 0x290) = uVar2;
                    /* catch() { ... } // from try @ 010d25b0 with catch @ 010d2578 */
          if (*(int *)(param_1 + 0x250) != 0x49444154) goto LAB_010d26e0;
        }
        lVar6 = *(long *)(param_1 + 0x4d0);
        if (*(uint *)(param_1 + 0x4e0) <= uVar2) {
          uVar2 = *(uint *)(param_1 + 0x4e0);
        }
        uVar5 = (ulong)uVar2;
        if (lVar6 == 0) {
LAB_010d25b4:
          lVar6 = png_malloc_base(param_1,uVar5);
          if (lVar6 == 0) goto LAB_010d26f0;
          *(long *)(param_1 + 0x4d0) = lVar6;
          *(ulong *)(param_1 + 0x4d8) = uVar5;
        }
        else if (*(ulong *)(param_1 + 0x4d8) < uVar5) {
                    /* try { // try from 010d25a8 to 011d25af has its CatchHandler @ 010d25f0 */
          *(undefined8 *)(param_1 + 0x4d0) = 0;
          *(undefined8 *)(param_1 + 0x4d8) = 0;
                    /* try { // try from 010d25b0 to 011d260b has its CatchHandler @ 010d2578 */
          png_free(param_1,lVar6);
          goto LAB_010d25b4;
        }
        png_read_data(param_1,lVar6,uVar5);
        png_calculate_crc(param_1,lVar6,uVar5);
                    /* catch() { ... } // from try @ 010d25a8 with catch @ 010d25f0 */
        *(long *)(param_1 + 0x178) = lVar6;
        *(uint *)(param_1 + 0x180) = uVar2;
        *(uint *)(param_1 + 0x290) = *(int *)(param_1 + 0x290) - uVar2;
      }
      *(undefined1 **)(param_1 + 400) = auStack_468;
      *(undefined4 *)(param_1 + 0x198) = 0x400;
      iVar3 = inflate(param_1 + 0x178,0);
      uVar2 = *(uint *)(param_1 + 0x198);
      *(undefined4 *)(param_1 + 0x198) = 0;
      uVar7 = (0x400 - (ulong)uVar2) + uVar7;
      if (iVar3 != 0) goto LAB_010d2638;
    } while (uVar7 != 0);
  }
  else {
    do {
      if (*(int *)(param_1 + 0x180) == 0) {
        uVar2 = *(uint *)(param_1 + 0x290);
        while (uVar2 == 0) {
                    /* try { // try from 010d2468 to 011d2473 has its CatchHandler @ 010d24f4 */
          png_crc_finish(param_1,0);
                    /* try { // try from 010d2474 to 011d254b has its CatchHandler @ 010d2410 */
          uVar2 = png_read_chunk_header(param_1);
          *(uint *)(param_1 + 0x290) = uVar2;
          if (*(int *)(param_1 + 0x250) != 0x49444154) goto LAB_010d26e0;
        }
        lVar6 = *(long *)(param_1 + 0x4d0);
        if (*(uint *)(param_1 + 0x4e0) <= uVar2) {
          uVar2 = *(uint *)(param_1 + 0x4e0);
        }
        uVar5 = (ulong)uVar2;
        if (lVar6 == 0) {
LAB_010d24bc:
          lVar6 = png_malloc_base(param_1,uVar5);
          if (lVar6 == 0) {
LAB_010d26f0:
                    /* WARNING: Subroutine does not return */
            png_chunk_error(param_1,"insufficient memory to read chunk");
          }
          *(long *)(param_1 + 0x4d0) = lVar6;
          *(ulong *)(param_1 + 0x4d8) = uVar5;
        }
        else if (*(ulong *)(param_1 + 0x4d8) < uVar5) {
          *(undefined8 *)(param_1 + 0x4d0) = 0;
          *(undefined8 *)(param_1 + 0x4d8) = 0;
          png_free(param_1,lVar6);
          goto LAB_010d24bc;
        }
        png_read_data(param_1,lVar6,uVar5);
                    /* catch() { ... } // from try @ 010d2468 with catch @ 010d24f4 */
        png_calculate_crc(param_1,lVar6,uVar5);
        *(long *)(param_1 + 0x178) = lVar6;
        *(uint *)(param_1 + 0x180) = uVar2;
        *(uint *)(param_1 + 0x290) = *(int *)(param_1 + 0x290) - uVar2;
      }
      uVar5 = uVar7;
      if (0xfffffffe < uVar7) {
        uVar5 = 0xffffffff;
      }
      *(int *)(param_1 + 0x198) = (int)uVar5;
      iVar3 = inflate(param_1 + 0x178,0);
      uVar2 = *(uint *)(param_1 + 0x198);
      *(undefined4 *)(param_1 + 0x198) = 0;
      uVar7 = (uVar7 - uVar5) + (ulong)uVar2;
      if (iVar3 != 0) goto LAB_010d2638;
    } while (uVar7 != 0);
  }
LAB_010d26ac:
                    /* try { // try from 010d26b0 to 011d26b3 has its CatchHandler @ 010d2714 */
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_010d2638:
  if (iVar3 == 1) {
    *(undefined8 *)(param_1 + 400) = 0;
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 8;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 8;
    if ((*(int *)(param_1 + 0x180) != 0) || (*(int *)(param_1 + 0x290) != 0)) {
      png_chunk_benign_error(param_1,"Extra compressed data");
    }
    if (uVar7 == 0) goto LAB_010d26ac;
    if (param_2 != 0) {
LAB_010d26e0:
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Not enough image data");
    }
    pcVar4 = "Too much image data";
  }
  else {
    png_zstream_error(param_1,iVar3);
    pcVar4 = *(char **)(param_1 + 0x1a8);
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,pcVar4);
    }
  }
  png_chunk_benign_error(param_1,pcVar4);
  goto LAB_010d26ac;
}

