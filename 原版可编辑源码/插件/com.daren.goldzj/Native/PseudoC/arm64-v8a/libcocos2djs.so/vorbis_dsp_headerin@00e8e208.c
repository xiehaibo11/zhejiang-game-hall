
void vorbis_dsp_headerin(int *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  size_t __nmemb;
  long lVar13;
  long lVar14;
  undefined1 auStack_80 [48];
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    oggpack_readinit(auStack_80,*param_3);
    iVar4 = oggpack_read(auStack_80,8);
    local_50 = oggpack_read(auStack_80,8);
    local_4f = oggpack_read(auStack_80,8);
    local_4e = oggpack_read(auStack_80,8);
    local_4d = oggpack_read(auStack_80,8);
    local_4c = oggpack_read(auStack_80,8);
    local_4b = oggpack_read(auStack_80,8);
    iVar5 = memcmp(&local_50,"vorbis",6);
    if (iVar5 != 0) {
      uVar7 = 0xffffff7c;
      goto LAB_00e8e864;
    }
    if (iVar4 == 5) {
      if ((*(long *)(param_1 + 2) != 0) && (param_2[3] != 0)) {
        lVar13 = *(long *)(param_1 + 0xc);
        if (lVar13 == 0) {
LAB_00e8e4ec:
          uVar7 = 0xffffff7f;
          goto LAB_00e8e864;
        }
        iVar4 = oggpack_read(auStack_80,8);
        *(int *)(lVar13 + 0x20) = iVar4 + 1;
        pvVar9 = calloc((long)(iVar4 + 1),0x68);
        *(void **)(lVar13 + 0x50) = pvVar9;
        if (*(int *)(lVar13 + 0x20) < 1) {
LAB_00e8e4f4:
          iVar4 = oggpack_read(auStack_80,6);
          if (-1 < iVar4) {
            iVar4 = iVar4 + 1;
            do {
              lVar10 = oggpack_read(auStack_80,0x10);
              if (lVar10 != 0) goto LAB_00e8e858;
              iVar4 = iVar4 + -1;
            } while (0 < iVar4);
          }
          iVar4 = oggpack_read(auStack_80,6);
          uVar6 = iVar4 + 1;
          *(uint *)(lVar13 + 0x18) = uVar6;
          pvVar9 = malloc(-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3);
          *(void **)(lVar13 + 0x40) = pvVar9;
          pvVar9 = malloc((long)*(int *)(lVar13 + 0x18));
          *(void **)(lVar13 + 0x38) = pvVar9;
          if (0 < *(int *)(lVar13 + 0x18)) {
            lVar10 = 0;
            do {
              uVar2 = oggpack_read(auStack_80,0x10);
              *(undefined1 *)(*(long *)(lVar13 + 0x38) + lVar10) = uVar2;
              bVar3 = *(byte *)(*(long *)(lVar13 + 0x38) + lVar10);
              if (1 < bVar3) goto LAB_00e8e858;
              if (bVar3 == 0) {
                uVar7 = floor0_info_unpack(param_1,auStack_80);
              }
              else {
                uVar7 = floor1_info_unpack();
              }
              *(undefined8 *)(*(long *)(lVar13 + 0x40) + lVar10 * 8) = uVar7;
              if (*(long *)(*(long *)(lVar13 + 0x40) + lVar10 * 8) == 0) goto LAB_00e8e858;
              lVar10 = lVar10 + 1;
            } while (lVar10 < *(int *)(lVar13 + 0x18));
          }
          iVar4 = oggpack_read(auStack_80,6);
          *(int *)(lVar13 + 0x1c) = iVar4 + 1;
          pvVar9 = malloc((long)(iVar4 + 1) * 0x30);
          *(void **)(lVar13 + 0x48) = pvVar9;
          if (*(int *)(lVar13 + 0x1c) < 1) {
LAB_00e8e730:
            iVar4 = oggpack_read(auStack_80,6);
            *(int *)(lVar13 + 0x14) = iVar4 + 1;
            pvVar9 = malloc((long)(iVar4 + 1) * 0x28);
            *(void **)(lVar13 + 0x30) = pvVar9;
            if (0 < *(int *)(lVar13 + 0x14)) {
              lVar14 = 0;
              lVar10 = 0;
              do {
                lVar11 = oggpack_read(auStack_80,0x10);
                if ((lVar11 != 0) ||
                   (iVar4 = mapping_info_unpack(*(long *)(lVar13 + 0x30) + lVar14,param_1,auStack_80
                                               ), iVar4 != 0)) goto LAB_00e8e858;
                lVar10 = lVar10 + 1;
                lVar14 = lVar14 + 0x28;
              } while (lVar10 < *(int *)(lVar13 + 0x14));
            }
            iVar4 = oggpack_read(auStack_80,6);
            uVar6 = iVar4 + 1;
            *(uint *)(lVar13 + 0x10) = uVar6;
            pvVar9 = malloc(-(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar6 << 1);
            iVar4 = *(int *)(lVar13 + 0x10);
            *(void **)(lVar13 + 0x28) = pvVar9;
            lVar10 = oggpack_read(auStack_80,1);
            if (0 < iVar4) {
              lVar11 = 0;
              lVar14 = 0;
              do {
                *(char *)(*(long *)(lVar13 + 0x28) + lVar11) = (char)lVar10;
                lVar10 = oggpack_read(auStack_80,0x10);
                if ((lVar10 != 0) || (lVar10 = oggpack_read(auStack_80,0x10), lVar10 != 0))
                goto LAB_00e8e858;
                bVar3 = oggpack_read(auStack_80,8);
                *(byte *)(*(long *)(lVar13 + 0x28) + lVar11 + 1) = bVar3;
                if (*(int *)(lVar13 + 0x14) <= (int)(uint)bVar3) goto LAB_00e8e858;
                iVar4 = *(int *)(lVar13 + 0x10);
                lVar14 = lVar14 + 1;
                lVar10 = oggpack_read(auStack_80,1);
                lVar11 = lVar11 + 2;
              } while (lVar14 < iVar4);
            }
joined_r0x00e8e854:
            if (lVar10 == 1) {
LAB_00e8e4d8:
              uVar7 = 0;
              goto LAB_00e8e864;
            }
          }
          else {
            iVar4 = res_unpack(pvVar9,param_1,auStack_80);
            if (iVar4 == 0) {
              lVar10 = 0;
              lVar14 = 0x30;
              do {
                lVar10 = lVar10 + 1;
                if (*(int *)(lVar13 + 0x1c) <= lVar10) goto LAB_00e8e730;
                iVar4 = res_unpack(*(long *)(lVar13 + 0x48) + lVar14,param_1,auStack_80);
                lVar14 = lVar14 + 0x30;
              } while (iVar4 == 0);
            }
          }
        }
        else {
          iVar4 = vorbis_book_unpack(auStack_80,pvVar9);
          if (iVar4 == 0) {
            lVar10 = 0;
            lVar14 = 0x68;
            do {
              lVar10 = lVar10 + 1;
              if (*(int *)(lVar13 + 0x20) <= lVar10) goto LAB_00e8e4f4;
              iVar4 = vorbis_book_unpack(auStack_80,*(long *)(lVar13 + 0x50) + lVar14);
              lVar14 = lVar14 + 0x68;
            } while (iVar4 == 0);
          }
        }
LAB_00e8e858:
        vorbis_info_clear(param_1);
      }
    }
    else if (iVar4 == 3) {
      if (*(long *)(param_1 + 2) != 0) {
        uVar6 = oggpack_read(auStack_80,0x20);
        if (-1 < (int)uVar6) {
          puVar8 = calloc((long)(((ulong)uVar6 << 0x20) + 0x100000000) >> 0x20,1);
          param_2[3] = (long)puVar8;
          if (uVar6 != 0) {
            iVar4 = -uVar6;
            do {
              uVar2 = oggpack_read(auStack_80,8);
              iVar4 = iVar4 + 1;
              *puVar8 = uVar2;
              puVar8 = puVar8 + 1;
            } while (iVar4 != 0);
          }
          uVar6 = oggpack_read(auStack_80,0x20);
          *(uint *)(param_2 + 2) = uVar6;
          if (-1 < (int)uVar6) {
            __nmemb = (long)(((ulong)uVar6 << 0x20) + 0x100000000) >> 0x20;
            pvVar9 = calloc(__nmemb,8);
            *param_2 = (long)pvVar9;
            pvVar9 = calloc(__nmemb,4);
            param_2[1] = (long)pvVar9;
            if (uVar6 != 0) {
              lVar13 = 0;
              do {
                uVar6 = oggpack_read(auStack_80,0x20);
                if ((int)uVar6 < 0) goto LAB_00e8e4e0;
                *(uint *)(param_2[1] + lVar13 * 4) = uVar6;
                pvVar9 = calloc((long)(((ulong)uVar6 << 0x20) + 0x100000000) >> 0x20,1);
                *(void **)(*param_2 + lVar13 * 8) = pvVar9;
                if (uVar6 != 0) {
                  iVar4 = -uVar6;
                  puVar8 = *(undefined1 **)(*param_2 + lVar13 * 8);
                  do {
                    uVar2 = oggpack_read(auStack_80,8);
                    iVar4 = iVar4 + 1;
                    *puVar8 = uVar2;
                    puVar8 = puVar8 + 1;
                  } while (iVar4 != 0);
                }
                lVar13 = lVar13 + 1;
              } while (lVar13 < (int)param_2[2]);
            }
            lVar13 = oggpack_read(auStack_80,1);
            if (lVar13 == 1) goto LAB_00e8e4d8;
          }
        }
LAB_00e8e4e0:
        vorbis_comment_clear(param_2);
      }
    }
    else if (((iVar4 == 1) && (param_3[2] != 0)) && (*(long *)(param_1 + 2) == 0)) {
      plVar12 = *(long **)(param_1 + 0xc);
      if (plVar12 == (long *)0x0) goto LAB_00e8e4ec;
      iVar4 = oggpack_read(auStack_80,0x20);
      *param_1 = iVar4;
      if (iVar4 != 0) {
        uVar7 = 0xffffff7a;
        goto LAB_00e8e864;
      }
      iVar4 = oggpack_read(auStack_80,8);
      param_1[1] = iVar4;
      uVar7 = oggpack_read(auStack_80,0x20);
      *(undefined8 *)(param_1 + 2) = uVar7;
      uVar7 = oggpack_read(auStack_80,0x20);
      *(undefined8 *)(param_1 + 4) = uVar7;
      uVar7 = oggpack_read(auStack_80,0x20);
      *(undefined8 *)(param_1 + 6) = uVar7;
      uVar7 = oggpack_read(auStack_80,0x20);
      *(undefined8 *)(param_1 + 8) = uVar7;
      uVar6 = oggpack_read(auStack_80,4);
      *plVar12 = (long)(1 << (ulong)(uVar6 & 0x1f));
      uVar6 = oggpack_read(auStack_80,4);
      iVar4 = 1 << (ulong)(uVar6 & 0x1f);
      plVar12[1] = (long)iVar4;
      if ((((0 < *(long *)(param_1 + 2)) && (63999 < *(long *)(param_1 + 2) || iVar4 < 0x1001)) &&
          ((0 < param_1[1] && ((0x3f < *plVar12 && (iVar4 < 0x2001)))))) &&
         (*plVar12 <= (long)iVar4)) {
        lVar10 = oggpack_read(auStack_80,1);
        goto joined_r0x00e8e854;
      }
      goto LAB_00e8e858;
    }
  }
  uVar7 = 0xffffff7b;
LAB_00e8e864:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

