
/* WARNING: Type propagation algorithm not settling */

void png_read_end(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar2 = png_chunk_unknown_handling(param_1,0x49444154);
    if (iVar2 == 0) {
      png_read_finish_IDAT(param_1);
    }
    if ((*(char *)(param_1 + 0x2af) == '\x03') &&
       ((int)(uint)*(ushort *)(param_1 + 0x2a0) < *(int *)(param_1 + 0x2a4))) {
      png_benign_error(param_1,"Read palette index exceeding num_palette");
    }
    do {
      while( true ) {
        iVar3 = png_read_chunk_header(param_1);
        iVar2 = *(int *)(param_1 + 0x250);
        if (iVar2 != 0x49484452) break;
        png_handle_IHDR(param_1,param_2,iVar3);
        bVar1 = *(byte *)(param_1 + 0x164);
joined_r0x00d68948:
        if ((bVar1 >> 4 & 1) != 0) {
          return;
        }
      }
      if (iVar2 == 0x49454e44) {
        png_handle_IEND(param_1,param_2,iVar3);
        bVar1 = *(byte *)(param_1 + 0x164);
        goto joined_r0x00d68948;
      }
      if (param_2 == 0) {
LAB_00d68d34:
        png_crc_finish(param_1,iVar3);
LAB_00d68d40:
        bVar1 = *(byte *)(param_1 + 0x164);
        goto joined_r0x00d68948;
      }
      iVar4 = png_chunk_unknown_handling(param_1,iVar2);
      if (iVar4 != 0) {
        if (iVar2 == 0x49444154) {
          if ((iVar3 != 0) || ((*(byte *)(param_1 + 0x165) >> 5 & 1) != 0)) {
            png_benign_error(param_1,"Too many IDATs found");
          }
LAB_00d68d08:
          png_handle_unknown(param_1,param_2,iVar3,iVar4);
          bVar1 = *(byte *)(param_1 + 0x164);
        }
        else {
          png_handle_unknown(param_1,param_2,iVar3,iVar4);
          if (iVar2 != 0x504c5445) goto LAB_00d68d40;
          *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 2;
          bVar1 = *(byte *)(param_1 + 0x164);
        }
        goto joined_r0x00d68948;
      }
      if (iVar2 == 0x49444154) {
        if ((iVar3 != 0) || ((*(byte *)(param_1 + 0x165) >> 5 & 1) != 0)) {
          png_benign_error(param_1,"Too many IDATs found");
        }
        goto LAB_00d68d34;
      }
      if (iVar2 < 0x70485973) {
        if (iVar2 < 0x68495354) {
          if (iVar2 < 0x6348524d) {
            if (iVar2 == 0x504c5445) {
              png_handle_PLTE(param_1,param_2,iVar3);
              bVar1 = *(byte *)(param_1 + 0x164);
            }
            else {
              if (iVar2 != 0x624b4744) goto LAB_00d68c54;
              png_handle_bKGD(param_1,param_2,iVar3);
              bVar1 = *(byte *)(param_1 + 0x164);
            }
          }
          else if (iVar2 == 0x6348524d) {
            png_handle_cHRM(param_1,param_2,iVar3);
            bVar1 = *(byte *)(param_1 + 0x164);
          }
          else {
            if (iVar2 != 0x67414d41) goto LAB_00d68c54;
            png_handle_gAMA(param_1,param_2,iVar3);
            bVar1 = *(byte *)(param_1 + 0x164);
          }
        }
        else if (iVar2 < 0x69545874) {
          if (iVar2 == 0x68495354) {
            png_handle_hIST(param_1,param_2,iVar3);
            bVar1 = *(byte *)(param_1 + 0x164);
          }
          else {
            if (iVar2 != 0x69434350) goto LAB_00d68c54;
            png_handle_iCCP(param_1,param_2,iVar3);
            bVar1 = *(byte *)(param_1 + 0x164);
          }
        }
        else if (iVar2 == 0x69545874) {
          png_handle_iTXt(param_1,param_2,iVar3);
          bVar1 = *(byte *)(param_1 + 0x164);
        }
        else if (iVar2 == 0x6f464673) {
          png_handle_oFFs(param_1,param_2,iVar3);
          bVar1 = *(byte *)(param_1 + 0x164);
        }
        else {
          if (iVar2 != 0x7043414c) goto LAB_00d68c54;
          png_handle_pCAL(param_1,param_2,iVar3);
          bVar1 = *(byte *)(param_1 + 0x164);
        }
        goto joined_r0x00d68948;
      }
      if (0x73524741 < iVar2) {
        if (iVar2 < 0x74494d45) {
          if (iVar2 == 0x73524742) {
            png_handle_sRGB(param_1,param_2,iVar3);
            bVar1 = *(byte *)(param_1 + 0x164);
          }
          else {
            if (iVar2 != 0x74455874) goto LAB_00d68c54;
            png_handle_tEXt(param_1,param_2,iVar3);
            bVar1 = *(byte *)(param_1 + 0x164);
          }
        }
        else if (iVar2 == 0x74494d45) {
          png_handle_tIME(param_1,param_2,iVar3);
          bVar1 = *(byte *)(param_1 + 0x164);
        }
        else if (iVar2 == 0x74524e53) {
          png_handle_tRNS(param_1,param_2,iVar3);
          bVar1 = *(byte *)(param_1 + 0x164);
        }
        else {
          if (iVar2 != 0x7a545874) goto LAB_00d68c54;
          png_handle_zTXt(param_1,param_2,iVar3);
          bVar1 = *(byte *)(param_1 + 0x164);
        }
        goto joined_r0x00d68948;
      }
      if (0x7343414b < iVar2) {
        if (iVar2 != 0x7343414c) {
          if (iVar2 != 0x73504c54) goto LAB_00d68c54;
          png_handle_sPLT(param_1,param_2,iVar3);
          bVar1 = *(byte *)(param_1 + 0x164);
          goto joined_r0x00d68b34;
        }
        png_handle_sCAL(param_1,param_2,iVar3);
        bVar1 = *(byte *)(param_1 + 0x164);
        goto joined_r0x00d68948;
      }
      if (iVar2 != 0x70485973) {
        if (iVar2 != 0x73424954) {
LAB_00d68c54:
          iVar4 = 0;
          goto LAB_00d68d08;
        }
        png_handle_sBIT(param_1,param_2,iVar3);
        bVar1 = *(byte *)(param_1 + 0x164);
        goto joined_r0x00d68948;
      }
      png_handle_pHYs(param_1,param_2,iVar3);
      bVar1 = *(byte *)(param_1 + 0x164);
joined_r0x00d68b34:
    } while ((bVar1 >> 4 & 1) == 0);
  }
  return;
}

