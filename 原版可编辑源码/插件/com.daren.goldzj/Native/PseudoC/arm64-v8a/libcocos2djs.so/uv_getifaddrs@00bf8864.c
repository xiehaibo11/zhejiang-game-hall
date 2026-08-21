
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_getifaddrs(long *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  uint __fd;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int iVar18;
  size_t __n;
  uint *puVar19;
  ulong uVar20;
  ushort *puVar21;
  ulong uVar22;
  long lVar23;
  uint *puVar24;
  undefined8 uVar25;
  uint uVar26;
  char *pcVar27;
  uint *puVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  char *pcVar32;
  char *pcVar33;
  sockaddr local_28;
  long local_18 [3];
  
  local_18[2] = ___stack_chk_guard;
  if (param_1 != (long *)0x0) {
    *param_1 = 0;
    __fd = socket(0x10,3,0);
    if (-1 < (int)__fd) {
      local_28.sa_data[6] = '\0';
      local_28.sa_data[7] = '\0';
      local_28.sa_data[8] = '\0';
      local_28.sa_data[9] = '\0';
      local_28.sa_family = 0x10;
      local_28.sa_data[0] = '\0';
      local_28.sa_data[1] = '\0';
      local_28.sa_data[2] = '\0';
      local_28.sa_data[3] = '\0';
      local_28.sa_data[4] = '\0';
      local_28.sa_data[5] = '\0';
      iVar8 = bind(__fd,&local_28,0xc);
      if (-1 < iVar8) {
        plVar11 = (long *)FUN_00bf8530(__fd,0x12);
        if (plVar11 == (long *)0x0) {
          close(__fd);
          uVar25 = 0xffffffff;
          goto LAB_00bf9158;
        }
        plVar12 = (long *)FUN_00bf8530(__fd,0x16);
        if (plVar12 == (long *)0x0) {
          close(__fd);
          FUN_00bf84f0(plVar11);
          uVar25 = 0xffffffff;
          goto LAB_00bf9158;
        }
        uVar9 = getpid();
        iVar8 = 0;
        plVar29 = plVar11;
        do {
          uVar26 = *(uint *)(plVar29 + 2);
          puVar24 = (uint *)plVar29[1];
          if (((0xf < uVar26) && (uVar10 = *puVar24, 0xf < uVar10)) && (uVar10 <= uVar26)) {
            do {
              if ((uVar9 == puVar24[3]) && (__fd == puVar24[2])) {
                if ((short)puVar24[1] == 3) break;
                if ((short)puVar24[1] != 0x10) goto LAB_00bf896c;
                puVar28 = puVar24 + 8;
                uVar16 = (ulong)uVar10 - 0x20;
                if (uVar16 < 4) {
LAB_00bf92d8:
                  lVar23 = 0;
                  lVar31 = 0x3c;
                  lVar30 = lVar23;
                }
                else {
                  uVar5 = (ushort)puVar24[8];
                  uVar10 = (uint)uVar5;
                  if ((uVar5 < 4) || (uVar22 = (ulong)uVar5, uVar16 < uVar22)) goto LAB_00bf92d8;
                  lVar31 = 0;
                  lVar23 = 0;
                  lVar30 = 0;
                  puVar19 = puVar28;
                  while( true ) {
                    switch(*(undefined2 *)((long)puVar19 + 2)) {
                    case 1:
                    case 2:
                      uVar22 = uVar22 + 8;
                      if (uVar22 < 0x14) {
                        uVar22 = 0x14;
                      }
                      lVar30 = lVar30 + (uVar22 + 3 & 0xfffffffc);
                      break;
                    case 3:
                      lVar23 = lVar23 + (uVar16 + 4 & 0xfffffffc);
                      break;
                    case 7:
                      lVar31 = lVar31 + (uVar16 + 3 & 0xfffffffc);
                    }
                    uVar22 = (ulong)(uVar10 + 3) & 0x1fffc;
                    uVar16 = uVar16 - uVar22;
                    puVar19 = (uint *)((long)puVar19 + uVar22);
                    if (uVar16 < 4) break;
                    uVar10 = (uint)(ushort)*puVar19;
                    if ((uVar10 < 4) || (uVar22 = (ulong)(ushort)*puVar19, uVar16 < uVar22)) break;
                  }
                  lVar31 = lVar31 + lVar30 + 0x3c + lVar23;
                }
                puVar14 = (undefined8 *)uv__malloc(lVar31);
                if (puVar14 == (undefined8 *)0x0) goto LAB_00bf9318;
                *puVar14 = 0;
                puVar14[1] = 0;
                puVar14[2] = 0;
                puVar14[3] = 0;
                puVar14[4] = 0;
                puVar14[5] = 0;
                puVar14[6] = 0;
                pcVar32 = (char *)((long)puVar14 + 0x3c);
                puVar14[1] = "";
                pcVar27 = pcVar32 + lVar23;
                pcVar33 = pcVar27 + lVar30;
                *(uint *)(puVar14 + 7) = puVar24[5];
                uVar16 = (ulong)*puVar24 - 0x20;
                *(uint *)(puVar14 + 2) = puVar24[6];
                if (((3 < uVar16) && (3 < (ushort)puVar24[8])) &&
                   (uVar22 = (ulong)(ushort)puVar24[8], uVar22 <= uVar16)) {
                  do {
                    __n = uVar22 - 4;
                    switch(*(undefined2 *)((long)puVar28 + 2)) {
                    case 1:
                    case 2:
                      uVar22 = uVar22 + 8;
                      if (uVar22 < 0x14) {
                        uVar22 = 0x14;
                      }
                      FUN_00bf87a8(0x11,pcVar27);
                      sVar3 = *(short *)((long)puVar28 + 2);
                      uVar4 = *(undefined2 *)((long)puVar24 + 0x12);
                      *(uint *)(pcVar27 + 4) = puVar24[5];
                      *(undefined2 *)(pcVar27 + 8) = uVar4;
                      if (sVar3 == 1) {
                        puVar14[3] = pcVar27;
                      }
                      else {
                        puVar14[5] = pcVar27;
                      }
                      pcVar27 = pcVar27 + (uVar22 + 3 & 0xfffffffc);
                      break;
                    case 3:
                      strncpy(pcVar32,(char *)(puVar28 + 1),__n);
                      pcVar32[__n] = '\0';
                      puVar14[1] = pcVar32;
                      break;
                    case 7:
                      memcpy(pcVar33,puVar28 + 1,__n);
                      puVar14[6] = pcVar33;
                    }
                    uVar22 = (ulong)((ushort)*puVar28 + 3) & 0x1fffc;
                    uVar16 = uVar16 - uVar22;
                    puVar28 = (uint *)((long)puVar28 + uVar22);
                  } while (((3 < uVar16) && (3 < (ushort)*puVar28)) &&
                          (uVar22 = (ulong)(ushort)*puVar28, uVar22 <= uVar16));
                }
                puVar15 = (undefined8 *)*param_1;
                if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
                  *param_1 = (long)puVar14;
                }
                else {
                  do {
                    puVar17 = puVar15;
                    puVar15 = (undefined8 *)*puVar17;
                  } while (puVar15 != (undefined8 *)0x0);
                  *puVar17 = puVar14;
                }
                uVar10 = *puVar24;
                iVar8 = iVar8 + 1;
              }
              else {
LAB_00bf896c:
                uVar10 = *puVar24;
              }
              uVar10 = uVar10 + 3 & 0xfffffffc;
              uVar26 = uVar26 - uVar10;
              if (uVar26 < 0x10) break;
              puVar24 = (uint *)((long)puVar24 + (ulong)uVar10);
              uVar10 = *puVar24;
              if ((uVar26 < uVar10) || (uVar10 < 0x10)) break;
            } while( true );
          }
          plVar29 = (long *)*plVar29;
        } while (plVar29 != (long *)0x0);
        uVar9 = getpid();
        plVar29 = plVar12;
        do {
          uVar26 = *(uint *)(plVar29 + 2);
          puVar24 = (uint *)plVar29[1];
          if (((0xf < uVar26) && (uVar10 = *puVar24, 0xf < uVar10)) && (uVar10 <= uVar26)) {
LAB_00bf8c50:
            if ((uVar9 != puVar24[3]) || (__fd != puVar24[2])) goto LAB_00bf8c20;
            if ((short)puVar24[1] != 3) {
              if ((short)puVar24[1] != 0x14) goto LAB_00bf8c20;
              plVar13 = (long *)*param_1;
              if ((iVar8 < 1) || (plVar13 == (long *)0x0)) {
LAB_00bf9290:
                plVar13 = (long *)0x0;
              }
              else if (puVar24[5] != *(uint *)(plVar13 + 7)) {
                iVar18 = 0;
                do {
                  iVar18 = iVar18 + 1;
                  plVar13 = (long *)*plVar13;
                  if ((iVar8 <= iVar18) || (plVar13 == (long *)0x0)) goto LAB_00bf9290;
                } while (puVar24[5] != *(uint *)(plVar13 + 7));
              }
              puVar28 = puVar24 + 8;
              uVar16 = (ulong)uVar10 - 0x18;
              if (((3 < uVar16) && (uVar5 = (ushort)puVar24[8], 3 < uVar5)) &&
                 (uVar22 = (ulong)uVar5, uVar22 <= uVar16)) {
                bVar1 = (byte)puVar24[4];
                lVar31 = 0;
                lVar23 = 0;
                bVar7 = false;
                puVar19 = puVar28;
                do {
                  if (bVar1 != 0x11) {
                    switch(*(undefined2 *)((long)puVar19 + 2)) {
                    case 1:
                    case 2:
                      if ((!bVar7) && ((bVar1 & 0xf7) == 2)) {
                        if (bVar1 == 2) {
                          lVar30 = 0x10;
                        }
                        else {
                          lVar30 = 0x1c;
                          if (bVar1 != 10) {
                            uVar20 = uVar22 - 2;
                            bVar7 = true;
                            if (uVar20 < 0x10) {
                              uVar20 = 0x10;
                            }
                            lVar23 = lVar23 + (uVar20 + 3 & 0xfffffffc);
                            goto switchD_00bf8d44_caseD_4;
                          }
                        }
                        lVar23 = lVar23 + lVar30;
                        bVar7 = true;
                      }
                    case 4:
switchD_00bf8d44_caseD_4:
                      if (bVar1 == 2) {
                        lVar23 = lVar23 + 0x10;
                      }
                      else {
                        uVar20 = 0x1c;
                        if (bVar1 != 10) {
                          uVar22 = uVar22 - 2;
                          if (uVar22 < 0x10) {
                            uVar22 = 0x10;
                          }
                          uVar20 = uVar22 + 3 & 0xfffffffc;
                        }
                        lVar23 = lVar23 + uVar20;
                      }
                      break;
                    case 3:
                      lVar31 = lVar31 + (uVar16 + 4 & 0xfffffffc);
                    }
                  }
                  uVar22 = (ulong)(uVar5 + 3) & 0x1fffc;
                  uVar16 = uVar16 - uVar22;
                  if (uVar16 < 4) goto LAB_00bf8e14;
                  puVar19 = (uint *)((long)puVar19 + uVar22);
                  uVar5 = (ushort)*puVar19;
                  if ((uVar5 < 4) || (uVar22 = (ulong)uVar5, uVar16 < uVar22)) goto LAB_00bf8e14;
                } while( true );
              }
              lVar23 = 0x38;
              lVar31 = 0;
              goto LAB_00bf8e1c;
            }
          }
LAB_00bf9130:
          plVar29 = (long *)*plVar29;
        } while (plVar29 != (long *)0x0);
        uVar25 = 0;
        goto LAB_00bf913c;
      }
      close(__fd);
    }
  }
  uVar25 = 0xffffffff;
  goto LAB_00bf9158;
