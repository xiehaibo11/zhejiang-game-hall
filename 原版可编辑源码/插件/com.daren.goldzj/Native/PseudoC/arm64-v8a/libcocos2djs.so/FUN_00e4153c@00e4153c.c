
/* WARNING: Removing unreachable block (ram,0x00e41bec) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00e4153c(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int extraout_var;
  uint extraout_var_00;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  ulong *puVar15;
  byte *pbVar16;
  ulong *puVar17;
  ulong uVar18;
  uint uVar19;
  void *__s1;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint local_68;
  uint local_64;
  
  lVar11 = *(long *)(param_1 + 0x38);
  if ((lVar11 == 0) || (lVar20 = *(long *)(lVar11 + 0x2d0), lVar20 == 0)) {
    return 3;
  }
  iVar13 = *(int *)(lVar11 + 0x2c8);
  uVar2 = *(uint *)(lVar20 + 0x450);
  __s1 = *(void **)(lVar20 + 0x458);
  if (((((*(char *)(lVar20 + 0x420) == '\0') || (*(int *)(lVar20 + 0x430) != iVar13)) ||
       (*(uint *)(lVar20 + 0x434) != uVar2)) ||
      ((uVar2 != 0 &&
       (iVar7 = memcmp(__s1,*(void **)(lVar20 + 0x438),(ulong)uVar2 << 3), iVar7 != 0)))) &&
     (uVar8 = FUN_00e3f3e8(lVar20 + 0x420,iVar13,(ulong)uVar2,__s1), (int)uVar8 != 0)) {
    return uVar8;
  }
  pbVar9 = *(byte **)(*(long *)(param_1 + 0x28) + -8);
  bVar4 = *pbVar9;
  uVar8 = (ulong)bVar4;
  if (bVar4 == 0xff) {
    sVar6 = (short)(((uint)pbVar9[1] << 0x10 | (uint)pbVar9[2] << 8 | (uint)pbVar9[3]) + 0x80 >> 8);
    uVar8 = (ulong)sVar6;
    if (*(uint *)(param_1 + 0x30) < (uint)(int)sVar6) {
      return 3;
    }
  }
  else if (bVar4 == 0x1e) {
    lVar11 = FUN_00e41c10(pbVar9,*(undefined8 *)(param_1 + 0x10),0,0);
    uVar8 = lVar11 >> 0x10;
    if (*(uint *)(param_1 + 0x30) < (uint)((ulong)lVar11 >> 0x10)) {
      return 3;
    }
  }
  else {
    pbVar16 = *(byte **)(param_1 + 0x10);
    if (bVar4 == 0x1d) {
      if (pbVar16 < pbVar9 + 5) goto LAB_00e41bdc;
      uVar8 = (ulong)pbVar9[1] << 0x18 | (ulong)pbVar9[2] << 0x10 | (ulong)pbVar9[3] << 8 |
              (ulong)pbVar9[4];
      if (*(uint *)(param_1 + 0x30) < (uint)uVar8) {
        return 3;
      }
    }
    else if (bVar4 == 0x1c) {
      if (pbVar16 < pbVar9 + 3) goto LAB_00e41bdc;
      uVar8 = (long)(short)((ushort)pbVar9[1] << 8) | (ulong)pbVar9[2];
      if (*(uint *)(param_1 + 0x30) < (uint)uVar8) {
        return 3;
      }
    }
    else if (bVar4 < 0xf7) {
      uVar8 = uVar8 - 0x8b;
      if (*(uint *)(param_1 + 0x30) < (uint)uVar8) {
        return 3;
      }
    }
    else if (bVar4 < 0xfb) {
      if (pbVar16 < pbVar9 + 2) {
LAB_00e41bdc:
        uVar8 = 0;
      }
      else {
        uVar8 = (uVar8 * 0x100 - 0xf700 | (ulong)pbVar9[1]) + 0x6c;
        if (*(uint *)(param_1 + 0x30) < (uint)uVar8) {
          return 3;
        }
      }
    }
    else {
      if (pbVar16 < pbVar9 + 2) goto LAB_00e41bdc;
      uVar8 = (uVar8 * -0x100 + 0xfa94) - (ulong)pbVar9[1];
      if (*(uint *)(param_1 + 0x30) < (uint)uVar8) {
        return 3;
      }
    }
  }
  local_64 = 0;
  iVar13 = (int)uVar8;
  uVar2 = *(int *)(lVar20 + 0x440) * iVar13;
  uVar19 = (uint)((ulong)((*(long *)(param_1 + 0x28) + -8) - *(long *)(param_1 + 0x20)) >> 3);
  if (uVar19 < uVar2) {
    uVar10 = 0xa1;
  }
  else {
    uVar14 = *(uint *)(lVar20 + 0x470);
    uVar3 = *(uint *)(lVar20 + 0x474);
    iVar7 = iVar13 * 5;
    if (uVar3 < uVar14 + iVar7) {
      uVar18 = *(ulong *)(lVar20 + 0x460);
      uVar21 = *(ulong *)(lVar20 + 0x468);
      lVar11 = FUN_00e13bcc(*(undefined8 *)(*(long *)(lVar20 + 0x428) + 0x10),1,uVar3,uVar3 + iVar7,
                            uVar18,&local_64);
      *(long *)(lVar20 + 0x460) = lVar11;
      uVar10 = (ulong)local_64;
      if (local_64 != 0) goto LAB_00e41b90;
      uVar14 = *(uint *)(lVar20 + 0x470);
      *(ulong *)(lVar20 + 0x468) = lVar11 + (ulong)uVar14;
      *(int *)(lVar20 + 0x474) = *(int *)(lVar20 + 0x474) + iVar7;
      if ((uVar18 != 0) && (lVar11 - uVar18 != 0)) {
        puVar15 = *(ulong **)(param_1 + 0x20);
        puVar17 = *(ulong **)(param_1 + 0x28);
        if (puVar15 < puVar17) {
          do {
            uVar10 = *puVar15;
            if ((uVar18 <= uVar10) && (uVar10 < uVar21)) {
              *puVar15 = uVar10 + (lVar11 - uVar18);
              puVar17 = *(ulong **)(param_1 + 0x28);
            }
            puVar15 = puVar15 + 1;
          } while (puVar15 < puVar17);
        }
      }
    }
    iVar5 = uVar19 - uVar2;
    uVar2 = iVar5 + iVar13;
    *(uint *)(lVar20 + 0x470) = uVar14 + iVar7;
    if (iVar13 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      local_68 = uVar2;
      do {
        uVar18 = (ulong)(uint)(iVar5 + (int)uVar10);
        lVar11 = *(long *)(lVar20 + 0x448);
        pbVar9 = *(byte **)(*(long *)(param_1 + 0x20) + uVar18 * 8);
        bVar4 = *pbVar9;
        if (bVar4 == 0xff) {
          uVar19 = *(uint *)(lVar20 + 0x440);
          iVar13 = (int)(short)(((uint)pbVar9[1] << 0x10 | (uint)pbVar9[2] << 8 | (uint)pbVar9[3]) +
                                0x80 >> 8);
joined_r0x00e41884:
          iVar13 = iVar13 << 0x10;
        }
        else {
          if (bVar4 == 0x1e) {
            FUN_00e41c10(pbVar9,*(undefined8 *)(param_1 + 0x10),0,0);
            uVar19 = *(uint *)(lVar20 + 0x440);
            iVar13 = extraout_var;
            goto joined_r0x00e41884;
          }
          pbVar16 = *(byte **)(param_1 + 0x10);
          if (bVar4 == 0x1d) {
            if (pbVar16 < pbVar9 + 5) goto LAB_00e418e0;
            uVar14 = (uint)CONCAT11(pbVar9[3],pbVar9[4]);
            uVar19 = *(uint *)(lVar20 + 0x440);
joined_r0x00e41930:
            iVar13 = uVar14 << 0x10;
          }
          else {
            if (bVar4 == 0x1c) {
              if (pbVar9 + 3 <= pbVar16) {
                uVar14 = (int)(short)((ushort)pbVar9[1] << 8) | (uint)pbVar9[2];
                uVar19 = *(uint *)(lVar20 + 0x440);
                goto joined_r0x00e41930;
              }
            }
            else {
              if (bVar4 < 0xf7) {
                iVar13 = bVar4 - 0x8b;
                uVar19 = *(uint *)(lVar20 + 0x440);
joined_r0x00e417d4:
                iVar13 = iVar13 * 0x10000;
                goto joined_r0x00e41800;
              }
              if (bVar4 < 0xfb) {
                if (pbVar9 + 2 <= pbVar16) {
                  iVar13 = ((uint)bVar4 * 0x100 - 0xf700 | (uint)pbVar9[1]) + 0x6c;
                  uVar19 = *(uint *)(lVar20 + 0x440);
                  goto joined_r0x00e417d4;
                }
              }
              else if (pbVar9 + 2 <= pbVar16) {
                uVar19 = *(uint *)(lVar20 + 0x440);
                iVar13 = (((uint)bVar4 * -0x100 + 0xfa94) - (uint)pbVar9[1]) * 0x10000;
                goto joined_r0x00e41800;
              }
            }
LAB_00e418e0:
            uVar19 = *(uint *)(lVar20 + 0x440);
            iVar13 = 0;
          }
        }
joined_r0x00e41800:
        if (1 < uVar19) {
          lVar22 = 0;
          do {
            pbVar9 = *(byte **)(*(long *)(param_1 + 0x20) + (ulong)(local_68 + (int)lVar22) * 8);
            bVar4 = *pbVar9;
            if (bVar4 == 0xff) {
              uVar14 = (uint)(short)(((uint)pbVar9[1] << 0x10 | (uint)pbVar9[2] << 8 |
                                     (uint)pbVar9[3]) + 0x80 >> 8);
            }
            else if (bVar4 == 0x1e) {
              FUN_00e41c10(pbVar9,*(undefined8 *)(param_1 + 0x10),0,0);
              uVar19 = *(uint *)(lVar20 + 0x440);
              uVar14 = extraout_var_00;
            }
            else {
              pbVar16 = *(byte **)(param_1 + 0x10);
              if (bVar4 == 0x1d) {
                if (pbVar16 < pbVar9 + 5) goto LAB_00e41a40;
                uVar14 = (uint)pbVar9[1] << 0x18 | (uint)pbVar9[2] << 0x10 | (uint)pbVar9[3] << 8 |
                         (uint)pbVar9[4];
              }
              else if (bVar4 == 0x1c) {
                if (pbVar16 < pbVar9 + 3) goto LAB_00e41a40;
                uVar14 = (int)(short)((ushort)pbVar9[1] << 8) | (uint)pbVar9[2];
              }
              else if (bVar4 < 0xf7) {
                uVar14 = bVar4 - 0x8b;
              }
              else if (bVar4 < 0xfb) {
                if (pbVar16 < pbVar9 + 2) {
LAB_00e41a40:
                  uVar14 = 0;
                }
                else {
                  uVar14 = ((uint)bVar4 * 0x100 - 0xf700 | (uint)pbVar9[1]) + 0x6c;
                }
              }
              else {
                if (pbVar16 < pbVar9 + 2) goto LAB_00e41a40;
                uVar14 = ((uint)bVar4 * -0x100 + 0xfa94) - (uint)pbVar9[1];
              }
            }
            lVar1 = lVar22 * 4;
            lVar22 = lVar22 + 1;
            iVar13 = iVar13 + *(int *)(lVar11 + 4 + lVar1) * uVar14;
          } while ((int)lVar22 + 1U < uVar19);
          local_68 = local_68 + (int)lVar22;
        }
        uVar10 = uVar10 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar18 * 8) = *(undefined8 *)(lVar20 + 0x468);
        puVar12 = *(undefined1 **)(lVar20 + 0x468);
        *(undefined1 **)(lVar20 + 0x468) = puVar12 + 1;
        *puVar12 = 0xff;
        puVar12 = *(undefined1 **)(lVar20 + 0x468);
        *(undefined1 **)(lVar20 + 0x468) = puVar12 + 1;
        *puVar12 = (char)((uint)iVar13 >> 0x18);
        puVar12 = *(undefined1 **)(lVar20 + 0x468);
        *(undefined1 **)(lVar20 + 0x468) = puVar12 + 1;
        *puVar12 = (char)((uint)iVar13 >> 0x10);
        puVar12 = *(undefined1 **)(lVar20 + 0x468);
        *(undefined1 **)(lVar20 + 0x468) = puVar12 + 1;
        *puVar12 = (char)((uint)iVar13 >> 8);
        puVar12 = *(undefined1 **)(lVar20 + 0x468);
        *(undefined1 **)(lVar20 + 0x468) = puVar12 + 1;
        *puVar12 = (char)iVar13;
      } while (uVar10 != (uVar8 & 0xffffffff));
      uVar10 = (ulong)local_64;
    }
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x20) + (ulong)uVar2 * 8;
  }
LAB_00e41b90:
  *(undefined1 *)(lVar20 + 0x421) = 1;
  return uVar10;
}

