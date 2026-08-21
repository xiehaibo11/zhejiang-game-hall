
/* dragonBones::JSONDataParser::_parseSlotColorFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

undefined4
dragonBones::JSONDataParser::_parseSlotColorFrame(GenericValue *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  int *piVar19;
  
  puVar13 = (uint *)(ulong)param_2;
  uVar5 = (**(code **)(*(long *)param_1 + 0x98))(param_1,puVar13,param_3);
  puVar4 = DataParser::VALUE;
  pcVar18 = DataParser::VALUE + -1;
  pcVar7 = pcVar18;
  do {
    pcVar7 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  piVar19 = *(int **)(puVar13 + 2);
  uVar2 = *puVar13;
  uVar17 = (ulong)uVar2;
  piVar9 = piVar19 + uVar17 * 0xc;
  piVar11 = piVar19;
  if (uVar2 != 0) {
    uVar14 = (long)pcVar7 - (long)DataParser::VALUE;
    lVar16 = uVar17 * 0x30;
    piVar15 = piVar19;
    do {
      piVar11 = piVar15;
      iVar6 = *piVar11;
      if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar11 + 0x15);
      }
      if (iVar6 == (int)uVar14) {
        piVar15 = *(int **)(piVar11 + 2);
        if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
          piVar15 = piVar11;
        }
        if ((piVar15 == (int *)puVar4) ||
           (iVar6 = memcmp(puVar4,piVar15,uVar14 & 0xffffffff), iVar6 == 0)) break;
      }
      lVar16 = lVar16 + -0x30;
      piVar15 = piVar11 + 0xc;
      piVar11 = piVar9;
    } while (lVar16 != 0);
  }
  puVar3 = DataParser::COLOR;
  pcVar7 = pcVar18;
  if (piVar9 == piVar11) {
    pcVar8 = DataParser::COLOR + -1;
    do {
      pcVar8 = pcVar8 + 1;
    } while (*pcVar8 != '\0');
    piVar11 = piVar19;
    if (uVar2 != 0) {
      uVar14 = (long)pcVar8 - (long)DataParser::COLOR;
      lVar16 = uVar17 * 0x30;
      piVar15 = piVar19;
      do {
        iVar6 = *piVar15;
        if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
        }
        if (iVar6 == (int)uVar14) {
          piVar1 = *(int **)(piVar15 + 2);
          if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
            piVar1 = piVar15;
          }
          piVar11 = piVar15;
          if ((piVar1 == (int *)puVar3) ||
             (iVar6 = memcmp(puVar3,piVar1,uVar14 & 0xffffffff), iVar6 == 0)) break;
        }
        lVar16 = lVar16 + -0x30;
        piVar15 = piVar15 + 0xc;
        piVar11 = piVar9;
      } while (lVar16 != 0);
    }
    if (piVar9 != piVar11) goto LAB_00d97ab8;
  }
  else {
LAB_00d97ab8:
    do {
      pcVar7 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    piVar11 = piVar19;
    if (uVar2 != 0) {
      lVar16 = uVar17 * 0x30;
      piVar15 = piVar19;
      do {
        iVar6 = *piVar15;
        if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
        }
        if (iVar6 == (int)((long)pcVar7 - (long)puVar4)) {
          piVar1 = *(int **)(piVar15 + 2);
          if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
            piVar1 = piVar15;
          }
          piVar11 = piVar15;
          if ((piVar1 == (int *)puVar4) ||
             (iVar6 = memcmp(puVar4,piVar1,(long)pcVar7 - (long)puVar4 & 0xffffffff), iVar6 == 0))
          break;
        }
        lVar16 = lVar16 + -0x30;
        piVar15 = piVar15 + 0xc;
        piVar11 = piVar9;
      } while (lVar16 != 0);
    }
    puVar3 = DataParser::COLOR;
    puVar13 = (uint *)&rapidjson::
                       GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                       ::
                       operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                       ::buffer;
    if (piVar9 == piVar11) {
      pcVar7 = DataParser::COLOR + -1;
      do {
        pcVar7 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      if (uVar2 == 0) goto LAB_00d97c48;
      uVar14 = (long)pcVar7 - (long)DataParser::COLOR;
      lVar16 = uVar17 * 0x30;
      do {
        iVar6 = *piVar19;
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar19 + 0x15);
        }
        if (iVar6 == (int)uVar14) {
          piVar11 = *(int **)(piVar19 + 2);
          if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
            piVar11 = piVar19;
          }
          if ((piVar11 == (int *)puVar3) ||
             (iVar6 = memcmp(puVar3,piVar11,uVar14 & 0xffffffff), iVar6 == 0)) goto LAB_00d97c48;
        }
        lVar16 = lVar16 + -0x30;
        piVar19 = piVar19 + 0xc;
      } while (lVar16 != 0);
LAB_00d97c58:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
    else {
      do {
        pcVar18 = pcVar18 + 1;
      } while (*pcVar18 != '\0');
      if (uVar2 != 0) {
        lVar16 = uVar17 * 0x30;
        do {
          iVar6 = *piVar19;
          if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
            iVar6 = 0x15 - *(char *)((long)piVar19 + 0x15);
          }
          if (iVar6 == (int)((long)pcVar18 - (long)puVar4)) {
            piVar11 = *(int **)(piVar19 + 2);
            if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
              piVar11 = piVar19;
            }
            if ((piVar11 == (int *)puVar4) ||
               (iVar6 = memcmp(puVar4,piVar11,(long)pcVar18 - (long)puVar4 & 0xffffffff), iVar6 == 0
               )) goto LAB_00d97c48;
          }
          lVar16 = lVar16 + -0x30;
          piVar19 = piVar19 + 0xc;
        } while (lVar16 != 0);
        goto LAB_00d97c58;
      }
LAB_00d97c48:
      if (piVar19 == piVar9) goto LAB_00d97c58;
      puVar13 = (uint *)(piVar19 + 6);
    }
    puVar4 = DataParser::ALPHA_MULTIPLIER;
    pcVar7 = DataParser::ALPHA_MULTIPLIER + -1;
    do {
      pcVar7 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    piVar19 = *(int **)(puVar13 + 2);
    uVar2 = *puVar13;
    uVar17 = (ulong)uVar2;
    piVar9 = piVar19 + uVar17 * 0xc;
    piVar11 = piVar19;
    if (uVar2 != 0) {
      uVar14 = (long)pcVar7 - (long)DataParser::ALPHA_MULTIPLIER;
      lVar16 = uVar17 * 0x30;
      piVar15 = piVar19;
      do {
        iVar6 = *piVar15;
        if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
        }
        if (iVar6 == (int)uVar14) {
          piVar1 = *(int **)(piVar15 + 2);
          if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
            piVar1 = piVar15;
          }
          piVar11 = piVar15;
          if ((piVar1 == (int *)puVar4) ||
             (iVar6 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar6 == 0)) break;
        }
        lVar16 = lVar16 + -0x30;
        piVar15 = piVar15 + 0xc;
        piVar11 = piVar9;
      } while (lVar16 != 0);
    }
    puVar4 = DataParser::RED_MULTIPLIER;
    if (piVar9 == piVar11) {
      pcVar7 = DataParser::RED_MULTIPLIER + -1;
      do {
        pcVar7 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      piVar11 = piVar19;
      if (uVar2 != 0) {
        uVar14 = (long)pcVar7 - (long)DataParser::RED_MULTIPLIER;
        lVar16 = uVar17 * 0x30;
        piVar15 = piVar19;
        do {
          iVar6 = *piVar15;
          if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
            iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
          }
          if (iVar6 == (int)uVar14) {
            piVar1 = *(int **)(piVar15 + 2);
            if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
              piVar1 = piVar15;
            }
            piVar11 = piVar15;
            if ((piVar1 == (int *)puVar4) ||
               (iVar6 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar6 == 0)) break;
          }
          lVar16 = lVar16 + -0x30;
          piVar15 = piVar15 + 0xc;
          piVar11 = piVar9;
        } while (lVar16 != 0);
      }
      puVar4 = DataParser::GREEN_MULTIPLIER;
      if (piVar9 == piVar11) {
        pcVar7 = DataParser::GREEN_MULTIPLIER + -1;
        do {
          pcVar7 = pcVar7 + 1;
        } while (*pcVar7 != '\0');
        piVar11 = piVar19;
        if (uVar2 != 0) {
          uVar14 = (long)pcVar7 - (long)DataParser::GREEN_MULTIPLIER;
          lVar16 = uVar17 * 0x30;
          piVar15 = piVar19;
          do {
            iVar6 = *piVar15;
            if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
              iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
            }
            if (iVar6 == (int)uVar14) {
              piVar1 = *(int **)(piVar15 + 2);
              if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
                piVar1 = piVar15;
              }
              piVar11 = piVar15;
              if ((piVar1 == (int *)puVar4) ||
                 (iVar6 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar6 == 0)) break;
            }
            lVar16 = lVar16 + -0x30;
            piVar15 = piVar15 + 0xc;
            piVar11 = piVar9;
          } while (lVar16 != 0);
        }
        puVar4 = DataParser::BLUE_MULTIPLIER;
        if (piVar9 == piVar11) {
          pcVar7 = DataParser::BLUE_MULTIPLIER + -1;
          do {
            pcVar7 = pcVar7 + 1;
          } while (*pcVar7 != '\0');
          piVar11 = piVar19;
          if (uVar2 != 0) {
            uVar14 = (long)pcVar7 - (long)DataParser::BLUE_MULTIPLIER;
            lVar16 = uVar17 * 0x30;
            piVar15 = piVar19;
            do {
              iVar6 = *piVar15;
              if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
                iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
              }
              if (iVar6 == (int)uVar14) {
                piVar1 = *(int **)(piVar15 + 2);
                if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
                  piVar1 = piVar15;
                }
                piVar11 = piVar15;
                if ((piVar1 == (int *)puVar4) ||
                   (iVar6 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar6 == 0)) break;
              }
              lVar16 = lVar16 + -0x30;
              piVar15 = piVar15 + 0xc;
              piVar11 = piVar9;
            } while (lVar16 != 0);
          }
          puVar4 = DataParser::ALPHA_OFFSET;
          if (piVar9 == piVar11) {
            pcVar7 = DataParser::ALPHA_OFFSET + -1;
            do {
              pcVar7 = pcVar7 + 1;
            } while (*pcVar7 != '\0');
            piVar11 = piVar19;
            if (uVar2 != 0) {
              uVar14 = (long)pcVar7 - (long)DataParser::ALPHA_OFFSET;
              lVar16 = uVar17 * 0x30;
              piVar15 = piVar19;
              do {
                iVar6 = *piVar15;
                if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
                  iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
                }
                if (iVar6 == (int)uVar14) {
                  piVar1 = *(int **)(piVar15 + 2);
                  if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
                    piVar1 = piVar15;
                  }
                  piVar11 = piVar15;
                  if ((piVar1 == (int *)puVar4) ||
                     (iVar6 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar6 == 0)) break;
                }
                lVar16 = lVar16 + -0x30;
                piVar15 = piVar15 + 0xc;
                piVar11 = piVar9;
              } while (lVar16 != 0);
            }
            puVar4 = DataParser::RED_OFFSET;
            if (piVar9 == piVar11) {
              pcVar7 = DataParser::RED_OFFSET + -1;
              do {
                pcVar7 = pcVar7 + 1;
              } while (*pcVar7 != '\0');
              piVar11 = piVar19;
              if (uVar2 != 0) {
                uVar14 = (long)pcVar7 - (long)DataParser::RED_OFFSET;
                lVar16 = uVar17 * 0x30;
                piVar15 = piVar19;
                do {
                  iVar6 = *piVar15;
                  if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
                    iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
                  }
                  if (iVar6 == (int)uVar14) {
                    piVar1 = *(int **)(piVar15 + 2);
                    if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
                      piVar1 = piVar15;
                    }
                    piVar11 = piVar15;
                    if ((piVar1 == (int *)puVar4) ||
                       (iVar6 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar6 == 0)) break;
                  }
                  lVar16 = lVar16 + -0x30;
                  piVar15 = piVar15 + 0xc;
                  piVar11 = piVar9;
                } while (lVar16 != 0);
              }
              puVar4 = DataParser::GREEN_OFFSET;
              if (piVar9 == piVar11) {
                pcVar7 = DataParser::GREEN_OFFSET + -1;
                do {
                  pcVar7 = pcVar7 + 1;
                } while (*pcVar7 != '\0');
                piVar11 = piVar19;
                if (uVar2 != 0) {
                  uVar14 = (long)pcVar7 - (long)DataParser::GREEN_OFFSET;
                  lVar16 = uVar17 * 0x30;
                  piVar15 = piVar19;
                  do {
                    iVar6 = *piVar15;
                    if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
                      iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
                    }
                    if (iVar6 == (int)uVar14) {
                      piVar1 = *(int **)(piVar15 + 2);
                      if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
                        piVar1 = piVar15;
                      }
                      piVar11 = piVar15;
                      if ((piVar1 == (int *)puVar4) ||
                         (iVar6 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar6 == 0)) break;
                    }
                    lVar16 = lVar16 + -0x30;
                    piVar15 = piVar15 + 0xc;
                    piVar11 = piVar9;
                  } while (lVar16 != 0);
                }
                puVar4 = DataParser::BLUE_OFFSET;
                if (piVar9 == piVar11) {
                  pcVar7 = DataParser::BLUE_OFFSET + -1;
                  do {
                    /* try { // try from 00d980e0 to 00e980eb has its CatchHandler @ 00d98f08 */
                    pcVar7 = pcVar7 + 1;
                  } while (*pcVar7 != '\0');
                  piVar11 = piVar19;
                  if (uVar2 != 0) {
                    uVar14 = (long)pcVar7 - (long)DataParser::BLUE_OFFSET;
                    /* try { // try from 00d980f0 to 00e98103 has its CatchHandler @ 00d98f0c */
                    lVar16 = uVar17 * 0x30;
                    do {
                    /* try { // try from 00d98114 to 00e9811b has its CatchHandler @ 00d98f00 */
                    /* try { // try from 00d98120 to 00e98137 has its CatchHandler @ 00d98f04 */
                      iVar6 = *piVar19;
                      if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
                        iVar6 = 0x15 - *(char *)((long)piVar19 + 0x15);
                      }
                      if (iVar6 == (int)uVar14) {
                        piVar15 = *(int **)(piVar19 + 2);
                        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
                          piVar15 = piVar19;
                        }
                    /* try { // try from 00d9813c to 00e98147 has its CatchHandler @ 00d98f10 */
                        piVar11 = piVar19;
                        if ((piVar15 == (int *)puVar4) ||
                           (iVar6 = memcmp(puVar4,piVar15,uVar14 & 0xffffffff), iVar6 == 0)) break;
                      }
                      lVar16 = lVar16 + -0x30;
                      piVar19 = piVar19 + 0xc;
                      piVar11 = piVar9;
                    } while (lVar16 != 0);
                  }
                  if (piVar9 == piVar11) goto LAB_00d98280;
                }
              }
            }
          }
        }
      }
    }
                    /* try { // try from 00d98174 to 00e983f3 has its CatchHandler @ 00d98f94 */
    (**(code **)(*(long *)param_1 + 0x100))(param_1,puVar13,param_1 + 0xc4);
    lVar16 = *(long *)(param_1 + 0x108);
    lVar12 = *(long *)(param_1 + 0x110) - lVar16;
    uVar17 = lVar12 >> 1;
    if (uVar17 < 0xfffffffffffffff8) {
      std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x108),8);
      lVar16 = *(long *)(param_1 + 0x108);
    }
    else {
      *(ulong *)(param_1 + 0x110) = lVar16 + uVar17 * 2 + 0x10;
    }
    *(short *)(lVar16 + (lVar12 * 0x80000000 >> 0x1f)) =
         (short)(int)(*(float *)(param_1 + 0xc4) * 100.0);
    lVar12 = lVar12 * 0x80000000;
    *(short *)(lVar16 + (lVar12 + 0x100000000 >> 0x1f)) =
         (short)(int)(*(float *)(param_1 + 200) * 100.0);
    *(short *)(lVar16 + (lVar12 + 0x200000000 >> 0x1f)) =
         (short)(int)(*(float *)(param_1 + 0xcc) * 100.0);
    *(short *)(lVar16 + (lVar12 + 0x300000000 >> 0x1f)) =
         (short)(int)(*(float *)(param_1 + 0xd0) * 100.0);
    *(short *)(lVar16 + (lVar12 + 0x400000000 >> 0x1f)) = (short)*(undefined4 *)(param_1 + 0xd4);
    *(short *)(lVar16 + (lVar12 + 0x500000000 >> 0x1f)) = (short)*(undefined4 *)(param_1 + 0xd8);
    *(short *)(lVar16 + (lVar12 + 0x600000000 >> 0x1f)) = (short)*(undefined4 *)(param_1 + 0xdc);
    *(short *)(lVar16 + (lVar12 + 0x700000000 >> 0x1f)) = (short)*(undefined4 *)(param_1 + 0xe0);
    if (-1 < (int)uVar17) goto LAB_00d98344;
  }
