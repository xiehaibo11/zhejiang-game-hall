
void png_read_info(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    png_read_sig(param_1,param_2);
LAB_010c42a0:
    do {
                    /* catch() { ... } // from try @ 010c438c with catch @ 010c42a0 */
      uVar2 = png_read_chunk_header(param_1);
      iVar1 = *(int *)(param_1 + 0x250);
      uVar4 = *(uint *)(param_1 + 0x164);
      if (iVar1 == 0x49444154) {
        if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          png_chunk_error(param_1,"Missing IHDR before IDAT");
        }
        if (((uVar4 >> 1 & 1) == 0) && (*(char *)(param_1 + 0x2af) == '\x03')) {
                    /* WARNING: Subroutine does not return */
          png_chunk_error(param_1,"Missing PLTE before IDAT");
        }
        if ((uVar4 >> 3 & 1) != 0) {
          png_chunk_benign_error(param_1,"Too many IDATs found");
          uVar4 = *(uint *)(param_1 + 0x164);
        }
        uVar5 = 4;
LAB_010c42f4:
        *(uint *)(param_1 + 0x164) = uVar4 | uVar5;
      }
      else if ((uVar4 >> 2 & 1) != 0) {
        uVar5 = 8;
        goto LAB_010c42f4;
      }
      if (iVar1 == 0x49454e44) {
        png_handle_IEND(param_1,param_2,uVar2);
        goto LAB_010c42a0;
      }
      if (iVar1 == 0x49484452) {
                    /* try { // try from 010c4314 to 011c4323 has its CatchHandler @ 010c440c */
        png_handle_IHDR(param_1,param_2,uVar2);
        goto LAB_010c42a0;
      }
                    /* try { // try from 010c4324 to 011c4333 has its CatchHandler @ 010c43e4 */
      iVar3 = png_chunk_unknown_handling(param_1,iVar1);
      if (iVar3 == 0) {
        if (iVar1 == 0x504c5445) {
          png_handle_PLTE(param_1,param_2,uVar2);
          goto LAB_010c42a0;
        }
        if (iVar1 == 0x49444154) goto LAB_010c4674;
                    /* try { // try from 010c438c to 011c4423 has its CatchHandler @ 010c42a0 */
        if (iVar1 < 0x70485973) {
                    /* catch() { ... } // from try @ 010c4380 with catch @ 010c43fc */
          if (iVar1 < 0x69434350) {
                    /* catch() { ... } // from try @ 010c4314 with catch @ 010c440c */
            if (iVar1 < 0x67414d41) {
              if (iVar1 == 0x624b4744) {
                png_handle_bKGD(param_1,param_2,uVar2);
                goto LAB_010c42a0;
              }
              if (iVar1 == 0x6348524d) {
                png_handle_cHRM(param_1,param_2,uVar2);
                goto LAB_010c42a0;
              }
            }
            else {
              if (iVar1 == 0x67414d41) {
                png_handle_gAMA(param_1,param_2,uVar2);
                goto LAB_010c42a0;
              }
              if (iVar1 == 0x68495354) {
                png_handle_hIST(param_1,param_2,uVar2);
                goto LAB_010c42a0;
              }
            }
          }
          else if (iVar1 < 0x6f464673) {
            if (iVar1 == 0x69434350) {
              png_handle_iCCP(param_1,param_2,uVar2);
              goto LAB_010c42a0;
            }
            if (iVar1 == 0x69545874) {
              png_handle_iTXt(param_1,param_2,uVar2);
              goto LAB_010c42a0;
            }
          }
          else {
            if (iVar1 == 0x6f464673) {
              png_handle_oFFs(param_1,param_2,uVar2);
              goto LAB_010c42a0;
            }
            if (iVar1 == 0x7043414c) {
              png_handle_pCAL(param_1,param_2,uVar2);
              goto LAB_010c42a0;
            }
          }
        }
        else if (iVar1 < 0x73524742) {
          if (iVar1 < 0x7343414c) {
            if (iVar1 == 0x70485973) {
              png_handle_pHYs(param_1,param_2,uVar2);
              goto LAB_010c42a0;
            }
            if (iVar1 == 0x73424954) {
              png_handle_sBIT(param_1,param_2,uVar2);
              goto LAB_010c42a0;
            }
          }
          else {
            if (iVar1 == 0x7343414c) {
              png_handle_sCAL(param_1,param_2,uVar2);
              goto LAB_010c42a0;
            }
            if (iVar1 == 0x73504c54) {
              png_handle_sPLT(param_1,param_2,uVar2);
              goto LAB_010c42a0;
            }
          }
        }
        else if (iVar1 < 0x74494d45) {
          if (iVar1 == 0x73524742) {
            png_handle_sRGB(param_1,param_2,uVar2);
            goto LAB_010c42a0;
          }
          if (iVar1 == 0x74455874) {
            png_handle_tEXt(param_1,param_2,uVar2);
            goto LAB_010c42a0;
          }
        }
        else {
          if (iVar1 == 0x74494d45) {
            png_handle_tIME(param_1,param_2,uVar2);
            goto LAB_010c42a0;
          }
          if (iVar1 == 0x74524e53) {
            png_handle_tRNS(param_1,param_2,uVar2);
            goto LAB_010c42a0;
          }
          if (iVar1 == 0x7a545874) {
                    /* catch() { ... } // from try @ 010c4324 with catch @ 010c43e4 */
            png_handle_zTXt(param_1,param_2,uVar2);
            goto LAB_010c42a0;
          }
        }
        png_handle_unknown(param_1,param_2,uVar2,0);
        goto LAB_010c42a0;
      }
      png_handle_unknown(param_1,param_2,uVar2,iVar3);
      if (iVar1 == 0x504c5445) {
        *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 2;
        goto LAB_010c42a0;
      }
    } while (iVar1 != 0x49444154);
    uVar2 = 0;
LAB_010c4674:
    *(undefined4 *)(param_1 + 0x290) = uVar2;
  }
  return;
}

