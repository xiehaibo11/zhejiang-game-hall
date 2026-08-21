
/* WARNING: Removing unreachable block (ram,0x00e3f8fc) */
/* WARNING: Removing unreachable block (ram,0x00e3f8e4) */
/* WARNING: Removing unreachable block (ram,0x00e3f918) */
/* WARNING: Removing unreachable block (ram,0x00e3f820) */
/* WARNING: Removing unreachable block (ram,0x00e3f9c8) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00e3f6ac(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 *puVar16;
  ulong *puVar17;
  int *piVar15;
  
  iVar4 = 0;
  *(byte **)(param_1 + 8) = param_2;
  *(byte **)(param_1 + 0x10) = param_3;
  *(byte **)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  do {
    while( true ) {
      if (param_3 <= param_2) {
        return iVar4;
      }
      bVar2 = *param_2;
      uVar9 = (uint)bVar2;
      if (((bVar2 < 0x1b) || (bVar2 == 0x1f)) || (bVar2 == 0xff)) break;
      puVar16 = *(undefined8 **)(param_1 + 0x28);
      if (*(uint *)(param_1 + 0x30) <=
          (uint)((ulong)((long)puVar16 - *(long *)(param_1 + 0x20)) >> 3)) {
        iVar10 = 1;
LAB_00e40014:
        if (2 < iVar10 - 1U) {
          return iVar4;
        }
        return 6;
      }
      *(undefined8 **)(param_1 + 0x28) = puVar16 + 1;
      *puVar16 = param_2;
      if (bVar2 == 0x1c) {
        param_2 = param_2 + 3;
      }
      else if (bVar2 == 0x1d) {
        param_2 = param_2 + 5;
      }
      else if (bVar2 == 0x1e) {
        pbVar5 = param_2 + 1;
        do {
          if (param_3 <= pbVar5) {
            iVar10 = -0x3fffffff;
            goto LAB_00e40014;
          }
          param_2 = pbVar5 + 1;
          bVar2 = *pbVar5;
        } while (((bVar2 & 0xf0) != 0xf0) && (pbVar5 = param_2, (bVar2 & 0xf) != 0xf));
      }
      else {
        if (0xf6 < uVar9) {
          param_2 = param_2 + 1;
        }
        param_2 = param_2 + 1;
      }
    }
    uVar7 = (uint)((ulong)((long)*(undefined8 **)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) >> 3)
    ;
    if (*(uint *)(param_1 + 0x30) <= uVar7) {
      iVar10 = 1;
      goto LAB_00e40014;
    }
    **(undefined8 **)(param_1 + 0x28) = param_2;
    if (uVar9 == 0xc) {
      param_2 = param_2 + 1;
      if (param_3 <= param_2) {
        iVar10 = 2;
        goto LAB_00e40014;
      }
      uVar9 = *param_2 | 0x100;
    }
    uVar9 = *(uint *)(param_1 + 0x34) | uVar9;
    piVar14 = (int *)&UNK_01c938f8;
    if (uVar9 == 0x1000) {
      iVar10 = 4;
      lVar12 = *(long *)(param_1 + 0x38);
      uVar13 = 0;
    }
    else {
      do {
        piVar15 = piVar14;
        piVar14 = piVar15 + 8;
        iVar10 = *piVar14;
        if (iVar10 == 0) goto LAB_00e3f9b0;
      } while (piVar15[9] != uVar9);
      lVar12 = *(long *)(param_1 + 0x38);
      uVar13 = (ulong)(uint)piVar15[10];
    }
    if ((uVar7 == 0) && (iVar10 != 6)) {
      iVar10 = 3;
      goto LAB_00e40014;
    }
    if (iVar10 - 1U < 6) {
      puVar17 = (ulong *)(lVar12 + uVar13);
      switch(iVar10) {
      default:
        pbVar5 = (byte *)**(undefined8 **)(param_1 + 0x20);
        bVar2 = *pbVar5;
        uVar8 = (ulong)bVar2;
        if (bVar2 == 0xff) {
          uVar8 = (ulong)(short)(((uint)pbVar5[1] << 0x10 | (uint)pbVar5[2] << 8 | (uint)pbVar5[3])
                                 + 0x80 >> 8);
          cVar3 = (char)piVar14[3];
        }
        else if (bVar2 == 0x1e) {
          lVar12 = FUN_00e41c10(pbVar5,*(undefined8 *)(param_1 + 0x10),0,0);
          uVar8 = lVar12 >> 0x10;
          cVar3 = (char)piVar14[3];
        }
        else {
          pbVar11 = *(byte **)(param_1 + 0x10);
          if (bVar2 == 0x1d) {
            if (pbVar11 < pbVar5 + 5) goto LAB_00e3ff34;
            uVar8 = (ulong)pbVar5[1] << 0x18 | (ulong)pbVar5[2] << 0x10 | (ulong)pbVar5[3] << 8 |
                    (ulong)pbVar5[4];
            cVar3 = (char)piVar14[3];
          }
          else if (bVar2 == 0x1c) {
            if (pbVar11 < pbVar5 + 3) goto LAB_00e3ff34;
            uVar8 = (long)(short)((ushort)pbVar5[1] << 8) | (ulong)pbVar5[2];
            cVar3 = (char)piVar14[3];
          }
          else if (bVar2 < 0xf7) {
            uVar8 = uVar8 - 0x8b;
            cVar3 = (char)piVar14[3];
          }
          else if (bVar2 < 0xfb) {
            if (pbVar11 < pbVar5 + 2) goto LAB_00e3ff34;
            uVar8 = (uVar8 * 0x100 - 0xf700 | (ulong)pbVar5[1]) + 0x6c;
            cVar3 = (char)piVar14[3];
          }
          else {
            if (pbVar11 < pbVar5 + 2) goto LAB_00e3ff34;
            uVar8 = (uVar8 * -0x100 + 0xfa94) - (ulong)pbVar5[1];
            cVar3 = (char)piVar14[3];
          }
        }
        break;
      case 2:
        pbVar11 = *(byte **)(param_1 + 0x10);
        pbVar5 = (byte *)**(undefined8 **)(param_1 + 0x20);
        bVar2 = *pbVar5;
        uVar13 = (ulong)bVar2;
        if (bVar2 == 0x1e) {
          uVar6 = 0;
LAB_00e3f97c:
          uVar8 = FUN_00e41c10(pbVar5,pbVar11,uVar6,0);
          cVar3 = (char)piVar14[3];
        }
        else {
          if (bVar2 == 0x1d) {
            if (pbVar11 < pbVar5 + 5) goto LAB_00e3ff14;
            uVar13 = (ulong)pbVar5[1] << 0x18 | (ulong)pbVar5[2] << 0x10 | (ulong)pbVar5[3] << 8 |
                     (ulong)pbVar5[4];
            if (0x7fff < uVar13) goto LAB_00e3ffd8;
          }
          else {
            if (bVar2 != 0x1c) {
              if (bVar2 < 0xf7) {
                uVar8 = (uVar13 - 0x8b) * 0x10000;
                cVar3 = (char)piVar14[3];
                break;
              }
              if (bVar2 < 0xfb) {
                if (pbVar5 + 2 <= pbVar11) {
                  uVar13 = (uVar13 * 0x100 - 0xf700 | (ulong)pbVar5[1]) + 0x6c;
                  if (0x7fff < (long)uVar13) goto LAB_00e3ffd8;
                  goto LAB_00e3ff5c;
                }
LAB_00e3ff14:
                uVar8 = 0;
                cVar3 = (char)piVar14[3];
                break;
              }
              if (pbVar11 < pbVar5 + 2) goto LAB_00e3ff14;
              uVar13 = (uVar13 * -0x100 + 0xfa94) - (ulong)pbVar5[1];
              if ((long)uVar13 < 0x8000) goto LAB_00e3ff5c;
              goto LAB_00e3ffd8;
            }
            if (pbVar11 < pbVar5 + 3) goto LAB_00e3ff14;
            uVar13 = (long)(short)((ushort)pbVar5[1] << 8) | (ulong)pbVar5[2];
          }
LAB_00e3ff5c:
          uVar8 = 0xffffffff80000001;
          if (-0x8000 < (long)uVar13) {
            uVar8 = uVar13 << 0x10;
          }
          cVar3 = (char)piVar14[3];
        }
        break;
      case 3:
        pbVar11 = *(byte **)(param_1 + 0x10);
        pbVar5 = (byte *)**(undefined8 **)(param_1 + 0x20);
        bVar2 = *pbVar5;
        uVar13 = (ulong)bVar2;
        if (bVar2 == 0x1e) {
          uVar6 = 3;
          goto LAB_00e3f97c;
        }
        if (bVar2 == 0x1d) {
          if (pbVar11 < pbVar5 + 5) goto LAB_00e3ff34;
          uVar13 = (ulong)pbVar5[1] << 0x18 | (ulong)pbVar5[2] << 0x10 | (ulong)pbVar5[3] << 8 |
                   (ulong)pbVar5[4];
          uVar8 = uVar13;
LAB_00e3ff94:
          if (0x20c49ba5e353f7 < (long)uVar8) {
            uVar8 = 0xffffffff80000001;
            if (0 < (long)uVar13) {
              uVar8 = 0x7fffffff;
            }
            cVar3 = (char)piVar14[3];
            break;
          }
        }
        else {
          if (bVar2 == 0x1c) {
            if (pbVar11 < pbVar5 + 3) goto LAB_00e3ff34;
            uVar8 = (ulong)(short)((ushort)pbVar5[1] << 8);
            uVar13 = uVar8 | pbVar5[2];
          }
          else {
            if (0xf6 < bVar2) {
              if (bVar2 < 0xfb) {
                if (pbVar5 + 2 <= pbVar11) {
                  uVar13 = (uVar13 * 0x100 - 0xf700 | (ulong)pbVar5[1]) + 0x6c;
                  uVar8 = uVar13;
                  goto joined_r0x00e3ff8c;
                }
              }
              else if (pbVar5 + 2 <= pbVar11) {
                uVar13 = (uVar13 * -0x100 + 0xfa94) - (ulong)pbVar5[1];
                uVar8 = uVar13;
                goto joined_r0x00e3ff8c;
              }
LAB_00e3ff34:
              uVar8 = 0;
              cVar3 = (char)piVar14[3];
              break;
            }
            uVar13 = uVar13 - 0x8b;
            uVar8 = uVar13;
          }
joined_r0x00e3ff8c:
          if ((long)uVar8 < 0) {
            uVar8 = -uVar13;
            goto LAB_00e3ff94;
          }
        }
        if ((long)(uVar13 * 1000) < 0x8000) {
          uVar8 = 0xffffffff80000001;
          if (-0x8000 < (long)(uVar13 * 1000)) {
            uVar8 = uVar13 * 0x3e80000;
          }
          cVar3 = (char)piVar14[3];
        }
        else {
LAB_00e3ffd8:
          uVar8 = 0x7fffffff;
          cVar3 = (char)piVar14[3];
        }
        break;
      case 6:
        uVar1 = piVar14[6];
        puVar16 = *(undefined8 **)(param_1 + 0x20);
        uVar9 = uVar1;
        if (uVar7 <= uVar1) {
          uVar9 = uVar7;
        }
        *(char *)(lVar12 + (ulong)(uint)piVar14[7]) = (char)uVar9;
        if (uVar9 == 0) {
          iVar10 = *piVar14;
        }
        else {
          uVar7 = ~uVar7;
          if (uVar7 < ~uVar1) {
            uVar7 = ~uVar1;
          }
          uVar13 = 0;
          iVar10 = uVar7 + 1;
          do {
            while( true ) {
              pbVar5 = (byte *)*puVar16;
              bVar2 = *pbVar5;
              uVar8 = (ulong)bVar2;
              if (bVar2 == 0xff) {
                bVar2 = *(byte *)(piVar14 + 3);
                uVar13 = (long)(short)(((uint)pbVar5[1] << 0x10 | (uint)pbVar5[2] << 8 |
                                       (uint)pbVar5[3]) + 0x80 >> 8) + uVar13;
                goto joined_r0x00e3fc10;
              }
              if (bVar2 == 0x1e) break;
              pbVar11 = *(byte **)(param_1 + 0x10);
              if (bVar2 == 0x1d) {
                if (pbVar11 < pbVar5 + 5) goto LAB_00e3faa8;
                uVar8 = (ulong)pbVar5[1] << 0x18 | (ulong)pbVar5[2] << 0x10 | (ulong)pbVar5[3] << 8
                        | (ulong)pbVar5[4];
                bVar2 = *(byte *)(piVar14 + 3);
                goto joined_r0x00e3fb0c;
              }
              if (bVar2 == 0x1c) {
                if (pbVar11 < pbVar5 + 3) goto LAB_00e3faa8;
                bVar2 = *(byte *)(piVar14 + 3);
                uVar13 = ((long)(short)((ushort)pbVar5[1] << 8) | (ulong)pbVar5[2]) + uVar13;
              }
              else if (bVar2 < 0xf7) {
                bVar2 = *(byte *)(piVar14 + 3);
                uVar13 = (uVar8 - 0x8b) + uVar13;
              }
              else {
                if (bVar2 < 0xfb) {
                  if (pbVar5 + 2 <= pbVar11) {
                    lVar12 = (uVar8 * 0x100 - 0xf700 | (ulong)pbVar5[1]) + 0x6c;
                    bVar2 = *(byte *)(piVar14 + 3);
joined_r0x00e3fb74:
                    uVar13 = lVar12 + uVar13;
                    goto joined_r0x00e3fc10;
                  }
                }
                else if (pbVar5 + 2 <= pbVar11) {
                  lVar12 = (uVar8 * -0x100 + 0xfa94) - (ulong)pbVar5[1];
                  bVar2 = *(byte *)(piVar14 + 3);
                  goto joined_r0x00e3fb74;
                }
LAB_00e3faa8:
                bVar2 = *(byte *)(piVar14 + 3);
              }
joined_r0x00e3fc10:
              if (bVar2 != 4) goto LAB_00e3fbb8;
LAB_00e3fc14:
              *(int *)puVar17 = (int)uVar13;
              puVar17 = (ulong *)((long)puVar17 + 4);
joined_r0x00e3fa80:
              iVar10 = iVar10 + 1;
              puVar16 = puVar16 + 1;
              if (iVar10 == 0) goto LAB_00e3fc28;
            }
            lVar12 = FUN_00e41c10(pbVar5,*(undefined8 *)(param_1 + 0x10),0,0);
            uVar8 = lVar12 >> 0x10;
            bVar2 = *(byte *)(piVar14 + 3);
joined_r0x00e3fb0c:
            uVar13 = uVar8 + uVar13;
            if (bVar2 == 4) goto LAB_00e3fc14;
LAB_00e3fbb8:
            if (bVar2 == 2) {
              *(short *)puVar17 = (short)uVar13;
              puVar17 = (ulong *)((long)puVar17 + 2);
              goto joined_r0x00e3fa80;
            }
            if (bVar2 != 1) {
              *puVar17 = uVar13;
              puVar17 = (ulong *)((long)puVar17 + (ulong)bVar2);
              goto joined_r0x00e3fa80;
            }
            *(char *)puVar17 = (char)uVar13;
            iVar10 = iVar10 + 1;
            puVar17 = (ulong *)((long)puVar17 + (ulong)*(byte *)(piVar14 + 3));
            puVar16 = puVar16 + 1;
          } while (iVar10 != 0);
LAB_00e3fc28:
          iVar10 = *piVar14;
        }
        goto joined_r0x00e3f9d8;
      }
      if (cVar3 == '\x04') {
        *(int *)puVar17 = (int)uVar8;
        iVar10 = *piVar14;
      }
      else if (cVar3 == '\x02') {
        *(short *)puVar17 = (short)uVar8;
        iVar10 = *piVar14;
      }
      else {
        if (cVar3 == '\x01') {
          *(char *)puVar17 = (char)uVar8;
          goto LAB_00e3f9a4;
        }
        *puVar17 = uVar8;
        iVar10 = *piVar14;
      }
    }
    else {
      iVar4 = (**(code **)(piVar14 + 4))(param_1);
      if (iVar4 != 0) {
        iVar10 = -0x3fffffff;
        goto LAB_00e40014;
      }
LAB_00e3f9a4:
      iVar10 = *piVar14;
    }
joined_r0x00e3f9d8:
    if (iVar10 != 8) {
LAB_00e3f9b0:
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    }
    param_2 = param_2 + 1;
  } while( true );
}

