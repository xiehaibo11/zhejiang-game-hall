
uint FUN_00e2ef50(long param_1,uint param_2,void *param_3,char param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  void *__dest;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  long *plVar24;
  ushort *puVar25;
  uint uVar26;
  long lVar27;
  uint *puVar28;
  uint *puVar29;
  undefined8 uVar30;
  uint local_9c;
  long local_98;
  ushort local_90;
  ushort local_8e;
  long local_88;
  ushort local_80;
  byte local_7e;
  long local_78;
  ulong local_70;
  uint local_64;
  
  local_9c = 0;
  puVar28 = *(uint **)(param_1 + 0x4c0);
  uVar23 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0x4b9) = 0;
  if (puVar28 == (uint *)0x0) {
    iVar6 = FUN_00e2dd88(param_1,0);
    if (iVar6 != 0) {
      return iVar6;
    }
    puVar28 = *(uint **)(param_1 + 0x4c0);
  }
  local_9c = 0;
  puVar29 = *(uint **)(puVar28 + 6);
  uVar26 = *puVar29;
  if (param_2 <= *puVar29) {
    uVar26 = param_2;
  }
  if (uVar26 != 0) {
    uVar10 = 0;
    do {
      if (0x20000 < *(long *)((long)param_3 + (ulong)uVar10 * 8) + 0x10000U) {
        return 6;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar26);
  }
  if ((*(char *)(param_1 + 0x4b8) == '\0') && (*(long *)(puVar28 + 0x20) == 0)) {
    lVar20 = *(long *)(param_1 + 0xc0);
    uVar8 = *(undefined8 *)(lVar20 + 0x38);
    local_64 = (**(code **)(param_1 + 0x340))(param_1,0x67766172,lVar20,&local_70);
    uVar10 = local_64;
    if (local_64 == 0) {
      lVar14 = FUN_00e1d4a0(lVar20);
      local_64 = FUN_00e1dd74(lVar20,&DAT_01975c54,&local_98);
      uVar10 = local_64;
      if (local_64 == 0) {
        if (((local_98 == 0x10000) && (local_90 == **(ushort **)(puVar28 + 6))) &&
           ((ulong)local_8e * (ulong)local_90 < local_70 >> 1 ||
            (ulong)local_8e * (ulong)local_90 - (local_70 >> 1) == 0)) {
          lVar15 = 2;
          if ((local_7e & 1) != 0) {
            lVar15 = 4;
          }
          uVar18 = lVar15 * (ulong)local_80;
          if (uVar18 < local_70 || uVar18 - local_70 == 0) {
            *(ulong *)(puVar28 + 0x22) = local_70;
            puVar28[0x1a] = (uint)local_8e;
            puVar28[0x1e] = (uint)local_80;
            uVar9 = FUN_00e13bcc(uVar8,8,0,(ulong)local_80 + 1,0,&local_64);
            *(undefined8 *)(puVar28 + 0x20) = uVar9;
            uVar10 = local_64;
            if (local_64 == 0) {
              if ((local_7e & 1) == 0) {
                local_64 = FUN_00e1d718(lVar20,(ulong)(puVar28[0x1e] + 1) << 1);
                uVar10 = local_64;
                if (local_64 == 0) {
                  uVar10 = 0;
                  do {
                    uVar5 = FUN_00e1d970(lVar20);
                    uVar18 = local_78 + lVar14 + (ulong)uVar5 * 2;
                    *(ulong *)(*(long *)(puVar28 + 0x20) + (ulong)uVar10 * 8) = uVar18;
                    if (local_70 + lVar14 < uVar18) goto LAB_00e2f59c;
                    uVar10 = uVar10 + 1;
                  } while (uVar10 <= puVar28[0x1e]);
LAB_00e2f5a4:
                  FUN_00e1d90c(lVar20);
                  uVar10 = local_64;
                  if (local_64 == 0) {
                    uVar10 = 0;
                    if (puVar28[0x1a] != 0) {
                      uVar8 = FUN_00e13bcc(uVar8,8,0,puVar28[0x1a] * (uint)local_90,0,&local_64);
                      *(undefined8 *)(puVar28 + 0x1c) = uVar8;
                      uVar10 = local_64;
                      if (((local_64 == 0) &&
                          (local_64 = FUN_00e1bb5c(lVar20,local_88 + lVar14), uVar10 = local_64,
                          local_64 == 0)) &&
                         (local_64 = FUN_00e1d718(lVar20,(ulong)(puVar28[0x1a] * (uint)local_90) <<
                                                         1), uVar10 = local_64, local_64 == 0)) {
                        uVar10 = puVar28[0x1a];
                        if (uVar10 != 0) {
                          uVar12 = (uint)local_90;
                          uVar11 = 0;
                          do {
                            while (uVar12 == 0) {
                              uVar12 = 0;
                              uVar11 = uVar11 + 1;
                              if (uVar10 <= uVar11) goto LAB_00e2f698;
                            }
                            uVar10 = 0;
                            do {
                              uVar7 = FUN_00e1d970(lVar20);
                              uVar12 = (uint)local_90;
                              uVar1 = uVar10 + uVar11 * uVar12;
                              uVar10 = uVar10 + 1;
                              *(long *)(*(long *)(puVar28 + 0x1c) + (ulong)uVar1 * 8) =
                                   (long)(int)(-(uVar7 >> 0xf & 1) & 0xfffc0000 |
                                              (uVar7 & 0xffff) << 2);
                            } while (uVar10 < uVar12);
                            uVar10 = puVar28[0x1a];
                            uVar11 = uVar11 + 1;
                          } while (uVar11 < uVar10);
                        }
LAB_00e2f698:
                        FUN_00e1d90c(lVar20);
                        local_9c = local_64;
                        if (local_64 != 0) {
                          return local_64;
                        }
                        goto LAB_00e2efd8;
                      }
                    }
                  }
                }
              }
              else {
                local_64 = FUN_00e1d718(lVar20,(ulong)(puVar28[0x1e] + 1) << 2);
                uVar10 = local_64;
                if (local_64 == 0) {
                  uVar10 = 0;
                  do {
                    lVar15 = FUN_00e1da20(lVar20);
                    uVar18 = lVar15 + local_78 + lVar14;
                    *(ulong *)(*(long *)(puVar28 + 0x20) + (ulong)uVar10 * 8) = uVar18;
                    if (local_70 + lVar14 < uVar18) goto LAB_00e2f59c;
                    uVar10 = uVar10 + 1;
                  } while (uVar10 <= puVar28[0x1e]);
                  goto LAB_00e2f5a4;
                }
              }
            }
            goto LAB_00e2f1c4;
          }
        }
        local_64 = 8;
        uVar10 = 8;
      }
    }
LAB_00e2f1c4:
    if (uVar10 != 0) {
      return uVar10;
    }
    local_9c = 0;
  }
LAB_00e2efd8:
  if (*(long *)(puVar28 + 2) == 0) {
    uVar8 = FUN_00e13bcc(uVar23,8,0,*puVar29,0,&local_9c);
    *(undefined8 *)(puVar28 + 2) = uVar8;
    if (local_9c != 0) {
      return local_9c;
    }
    bVar4 = true;
    __dest = *(void **)(puVar28 + 4);
    if (__dest != (void *)0x0) goto LAB_00e2efec;
LAB_00e2f0d4:
    __dest = (void *)FUN_00e13bcc(uVar23,8,0,*puVar29,0,&local_9c);
    *(void **)(puVar28 + 4) = __dest;
    if (local_9c != 0) {
      return local_9c;
    }
    uVar11 = *puVar29;
    iVar6 = 1;
  }
  else {
    bVar4 = false;
    __dest = *(void **)(puVar28 + 4);
    if (__dest == (void *)0x0) goto LAB_00e2f0d4;
LAB_00e2efec:
    uVar10 = 0;
    if (uVar26 != 0) {
      do {
        if (*(long *)((long)__dest + (ulong)uVar10 * 8) !=
            *(long *)((long)param_3 + (ulong)uVar10 * 8)) {
          bVar3 = true;
          iVar6 = 2;
          uVar18 = *(ulong *)(param_1 + 8);
          uVar12 = (uint)(uVar18 >> 0x10);
          goto joined_r0x00e2f1e0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar26);
    }
    iVar6 = 0;
    bVar3 = false;
    uVar18 = *(ulong *)(param_1 + 8);
    uVar12 = (uint)(uVar18 >> 0x10);
joined_r0x00e2f1e0:
    if ((uVar18 & 0x7fff0000) == 0) {
      uVar11 = *puVar29;
      if (uVar10 < uVar11) {
        uVar18 = (ulong)uVar10;
        do {
          lVar20 = uVar18 * 8;
          uVar18 = uVar18 + 1;
          if (*(long *)((long)__dest + lVar20) != 0) {
            bVar3 = true;
          }
        } while ((uint)uVar18 < uVar11);
      }
    }
    else {
      uVar11 = *puVar29;
      if (uVar10 < uVar11) {
        uVar18 = (ulong)uVar10;
        do {
          lVar20 = uVar18 * 8;
          uVar18 = uVar18 + 1;
          if (*(long *)((long)__dest + lVar20) !=
              *(long *)(*(long *)(puVar28 + 10) + (ulong)(uVar11 * ((uVar12 & 0xffff) - 1)) * 8 +
                       lVar20)) {
            bVar3 = true;
          }
        } while (uVar11 != (uint)uVar18);
      }
    }
    if (!bVar3) {
      *(undefined1 *)(param_1 + 0x4b9) = 1;
      return -1;
    }
    for (; uVar10 < uVar11; uVar10 = uVar10 + 1) {
      if (*(long *)((long)__dest + (ulong)uVar10 * 8) != 0) {
        iVar6 = 2;
        break;
      }
    }
  }
  *puVar28 = uVar11;
  memcpy(__dest,param_3,(ulong)uVar26 << 3);
  if (param_4 == '\0') goto LAB_00e2f3dc;
  if (bVar4) {
    uVar26 = *puVar28;
  }
  puVar29 = *(uint **)(param_1 + 0x4c0);
  uVar18 = *(ulong *)(puVar28 + 2);
  uVar12 = *puVar29;
  uVar10 = uVar12;
  if (uVar26 <= uVar12) {
    uVar10 = uVar26;
  }
  if (uVar10 != 0) {
    uVar13 = *(ulong *)(puVar28 + 4);
    uVar16 = (ulong)uVar10;
    if ((uVar10 < 4) || ((uVar18 < uVar13 + uVar16 * 8 && (uVar13 < uVar18 + uVar16 * 8)))) {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar16 & 0xfffffffc;
      puVar19 = (undefined8 *)(uVar13 + 0x10);
      puVar21 = (undefined8 *)(uVar18 + 0x10);
      uVar22 = uVar17;
      do {
        puVar2 = puVar19 + -1;
        uVar8 = puVar19[-2];
        uVar30 = puVar19[1];
        uVar9 = *puVar19;
        puVar19 = puVar19 + 4;
        uVar22 = uVar22 - 4;
        puVar21[-1] = *puVar2;
        puVar21[-2] = uVar8;
        puVar21[1] = uVar30;
        *puVar21 = uVar9;
        puVar21 = puVar21 + 4;
      } while (uVar22 != 0);
      if (uVar17 == uVar16) goto LAB_00e2f2c0;
    }
    do {
      lVar20 = uVar17 * 8;
      uVar17 = uVar17 + 1;
      *(undefined8 *)(uVar18 + lVar20) = *(undefined8 *)(uVar13 + lVar20);
    } while (uVar17 < uVar16);
  }
LAB_00e2f2c0:
  if (uVar12 < uVar26) {
    memset((void *)(uVar18 + (ulong)uVar10 * 8),0,(ulong)(uVar26 + ~uVar10) * 8 + 8);
  }
  if ((uVar10 != 0) && (puVar25 = *(ushort **)(puVar29 + 0xe), puVar25 != (ushort *)0x0)) {
    uVar13 = 0;
    do {
      if (1 < (ulong)*puVar25) {
        lVar14 = *(long *)(uVar18 + uVar13 * 8);
        lVar20 = 0;
        uVar16 = 1;
        do {
          plVar24 = (long *)(*(long *)(puVar25 + 4) + lVar20);
          if (lVar14 < plVar24[3]) {
            lVar14 = FT_MulDiv(lVar14 - plVar24[1],plVar24[2] - *plVar24,plVar24[3] - plVar24[1]);
            *(long *)(uVar18 + uVar13 * 8) = *(long *)(*(long *)(puVar25 + 4) + lVar20) + lVar14;
            break;
          }
          uVar16 = uVar16 + 1;
          lVar20 = lVar20 + 0x10;
        } while (uVar16 < *puVar25);
      }
      puVar25 = puVar25 + 8;
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar10);
  }
  if (uVar10 != 0) {
    uVar13 = 0;
    plVar24 = (long *)(*(long *)(*(long *)(puVar29 + 6) + 0x10) + 0x10);
    do {
      lVar20 = *(long *)(uVar18 + uVar13 * 8);
      if (lVar20 < 0) {
        lVar14 = plVar24[-1];
        lVar15 = *plVar24;
        lVar27 = lVar15;
LAB_00e2f3bc:
        lVar14 = FT_MulFix(lVar20,lVar15 - lVar14);
        lVar14 = lVar14 + lVar27;
      }
      else {
        lVar14 = *plVar24;
        if (lVar20 != 0) {
          lVar15 = plVar24[1];
          lVar27 = lVar14;
          goto LAB_00e2f3bc;
        }
      }
      *(long *)(uVar18 + uVar13 * 8) = lVar14;
      uVar13 = uVar13 + 1;
      plVar24 = plVar24 + 6;
    } while (uVar13 < uVar10);
  }
LAB_00e2f3dc:
  *(undefined1 *)(param_1 + 0x4b9) = 1;
  if (*(long *)(param_1 + 0x480) != 0) {
    if (iVar6 == 1) {
      local_9c = FUN_00e2f7b4(param_1,*(undefined8 *)(param_1 + 0xc0));
    }
    else if (iVar6 == 2) {
      FUN_00e139fc(uVar23);
      *(undefined8 *)(param_1 + 0x480) = 0;
      local_9c = FUN_00e2f6b0(param_1,*(undefined8 *)(param_1 + 0xc0));
    }
  }
  FUN_00e139fc(uVar23,*(undefined8 *)(param_1 + 0x4a0));
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  return local_9c;
LAB_00e2f59c:
  local_64 = 8;
  goto LAB_00e2f5a4;
}

