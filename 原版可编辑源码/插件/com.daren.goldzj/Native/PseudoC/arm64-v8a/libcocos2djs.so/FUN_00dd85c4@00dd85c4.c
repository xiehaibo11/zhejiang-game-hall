
undefined8 FUN_00dd85c4(long param_1,void *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  lVar7 = *(long *)(param_1 + 0x350);
  lVar3 = *(long *)(lVar7 + 8);
  lVar10 = 0;
  if (lVar3 != 0) {
    lVar10 = param_3 / lVar3;
  }
  if (param_3 == lVar10 * lVar3) {
    uVar2 = 1;
    if (0 < param_3) {
      do {
        if ((*(byte *)(lVar7 + 4) >> 1 & 1) == 0) {
          lVar10 = *(long *)(param_1 + 0x350);
          uVar12 = *(uint *)(lVar10 + 0x48);
          uVar11 = *(uint *)(lVar10 + 0x4c);
          if ((uVar11 == 4) || ((*(uint *)(lVar10 + 0x20) >> 2 & 1) == 0)) {
LAB_00dd86f8:
            uVar13 = uVar12;
            if ((*(byte *)(lVar10 + 0x20) & 1) == 0) goto LAB_00dd8700;
LAB_00dd875c:
            uVar6 = 0xd;
            uVar9 = *(int *)(lVar10 + 0x78) == 0 | 2;
            uVar8 = 0xd - uVar11;
            if (uVar11 < 0xe && uVar8 != 0) goto LAB_00dd8778;
          }
          else {
            iVar1 = -4;
            if ((int)uVar11 < 4) {
              iVar1 = 4;
            }
            uVar13 = iVar1 + uVar11;
            if (uVar11 < uVar13) {
              if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
                TIFFFlushData1(param_1);
              }
              puVar4 = *(undefined1 **)(param_1 + 0x388);
              *(undefined1 **)(param_1 + 0x388) = puVar4 + 1;
              *puVar4 = (char)uVar12;
              lVar3 = *(long *)(param_1 + 0x390) + 1;
              *(long *)(param_1 + 0x390) = lVar3;
              if (3 < (int)uVar11) {
                uVar12 = 0xfffffffc;
                do {
                  uVar12 = uVar12 - 8;
                  if (*(long *)(param_1 + 0x370) <= lVar3) {
                    TIFFFlushData1(param_1);
                  }
                  puVar4 = *(undefined1 **)(param_1 + 0x388);
                  *(undefined1 **)(param_1 + 0x388) = puVar4 + 1;
                  *puVar4 = 0;
                  lVar3 = *(long *)(param_1 + 0x390) + 1;
                  *(long *)(param_1 + 0x390) = lVar3;
                } while (8 < uVar12);
              }
              uVar12 = 0;
              uVar13 = 4;
              uVar11 = 8;
            }
            uVar11 = uVar11 - uVar13;
            if (uVar11 != 0) goto LAB_00dd86f8;
            if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
              TIFFFlushData1(param_1);
            }
            puVar4 = *(undefined1 **)(param_1 + 0x388);
            uVar11 = 8;
            *(undefined1 **)(param_1 + 0x388) = puVar4 + 1;
            *puVar4 = (char)uVar12;
            uVar12 = 0;
            uVar13 = 0;
            *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) + 1;
            if ((*(byte *)(lVar10 + 0x20) & 1) != 0) goto LAB_00dd875c;
LAB_00dd8700:
            uVar6 = 0xc;
            uVar9 = 1;
            uVar8 = 0xc - uVar11;
            uVar13 = uVar12;
            if (uVar11 < 0xd && uVar8 != 0) {
LAB_00dd8778:
              if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
                TIFFFlushData1(param_1);
              }
              pbVar5 = *(byte **)(param_1 + 0x388);
              *(byte **)(param_1 + 0x388) = pbVar5 + 1;
              *pbVar5 = (byte)(uVar9 >> (ulong)(uVar8 & 0x1f)) | (byte)uVar13;
              lVar3 = *(long *)(param_1 + 0x390) + 1;
              *(long *)(param_1 + 0x390) = lVar3;
              if (8 < uVar8) {
                do {
                  uVar8 = uVar8 - 8;
                  if (*(long *)(param_1 + 0x370) <= lVar3) {
                    TIFFFlushData1(param_1);
                  }
                  puVar4 = *(undefined1 **)(param_1 + 0x388);
                  *(undefined1 **)(param_1 + 0x388) = puVar4 + 1;
                  *puVar4 = (char)(uVar9 >> (ulong)(uVar8 & 0x1f));
                  lVar3 = *(long *)(param_1 + 0x390) + 1;
                  *(long *)(param_1 + 0x390) = lVar3;
                } while (8 < uVar8);
                uVar8 = ((uVar6 - 8) - uVar11) - ((uVar6 - 9) - uVar11 & 0xfffffff8);
              }
              uVar11 = 8;
              uVar13 = 0;
              uVar6 = uVar8;
            }
          }
          uVar11 = uVar11 - uVar6;
          uVar13 = (*(uint *)(&DAT_019560c8 + (ulong)uVar6 * 4) & uVar9) << (ulong)(uVar11 & 0x1f) |
                   uVar13;
          if (uVar11 == 0) {
            if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
              TIFFFlushData1(param_1);
            }
            puVar4 = *(undefined1 **)(param_1 + 0x388);
            *(undefined1 **)(param_1 + 0x388) = puVar4 + 1;
            *puVar4 = (char)uVar13;
            uVar13 = 0;
            *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) + 1;
            uVar11 = 8;
          }
          *(uint *)(lVar10 + 0x48) = uVar13;
          *(uint *)(lVar10 + 0x4c) = uVar11;
        }
        if ((*(byte *)(lVar7 + 0x20) & 1) == 0) {
          FUN_00dd9dc8(param_1,param_2,*(undefined4 *)(lVar7 + 0x10));
        }
        else {
          if (*(int *)(lVar7 + 0x78) == 0) {
            FUN_00dd9dc8(param_1,param_2,*(undefined4 *)(lVar7 + 0x10));
            iVar1 = *(int *)(lVar7 + 0x88);
            *(undefined4 *)(lVar7 + 0x78) = 1;
          }
          else {
            FUN_00dd9f24(param_1,param_2,*(undefined8 *)(lVar7 + 0x80),*(undefined4 *)(lVar7 + 0x10)
                        );
            iVar1 = *(int *)(lVar7 + 0x88) + -1;
            *(int *)(lVar7 + 0x88) = iVar1;
          }
          if (iVar1 == 0) {
            *(undefined4 *)(lVar7 + 0x78) = 0;
            *(int *)(lVar7 + 0x88) = *(int *)(lVar7 + 0x8c) + -1;
          }
          else {
            _TIFFmemcpy(*(void **)(lVar7 + 0x80),param_2,*(size_t *)(lVar7 + 8));
          }
        }
        param_3 = param_3 - *(long *)(lVar7 + 8);
        param_2 = (void *)((long)param_2 + *(long *)(lVar7 + 8));
      } while (0 < param_3);
      uVar2 = 1;
    }
  }
  else {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"Fax3Encode",
                 "Fractional scanlines cannot be written");
    uVar2 = 0;
  }
  return uVar2;
}

