
undefined8 _vorbis_unpack_books(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 == 0) {
    uVar5 = 0xffffff7f;
  }
  else {
    iVar3 = oggpack_read(param_2,8);
    *(int *)(lVar7 + 0x20) = iVar3 + 1;
    pvVar4 = calloc((long)(iVar3 + 1),0x68);
    *(void **)(lVar7 + 0x50) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      *(undefined4 *)(lVar7 + 0x20) = 0;
    }
    else if (*(int *)(lVar7 + 0x20) < 1) {
LAB_00ebcc4c:
      iVar3 = oggpack_read(param_2,6);
      if (-1 < iVar3) {
        iVar3 = iVar3 + 1;
        do {
          lVar8 = oggpack_read(param_2,0x10);
          if (lVar8 != 0) goto LAB_00ebcdb8;
          iVar3 = iVar3 + -1;
        } while (0 < iVar3);
      }
      iVar3 = oggpack_read(param_2,6);
      *(int *)(lVar7 + 0x18) = iVar3 + 1;
      pvVar4 = calloc((long)(iVar3 + 1),8);
      *(void **)(lVar7 + 0x40) = pvVar4;
      pvVar4 = calloc((long)*(int *)(lVar7 + 0x18),1);
      *(void **)(lVar7 + 0x38) = pvVar4;
      if ((pvVar4 == (void *)0x0) || (*(long *)(lVar7 + 0x40) == 0)) {
        *(undefined4 *)(lVar7 + 0x18) = 0;
      }
      else {
        if (0 < *(int *)(lVar7 + 0x18)) {
          lVar8 = 0;
          do {
            uVar1 = oggpack_read(param_2,0x10);
            *(undefined1 *)(*(long *)(lVar7 + 0x38) + lVar8) = uVar1;
            bVar2 = *(byte *)(*(long *)(lVar7 + 0x38) + lVar8);
            if (1 < bVar2) goto LAB_00ebcdb8;
            if (bVar2 == 0) {
              uVar5 = floor0_info_unpack(param_1,param_2);
            }
            else {
              uVar5 = floor1_info_unpack();
            }
            *(undefined8 *)(*(long *)(lVar7 + 0x40) + lVar8 * 8) = uVar5;
            if (*(long *)(*(long *)(lVar7 + 0x40) + lVar8 * 8) == 0) goto LAB_00ebcdb8;
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(lVar7 + 0x18));
        }
        iVar3 = oggpack_read(param_2,6);
        *(int *)(lVar7 + 0x1c) = iVar3 + 1;
        pvVar4 = calloc((long)(iVar3 + 1),0x30);
        *(void **)(lVar7 + 0x48) = pvVar4;
        if (pvVar4 == (void *)0x0) {
          *(undefined4 *)(lVar7 + 0x1c) = 0;
        }
        else if (*(int *)(lVar7 + 0x1c) < 1) {
LAB_00ebcde0:
          iVar3 = oggpack_read(param_2,6);
          *(int *)(lVar7 + 0x14) = iVar3 + 1;
          pvVar4 = calloc((long)(iVar3 + 1),0x28);
          *(void **)(lVar7 + 0x30) = pvVar4;
          if (pvVar4 == (void *)0x0) {
            *(undefined4 *)(lVar7 + 0x14) = 0;
          }
          else {
            if (0 < *(int *)(lVar7 + 0x14)) {
              lVar9 = 0;
              lVar8 = 0;
              do {
                lVar6 = oggpack_read(param_2,0x10);
                if ((lVar6 != 0) ||
                   (iVar3 = mapping_info_unpack(*(long *)(lVar7 + 0x30) + lVar9,param_1,param_2),
                   iVar3 != 0)) goto LAB_00ebcdb8;
                lVar8 = lVar8 + 1;
                lVar9 = lVar9 + 0x28;
              } while (lVar8 < *(int *)(lVar7 + 0x14));
            }
            iVar3 = oggpack_read(param_2,6);
            *(int *)(lVar7 + 0x10) = iVar3 + 1;
            pvVar4 = calloc((long)(iVar3 + 1),2);
            *(void **)(lVar7 + 0x28) = pvVar4;
            if (pvVar4 == (void *)0x0) {
              *(undefined4 *)(lVar7 + 0x10) = 0;
            }
            else {
              iVar3 = *(int *)(lVar7 + 0x10);
              lVar8 = oggpack_read(param_2,1);
              if (0 < iVar3) {
                lVar6 = 0;
                lVar9 = 0;
                do {
                  *(char *)(*(long *)(lVar7 + 0x28) + lVar6) = (char)lVar8;
                  lVar8 = oggpack_read(param_2,0x10);
                  if ((lVar8 != 0) || (lVar8 = oggpack_read(param_2,0x10), lVar8 != 0))
                  goto LAB_00ebcdb8;
                  bVar2 = oggpack_read(param_2,8);
                  *(byte *)(*(long *)(lVar7 + 0x28) + lVar6 + 1) = bVar2;
                  if (*(int *)(lVar7 + 0x14) <= (int)(uint)bVar2) goto LAB_00ebcdb8;
                  iVar3 = *(int *)(lVar7 + 0x10);
                  lVar9 = lVar9 + 1;
                  lVar8 = oggpack_read(param_2,1);
                  lVar6 = lVar6 + 2;
                } while (lVar9 < iVar3);
              }
              if (lVar8 == 1) {
                return 0;
              }
            }
          }
        }
        else {
          iVar3 = res_unpack(pvVar4,param_1,param_2);
          if (iVar3 == 0) {
            lVar8 = 0;
            lVar9 = 0x30;
            do {
              lVar8 = lVar8 + 1;
              if (*(int *)(lVar7 + 0x1c) <= lVar8) goto LAB_00ebcde0;
              iVar3 = res_unpack(*(long *)(lVar7 + 0x48) + lVar9,param_1,param_2);
              lVar9 = lVar9 + 0x30;
            } while (iVar3 == 0);
          }
        }
      }
    }
    else {
      iVar3 = vorbis_book_unpack(param_2,pvVar4);
      if (iVar3 == 0) {
        lVar8 = 0;
        lVar9 = 0x68;
        do {
          lVar8 = lVar8 + 1;
          if (*(int *)(lVar7 + 0x20) <= lVar8) goto LAB_00ebcc4c;
          iVar3 = vorbis_book_unpack(param_2,*(long *)(lVar7 + 0x50) + lVar9);
          lVar9 = lVar9 + 0x68;
        } while (iVar3 == 0);
      }
    }
LAB_00ebcdb8:
    vorbis_info_clear(param_1);
    uVar5 = 0xffffff7b;
  }
  return uVar5;
}

