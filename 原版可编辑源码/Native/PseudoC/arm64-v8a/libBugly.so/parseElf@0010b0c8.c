
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void parseElf(char *param_1,char param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  bool bVar8;
  int __fd;
  int iVar9;
  char *pcVar10;
  size_t sVar11;
  int *piVar12;
  undefined8 *__ptr;
  uint *puVar13;
  void *pvVar14;
  char *pcVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  short *psVar23;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  uint *puVar28;
  undefined8 uVar29;
  uint *puVar30;
  int iVar31;
  char *pcVar32;
  undefined8 *puVar33;
  uint uVar34;
  ulong uVar35;
  int iVar36;
  ulong uVar37;
  int iVar38;
  ulong uVar39;
  long lVar40;
  int iVar41;
  ulong local_d8;
  uint local_b0;
  uint local_a8;
  uint local_a0;
  char *local_98;
  int local_58;
  long local_8;
  short *psVar24;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (char *)0x0) {
    puVar33 = (undefined8 *)0x0;
    goto LAB_0010b188;
  }
  __fd = open(param_1,0);
  if (__fd < 0) {
    piVar12 = (int *)__errno();
    pcVar10 = strerror(*piVar12);
    log2Console(5,"CrashReport-Native","Failed to open file: %s, for: %s",param_1,pcVar10);
    puVar33 = (undefined8 *)0x0;
    goto LAB_0010b188;
  }
  iVar9 = fstat(__fd,(stat *)&stack0xffffffffffffff78);
  if (-1 < iVar9) {
    pcVar10 = mmap((void *)0x0,(long)local_58,1,2,__fd,0);
    if (pcVar10 == (char *)0x0) goto LAB_0010b3b0;
    if ((((*pcVar10 == '\x7f') && (pcVar10[1] == 'E')) && (pcVar10[2] == 'L')) &&
       (pcVar10[3] == 'F')) {
      log2Console(4,"CrashReport-Native","Parsing ELF file: %s",param_1);
      puVar33 = calloc(1,0xd0);
      if (puVar33 == (undefined8 *)0x0) {
        log2Console(4,"CrashReport-Native","Failed to alloc memory for ElfInfo");
        goto LAB_0010b170;
      }
      strncpy((char *)(puVar33 + 1),param_1,0x80);
      *(undefined1 *)((long)puVar33 + 0x87) = 0;
      cVar5 = pcVar10[4];
      if (cVar5 == '\x01') {
        uVar7 = *(ushort *)(pcVar10 + 0x12);
        if (uVar7 == 8) {
LAB_0010bc84:
          strncpy((char *)(puVar33 + 0x11),"mips",0x10);
LAB_0010bc40:
          *(undefined1 *)((long)puVar33 + 0x97) = 0;
          uVar7 = *(ushort *)(pcVar10 + 0x30);
          puVar30 = (uint *)(pcVar10 + *(uint *)(pcVar10 + 0x20));
          if (uVar7 == 0) {
            uVar37 = 0xffffffff;
            uVar35 = 0xffffffff;
            goto LAB_0010b4f0;
          }
          bVar8 = false;
LAB_0010b7dc:
          uVar35 = 0xffffffff;
          uVar27 = 0;
          uVar34 = 0xffffffff;
          local_a0 = 0xffffffff;
          local_a8 = 0xffffffff;
          local_b0 = 0xffffffff;
          uVar18 = puVar30[(ulong)*(ushort *)(pcVar10 + 0x32) * 10 + 4];
          puVar28 = puVar30;
          uVar21 = 0xffffffff;
          do {
            pcVar32 = pcVar10 + (ulong)*puVar28 + (ulong)uVar18;
            uVar25 = (uint)uVar27;
            uVar37 = uVar21;
            uVar19 = local_a8;
            uVar2 = local_b0;
            if (((pcVar32 != (char *)0x0) && (pcVar10[(ulong)*puVar28 + (ulong)uVar18] != '\0')) &&
               (uVar3 = puVar28[1], uVar2 = uVar25, uVar3 != 0x70000003)) {
              if (uVar3 == 1) {
                sVar11 = strlen(pcVar32);
                iVar9 = strncmp(".bugly_version",pcVar32,sVar11);
                uVar19 = uVar25;
                uVar2 = local_b0;
                if ((iVar9 != 0) &&
                   (iVar9 = strncmp(".text",pcVar32,sVar11), uVar19 = local_a8, iVar9 == 0)) {
                  uVar34 = uVar25;
                }
              }
              else if (uVar3 == 7) {
                sVar11 = strlen(pcVar32);
                iVar9 = strncmp(".note.gnu.build-id",pcVar32,sVar11);
                uVar2 = local_b0;
                if (iVar9 == 0) {
                  local_a0 = uVar25;
                }
              }
              else {
                uVar37 = uVar27;
                uVar2 = local_b0;
                if (uVar3 != 2) {
                  uVar2 = (uint)uVar35;
                  if (uVar3 == 0xb) {
                    uVar2 = uVar25;
                  }
                  uVar35 = (ulong)uVar2;
                  uVar37 = uVar21;
                  uVar2 = local_b0;
                }
              }
            }
            local_b0 = uVar2;
            local_a8 = uVar19;
            uVar27 = (ulong)(uVar25 + 1);
            puVar28 = puVar28 + 10;
            uVar21 = uVar37;
          } while (uVar25 + 1 != (uint)uVar7);
          if (bVar8) {
            if (local_b0 == 0xffffffff) goto LAB_0010bec8;
            pcVar32 = (char *)(puVar33 + 0x11);
            pcVar15 = pcVar10 + puVar30[(long)(int)local_b0 * 10 + 4];
            if (pcVar15 != (char *)0x0) {
              if (pcVar10[puVar30[(long)(int)local_b0 * 10 + 4]] == 'A') {
                if ((uint)(byte)pcVar15[1] <= puVar30[(long)(int)local_b0 * 10 + 5]) {
                  uVar18 = 5;
                  cVar6 = pcVar15[5];
                  while (cVar6 != '\0') {
                    uVar18 = uVar18 + 1;
                    cVar6 = pcVar15[uVar18];
                  }
                  for (uVar18 = uVar18 + 1; uVar18 < puVar30[(long)(int)local_b0 * 10 + 5];
                      uVar18 = uVar18 + (byte)pcVar15[(ulong)uVar18 + 1]) {
                    if (pcVar15[uVar18] == '\x01') {
                      pbVar17 = (byte *)(pcVar15 + (ulong)uVar18 + 5);
                      if (pbVar17 != (byte *)0x0) {
                        pbVar1 = pbVar17 + (byte)pcVar15[(ulong)uVar18 + 1];
                        goto LAB_0010b944;
                      }
                      break;
                    }
                  }
                  goto switchD_0010b9f8_default;
                }
                log2Console(5,"CrashReport-Native",".ARM.attributes. section length error");
              }
              else {
                log2Console(5,"CrashReport-Native",
                            "It\'s not a valid .ARM.attributes section for version(%d) is not 0x41."
                           );
              }
            }
          }
        }
        else {
          if (uVar7 < 9) {
            if ((uVar7 == 3) || (uVar7 == 7)) {
              strncpy((char *)(puVar33 + 0x11),"x86",0x10);
            }
            else {
LAB_0010bcd8:
              log2Console(5,"CrashReport-Native","Unknown e_machine: %d");
            }
            goto LAB_0010bc40;
          }
          if (uVar7 == 10) goto LAB_0010bc84;
          if (uVar7 != 0x28) goto LAB_0010bcd8;
          bVar8 = true;
          strncpy((char *)(puVar33 + 0x11),"armeabi",0x10);
          *(undefined1 *)((long)puVar33 + 0x97) = 0;
          uVar7 = *(ushort *)(pcVar10 + 0x30);
          puVar30 = (uint *)(pcVar10 + *(uint *)(pcVar10 + 0x20));
          if (uVar7 != 0) goto LAB_0010b7dc;
          uVar35 = 0xffffffff;
          local_a8 = 0xffffffff;
          uVar37 = 0xffffffff;
          uVar34 = 0xffffffff;
          local_a0 = 0xffffffff;
LAB_0010bec8:
          log2Console(5,"CrashReport-Native",".ARM.attributes section not found");
        }
        goto LAB_0010ba3c;
      }
      if (cVar5 != '\x02') {
        log2Console(5,"CrashReport-Native","File format error");
        goto LAB_0010b170;
      }
      uVar7 = *(ushort *)(pcVar10 + 0x12);
      if (uVar7 == 10) {
LAB_0010bc64:
        strncpy((char *)(puVar33 + 0x11),"mips64",0x10);
      }
      else if (uVar7 < 0xb) {
        if (uVar7 == 8) goto LAB_0010bc64;
LAB_0010be28:
        strncpy((char *)(puVar33 + 0x11),"unknown",0x10);
        log2Console(5,"CrashReport-Native","Failed to parse e_machine");
      }
      else if (uVar7 == 0x3e) {
        strncpy((char *)(puVar33 + 0x11),"x86_64",0x10);
      }
      else {
        if (uVar7 != 0xb7) goto LAB_0010be28;
        strncpy((char *)(puVar33 + 0x11),"arm64-v8a",0x10);
      }
      *(undefined1 *)((long)puVar33 + 0x97) = 0;
      uVar7 = *(ushort *)(pcVar10 + 0x3c);
      puVar30 = (uint *)(pcVar10 + *(long *)(pcVar10 + 0x28));
      if (uVar7 == 0) {
        if (param_2 != '\0') {
          *puVar33 = 0;
        }
        goto LAB_0010b170;
      }
      uVar39 = 0xffffffff;
      uVar27 = 0;
      local_d8 = 0xffffffff;
      uVar35 = 0xffffffff;
      uVar18 = 0xffffffff;
      lVar26 = *(long *)(puVar30 + (ulong)*(ushort *)(pcVar10 + 0x3e) * 0x10 + 6);
      puVar28 = puVar30;
      uVar21 = 0xffffffff;
      do {
        uVar34 = puVar28[1];
        pcVar32 = pcVar10 + (ulong)*puVar28 + lVar26;
        uVar19 = (uint)uVar27;
        uVar37 = uVar21;
        if (uVar34 == 1) {
          sVar11 = strlen(pcVar32);
          iVar9 = strncmp(".bugly_version",pcVar32,sVar11);
          if ((iVar9 != 0) &&
             (iVar9 = strncmp(".text",pcVar32,sVar11), uVar27 = local_d8, iVar9 == 0)) {
            uVar18 = uVar19;
          }
        }
        else if (uVar34 == 7) {
          sVar11 = strlen(pcVar32);
          iVar9 = strncmp(".note.gnu.build-id",pcVar32,sVar11);
          uVar34 = (uint)uVar39;
          if (iVar9 == 0) {
            uVar34 = uVar19;
          }
          uVar39 = (ulong)uVar34;
          uVar27 = local_d8;
        }
        else {
          uVar37 = uVar27;
          uVar27 = local_d8;
          if (uVar34 != 2) {
            uVar2 = (uint)uVar35;
            if (uVar34 == 0xb) {
              uVar2 = uVar19;
            }
            uVar35 = (ulong)uVar2;
            uVar37 = uVar21;
          }
        }
        local_d8 = uVar27;
        uVar27 = (ulong)(uVar19 + 1);
        puVar28 = puVar28 + 0x10;
        uVar21 = uVar37;
      } while (uVar19 + 1 != (uint)uVar7);
      if ((uint)local_d8 != 0xffffffff) {
        parseElfVersion(pcVar10 + *(long *)((long)puVar30 +
                                           (-(ulong)((uint)local_d8 >> 0x1f) & 0xffffffc000000000 |
                                           local_d8 << 6) + 0x18),puVar33 + 0x13);
        log2Console(4,"CrashReport-Native","SO version is: %s",puVar33 + 0x13);
      }
      if ((int)uVar39 == -1) {
        if (uVar18 != 0xffffffff) {
          uVar21 = -(ulong)(uVar18 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar18 << 6;
          entry(pcVar10 + *(long *)((long)puVar30 + uVar21 + 0x18),
                *(undefined8 *)((long)puVar30 + uVar21 + 0x20),puVar33 + 0x15);
        }
      }
      else {
        FUN_00106024(pcVar10 + *(long *)((long)puVar30 +
                                        (-(uVar39 >> 0x1f) & 0xffffffc000000000 | uVar39 << 6) +
                                        0x18),puVar33 + 0x15);
      }
      goto LAB_0010b4f0;
    }
    puVar33 = (undefined8 *)0x0;
    log2Console(4,"CrashReport-Native","Not a elf file: %s",param_1);
    goto LAB_0010b170;
  }
LAB_0010b3b0:
  puVar33 = (undefined8 *)0x0;
  log2Console(5,"CrashReport-Native","Failed to read size of file: %s",param_1);
  goto LAB_0010b17c;
LAB_0010b9c0:
  while( true ) {
    uVar19 = uVar19 | (*pbVar16 & 0x7f) << (ulong)(uVar18 & 0x1f);
    if (-1 < (char)*pbVar16) break;
    uVar18 = uVar18 + 7;
    pbVar16 = pbVar16 + 1;
  }
  switch(uVar19) {
  case 1:
    strncpy(pcVar32,"armeabi-v4",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  case 2:
    strncpy(pcVar32,"armeabi-v4t",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  case 3:
    strncpy(pcVar32,"armeabi-v5t",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  case 4:
    strncpy(pcVar32,"armeabi-v5te",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  case 5:
    strncpy(pcVar32,"armeabi-v5tej",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  case 6:
    strncpy(pcVar32,"armeabi-v6",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  case 7:
    strncpy(pcVar32,"armeabi-v6kz",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  case 8:
    strncpy(pcVar32,"armeabi-v6t2",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  case 9:
    strncpy(pcVar32,"armeabi-v6k",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  case 10:
    strncpy(pcVar32,"armeabi-v7a",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  case 0xb:
    strncpy(pcVar32,"armeabi-v6-m",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  case 0xc:
    strncpy(pcVar32,"armeabi-v6s-m",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  case 0xd:
    strncpy(pcVar32,"armeabi-v7e-m",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  case 0xe:
    strncpy(pcVar32,"armeabi-v8",0x10);
    *(undefined1 *)((long)puVar33 + 0x97) = 0;
    break;
  default:
    goto switchD_0010b9f8_default;
  }
  goto LAB_0010ba3c;
LAB_0010b944:
  if (pbVar17 < pbVar1) {
    if (pbVar17 == (byte *)0x0) goto LAB_0010c194;
    pbVar16 = pbVar17 + 1;
    uVar18 = *pbVar17 & 0x7f;
    if ((char)*pbVar17 < '\0') {
      uVar19 = 0;
      pbVar17 = pbVar16;
      do {
        pbVar16 = pbVar17 + 1;
        bVar4 = *pbVar17;
        uVar19 = uVar19 + 7;
        uVar18 = uVar18 | (bVar4 & 0x7f) << (ulong)(uVar19 & 0x1f);
        pbVar17 = pbVar16;
      } while ((char)bVar4 < '\0');
    }
    if (uVar18 == 0x26) goto LAB_0010bea4;
    if ((int)uVar18 < 0x27) {
      if (0x1f < (int)uVar18) {
        if ((uVar18 != 0x22) && (uVar18 != 0x24)) {
          if (uVar18 != 0x20) goto LAB_0010c194;
          goto LAB_0010ba14;
        }
        goto LAB_0010bea4;
      }
      if (6 < (int)uVar18) goto LAB_0010bea4;
      if ((int)uVar18 < 4) goto LAB_0010c194;
      if (5 < (int)uVar18) {
        uVar18 = 0;
        uVar19 = 0;
        if (pbVar16 != (byte *)0x0) goto LAB_0010b9c0;
        goto switchD_0010b9f8_default;
      }
LAB_0010ba14:
      do {
        bVar4 = *pbVar16;
        pbVar17 = pbVar16 + 1;
        pbVar16 = pbVar17;
      } while (bVar4 != 0);
    }
    else {
      if (uVar18 == 0x41) goto LAB_0010ba14;
      if ((int)uVar18 < 0x42) {
        if (((uVar18 != 0x2c) && (uVar18 != 0x40)) && (uVar18 != 0x2a)) {
LAB_0010c194:
          log2Console(5,"CrashReport-Native",".ARM.attributes. subsection tag type error");
          goto switchD_0010b9f8_default;
        }
      }
      else {
        if (uVar18 == 0x43) goto LAB_0010ba14;
        if (((0x42 < (int)uVar18) && (uVar18 != 0x44)) && (uVar18 != 0x46)) goto LAB_0010c194;
      }
LAB_0010bea4:
      pbVar17 = (byte *)0x0;
      if (pbVar16 != (byte *)0x0) {
        do {
          pbVar17 = pbVar16 + 1;
          bVar4 = *pbVar16;
          pbVar16 = pbVar17;
        } while ((char)bVar4 < '\0');
      }
    }
    goto LAB_0010b944;
  }
switchD_0010b9f8_default:
  strncpy(pcVar32,"unknown",0x10);
  log2Console(5,"CrashReport-Native",".ARM.attributes. subsection tag type error");
  *(undefined1 *)((long)puVar33 + 0x97) = 0;
LAB_0010ba3c:
  if (local_a8 != 0xffffffff) {
    parseElfVersion(pcVar10 + puVar30[(long)(int)local_a8 * 10 + 4],puVar33 + 0x13);
    log2Console(4,"CrashReport-Native","SO version is: %s",puVar33 + 0x13);
  }
  if (local_a0 == 0xffffffff) {
    if (uVar34 != 0xffffffff) {
      entry(pcVar10 + puVar30[(long)(int)uVar34 * 10 + 4],puVar30[(long)(int)uVar34 * 10 + 5],
            puVar33 + 0x15);
    }
  }
  else {
    FUN_00106024(pcVar10 + puVar30[(long)(int)local_a0 * 10 + 4],puVar33 + 0x15);
  }
LAB_0010b4f0:
  if (param_2 != '\0') {
    iVar36 = (int)uVar37;
    iVar9 = (int)uVar35;
    if ((iVar36 != -1) || (iVar9 != -1)) {
      log2Console(3,"CrashReport-Native","symIndex = %d, dynsymIndex = %d",uVar37,uVar35);
      __ptr = calloc(1,0x18);
      if (__ptr != (undefined8 *)0x0) {
        if (cVar5 == '\x01') {
          uVar18 = *(uint *)(pcVar10 + 0x20);
          if (iVar9 == -1) {
            if (iVar36 != -1) {
              local_98 = (char *)0x0;
              uVar34 = 0;
              puVar30 = (uint *)0x0;
              goto LAB_0010bf34;
            }
LAB_0010bcf4:
            log2Console(3,"CrashReport-Native","symbol_count = %d, dynsymbol_count = %d",0,0);
            *(undefined4 *)(__ptr + 1) = 0;
            pvVar14 = calloc(0,0x18);
            *__ptr = pvVar14;
            if (pvVar14 == (void *)0x0) goto LAB_0010bd28;
          }
          else {
            lVar26 = (long)iVar9 * 0x28 + (ulong)uVar18;
            puVar30 = (uint *)(pcVar10 + *(uint *)(pcVar10 + lVar26 + 0x10));
            uVar34 = 0;
            if (*(uint *)(pcVar10 + lVar26 + 0x24) != 0) {
              uVar34 = *(uint *)(pcVar10 + lVar26 + 0x14) / *(uint *)(pcVar10 + lVar26 + 0x24);
            }
            local_98 = pcVar10 + *(uint *)(pcVar10 +
                                          (long)*(int *)(pcVar10 + lVar26 + 0x18) * 0x28 +
                                          (ulong)uVar18 + 0x10);
            if (iVar36 == -1) {
              uVar19 = 0;
              pcVar32 = (char *)0x0;
              puVar28 = (uint *)0x0;
LAB_0010bf70:
              lVar26 = 0;
              iVar31 = 0;
              while ((int)lVar26 < (int)uVar34) {
                lVar22 = lVar26 * 0x10;
                lVar26 = lVar26 + 1;
                if (*(short *)((long)puVar30 + lVar22 + 0xe) != 0) {
                  iVar31 = iVar31 + 1;
                }
              }
              if (iVar36 != -1) goto LAB_0010bfa0;
              iVar38 = 0;
            }
            else {
LAB_0010bf34:
              lVar26 = (long)iVar36 * 0x28 + (ulong)uVar18;
              puVar28 = (uint *)(pcVar10 + *(uint *)(pcVar10 + lVar26 + 0x10));
              uVar19 = 0;
              if (*(uint *)(pcVar10 + lVar26 + 0x24) != 0) {
                uVar19 = *(uint *)(pcVar10 + lVar26 + 0x14) / *(uint *)(pcVar10 + lVar26 + 0x24);
              }
              pcVar32 = pcVar10 + *(uint *)(pcVar10 +
                                           (long)*(int *)(pcVar10 + lVar26 + 0x18) * 0x28 +
                                           (ulong)uVar18 + 0x10);
              if (iVar9 != -1) goto LAB_0010bf70;
              iVar31 = 0;
LAB_0010bfa0:
              iVar38 = 0;
              puVar13 = puVar28;
              for (iVar20 = 0; iVar20 < (int)uVar19; iVar20 = iVar20 + 1) {
                if ((((*(short *)((long)puVar13 + 0xe) != 0) && (pcVar32[*puVar13] != '\0')) &&
                    (puVar13[1] != 0)) && (puVar13[2] != 0)) {
                  iVar38 = iVar38 + 1;
                }
                puVar13 = puVar13 + 4;
              }
            }
            log2Console(3,"CrashReport-Native","symbol_count = %d, dynsymbol_count = %d",iVar38,
                        iVar31);
            *(int *)(__ptr + 1) = iVar38 + iVar31;
            pvVar14 = calloc((long)(iVar38 + iVar31),0x18);
            *__ptr = pvVar14;
            if (pvVar14 == (void *)0x0) goto LAB_0010bd28;
            if (iVar9 == -1) {
              iVar9 = 0;
            }
            else {
              iVar9 = 0;
              for (iVar31 = 0; iVar31 < (int)uVar34; iVar31 = iVar31 + 1) {
                if (*(short *)((long)puVar30 + 0xe) != 0) {
                  lVar26 = (long)iVar9 * 0x18;
                  iVar9 = iVar9 + 1;
                  pcVar15 = strdup(local_98 + *puVar30);
                  uVar18 = puVar30[1];
                  *(char **)((long)pvVar14 + lVar26 + 0x10) = pcVar15;
                  *(ulong *)((long)pvVar14 + lVar26) = (ulong)uVar18;
                  *(ulong *)((long)pvVar14 + lVar26 + 8) = (ulong)puVar30[2];
                }
                puVar30 = puVar30 + 4;
              }
            }
            if (iVar36 != -1) {
              for (iVar36 = 0; iVar36 < (int)uVar19; iVar36 = iVar36 + 1) {
                if (((*(short *)((long)puVar28 + 0xe) != 0) && (pcVar32[*puVar28] != '\0')) &&
                   ((uVar18 = puVar28[1], uVar18 != 0 && (uVar34 = puVar28[2], uVar34 != 0)))) {
                  lVar26 = (long)iVar9 * 0x18;
                  iVar9 = iVar9 + 1;
                  pcVar15 = strdup(pcVar32 + *puVar28);
                  *(char **)((long)pvVar14 + lVar26 + 0x10) = pcVar15;
                  *(ulong *)((long)pvVar14 + lVar26) = (ulong)uVar18;
                  *(ulong *)((long)pvVar14 + lVar26 + 8) = (ulong)uVar34;
                }
                puVar28 = puVar28 + 4;
              }
            }
          }
        }
        else {
          if (cVar5 != '\x02') goto LAB_0010bd30;
          lVar26 = *(long *)(pcVar10 + 0x28);
          if (iVar9 == -1) {
            if (iVar36 == -1) goto LAB_0010bcf4;
            local_98 = (char *)0x0;
            iVar31 = 0;
            puVar30 = (uint *)0x0;
LAB_0010b5a8:
            lVar22 = (-(uVar37 >> 0x1f) & 0xffffffc000000000 | uVar37 << 6) + lVar26;
            iVar38 = 0;
            if (*(ulong *)(pcVar10 + lVar22 + 0x38) != 0) {
              iVar38 = (int)(*(ulong *)(pcVar10 + lVar22 + 0x20) /
                            *(ulong *)(pcVar10 + lVar22 + 0x38));
            }
            puVar28 = (uint *)(pcVar10 + *(long *)(pcVar10 + lVar22 + 0x18));
            pcVar32 = pcVar10 + *(long *)(pcVar10 +
                                         (long)*(int *)(pcVar10 + lVar22 + 0x28) * 0x40 + lVar26 +
                                         0x18);
            if ((iVar9 == -1) || (iVar20 = iVar38, iVar31 < 1)) {
              iVar20 = 0;
LAB_0010b61c:
              if (0 < iVar38) {
                iVar41 = 0;
                puVar13 = puVar28;
                do {
                  if ((((*(short *)((long)puVar13 + 6) != 0) && (pcVar32[*puVar13] != '\0')) &&
                      (*(long *)(puVar13 + 2) != 0)) && (*(long *)(puVar13 + 4) != 0)) {
                    iVar41 = iVar41 + 1;
                  }
                  puVar13 = puVar13 + 6;
                } while (puVar13 != puVar28 + (ulong)(iVar38 - 1) * 6 + 6);
                goto LAB_0010b670;
              }
            }
            else {
LAB_0010b5e4:
              iVar38 = iVar20;
              iVar20 = 0;
              psVar23 = (short *)((long)puVar30 + 6);
              do {
                psVar24 = psVar23 + 0xc;
                if (*psVar23 != 0) {
                  iVar20 = iVar20 + 1;
                }
                psVar23 = psVar24;
              } while (psVar24 != (short *)((long)puVar30 + (ulong)(iVar31 - 1) * 0x18 + 0x1e));
              if (iVar36 != -1) goto LAB_0010b61c;
            }
            iVar41 = 0;
          }
          else {
            lVar22 = (-(uVar35 >> 0x1f) & 0xffffffc000000000 | uVar35 << 6) + lVar26;
            iVar31 = 0;
            if (*(ulong *)(pcVar10 + lVar22 + 0x38) != 0) {
              iVar31 = (int)(*(ulong *)(pcVar10 + lVar22 + 0x20) /
                            *(ulong *)(pcVar10 + lVar22 + 0x38));
            }
            puVar30 = (uint *)(pcVar10 + *(long *)(pcVar10 + lVar22 + 0x18));
            local_98 = pcVar10 + *(long *)(pcVar10 +
                                          (long)*(int *)(pcVar10 + lVar22 + 0x28) * 0x40 + lVar26 +
                                          0x18);
            if (iVar36 != -1) goto LAB_0010b5a8;
            pcVar32 = (char *)0x0;
            puVar28 = (uint *)0x0;
            iVar38 = 0;
            iVar20 = 0;
            if (0 < iVar31) goto LAB_0010b5e4;
            iVar20 = 0;
            iVar41 = 0;
          }
LAB_0010b670:
          log2Console(3,"CrashReport-Native","symbol_count = %d, dynsymbol_count = %d",iVar41,iVar20
                     );
          *(int *)(__ptr + 1) = iVar41 + iVar20;
          pvVar14 = calloc((long)(iVar41 + iVar20),0x18);
          *__ptr = pvVar14;
          if (pvVar14 == (void *)0x0) {
LAB_0010bd28:
            free(__ptr);
            goto LAB_0010bd30;
          }
          if ((iVar9 == -1) || (iVar31 < 1)) {
            iVar9 = 0;
          }
          else {
            iVar9 = 0;
            puVar13 = puVar30 + (ulong)(iVar31 - 1) * 6 + 6;
            do {
              if (*(short *)((long)puVar30 + 6) != 0) {
                lVar26 = (long)iVar9 * 0x18;
                iVar9 = iVar9 + 1;
                pcVar15 = strdup(local_98 + *puVar30);
                uVar29 = *(undefined8 *)(puVar30 + 2);
                *(char **)((long)pvVar14 + lVar26 + 0x10) = pcVar15;
                *(undefined8 *)((long)pvVar14 + lVar26) = uVar29;
                *(undefined8 *)((long)pvVar14 + lVar26 + 8) = *(undefined8 *)(puVar30 + 4);
              }
              puVar30 = puVar30 + 6;
            } while (puVar30 != puVar13);
          }
          if ((iVar36 != -1) && (0 < iVar38)) {
            puVar30 = puVar28 + (ulong)(iVar38 - 1) * 6 + 6;
            do {
              if ((((*(short *)((long)puVar28 + 6) != 0) && (pcVar32[*puVar28] != '\0')) &&
                  (lVar26 = *(long *)(puVar28 + 2), lVar26 != 0)) &&
                 (lVar22 = *(long *)(puVar28 + 4), lVar22 != 0)) {
                lVar40 = (long)iVar9 * 0x18;
                iVar9 = iVar9 + 1;
                pcVar15 = strdup(pcVar32 + *puVar28);
                *(char **)((long)pvVar14 + lVar40 + 0x10) = pcVar15;
                *(long *)((long)pvVar14 + lVar40) = lVar26;
                *(long *)((long)pvVar14 + lVar40 + 8) = lVar22;
              }
              puVar28 = puVar28 + 6;
            } while (puVar28 != puVar30);
          }
        }
        qsort((void *)*__ptr,(long)*(int *)(__ptr + 1),0x18,FUN_0010af48);
        *puVar33 = __ptr;
        __ptr[2] = puVar33 + 1;
        goto LAB_0010b170;
      }
    }
LAB_0010bd30:
    *puVar33 = 0;
  }
LAB_0010b170:
  munmap(pcVar10,(long)local_58);
LAB_0010b17c:
  close(__fd);
LAB_0010b188:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar33);
  }
  return;
}

