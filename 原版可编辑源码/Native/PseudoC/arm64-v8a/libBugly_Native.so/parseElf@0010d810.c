
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * parseElf(char *param_1,ulong param_2)

{
  bool bVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  int __fd;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  int *piVar14;
  size_t sVar15;
  undefined8 *__ptr;
  void *__base;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  long *plVar22;
  uint uVar23;
  long lVar24;
  short *psVar25;
  undefined1 (*pauVar26) [16];
  undefined8 *puVar27;
  uint uVar28;
  ulong uVar29;
  uint *puVar30;
  long *plVar31;
  int iVar34;
  ulong uVar32;
  undefined8 uVar33;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  char *local_158;
  char *local_140;
  char *local_138;
  ulong local_130;
  ulong local_120;
  int local_118;
  ulong local_110;
  ulong local_108;
  char *local_100;
  char *local_f8;
  stat sStack_f0;
  
  lVar8 = tpidr_el0;
  sStack_f0.__unused[1] = *(long *)(lVar8 + 0x28);
  if (param_1 == (char *)0x0) {
    puVar27 = (undefined8 *)0x0;
    uVar29 = 0;
    goto LAB_0010d9f0;
  }
  __fd = open(param_1,0);
  if (__fd < 0) {
    piVar14 = (int *)__errno();
    pcVar13 = strerror(*piVar14);
    uVar29 = log2Console(5,"eup","Failed to open file: %s, for: %s",param_1,pcVar13);
    puVar27 = (undefined8 *)0x0;
    goto LAB_0010d9f0;
  }
  iVar11 = fstat(__fd,&sStack_f0);
  if (iVar11 < 0) {
LAB_0010d890:
    log2Console(5,"eup","Failed to read size of file: %s",param_1);
    puVar27 = (undefined8 *)0x0;
    goto LAB_0010d9e8;
  }
  pcVar13 = mmap((void *)0x0,(long)(int)sStack_f0.st_size,1,2,__fd,0);
  if (pcVar13 + 1 < (char *)0x2) goto LAB_0010d890;
  if ((((*pcVar13 != '\x7f') || (pcVar13[1] != 'E')) || (pcVar13[2] != 'L')) || (pcVar13[3] != 'F'))
  {
    log2Console(4,"eup","Not a elf file: %s",param_1);
    puVar27 = (undefined8 *)0x0;
    goto LAB_0010d9dc;
  }
  log2Console(4,"eup","Parsing ELF file: %s",param_1);
  puVar27 = calloc(1,0xd0);
  if (puVar27 == (undefined8 *)0x0) {
    log2Console(4,"eup","Failed to alloc memory for ElfInfo");
    goto LAB_0010d9dc;
  }
  strncpy((char *)(puVar27 + 1),param_1,0x80);
  *(undefined1 *)((long)puVar27 + 0x87) = 0;
  cVar4 = pcVar13[4];
  if (cVar4 == '\x02') {
    uVar6 = *(ushort *)(pcVar13 + 0x12);
    if (uVar6 < 0x3e) {
      if ((uVar6 == 8) || (uVar6 == 10)) {
        pcVar16 = "mips64";
        goto LAB_0010dad8;
      }
LAB_0010dd40:
      strncpy((char *)(puVar27 + 0x11),"unknown",0x10);
      log2Console(5,"eup","Failed to parse e_machine");
    }
    else {
      if (uVar6 == 0x3e) {
        pcVar16 = "x86_64";
      }
      else {
        if (uVar6 != 0xb7) goto LAB_0010dd40;
        pcVar16 = "arm64-v8a";
      }
LAB_0010dad8:
      strncpy((char *)(puVar27 + 0x11),pcVar16,0x10);
    }
    *(undefined1 *)((long)puVar27 + 0x97) = 0;
    uVar6 = *(ushort *)(pcVar13 + 0x3c);
    if ((ulong)uVar6 != 0) {
      lVar19 = *(long *)(pcVar13 + 0x28);
      local_130 = 0xffffffff;
      lVar24 = *(long *)(pcVar13 + (ulong)*(ushort *)(pcVar13 + 0x3e) * 0x40 + lVar19 + 0x18);
      uVar29 = 0;
      piVar14 = (int *)(pcVar13 + lVar19 + 4);
      local_110 = 0xffffffff;
      local_108 = 0xffffffff;
      iVar11 = -1;
      iVar34 = -1;
      do {
        iVar35 = iVar11;
        iVar36 = iVar34;
        if (*piVar14 - 1U < 0xb) {
          pcVar16 = pcVar13 + (ulong)(uint)piVar14[-1] + lVar24;
          switch(*piVar14) {
          case 1:
            sVar15 = strlen(pcVar16);
            iVar34 = strncmp(".bugly_version",pcVar16,sVar15);
            if (iVar34 == 0) {
              local_130 = uVar29 & 0xffffffff;
            }
            else {
              iVar34 = strncmp(".text",pcVar16,sVar15);
              iVar35 = (int)uVar29;
              if (iVar34 != 0) {
                iVar35 = iVar11;
              }
            }
            break;
          case 2:
            local_108 = uVar29 & 0xffffffff;
            break;
          case 7:
            sVar15 = strlen(pcVar16);
            iVar11 = strncmp(".note.gnu.build-id",pcVar16,sVar15);
            iVar36 = (int)uVar29;
            if (iVar11 != 0) {
              iVar36 = iVar34;
            }
            break;
          case 0xb:
            local_110 = uVar29 & 0xffffffff;
          }
        }
        uVar29 = uVar29 + 1;
        piVar14 = piVar14 + 0x10;
        iVar11 = iVar35;
        iVar34 = iVar36;
      } while (uVar29 < uVar6);
      if ((int)local_130 != -1) {
        if (pcVar13 + *(long *)(pcVar13 + (long)(int)local_130 * 0x40 + lVar19 + 0x18) !=
            (char *)0x0) {
          strncpy((char *)(puVar27 + 0x13),
                  pcVar13 + *(long *)(pcVar13 + (long)(int)local_130 * 0x40 + lVar19 + 0x18),0x10);
          *(undefined1 *)((long)puVar27 + 0xa7) = 0;
        }
        log2Console(4,"eup","SO version is: %s",puVar27 + 0x13);
      }
      if (iVar36 == -1) {
        if (iVar35 == -1) goto joined_r0x0010dd1c;
        lVar19 = (long)iVar35 * 0x40 + lVar19;
        uVar29 = *(ulong *)(pcVar13 + lVar19 + 0x18);
        uVar32 = *(ulong *)(pcVar13 + lVar19 + 0x20);
        goto LAB_0010e248;
      }
      puVar30 = (uint *)(pcVar13 + *(long *)(pcVar13 + (long)iVar36 * 0x40 + lVar19 + 0x18));
      if (puVar30 == (uint *)0x0) goto joined_r0x0010dd1c;
      if (puVar30[2] != 3) goto LAB_0010e25c;
      uVar12 = puVar30[1];
      uVar29 = 0;
      pcVar16 = (char *)(puVar27 + 0x15);
      lVar19 = (long)puVar30 + ((ulong)*puVar30 + 3 & 0x1fffffffc) + 0xc;
      lVar24 = lVar19 + (ulong)(uVar12 - 0x10);
      if (uVar12 < 0x10 || uVar12 - 0x10 == 0) {
        lVar24 = lVar19;
      }
      do {
        if (uVar29 < uVar12) {
          snprintf(pcVar16,3,"%02x",(ulong)*(byte *)(lVar24 + uVar29));
        }
        else {
          pcVar16[2] = '\0';
          pcVar16[0] = '0';
          pcVar16[1] = '0';
        }
        uVar29 = uVar29 + 1;
        pcVar16 = pcVar16 + 2;
      } while (uVar29 != 0x10);
      goto LAB_0010e224;
    }
    local_110 = 0xffffffff;
    local_108 = 0xffffffff;
    goto joined_r0x0010dd1c;
  }
  if (cVar4 != '\x01') {
    log2Console(5,"eup","File format error");
    goto LAB_0010d9dc;
  }
  switch(*(undefined2 *)(pcVar13 + 0x12)) {
  case 3:
  case 7:
    pcVar16 = "x86";
    goto LAB_0010dab8;
  default:
    log2Console(5,"eup","Unknown e_machine: %d");
    bVar1 = false;
    break;
  case 8:
  case 10:
    pcVar16 = "mips";
LAB_0010dab8:
    strncpy((char *)(puVar27 + 0x11),pcVar16,0x10);
    bVar1 = false;
    break;
  case 0x28:
    strncpy((char *)(puVar27 + 0x11),"armeabi",0x10);
    bVar1 = true;
  }
  local_158 = (char *)(puVar27 + 0x11);
  *(undefined1 *)((long)puVar27 + 0x97) = 0;
  uVar12 = *(uint *)(pcVar13 + 0x20);
  uVar6 = *(ushort *)(pcVar13 + 0x30);
  if ((ulong)uVar6 == 0) {
    local_110 = 0xffffffff;
    local_108 = 0xffffffff;
    local_118 = -1;
    local_130._0_4_ = -1;
    local_138._0_4_ = -1;
    iVar11 = -1;
  }
  else {
    uVar29 = 0;
    uVar28 = *(uint *)(pcVar13 + (ulong)*(ushort *)(pcVar13 + 0x32) * 0x28 + (ulong)uVar12 + 0x10);
    local_130 = 0xffffffff;
    local_118 = -1;
    piVar14 = (int *)(pcVar13 + (ulong)uVar12 + 4);
    iVar11 = -1;
    local_108 = 0xffffffff;
    local_138._0_4_ = -1;
    local_110 = 0xffffffff;
    do {
      pcVar16 = pcVar13 + (ulong)(uint)piVar14[-1] + (ulong)uVar28;
      iVar34 = local_118;
      iVar35 = iVar11;
      if ((pcVar16 != (char *)0x0) && (sVar15 = strlen(pcVar16), sVar15 != 0)) {
        iVar36 = (int)uVar29;
        switch(*piVar14) {
        case 1:
          iVar37 = strncmp(".bugly_version",pcVar16,sVar15);
          if (iVar37 == 0) {
            local_130 = uVar29 & 0xffffffff;
          }
          else {
            iVar37 = strncmp(".text",pcVar16,sVar15);
            iVar35 = iVar36;
            if (iVar37 != 0) {
              iVar35 = iVar11;
            }
          }
          break;
        case 2:
          local_108 = uVar29 & 0xffffffff;
          break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
        case 10:
          break;
        case 7:
          iVar11 = strncmp(".note.gnu.build-id",pcVar16,sVar15);
          iVar34 = iVar36;
          if (iVar11 != 0) {
            iVar34 = local_118;
          }
          break;
        case 0xb:
          local_110 = uVar29 & 0xffffffff;
          break;
        default:
          if (*piVar14 == 0x70000003) {
            local_138._0_4_ = iVar36;
          }
        }
      }
      iVar11 = iVar35;
      local_118 = iVar34;
      uVar29 = uVar29 + 1;
      piVar14 = piVar14 + 10;
    } while (uVar29 < uVar6);
  }
  if (bVar1) {
    if ((int)local_138 == -1) {
      pcVar16 = ".ARM.attributes section not found";
LAB_0010dfc0:
      log2Console(5,"eup",pcVar16);
    }
    else {
      lVar19 = (long)(int)local_138 * 0x28 + (ulong)uVar12;
      pcVar16 = pcVar13 + *(uint *)(pcVar13 + lVar19 + 0x10);
      if (pcVar16 != (char *)0x0) {
        if (*pcVar16 == 'A') {
          if (*(uint *)(pcVar13 + lVar19 + 0x14) < (uint)(byte)pcVar16[1]) {
            pcVar16 = ".ARM.attributes. section length error";
            goto LAB_0010dfc0;
          }
          uVar29 = 5;
          do {
            pcVar2 = pcVar16 + uVar29;
            uVar29 = (ulong)((int)uVar29 + 1);
          } while (*pcVar2 != '\0');
          for (; (uint)uVar29 < *(uint *)(pcVar13 + lVar19 + 0x14);
              uVar29 = (ulong)((uint)uVar29 + (uint)bVar5)) {
            pcVar2 = pcVar16 + uVar29;
            bVar5 = pcVar2[1];
            if (*pcVar2 == '\x01') {
              if (bVar5 != 0) {
                uVar23 = 0;
                uVar28 = 0;
                pbVar18 = (byte *)(pcVar2 + 5);
                goto LAB_0010e04c;
              }
              break;
            }
          }
switchD_0010e0e4_default:
          strncpy(local_158,"unknown",0x10);
          log2Console(5,"eup",".ARM.attributes. subsection tag type error");
LAB_0010e138:
          *(undefined1 *)((long)puVar27 + 0x97) = 0;
        }
        else {
          log2Console(5,"eup",
                      "It\'s not a valid .ARM.attributes section for version(%d) is not 0x41.");
        }
      }
    }
  }
  if ((uint)local_130 != -1) {
    if (pcVar13 + *(uint *)(pcVar13 + (long)(int)(uint)local_130 * 0x28 + (ulong)uVar12 + 0x10) !=
        (char *)0x0) {
      strncpy((char *)(puVar27 + 0x13),
              pcVar13 + *(uint *)(pcVar13 + (long)(int)(uint)local_130 * 0x28 + (ulong)uVar12 + 0x10
                                 ),0x10);
      *(undefined1 *)((long)puVar27 + 0xa7) = 0;
    }
    log2Console(4,"eup","SO version is: %s",puVar27 + 0x13);
  }
  if (local_118 == -1) {
    if (iVar11 != -1) {
      lVar19 = (long)iVar11 * 0x28 + (ulong)uVar12;
      uVar29 = (ulong)*(uint *)(pcVar13 + lVar19 + 0x10);
      uVar32 = (ulong)*(uint *)(pcVar13 + lVar19 + 0x14);
LAB_0010e248:
      FUN_0010ea18(pcVar13 + uVar29,uVar32,puVar27 + 0x15);
    }
  }
  else {
    puVar30 = (uint *)(pcVar13 + *(uint *)(pcVar13 + (long)local_118 * 0x28 + (ulong)uVar12 + 0x10))
    ;
    if (puVar30 != (uint *)0x0) {
      if (puVar30[2] == 3) {
        uVar12 = puVar30[1];
        uVar29 = 0;
        pcVar16 = (char *)(puVar27 + 0x15);
        lVar19 = (long)puVar30 + ((ulong)*puVar30 + 3 & 0x1fffffffc) + 0xc;
        lVar24 = lVar19 + (ulong)(uVar12 - 0x10);
        if (uVar12 < 0x10 || uVar12 - 0x10 == 0) {
          lVar24 = lVar19;
        }
        do {
          if (uVar29 < uVar12) {
            snprintf(pcVar16,3,"%02x",(ulong)*(byte *)(lVar24 + uVar29));
          }
          else {
            pcVar16[2] = '\0';
            pcVar16[0] = '0';
            pcVar16[1] = '0';
          }
          uVar29 = uVar29 + 1;
          pcVar16 = pcVar16 + 2;
        } while (uVar29 != 0x10);
LAB_0010e224:
        *(undefined1 *)(puVar27 + 0x19) = 0;
      }
      else {
LAB_0010e25c:
        log2Console(5,"eup","GNU note type is not GNU_NOTE_TYPE_BUILD_ID(3).");
      }
    }
  }
joined_r0x0010dd1c:
  if ((param_2 & 1) != 0) {
    if (pcVar13 != (char *)0x0) {
      uVar12 = (uint)local_108;
      uVar28 = (uint)local_110;
      if ((uVar12 & uVar28) != 0xffffffff) {
        log2Console(3,"eup","symIndex = %d, dynsymIndex = %d",local_108,local_110);
        __ptr = calloc(1,0x18);
        if (__ptr != (undefined8 *)0x0) {
          if (cVar4 == '\x02') {
            lVar19 = *(long *)(pcVar13 + 0x28);
            if (uVar28 == 0xffffffff) {
              local_100 = (char *)0x0;
              local_138 = (char *)0x0;
              local_130 = 0;
            }
            else {
              lVar24 = (long)(int)uVar28 * 0x40 + lVar19;
              local_138 = pcVar13 + *(long *)(pcVar13 + lVar24 + 0x18);
              local_130 = 0;
              if (*(ulong *)(pcVar13 + lVar24 + 0x38) != 0) {
                local_130 = *(ulong *)(pcVar13 + lVar24 + 0x20) /
                            *(ulong *)(pcVar13 + lVar24 + 0x38);
              }
              local_100 = pcVar13 + *(long *)(pcVar13 +
                                             (long)*(int *)(pcVar13 + lVar24 + 0x28) * 0x40 + lVar19
                                             + 0x18);
            }
            if (uVar12 == 0xffffffff) {
              local_f8 = (char *)0x0;
              local_120 = 0;
              local_140 = (char *)0x0;
            }
            else {
              lVar24 = (long)(int)uVar12 * 0x40 + lVar19;
              local_140 = pcVar13 + *(long *)(pcVar13 + lVar24 + 0x18);
              local_120 = 0;
              if (*(ulong *)(pcVar13 + lVar24 + 0x38) != 0) {
                local_120 = *(ulong *)(pcVar13 + lVar24 + 0x20) /
                            *(ulong *)(pcVar13 + lVar24 + 0x38);
              }
              local_f8 = pcVar13 + *(long *)(pcVar13 +
                                            (long)*(int *)(pcVar13 + lVar24 + 0x28) * 0x40 + lVar19
                                            + 0x18);
            }
            uVar23 = (uint)local_130;
            if (uVar28 == 0xffffffff || (int)uVar23 < 1) {
              iVar11 = 0;
            }
            else {
              if (uVar23 < 2) {
                uVar32 = 0;
                iVar11 = 0;
              }
              else {
                uVar32 = local_130 & 0xfffffffe;
                iVar34 = 0;
                iVar11 = 0;
                psVar25 = (short *)(local_138 + 0x1e);
                uVar29 = uVar32;
                do {
                  if (psVar25[-0xc] != 0) {
                    iVar34 = iVar34 + 1;
                  }
                  if (*psVar25 != 0) {
                    iVar11 = iVar11 + 1;
                  }
                  uVar29 = uVar29 - 2;
                  psVar25 = psVar25 + 0x18;
                } while (uVar29 != 0);
                iVar11 = iVar11 + iVar34;
                if (uVar32 == (local_130 & 0xffffffff)) goto LAB_0010e794;
              }
              lVar19 = (local_130 & 0xffffffff) - uVar32;
              psVar25 = (short *)(local_138 + uVar32 * 0x18 + 6);
              do {
                if (*psVar25 != 0) {
                  iVar11 = iVar11 + 1;
                }
                lVar19 = lVar19 + -1;
                psVar25 = psVar25 + 0xc;
              } while (lVar19 != 0);
            }
LAB_0010e794:
            bVar1 = 0 < (int)local_120;
            if (uVar12 != 0xffffffff && bVar1) {
              iVar34 = 0;
              uVar29 = local_120 & 0xffffffff;
              plVar31 = (long *)(local_140 + 8);
              do {
                if ((((*(short *)((long)plVar31 + -2) != 0) &&
                     (sVar15 = strlen(local_f8 + *(uint *)(plVar31 + -1)), sVar15 != 0)) &&
                    (*plVar31 != 0)) && (plVar31[1] != 0)) {
                  iVar34 = iVar34 + 1;
                }
                uVar29 = uVar29 - 1;
                plVar31 = plVar31 + 3;
              } while (uVar29 != 0);
            }
            else {
              iVar34 = 0;
            }
            log2Console(3,"eup","symbol_count = %d, dynsymbol_count = %d",iVar34,iVar11);
            local_108 = (ulong)(iVar34 + iVar11);
            *(int *)(__ptr + 1) = iVar34 + iVar11;
            __base = calloc(local_108,0x18);
            *__ptr = __base;
            if (__base == (void *)0x0) {
LAB_0010e8b8:
              free(__ptr);
              *puVar27 = 0;
              goto LAB_0010d9dc;
            }
            if (uVar28 == 0xffffffff || (int)uVar23 < 1) {
              iVar11 = 0;
            }
            else {
              iVar11 = 0;
              local_130 = local_130 & 0xffffffff;
              local_138 = local_138 + 8;
              do {
                if (*(short *)(local_138 + -2) != 0) {
                  pcVar16 = strdup(local_100 + *(uint *)(local_138 + -8));
                  puVar21 = (undefined8 *)((long)__base + (long)iVar11 * 0x18);
                  puVar21[2] = pcVar16;
                  uVar33 = *(undefined8 *)local_138;
                  iVar11 = iVar11 + 1;
                  puVar21[1] = *(undefined8 *)(local_138 + 8);
                  *puVar21 = uVar33;
                }
                local_130 = local_130 - 1;
                local_138 = local_138 + 0x18;
              } while (local_130 != 0);
            }
            if (uVar12 != 0xffffffff && bVar1) {
              local_120 = local_120 & 0xffffffff;
              plVar31 = (long *)(local_140 + 8);
              do {
                if (*(short *)((long)plVar31 + -2) != 0) {
                  uVar12 = *(uint *)(plVar31 + -1);
                  sVar15 = strlen(local_f8 + uVar12);
                  if (((sVar15 != 0) && (*plVar31 != 0)) && (plVar31[1] != 0)) {
                    pcVar16 = strdup(local_f8 + uVar12);
                    plVar22 = (long *)((long)__base + (long)iVar11 * 0x18);
                    plVar22[2] = (long)pcVar16;
                    lVar19 = *plVar31;
                    iVar11 = iVar11 + 1;
                    plVar22[1] = plVar31[1];
                    *plVar22 = lVar19;
                  }
                }
                local_120 = local_120 - 1;
                plVar31 = plVar31 + 3;
              } while (local_120 != 0);
            }
          }
          else {
            if (cVar4 != '\x01') goto LAB_0010e320;
            uVar23 = *(uint *)(pcVar13 + 0x20);
            if (uVar28 == 0xffffffff) {
              puVar30 = (uint *)0x0;
              local_100 = (char *)0x0;
              local_130 = 0;
            }
            else {
              lVar19 = (long)(int)uVar28 * 0x28 + (ulong)uVar23;
              puVar30 = (uint *)(pcVar13 + *(uint *)(pcVar13 + lVar19 + 0x10));
              uVar7 = 0;
              if (*(uint *)(pcVar13 + lVar19 + 0x24) != 0) {
                uVar7 = *(uint *)(pcVar13 + lVar19 + 0x14) / *(uint *)(pcVar13 + lVar19 + 0x24);
              }
              local_100 = pcVar13 + *(uint *)(pcVar13 +
                                             (long)*(int *)(pcVar13 + lVar19 + 0x18) * 0x28 +
                                             (ulong)uVar23 + 0x10);
              local_130 = (ulong)uVar7;
            }
            if (uVar12 == 0xffffffff) {
              local_138 = (char *)0x0;
              local_f8 = (char *)0x0;
              uVar7 = 0;
            }
            else {
              lVar19 = (long)(int)uVar12 * 0x28 + (ulong)uVar23;
              local_138 = pcVar13 + *(uint *)(pcVar13 + lVar19 + 0x10);
              uVar7 = 0;
              if (*(uint *)(pcVar13 + lVar19 + 0x24) != 0) {
                uVar7 = *(uint *)(pcVar13 + lVar19 + 0x14) / *(uint *)(pcVar13 + lVar19 + 0x24);
              }
              local_f8 = pcVar13 + *(uint *)(pcVar13 +
                                            (long)*(int *)(pcVar13 + lVar19 + 0x18) * 0x28 +
                                            (ulong)uVar23 + 0x10);
            }
            if (uVar28 == 0xffffffff || (int)(uint)local_130 < 1) {
              iVar11 = 0;
            }
            else {
              if ((uint)local_130 < 9) {
                lVar24 = 0;
                iVar11 = 0;
              }
              else {
                uVar29 = 8;
                if ((local_130 & 7) != 0) {
                  uVar29 = local_130 & 7;
                }
                lVar24 = local_130 - uVar29;
                pauVar26 = (undefined1 (*) [16])((long)puVar30 + 0x4e);
                iVar11 = 0;
                iVar34 = 0;
                iVar35 = 0;
                iVar36 = 0;
                iVar37 = 0;
                iVar38 = 0;
                iVar39 = 0;
                iVar40 = 0;
                lVar19 = lVar24;
                do {
                  auVar10 = *pauVar26;
                  uVar32 = *(ulong *)pauVar26[-3] & 0xffffffff;
                  uVar29 = *(ulong *)pauVar26[-4] & 0xffffffff;
                  auVar41 = a64_TBL(ZEXT816(0),pauVar26[-2],pauVar26[-1],_DAT_00126b90);
                  auVar42 = a64_TBL(ZEXT816(0),pauVar26[2],pauVar26[3],_DAT_00126b90);
                  uVar33 = NEON_ext(auVar41._0_8_,
                                    CONCAT17((char)(uVar32 >> 0x18),
                                             CONCAT16((char)(uVar32 >> 0x10),
                                                      CONCAT15((char)(uVar29 >> 0x18),
                                                               CONCAT14((char)(uVar29 >> 0x10),
                                                                        CONCAT13((char)(uVar32 >> 8)
                                                                                 ,CONCAT12((char)
                                                  uVar32,(short)uVar29)))))),4,1);
                  uVar9 = NEON_ext(auVar42._0_8_,
                                   CONCAT17(pauVar26[1][3],
                                            CONCAT16(pauVar26[1][2],
                                                     CONCAT15(auVar10[3],
                                                              CONCAT14(auVar10[2],
                                                                       CONCAT13(pauVar26[1][1],
                                                                                CONCAT12(pauVar26[1]
                                                                                         [0],auVar10
                                                  ._0_2_)))))),4,1);
                  uVar33 = NEON_ext(uVar33,uVar33,4,1);
                  uVar9 = NEON_ext(uVar9,uVar9,4,1);
                  lVar19 = lVar19 + -8;
                  iVar11 = iVar11 + (uint)(~-((short)uVar33 == 0) & 1);
                  iVar34 = iVar34 + (uint)(~-((short)((ulong)uVar33 >> 0x10) == 0) & 1);
                  iVar35 = iVar35 + (uint)(~-((short)((ulong)uVar33 >> 0x20) == 0) & 1);
                  iVar36 = iVar36 + (uint)(~-((short)((ulong)uVar33 >> 0x30) == 0) & 1);
                  iVar37 = iVar37 + (uint)(~-((short)uVar9 == 0) & 1);
                  iVar38 = iVar38 + (uint)(~-((short)((ulong)uVar9 >> 0x10) == 0) & 1);
                  iVar39 = iVar39 + (uint)(~-((short)((ulong)uVar9 >> 0x20) == 0) & 1);
                  iVar40 = iVar40 + (uint)(~-((short)((ulong)uVar9 >> 0x30) == 0) & 1);
                  pauVar26 = pauVar26 + 8;
                } while (lVar19 != 0);
                iVar11 = iVar37 + iVar11 + iVar38 + iVar34 + iVar39 + iVar35 + iVar40 + iVar36;
              }
              lVar19 = local_130 - lVar24;
              psVar25 = (short *)((long)puVar30 + lVar24 * 0x10 + 0xe);
              do {
                if (*psVar25 != 0) {
                  iVar11 = iVar11 + 1;
                }
                lVar19 = lVar19 + -1;
                psVar25 = psVar25 + 8;
              } while (lVar19 != 0);
            }
            if (uVar12 != 0xffffffff && 0 < (int)uVar7) {
              iVar34 = 0;
              uVar29 = (ulong)uVar7;
              piVar14 = (int *)(local_138 + 8);
              do {
                if (((*(short *)((long)piVar14 + 6) != 0) &&
                    (sVar15 = strlen(local_f8 + (uint)piVar14[-2]), sVar15 != 0)) &&
                   ((piVar14[-1] != 0 && (*piVar14 != 0)))) {
                  iVar34 = iVar34 + 1;
                }
                uVar29 = uVar29 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar29 != 0);
            }
            else {
              iVar34 = 0;
            }
            log2Console(3,"eup","symbol_count = %d, dynsymbol_count = %d",iVar34,iVar11);
            local_108 = (ulong)(iVar34 + iVar11);
            *(int *)(__ptr + 1) = iVar34 + iVar11;
            __base = calloc(local_108,0x18);
            *__ptr = __base;
            if (__base == (void *)0x0) goto LAB_0010e8b8;
            if (uVar28 == 0xffffffff || (int)(uint)local_130 < 1) {
              iVar11 = 0;
            }
            else {
              iVar11 = 0;
              do {
                if (*(short *)((long)puVar30 + 0xe) != 0) {
                  pcVar16 = strdup(local_100 + *puVar30);
                  puVar20 = (ulong *)((long)__base + (long)iVar11 * 0x18);
                  puVar20[2] = (ulong)pcVar16;
                  uVar29 = *(ulong *)(puVar30 + 1);
                  iVar11 = iVar11 + 1;
                  puVar20[1] = uVar29 >> 0x20;
                  *puVar20 = uVar29 & 0xffffffff;
                }
                local_130 = local_130 - 1;
                puVar30 = puVar30 + 4;
              } while (local_130 != 0);
            }
            if (uVar12 != 0xffffffff && 0 < (int)uVar7) {
              uVar29 = (ulong)uVar7;
              piVar14 = (int *)(local_138 + 8);
              do {
                if (*(short *)((long)piVar14 + 6) != 0) {
                  uVar12 = piVar14[-2];
                  sVar15 = strlen(local_f8 + uVar12);
                  if (((sVar15 != 0) && (piVar14[-1] != 0)) && (*piVar14 != 0)) {
                    pcVar16 = strdup(local_f8 + uVar12);
                    puVar20 = (ulong *)((long)__base + (long)iVar11 * 0x18);
                    puVar20[2] = (ulong)pcVar16;
                    uVar32 = *(ulong *)(piVar14 + -1);
                    iVar11 = iVar11 + 1;
                    puVar20[1] = uVar32 >> 0x20;
                    *puVar20 = uVar32 & 0xffffffff;
                  }
                }
                uVar29 = uVar29 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar29 != 0);
            }
          }
          qsort(__base,local_108,0x18,FUN_0010f0ac);
          *puVar27 = __ptr;
          __ptr[2] = puVar27 + 1;
          goto LAB_0010d9dc;
        }
      }
    }
LAB_0010e320:
    *puVar27 = 0;
  }
LAB_0010d9dc:
  munmap(pcVar13,(long)(int)sStack_f0.st_size);
LAB_0010d9e8:
  uVar12 = close(__fd);
  uVar29 = (ulong)uVar12;
LAB_0010d9f0:
  if (*(long *)(lVar8 + 0x28) == sStack_f0.__unused[1]) {
    return puVar27;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar29);
LAB_0010e04c:
  do {
    do {
      pbVar17 = pbVar18 + 1;
      bVar3 = *pbVar18;
      uVar23 = uVar23 | (bVar3 & 0x7f) << (ulong)(uVar28 & 0x1f);
      uVar28 = uVar28 + 7;
      pbVar18 = pbVar17;
    } while ((char)bVar3 < '\0');
    switch(uVar23) {
    case 4:
    case 5:
    case 0x20:
    case 0x41:
    case 0x43:
      do {
        pbVar18 = pbVar17 + 1;
        bVar3 = *pbVar17;
        pbVar17 = pbVar18;
      } while (bVar3 != 0);
      break;
    case 6:
      uVar23 = 0;
      uVar28 = 0;
      do {
        bVar5 = *pbVar17;
        uVar23 = uVar23 | (bVar5 & 0x7f) << (ulong)(uVar28 & 0x1f);
        uVar28 = uVar28 + 7;
        pbVar17 = pbVar17 + 1;
      } while ((char)bVar5 < '\0');
      switch(uVar23) {
      case 1:
        pcVar16 = "armeabi-v4";
        break;
      case 2:
        pcVar16 = "armeabi-v4t";
        break;
      case 3:
        pcVar16 = "armeabi-v5t";
        break;
      case 4:
        pcVar16 = "armeabi-v5te";
        break;
      case 5:
        pcVar16 = "armeabi-v5tej";
        break;
      case 6:
        pcVar16 = "armeabi-v6";
        break;
      case 7:
        pcVar16 = "armeabi-v6kz";
        break;
      case 8:
        pcVar16 = "armeabi-v6t2";
        break;
      case 9:
        pcVar16 = "armeabi-v6k";
        break;
      case 10:
        pcVar16 = "armeabi-v7a";
        break;
      case 0xb:
        pcVar16 = "armeabi-v6-m";
        break;
      case 0xc:
        pcVar16 = "armeabi-v6s-m";
        break;
      case 0xd:
        pcVar16 = "armeabi-v7e-m";
        break;
      case 0xe:
        pcVar16 = "armeabi-v8";
        break;
      default:
        goto switchD_0010e0e4_default;
      }
      strncpy(local_158,pcVar16,0x10);
      goto LAB_0010e138;
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x22:
    case 0x24:
    case 0x26:
    case 0x2a:
    case 0x2c:
    case 0x40:
    case 0x42:
    case 0x44:
    case 0x46:
      do {
        pbVar18 = pbVar17 + 1;
        bVar3 = *pbVar17;
        pbVar17 = pbVar18;
      } while ((char)bVar3 < '\0');
      break;
    default:
      log2Console(5,"eup",".ARM.attributes. subsection tag type error");
      goto switchD_0010e0e4_default;
    }
    uVar23 = 0;
    uVar28 = 0;
  } while (pbVar18 < pcVar2 + 5 + bVar5);
  goto switchD_0010e0e4_default;
}

