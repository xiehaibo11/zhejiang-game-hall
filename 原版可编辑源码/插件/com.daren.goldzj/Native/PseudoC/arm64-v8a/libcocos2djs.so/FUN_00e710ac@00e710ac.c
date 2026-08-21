
ulong FUN_00e710ac(int *param_1,undefined1 *param_2,ulong param_3)

{
  void *__dest;
  int iVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  int local_64;
  
  uVar17 = param_1[0x12];
  uVar15 = param_1[0x13];
  uVar4 = param_1[0x14];
  if (param_3 == 0) {
    uVar14 = 0;
  }
  else {
    iVar8 = *param_1;
    if (iVar8 == 0) {
      iVar8 = FUN_00e1bb5c(*(undefined8 *)(param_1 + 0x32),2);
      if ((iVar8 == 0) &&
         (lVar6 = FUN_00e1d538(*(undefined8 *)(param_1 + 0x32),&local_64,1), lVar6 == 1)) {
        uVar14 = (ulong)(CONCAT14((byte)local_64,local_64) & 0xff000000ff);
        uVar11 = uVar14 & 0x800000001f;
        uVar9 = (uint)uVar11;
        iVar8 = 1 << (uVar14 & 0x1f);
        *(ulong *)(param_1 + 0xc) = uVar11;
        param_1[0xe] = iVar8 + -0x100;
        if (uVar9 < 0x11) {
          param_1[0xf] = 9;
          param_1[0x10] = (uint)((byte)local_64 >> 7);
          iVar1 = 0x100;
          if (uVar9 < 10) {
            iVar1 = iVar8 + -0xff;
          }
          param_1[0x11] = iVar1;
          uVar4 = FUN_00e71594(param_1);
          if (uVar4 < 0x100) {
            if (param_2 != (undefined1 *)0x0) {
              *param_2 = (char)uVar4;
            }
            uVar17 = uVar4;
            uVar15 = uVar4;
            if (1 < param_3) {
              uVar11 = 1;
              *param_1 = 1;
              uVar9 = 0;
              goto LAB_00e71228;
            }
            uVar4 = 0;
            uVar14 = 1;
            goto LAB_00e71568;
          }
          uVar4 = 0;
        }
      }
      uVar11 = 0;
LAB_00e71560:
      *param_1 = 3;
      uVar14 = uVar11;
    }
    else {
      uVar11 = 0;
      uVar9 = uVar4;
      if (iVar8 == 1) goto LAB_00e71228;
      uVar14 = uVar11;
      if (iVar8 == 2) {
        uVar11 = 0;
        if (param_2 == (undefined1 *)0x0) goto LAB_00e71478;
LAB_00e71114:
        do {
          uVar9 = param_1[0x1e];
          if (uVar9 == 0) {
            do {
              uVar9 = param_1[0x10];
              if (uVar9 < (uint)param_1[0xe]) {
                uVar12 = param_1[0x1a];
                uVar14 = (ulong)uVar12;
                if (uVar12 <= uVar9) {
                  uVar5 = 0x200;
                  if (uVar12 != 0) {
                    uVar5 = uVar12 + (uVar12 >> 2);
                  }
                  lVar6 = FUN_00e13bcc(*(undefined8 *)(param_1 + 0x34),3,uVar14,(ulong)uVar5,
                                       *(undefined8 *)(param_1 + 0x16),&local_64);
                  *(long *)(param_1 + 0x16) = lVar6;
                  if (local_64 != 0) goto LAB_00e71560;
                  __dest = (void *)(lVar6 + (ulong)uVar5 * 2);
                  *(void **)(param_1 + 0x18) = __dest;
                  memmove(__dest,(void *)(lVar6 + uVar14 * 2),uVar14);
                  uVar9 = param_1[0x10];
                  param_1[0x1a] = uVar5;
                }
                *(short *)(*(long *)(param_1 + 0x16) + (ulong)uVar9 * 2) = (short)uVar17;
                *(char *)(*(long *)(param_1 + 0x18) + (ulong)uVar9) = (char)uVar15;
                param_1[0x10] = param_1[0x10] + 1;
              }
              *param_1 = 1;
              uVar17 = uVar4;
              uVar9 = uVar4;
LAB_00e71228:
              uVar5 = FUN_00e71594(param_1);
              uVar12 = uVar17;
              uVar4 = uVar9;
              if ((int)uVar5 < 0) goto LAB_00e71560;
              while( true ) {
                uVar4 = uVar5;
                uVar17 = uVar12;
                uVar12 = uVar4;
                if (uVar4 != 0x100) break;
                if (param_1[0xd] == 0) goto LAB_00e71284;
                param_1[0x10] = 0;
                *(undefined1 *)(param_1 + 8) = 1;
                uVar5 = FUN_00e71594(param_1);
                uVar17 = 0;
                uVar15 = 0;
                uVar12 = 0;
                if ((int)uVar5 < 0) {
                  uVar15 = 0;
                  uVar4 = uVar9;
                  goto LAB_00e71560;
                }
              }
              if (0xff < uVar4) {
LAB_00e71284:
                if ((uint)param_1[0x10] <= uVar4 - 0x100) {
                  if ((uint)param_1[0x10] < uVar4 - 0x100) goto LAB_00e71560;
                  uVar10 = (ulong)(uint)param_1[0x1e];
                  uVar14 = *(ulong *)(param_1 + 0x20);
                  if (uVar10 < uVar14) {
                    lVar6 = *(long *)(param_1 + 0x1c);
                  }
                  else {
                    piVar7 = *(int **)(param_1 + 0x1c);
                    uVar16 = uVar14 + (uVar14 >> 1) + 4;
                    if (piVar7 == param_1 + 0x22) {
                      piVar7 = (int *)0x0;
                      uVar14 = 0;
                      param_1[0x1c] = 0;
                      param_1[0x1d] = 0;
                    }
                    if (0x10000 < uVar16) {
                      if (uVar14 == 0x10000) goto LAB_00e71560;
                      uVar16 = 0x10000;
                    }
                    lVar6 = FUN_00e13bcc(*(undefined8 *)(param_1 + 0x34),1,uVar14,uVar16,piVar7,
                                         &local_64);
                    *(long *)(param_1 + 0x1c) = lVar6;
                    if (local_64 != 0) goto LAB_00e71560;
                    uVar10 = (ulong)(uint)param_1[0x1e];
                    *(ulong *)(param_1 + 0x20) = uVar16;
                  }
                  param_1[0x1e] = (int)uVar10 + 1;
                  *(char *)(lVar6 + uVar10) = (char)uVar15;
                  uVar12 = uVar17;
                  if (uVar17 < 0x100) goto LAB_00e713dc;
                }
                lVar6 = *(long *)(param_1 + 0x16);
                do {
                  if (lVar6 == 0) goto LAB_00e71560;
                  uVar10 = (ulong)(uint)param_1[0x1e];
                  uVar14 = *(ulong *)(param_1 + 0x20);
                  if (uVar10 < uVar14) {
                    lVar6 = *(long *)(param_1 + 0x1c);
                  }
                  else {
                    piVar7 = *(int **)(param_1 + 0x1c);
                    uVar16 = uVar14 + (uVar14 >> 1) + 4;
                    if (piVar7 == param_1 + 0x22) {
                      piVar7 = (int *)0x0;
                      uVar14 = 0;
                      param_1[0x1c] = 0;
                      param_1[0x1d] = 0;
                    }
                    if (0x10000 < uVar16) {
                      if (uVar14 == 0x10000) goto LAB_00e71560;
                      uVar16 = 0x10000;
                    }
                    lVar6 = FUN_00e13bcc(*(undefined8 *)(param_1 + 0x34),1,uVar14,uVar16,piVar7,
                                         &local_64);
                    *(long *)(param_1 + 0x1c) = lVar6;
                    if (local_64 != 0) goto LAB_00e71560;
                    uVar10 = (ulong)(uint)param_1[0x1e];
                    *(ulong *)(param_1 + 0x20) = uVar16;
                  }
                  uVar2 = *(undefined1 *)(*(long *)(param_1 + 0x18) + (ulong)(uVar12 - 0x100));
                  param_1[0x1e] = (int)uVar10 + 1;
                  *(undefined1 *)(lVar6 + uVar10) = uVar2;
                  lVar6 = *(long *)(param_1 + 0x16);
                  uVar3 = *(ushort *)(lVar6 + (ulong)(uVar12 - 0x100) * 2);
                  uVar12 = (uint)uVar3;
                } while (0xff < uVar3);
              }
LAB_00e713dc:
              uVar15 = uVar12;
              uVar10 = (ulong)(uint)param_1[0x1e];
              uVar14 = *(ulong *)(param_1 + 0x20);
              if (uVar10 < uVar14) {
                lVar6 = *(long *)(param_1 + 0x1c);
              }
              else {
                plVar13 = (long *)(param_1 + 0x1c);
                piVar7 = (int *)*plVar13;
                uVar16 = uVar14 + (uVar14 >> 1) + 4;
                if (piVar7 == param_1 + 0x22) {
                  piVar7 = (int *)0x0;
                  uVar14 = 0;
                  *plVar13 = 0;
                }
                if (0x10000 < uVar16) {
                  if (uVar14 == 0x10000) goto LAB_00e71560;
                  uVar16 = 0x10000;
                }
                lVar6 = FUN_00e13bcc(*(undefined8 *)(param_1 + 0x34),1,uVar14,uVar16,piVar7,
                                     &local_64);
                *plVar13 = lVar6;
                if (local_64 != 0) goto LAB_00e71560;
                uVar10 = (ulong)(uint)param_1[0x1e];
                *(ulong *)(param_1 + 0x20) = uVar16;
              }
              param_1[0x1e] = (int)uVar10 + 1;
              *(char *)(lVar6 + uVar10) = (char)uVar15;
              *param_1 = 2;
              if (param_2 != (undefined1 *)0x0) goto LAB_00e71114;
LAB_00e71478:
              iVar8 = param_1[0x1e];
              while (iVar8 = iVar8 + -1, iVar8 != -1) {
                uVar11 = uVar11 + 1;
                param_1[0x1e] = iVar8;
                uVar14 = param_3;
                if (param_3 == uVar11) goto LAB_00e71568;
              }
            } while( true );
          }
          uVar9 = uVar9 - 1;
          param_1[0x1e] = uVar9;
          param_2[uVar11] = *(undefined1 *)(*(long *)(param_1 + 0x1c) + (ulong)uVar9);
          uVar11 = uVar11 + 1;
          uVar14 = param_3;
        } while (param_3 != uVar11);
      }
    }
  }
LAB_00e71568:
  param_1[0x12] = uVar17;
  param_1[0x13] = uVar15;
  param_1[0x14] = uVar4;
  return uVar14;
}