LAB_00d98280:
  uVar17 = (ulong)*(uint *)(param_1 + 0x70);
  if ((int)*(uint *)(param_1 + 0x70) < 0) {
    lVar16 = *(long *)(param_1 + 0x108);
    lVar12 = *(long *)(param_1 + 0x110) - lVar16;
    uVar17 = lVar12 >> 1;
    *(int *)(param_1 + 0x70) = (int)uVar17;
    if (uVar17 < 0xfffffffffffffff8) {
      std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x108),8);
      lVar16 = *(long *)(param_1 + 0x108);
      uVar17 = (ulong)*(uint *)(param_1 + 0x70);
    }
    else {
      *(ulong *)(param_1 + 0x110) = lVar16 + uVar17 * 2 + 0x10;
    }
    lVar10 = lVar12 * 0x80000000;
    *(undefined2 *)(lVar16 + (lVar12 * 0x80000000 >> 0x1f)) = 100;
    *(undefined2 *)(lVar16 + (lVar10 + 0x100000000 >> 0x1f)) = 100;
    *(undefined2 *)(lVar16 + (lVar10 + 0x200000000 >> 0x1f)) = 100;
    *(undefined2 *)(lVar16 + (lVar10 + 0x300000000 >> 0x1f)) = 100;
    *(undefined2 *)(lVar16 + (lVar10 + 0x400000000 >> 0x1f)) = 0;
    *(undefined2 *)(lVar16 + (lVar10 + 0x500000000 >> 0x1f)) = 0;
    *(undefined2 *)(lVar16 + (lVar10 + 0x600000000 >> 0x1f)) = 0;
    *(undefined2 *)(lVar16 + (lVar10 + 0x700000000 >> 0x1f)) = 0;
  }
LAB_00d98344:
  lVar16 = *(long *)(param_1 + 0x138);
  lVar12 = *(long *)(param_1 + 0x140) - lVar16;
  if (lVar12 == -2) {
    *(long *)(param_1 + 0x140) = lVar16;
  }
  else {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
              ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x138),1);
    lVar16 = *(long *)(param_1 + 0x138);
  }
  *(short *)(lVar16 + (lVar12 >> 1) * 2) = (short)uVar17;
  return uVar5;
}

