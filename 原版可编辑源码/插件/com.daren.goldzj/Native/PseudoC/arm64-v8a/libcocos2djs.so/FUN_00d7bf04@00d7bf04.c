
undefined8 FUN_00d7bf04(long *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined1 uVar16;
  void *pvVar17;
  void *__s;
  ulong uVar18;
  long local_70;
  
  puVar7 = (undefined8 *)*param_1;
  local_70 = param_1[5];
  iVar9 = *(int *)(puVar7 + 2);
  uVar6 = *(uint *)((long)puVar7 + 0x14);
  uVar11 = *(undefined8 *)*puVar7;
  uVar18 = (ulong)(uVar6 & 2);
  pvVar17 = (void *)param_1[7];
  uVar4 = uVar6 & 2 | 1;
  uVar12 = (ulong)uVar4;
  if ((uVar6 & 1) == 0) {
    if (iVar9 != 0) {
      uVar4 = *(int *)((long)puVar7 + 0xc) * uVar4;
      if (uVar4 == 0) {
        do {
          png_write_row(uVar11,pvVar17);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      else {
        do {
          iVar9 = iVar9 + -1;
          lVar8 = 0;
          do {
            uVar2 = *(ushort *)(local_70 + lVar8 * 2);
            uVar12 = (ulong)uVar2 * 0xff >> 0xf;
            *(char *)((long)pvVar17 + lVar8) =
                 (char)((uint)*(ushort *)(png_sRGB_base + uVar12 * 2) +
                        (((uint)uVar2 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar12] >> 0xc)
                       >> 8);
            lVar8 = lVar8 + 1;
          } while ((ulong)((long)pvVar17 + lVar8) < (long)pvVar17 + (ulong)uVar4);
          png_write_row(uVar11,pvVar17);
          local_70 = local_70 + (param_1[6] & 0xfffffffffffffffeU);
        } while (iVar9 != 0);
      }
    }
  }
  else {
    if ((uVar6 & 0x20) != 0) {
      uVar12 = 0xffffffffffffffff;
      pvVar17 = (void *)((long)pvVar17 + 1);
    }
    if (iVar9 != 0) {
      iVar1 = uVar4 + 1;
      uVar4 = *(int *)((long)puVar7 + 0xc) * iVar1;
      if ((uVar6 & 0x20) != 0) {
        local_70 = local_70 + 2;
      }
      do {
        iVar9 = iVar9 + -1;
        lVar8 = local_70;
        __s = pvVar17;
        if (uVar4 != 0) {
          do {
            uVar2 = *(ushort *)(lVar8 + uVar12 * 2);
            uVar10 = 0;
            uVar6 = (uint)uVar2 * 0xff + 0x807f;
            uVar5 = uVar6 >> 0x10 & 0xff;
            *(char *)((long)__s + uVar12) = (char)(uVar6 >> 0x10);
            uVar6 = (uint)uVar2;
            if ((uVar5 != 0) && (uVar5 != 0xff)) {
              uVar10 = 0;
              if (uVar2 != 0) {
                uVar10 = ((uVar2 >> 1) + 0x7f7f8080) / uVar6;
              }
            }
            if (uVar6 < 0x80) {
              memset(__s,0xff,uVar18 | 1);
            }
            else if (uVar2 < 0xff7f) {
              lVar13 = 0;
              iVar14 = iVar1;
              do {
                uVar2 = *(ushort *)(lVar8 + lVar13 * 2);
                uVar16 = (undefined1)uVar2;
                if (uVar2 < uVar6) {
                  if (uVar2 != 0) {
                    uVar3 = uVar10 * uVar2 + 0x40;
                    uVar5 = uVar3 >> 0x16;
                    uVar16 = (undefined1)
                             ((uint)*(ushort *)(png_sRGB_base + (ulong)uVar5 * 2) +
                              ((uVar3 >> 7 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar5] >> 0xc) >>
                             8);
                  }
                }
                else {
                  uVar16 = 0xff;
                }
                iVar14 = iVar14 + -1;
                *(undefined1 *)((long)__s + lVar13) = uVar16;
                lVar13 = lVar13 + 1;
              } while (1 < iVar14);
            }
            else {
              lVar13 = 0;
              iVar14 = iVar1;
              do {
                uVar2 = *(ushort *)(lVar8 + lVar13 * 2);
                uVar15 = (ulong)uVar2;
                if (uVar2 < uVar6) {
                  if (uVar2 != 0) {
                    uVar15 = uVar15 * 0xff >> 0xf;
                    uVar15 = (ulong)((uint)*(ushort *)(png_sRGB_base + uVar15 * 2) +
                                     ((uint)(byte)png_sRGB_delta[uVar15] *
                                      ((uint)uVar2 * 0xff & 0x7fff) >> 0xc) >> 8);
                  }
                }
                else {
                  uVar15 = 0xff;
                }
                iVar14 = iVar14 + -1;
                *(char *)((long)__s + lVar13) = (char)uVar15;
                lVar13 = lVar13 + 1;
              } while (1 < iVar14);
            }
            __s = (void *)((long)__s + uVar18 + 2);
            lVar8 = lVar8 + uVar18 * 2 + 4;
          } while (__s < (void *)((long)pvVar17 + (ulong)uVar4));
        }
        png_write_row(uVar11,param_1[7]);
        local_70 = local_70 + (param_1[6] & 0xfffffffffffffffeU);
      } while (iVar9 != 0);
    }
  }
  return 1;
}

