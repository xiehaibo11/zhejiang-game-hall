
void png_handle_iTXt(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 local_98 [2];
  long local_90;
  long lStack_88;
  undefined8 local_80;
  ulong uStack_78;
  long local_70;
  long lStack_68;
  ulong local_58;
  
  if (*(int *)(param_1 + 0x49c) != 0) {
    iVar5 = *(int *)(param_1 + 0x49c) + -1;
    if (iVar5 == 0) {
      png_crc_finish(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x49c) = iVar5;
    if (iVar5 == 1) {
      png_crc_finish(param_1,param_3);
      pcVar6 = "no space in chunk cache";
      goto LAB_010d1494;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x164);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar3 >> 2 & 1) != 0) {
    *(uint *)(param_1 + 0x164) = uVar3 | 8;
  }
  lVar8 = *(long *)(param_1 + 0x4d0);
  uVar9 = (ulong)(param_3 + 1);
  if (lVar8 == 0) {
LAB_010d13c8:
    lVar8 = png_malloc_base(param_1,uVar9);
    if (lVar8 == 0) {
      png_chunk_warning(param_1,"insufficient memory to read chunk");
      png_crc_finish(param_1,param_3);
      pcVar6 = "out of memory";
LAB_010d1494:
                    /* try { // try from 010d14ac to 011d14b3 has its CatchHandler @ 010d1594 */
                    /* try { // try from 010d14b4 to 011d15d3 has its CatchHandler @ 010d1290 */
      png_chunk_benign_error(param_1,pcVar6);
      return;
    }
    *(long *)(param_1 + 0x4d0) = lVar8;
    *(ulong *)(param_1 + 0x4d8) = uVar9;
  }
  else if (*(ulong *)(param_1 + 0x4d8) < uVar9) {
    *(long *)(param_1 + 0x4d0) = 0;
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    png_free(param_1,lVar8);
    goto LAB_010d13c8;
  }
  png_read_data(param_1,lVar8,param_3);
  png_calculate_crc(param_1,lVar8,param_3);
  iVar5 = png_crc_finish(param_1,0);
  if (iVar5 != 0) {
    return;
  }
  if (param_3 != 0) {
    lVar7 = 0;
    do {
      if (*(char *)(lVar8 + lVar7) == '\0') break;
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < param_3);
    iVar5 = (int)lVar7;
    if (iVar5 - 1U < 0x4f) {
      if (param_3 < iVar5 + 5U) {
        pcVar6 = "truncated";
      }
      else {
        cVar4 = *(char *)(lVar8 + (ulong)(iVar5 + 1));
        if ((cVar4 == '\0') ||
           ((cVar4 == '\x01' && (*(char *)(lVar8 + (ulong)(iVar5 + 2)) == '\0')))) {
          uVar3 = iVar5 + 3;
          uVar9 = (ulong)uVar3;
          local_58 = 0;
          if (uVar3 < param_3) {
            uVar9 = (ulong)uVar3;
            do {
              if (*(char *)(lVar8 + uVar9) == '\0') break;
              uVar9 = uVar9 + 1;
            } while ((uint)uVar9 < param_3);
          }
          uVar1 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar1;
          if (uVar1 < param_3) {
            uVar9 = (ulong)uVar1;
            do {
              if (*(char *)(lVar8 + uVar9) == '\0') break;
              uVar9 = uVar9 + 1;
            } while ((uint)uVar9 < param_3);
          }
          uVar2 = (int)uVar9 + 1;
          if ((cVar4 == '\0') && (uVar2 <= param_3)) {
            local_58 = (ulong)(param_3 - uVar2);
          }
          else {
            pcVar6 = "truncated";
            if ((cVar4 == '\0') || (param_3 <= uVar2)) goto LAB_010d1448;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d14ac with catch @ 010d1594
                        */
            local_58 = 0xffffffffffffffff;
            iVar5 = FUN_010d1100(param_1,param_3,uVar2,&local_58);
            if (iVar5 == 1) {
              lVar8 = *(long *)(param_1 + 0x4d0);
            }
            else {
              pcVar6 = *(char **)(param_1 + 0x1a8);
              if (pcVar6 != (char *)0x0) goto LAB_010d1448;
            }
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d1440 with catch @ 010d15bc
                        */
          *(undefined1 *)(lVar8 + local_58 + uVar2) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d12e0 with catch @ 010d15d0
                        */
          local_70 = lVar8 + (ulong)uVar3;
          lStack_68 = lVar8 + (ulong)uVar1;
          local_98[0] = 1;
          if (cVar4 != '\0') {
            local_98[0] = 2;
          }
          lStack_88 = lVar8 + (ulong)uVar2;
          local_80 = 0;
          uStack_78 = local_58;
          local_90 = lVar8;
          iVar5 = png_set_text_2(param_1,param_2,local_98,1);
          if (iVar5 == 0) {
            return;
          }
          pcVar6 = "insufficient memory";
        }
        else {
          pcVar6 = "bad compression info";
        }
      }
      goto LAB_010d1448;
    }
  }
                    /* try { // try from 010d1440 to 011d1447 has its CatchHandler @ 010d15bc */
  pcVar6 = "bad keyword";
LAB_010d1448:
  png_chunk_benign_error(param_1,pcVar6);
  return;
}

