
void png_handle_iCCP(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  void *__dest;
  uint uVar9;
  char *pcVar10;
  ulong __n;
  void *__dest_00;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_550;
  uint local_544;
  undefined1 auStack_540 [1024];
  uint local_140 [32];
  byte local_c0;
  byte local_bf;
  byte local_be;
  byte local_bd;
  char local_bc [84];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_544 = param_3;
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) & 6) == 0) {
    if (param_3 < 9) {
      png_crc_finish(param_1,param_3);
      pcVar10 = "too short";
    }
    else {
      if ((short)*(ushort *)(param_1 + 0x55a) < 0) {
        png_crc_finish(param_1,param_3);
        goto LAB_00d7311c;
      }
      if ((*(ushort *)(param_1 + 0x55a) >> 2 & 1) != 0) {
        pcVar10 = "too many profiles";
        goto LAB_00d73210;
      }
      uVar9 = param_3;
      if (0x50 < param_3) {
        uVar9 = 0x51;
      }
      png_read_data(param_1,local_bc,uVar9);
      png_calculate_crc(param_1,local_bc,uVar9);
      param_3 = param_3 - uVar9;
      local_544 = param_3;
      if (uVar9 == 0) {
LAB_00d73208:
        pcVar10 = "bad keyword";
LAB_00d73210:
        png_crc_finish(param_1,param_3);
      }
      else {
        lVar11 = 0;
        lVar1 = param_1 + 0x510;
        while (local_bc[lVar11] != '\0') {
          lVar11 = lVar11 + 1;
          if ((0x4f < (uint)lVar11) || (uVar9 <= (uint)lVar11)) break;
        }
        iVar8 = (int)lVar11;
        if (0x4e < iVar8 - 1U) goto LAB_00d73208;
        if ((uVar9 <= iVar8 + 1U) || (__n = (ulong)(iVar8 + 1U), local_bc[__n] != '\0')) {
          pcVar10 = "bad compression method";
          goto LAB_00d73210;
        }
        iVar7 = FUN_00d73574(param_1,0x69434350);
        if (iVar7 != 0) {
          pcVar10 = *(char **)(param_1 + 0x1a8);
          goto LAB_00d73210;
        }
        local_550 = 0x84;
        *(char **)(param_1 + 0x178) = local_bc + (iVar8 + 2U);
        *(uint *)(param_1 + 0x180) = uVar9 - (iVar8 + 2U);
        FUN_00d73690(param_1,auStack_540,&local_544,local_140,&local_550,0);
        if (local_550 == 0) {
          uVar9 = (local_140[0] & 0xff00ff00) >> 8 | (local_140[0] & 0xff00ff) << 8;
          uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
          iVar8 = png_icc_check_length(param_1,lVar1,local_bc,uVar9);
          if ((iVar8 == 0) ||
             (iVar8 = png_icc_check_header
                                (param_1,lVar1,local_bc,uVar9,local_140,
                                 *(undefined1 *)(param_1 + 0x2af)), iVar8 == 0)) {
            pcVar10 = (char *)0x0;
            goto LAB_00d73444;
          }
          __dest_00 = *(void **)(param_1 + 0x4d0);
          uVar12 = (ulong)uVar9;
          if (__dest_00 == (void *)0x0) {
LAB_00d73334:
            __dest_00 = (void *)png_malloc_base(param_1,uVar12);
            if (__dest_00 == (void *)0x0) {
              pcVar10 = "out of memory";
              goto LAB_00d73444;
            }
            *(void **)(param_1 + 0x4d0) = __dest_00;
            *(ulong *)(param_1 + 0x4d8) = uVar12;
          }
          else if (*(ulong *)(param_1 + 0x4d8) < uVar12) {
            *(undefined8 *)(param_1 + 0x4d0) = 0;
            *(undefined8 *)(param_1 + 0x4d8) = 0;
            png_free(param_1,__dest_00);
            goto LAB_00d73334;
          }
          memcpy(__dest_00,local_140,0x84);
          uVar13 = (ulong)(((uint)local_c0 << 0x18 | (uint)local_bf << 0x10 | (uint)local_be << 8 |
                           (uint)local_bd) * 0xc);
          local_550 = uVar13;
          FUN_00d73690(param_1,auStack_540,&local_544,(long)__dest_00 + 0x84,&local_550,0);
          if (local_550 != 0) {
            pcVar10 = *(char **)(param_1 + 0x1a8);
            goto LAB_00d73444;
          }
          iVar8 = png_icc_check_tag_table(param_1,lVar1,local_bc,uVar9,__dest_00);
          if (iVar8 == 0) {
            pcVar10 = (char *)0x0;
            goto LAB_00d73444;
          }
          local_550 = (uVar12 - 0x84) - uVar13;
          FUN_00d73690(param_1,auStack_540,&local_544,(long)__dest_00 + 0x84 + uVar13,&local_550,1);
          uVar2 = local_544;
          if ((local_544 != 0) && ((*(byte *)(param_1 + 0x16a) >> 4 & 1) == 0)) {
            pcVar10 = "extra compressed data";
            goto LAB_00d73444;
          }
          if (local_550 != 0) {
            pcVar10 = "truncated";
            goto LAB_00d73444;
          }
          if (local_544 != 0) {
            png_chunk_warning(param_1,"extra compressed data");
          }
          png_crc_finish(param_1,uVar2);
          png_icc_set_sRGB(param_1,lVar1,__dest_00,*(undefined8 *)(param_1 + 0x1d8));
          if (param_2 == 0) {
LAB_00d7351c:
            bVar6 = false;
            pcVar10 = (char *)0x0;
          }
          else {
            png_free_data(param_1,param_2,0x10,0);
            __dest = (void *)png_malloc_base(param_1,__n);
            *(void **)(param_2 + 0x80) = __dest;
            if (__dest != (void *)0x0) {
              memcpy(__dest,local_bc,__n);
              uVar2 = *(uint *)(param_2 + 0x11c);
              uVar3 = *(uint *)(param_2 + 8);
              *(uint *)(param_2 + 0x90) = uVar9;
              *(void **)(param_2 + 0x88) = __dest_00;
              *(undefined8 *)(param_1 + 0x4d0) = 0;
              *(uint *)(param_2 + 0x11c) = uVar2 | 0x10;
              *(uint *)(param_2 + 8) = uVar3 | 0x1000;
              png_colorspace_sync(param_1,param_2);
              goto LAB_00d7351c;
            }
            *(ushort *)(param_1 + 0x55a) = *(ushort *)(param_1 + 0x55a) | 0x8000;
            png_colorspace_sync(param_1,param_2);
            pcVar10 = "out of memory";
            bVar6 = true;
          }
          bVar5 = true;
          *(undefined4 *)(param_1 + 0x170) = 0;
          if (!bVar6) goto LAB_00d7311c;
        }
        else {
          pcVar10 = *(char **)(param_1 + 0x1a8);
LAB_00d73444:
          bVar5 = false;
          *(undefined4 *)(param_1 + 0x170) = 0;
        }
        param_3 = local_544;
        if (!bVar5) goto LAB_00d73210;
      }
      *(ushort *)(param_1 + 0x55a) = *(ushort *)(param_1 + 0x55a) | 0x8000;
      png_colorspace_sync(param_1,param_2);
      if (pcVar10 == (char *)0x0) goto LAB_00d7311c;
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar10 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar10);
LAB_00d7311c:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

