
/* WARNING: Type propagation algorithm not settling */

void png_write_info(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    png_write_info_before_PLTE(param_1,param_2);
    uVar3 = *(uint *)(param_2 + 8);
    if ((uVar3 >> 3 & 1) == 0) {
      if (*(char *)(param_2 + 0x25) == '\x03') {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Valid palette required for paletted images");
      }
    }
    else {
      png_write_PLTE(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined2 *)(param_2 + 0x20));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 4 & 1) != 0) {
      if ((((*(byte *)(param_1 + 0x16e) >> 3 & 1) != 0) && (*(char *)(param_2 + 0x25) == '\x03')) &&
         (*(short *)(param_2 + 0x22) != 0)) {
        lVar8 = 0;
        do {
          *(byte *)(*(long *)(param_2 + 0xb8) + lVar8) =
               ~*(byte *)(*(long *)(param_2 + 0xb8) + lVar8);
          lVar8 = lVar8 + 1;
        } while (lVar8 < (long)(ulong)*(ushort *)(param_2 + 0x22));
      }
      png_write_tRNS(param_1,*(undefined8 *)(param_2 + 0xb8),param_2 + 0xc0,
                     *(undefined2 *)(param_2 + 0x22),*(undefined1 *)(param_2 + 0x25));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 5 & 1) != 0) {
      png_write_bKGD(param_1,param_2 + 0xca,*(undefined1 *)(param_2 + 0x25));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 6 & 1) != 0) {
      png_write_hIST(param_1,*(undefined8 *)(param_2 + 0xf0),*(undefined2 *)(param_2 + 0x20));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 8 & 1) != 0) {
      png_write_oFFs(param_1,*(undefined4 *)(param_2 + 0xd4),*(undefined4 *)(param_2 + 0xd8),
                     *(undefined1 *)(param_2 + 0xdc));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 10 & 1) != 0) {
      png_write_pCAL(param_1,*(undefined8 *)(param_2 + 0xf8),*(undefined4 *)(param_2 + 0x100),
                     *(undefined4 *)(param_2 + 0x104),*(undefined1 *)(param_2 + 0x118),
                     *(undefined1 *)(param_2 + 0x119),*(undefined8 *)(param_2 + 0x108),
                     *(undefined8 *)(param_2 + 0x110));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 0xe & 1) != 0) {
      png_write_sCAL_s(param_1,*(undefined1 *)(param_2 + 0x13c),*(undefined8 *)(param_2 + 0x140),
                       *(undefined8 *)(param_2 + 0x148));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d6008 with catch @ 010d5fb4
                        */
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 7 & 1) != 0) {
      png_write_pHYs(param_1,*(undefined4 *)(param_2 + 0xe0),*(undefined4 *)(param_2 + 0xe4),
                     *(undefined1 *)(param_2 + 0xe8));
      uVar3 = *(uint *)(param_2 + 8);
    }
    if ((uVar3 >> 9 & 1) != 0) {
      png_write_tIME(param_1,param_2 + 0xa8);
      uVar3 = *(uint *)(param_2 + 8);
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x200;
    }
    if (((uVar3 >> 0xd & 1) != 0) && (0 < *(int *)(param_2 + 0x138))) {
                    /* try { // try from 010d6000 to 011d6007 has its CatchHandler @ 010d617c */
      lVar7 = 0;
      lVar8 = 0;
      do {
                    /* try { // try from 010d6008 to 011d617f has its CatchHandler @ 010d5fb4 */
        png_write_sPLT(param_1,*(long *)(param_2 + 0x130) + lVar7);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x20;
      } while (lVar8 < *(int *)(param_2 + 0x138));
    }
    if (0 < *(int *)(param_2 + 0x94)) {
      lVar5 = *(long *)(param_2 + 0xa0);
      lVar7 = 0;
      lVar8 = 0;
      do {
        iVar4 = *(int *)(lVar5 + lVar7);
        if (iVar4 < 1) {
          if (iVar4 == -1) {
            png_write_tEXt(param_1,*(undefined8 *)(lVar5 + lVar7 + 8),
                           *(undefined8 *)(lVar5 + lVar7 + 0x10),0);
            lVar5 = *(long *)(param_2 + 0xa0);
            *(undefined4 *)(lVar5 + lVar7) = 0xfffffffd;
          }
          else if (iVar4 == 0) {
            png_write_zTXt(param_1,*(undefined8 *)(lVar5 + lVar7 + 8),
                           *(undefined8 *)(lVar5 + lVar7 + 0x10),0);
            lVar5 = *(long *)(param_2 + 0xa0);
            *(undefined4 *)(lVar5 + lVar7) = 0xfffffffe;
          }
        }
        else {
          lVar5 = lVar5 + lVar7;
          png_write_iTXt(param_1,iVar4,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x28),
                         *(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(lVar5 + 0x10));
          lVar5 = *(long *)(param_2 + 0xa0);
          uVar2 = 0xfffffffd;
          if (*(int *)(lVar5 + lVar7) != -1) {
            uVar2 = 0xfffffffe;
          }
          *(undefined4 *)(lVar5 + lVar7) = uVar2;
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x38;
      } while (lVar8 < *(int *)(param_2 + 0x94));
    }
    if (0 < *(int *)(param_2 + 0x128)) {
      uVar6 = *(ulong *)(param_2 + 0x120);
      uVar1 = uVar6 + (long)*(int *)(param_2 + 0x128) * 0x20;
      do {
        if ((((*(byte *)(uVar6 + 0x18) >> 1 & 1) != 0) &&
            (iVar4 = png_handle_as_unknown(param_1,uVar6), iVar4 != 1)) &&
           (((iVar4 == 3 || ((*(byte *)(uVar6 + 3) >> 5 & 1) != 0)) ||
            ((iVar4 == 0 && (*(int *)(param_1 + 0x438) == 3)))))) {
          lVar8 = *(long *)(uVar6 + 0x10);
          if (lVar8 == 0) {
            png_warning(param_1,"Writing zero-length unknown chunk");
            lVar8 = *(long *)(uVar6 + 0x10);
          }
          png_write_chunk(param_1,uVar6,*(undefined8 *)(uVar6 + 8),lVar8);
        }
        uVar6 = uVar6 + 0x20;
      } while (uVar6 < uVar1);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d6000 with catch @ 010d617c
                        */
  return;
}