LAB_00bf8e14:
  lVar23 = lVar23 + lVar31 + 0x38;
LAB_00bf8e1c:
  puVar14 = (undefined8 *)uv__malloc(lVar23);
  if (puVar14 == (undefined8 *)0x0) goto LAB_00bf9318;
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[6] = 0;
  if (plVar13 == (long *)0x0) {
    puVar14[1] = "";
    *(uint *)(puVar14 + 2) = (uint)*(byte *)((long)puVar24 + 0x12);
  }
  else {
    puVar14[1] = plVar13[1];
    bVar1 = *(byte *)((long)puVar24 + 0x12);
    *(uint *)(puVar14 + 2) = (uint)bVar1;
    *(uint *)(puVar14 + 2) = (uint)bVar1 | *(uint *)(plVar13 + 2);
  }
  pcVar33 = (char *)(puVar14 + 7);
  pcVar32 = pcVar33 + lVar31;
  uVar16 = (ulong)*puVar24 - 0x18;
  if (3 < uVar16) {
    uVar5 = (ushort)puVar24[8];
    while ((3 < uVar5 && (uVar22 = (ulong)uVar5, uVar22 <= uVar16))) {
      puVar19 = puVar28 + 1;
      switch(*(undefined2 *)((long)puVar28 + 2)) {
      case 1:
      case 2:
      case 4:
        cVar2 = (char)puVar24[4];
        if (cVar2 == '\n') {
          uVar22 = 0x1c;
        }
        else if (cVar2 == '\x11') {
          uVar22 = uVar22 + 8;
          if (uVar22 < 0x14) {
            uVar22 = 0x14;
          }
          uVar22 = uVar22 + 3 & 0xfffffffc;
        }
        else if (cVar2 == '\x02') {
          uVar22 = 0x10;
        }
        else {
          uVar22 = uVar22 - 2;
          if (uVar22 < 0x10) {
            uVar22 = 0x10;
          }
          uVar22 = uVar22 + 3 & 0xfffffffc;
        }
        FUN_00bf87a8(cVar2,pcVar32,puVar19);
        if ((char)puVar24[4] == '\n') {
          if ((char)*puVar19 == -2) {
            if ((*(byte *)((long)puVar28 + 5) & 0xc0) == 0x80) {
              *(uint *)(pcVar32 + 0x18) = puVar24[5];
            }
          }
          else if (((char)*puVar19 == -1) && ((*(byte *)((long)puVar28 + 5) & 0xf) == 2)) {
            *(uint *)(pcVar32 + 0x18) = puVar24[5];
          }
        }
        if (*(short *)((long)puVar28 + 2) == 1) {
          if (puVar14[3] != 0) goto LAB_00bf8fa4;
          puVar14[3] = pcVar32;
        }
        else if (*(short *)((long)puVar28 + 2) == 2) {
          if (puVar14[3] != 0) {
            puVar14[5] = puVar14[3];
          }
          puVar14[3] = pcVar32;
        }
        else {
LAB_00bf8fa4:
          puVar14[5] = pcVar32;
        }
        uVar5 = (ushort)*puVar28;
        pcVar32 = pcVar32 + uVar22;
        break;
      case 3:
        strncpy(pcVar33,(char *)puVar19,uVar22 - 4);
        pcVar33[uVar22 - 4] = '\0';
        puVar14[1] = pcVar33;
      default:
        uVar5 = (ushort)*puVar28;
      }
      uVar22 = (ulong)(uVar5 + 3) & 0x1fffc;
      uVar16 = uVar16 - uVar22;
      if (uVar16 < 4) break;
      puVar28 = (uint *)((long)puVar28 + uVar22);
      uVar5 = (ushort)*puVar28;
    }
  }
  puVar21 = (ushort *)puVar14[3];
  if ((puVar21 != (ushort *)0x0) && (uVar5 = *puVar21, (uVar5 & 0xfff7) == 2)) {
    uVar25 = 4;
    if (uVar5 != 2) {
      uVar25 = 0x10;
    }
    uVar10 = 0x20;
    if (uVar5 != 2) {
      uVar10 = 0x80;
    }
    if (*(byte *)((long)puVar24 + 0x11) < uVar10) {
      uVar10 = (uint)*(byte *)((long)puVar24 + 0x11);
    }
    local_18[0] = 0;
    local_18[1] = 0;
    uVar6 = uVar10 >> 3;
    uVar16 = (ulong)uVar6;
    if ((((uVar6 != 0) && (local_18[0] = 0xff, uVar6 != 1)) && (local_18[0] = 0xffff, uVar6 != 2))
       && (local_18[0] = 0xffffff, uVar6 != 3)) {
      local_18[0] = 0xffffffff;
      if (uVar6 == 4) {
        uVar16 = 4;
      }
      else {
        local_18[0] = 0xffffffffff;
        if ((uVar6 != 5) && (local_18[0] = 0xffffffffffff, uVar6 != 6)) {
          local_18[0] = 0xffffffffffffff;
          if (uVar6 == 7) {
            uVar16 = 7;
          }
          else {
            local_18[0] = -1;
            if ((((uVar6 != 8) && (local_18[1] = 0xff, uVar6 != 9)) &&
                ((local_18[1] = 0xffff, uVar6 != 10 &&
                 (((local_18[1] = 0xffffff, uVar6 != 0xb && (local_18[1] = 0xffffffff, uVar6 != 0xc)
                   ) && (local_18[1] = 0xffffffffff, uVar6 != 0xd)))))) &&
               (local_18[1] = 0xffffffffffff, uVar6 != 0xe)) {
              local_18[1] = 0xffffffffffffff;
              if (uVar6 == 0x10) {
                local_18[1] = 0xffffffffffffffff;
              }
              else {
                uVar16 = 0xf;
              }
            }
          }
        }
      }
    }
    if ((uVar10 & 7) != 0) {
      *(char *)((long)local_18 + uVar16) = (char)(0xff << (ulong)(8 - (uVar10 & 7) & 0x1f));
    }
    FUN_00bf87a8(*puVar21,pcVar32,local_18,uVar25);
    puVar14[4] = pcVar32;
  }
  puVar15 = (undefined8 *)*param_1;
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    *param_1 = (long)puVar14;
LAB_00bf8c20:
    uVar10 = *puVar24;
  }
  else {
    do {
      puVar17 = puVar15;
      puVar15 = (undefined8 *)*puVar17;
    } while (puVar15 != (undefined8 *)0x0);
    *puVar17 = puVar14;
    uVar10 = *puVar24;
  }
  uVar10 = uVar10 + 3 & 0xfffffffc;
  uVar26 = uVar26 - uVar10;
  if (uVar26 < 0x10) goto LAB_00bf9130;
  puVar24 = (uint *)((long)puVar24 + (ulong)uVar10);
  uVar10 = *puVar24;
  if ((uVar26 < uVar10) || (uVar10 < 0x10)) goto LAB_00bf9130;
  goto LAB_00bf8c50;
LAB_00bf9318:
  uVar25 = 0xffffffff;
LAB_00bf913c:
  FUN_00bf84f0(plVar11);
  FUN_00bf84f0(plVar12);
  close(__fd);
LAB_00bf9158:
  if (local_18[2] != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar25);
  }
  return;
}

