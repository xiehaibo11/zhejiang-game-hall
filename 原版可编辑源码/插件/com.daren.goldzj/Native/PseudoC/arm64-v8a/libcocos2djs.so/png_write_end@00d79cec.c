
void png_write_end(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x164) >> 2 & 1) != 0) {
    if ((int)(uint)*(ushort *)(param_1 + 0x2a0) < *(int *)(param_1 + 0x2a4)) {
      png_benign_error(param_1,"Wrote palette index exceeding num_palette");
    }
    if (param_2 != 0) {
      if (((*(byte *)(param_2 + 9) >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0x165) >> 1 & 1) == 0))
      {
        png_write_tIME(param_1,param_2 + 0xa8);
      }
      if (0 < *(int *)(param_2 + 0x94)) {
        lVar4 = *(long *)(param_2 + 0xa0);
        lVar6 = 0;
        lVar7 = 0;
        do {
          iVar3 = *(int *)(lVar4 + lVar6);
          if (iVar3 < 1) {
            if (iVar3 < 0) {
              if (iVar3 == -1) {
                png_write_tEXt(param_1,*(undefined8 *)(lVar4 + lVar6 + 8),
                               *(undefined8 *)(lVar4 + lVar6 + 0x10),0);
                lVar4 = *(long *)(param_2 + 0xa0);
                *(undefined4 *)(lVar4 + lVar6) = 0xfffffffd;
              }
            }
            else {
              png_write_zTXt(param_1,*(undefined8 *)(lVar4 + lVar6 + 8),
                             *(undefined8 *)(lVar4 + lVar6 + 0x10),iVar3);
              lVar4 = *(long *)(param_2 + 0xa0);
              *(undefined4 *)(lVar4 + lVar6) = 0xfffffffe;
            }
          }
          else {
            lVar4 = lVar4 + lVar6;
            png_write_iTXt(param_1,iVar3,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x28),
                           *(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x10));
            lVar4 = *(long *)(param_2 + 0xa0);
            uVar2 = 0xfffffffd;
            if (*(int *)(lVar4 + lVar6) != -1) {
              uVar2 = 0xfffffffe;
            }
            *(undefined4 *)(lVar4 + lVar6) = uVar2;
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x38;
        } while (lVar7 < *(int *)(param_2 + 0x94));
      }
      if (0 < *(int *)(param_2 + 0x128)) {
        uVar5 = *(ulong *)(param_2 + 0x120);
        uVar1 = uVar5 + (long)*(int *)(param_2 + 0x128) * 0x20;
        do {
          if ((((*(byte *)(uVar5 + 0x18) >> 3 & 1) != 0) &&
              (iVar3 = png_handle_as_unknown(param_1,uVar5), iVar3 != 1)) &&
             (((iVar3 == 3 || ((*(byte *)(uVar5 + 3) >> 5 & 1) != 0)) ||
              ((iVar3 == 0 && (*(int *)(param_1 + 0x438) == 3)))))) {
            lVar7 = *(long *)(uVar5 + 0x10);
            if (lVar7 == 0) {
              png_warning(param_1,"Writing zero-length unknown chunk");
              lVar7 = *(long *)(uVar5 + 0x10);
            }
            png_write_chunk(param_1,uVar5,*(undefined8 *)(uVar5 + 8),lVar7);
          }
          uVar5 = uVar5 + 0x20;
        } while (uVar5 < uVar1);
      }
    }
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 8;
    png_write_IEND(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"No IDATs written into file");
}

