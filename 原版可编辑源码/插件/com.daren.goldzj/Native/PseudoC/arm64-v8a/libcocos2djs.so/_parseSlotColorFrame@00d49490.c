
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
  int *piVar12;
  int *piVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  char *pcVar19;
  
  puVar15 = (uint *)(ulong)param_2;
  uVar5 = (**(code **)(*(long *)param_1 + 0x98))(param_1,puVar15,param_3);
  puVar4 = DataParser::VALUE;
  pcVar19 = DataParser::VALUE + -1;
  pcVar7 = pcVar19;
  do {
    pcVar7 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  piVar11 = *(int **)(puVar15 + 2);
  uVar2 = *puVar15;
  uVar18 = (ulong)uVar2;
  piVar9 = piVar11 + uVar18 * 0xc;
  piVar13 = piVar11;
  if (uVar2 != 0) {
    uVar16 = (long)pcVar7 - (long)DataParser::VALUE;
    lVar17 = uVar18 * 0x30;
    piVar12 = piVar11;
    do {
      iVar6 = *piVar12;
      if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar12 + 0x15);
      }
      if (iVar6 == (int)uVar16) {
        piVar1 = *(int **)(piVar12 + 2);
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar12;
        }
        piVar13 = piVar12;
        if ((piVar1 == (int *)puVar4) ||
           (iVar6 = memcmp(puVar4,piVar1,uVar16 & 0xffffffff), iVar6 == 0)) break;
      }
      lVar17 = lVar17 + -0x30;
      piVar12 = piVar12 + 0xc;
      piVar13 = piVar9;
    } while (lVar17 != 0);
  }
  puVar3 = DataParser::COLOR;
  pcVar7 = pcVar19;
  if (piVar9 == piVar13) {
    pcVar8 = DataParser::COLOR + -1;
    do {
      pcVar8 = pcVar8 + 1;
    } while (*pcVar8 != '\0');
    piVar13 = piVar11;
    if (uVar2 != 0) {
      uVar16 = (long)pcVar8 - (long)DataParser::COLOR;
      lVar17 = uVar18 * 0x30;
      piVar12 = piVar11;
      do {
        iVar6 = *piVar12;
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar12 + 0x15);
        }
        if (iVar6 == (int)uVar16) {
          piVar1 = *(int **)(piVar12 + 2);
          if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
            piVar1 = piVar12;
          }
          piVar13 = piVar12;
          if ((piVar1 == (int *)puVar3) ||
             (iVar6 = memcmp(puVar3,piVar1,uVar16 & 0xffffffff), iVar6 == 0)) break;
        }
        lVar17 = lVar17 + -0x30;
        piVar12 = piVar12 + 0xc;
        piVar13 = piVar9;
      } while (lVar17 != 0);
    }
    if (piVar9 != piVar13) goto LAB_00d49618;
  }
  else {
LAB_00d49618:
    do {
      pcVar7 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    piVar13 = piVar11;
    if (uVar2 != 0) {
      lVar17 = uVar18 * 0x30;
      piVar12 = piVar11;
      do {
        iVar6 = *piVar12;
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar12 + 0x15);
        }
        if (iVar6 == (int)((long)pcVar7 - (long)puVar4)) {
          piVar1 = *(int **)(piVar12 + 2);
          if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
            piVar1 = piVar12;
          }
          piVar13 = piVar12;
          if ((piVar1 == (int *)puVar4) ||
             (iVar6 = memcmp(puVar4,piVar1,(long)pcVar7 - (long)puVar4 & 0xffffffff), iVar6 == 0))
          break;
        }
        lVar17 = lVar17 + -0x30;
        piVar12 = piVar12 + 0xc;
        piVar13 = piVar9;
      } while (lVar17 != 0);
    }
    puVar3 = DataParser::COLOR;
    if (piVar9 == piVar13) {
      pcVar7 = DataParser::COLOR + -1;
      do {
        pcVar7 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      if (uVar2 == 0) goto LAB_00d49794;
      uVar16 = (long)pcVar7 - (long)DataParser::COLOR;
      lVar17 = uVar18 * 0x30;
      do {
        iVar6 = *piVar11;
        if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar11 + 0x15);
        }
        if (iVar6 == (int)uVar16) {
          piVar13 = *(int **)(piVar11 + 2);
          if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
            piVar13 = piVar11;
          }
          if ((piVar13 == (int *)puVar3) ||
             (iVar6 = memcmp(puVar3,piVar13,uVar16 & 0xffffffff), iVar6 == 0)) goto LAB_00d49794;
        }
        lVar17 = lVar17 + -0x30;
        piVar11 = piVar11 + 0xc;
      } while (lVar17 != 0);
LAB_00d497a4:
      puVar15 = (uint *)&rapidjson::
                         GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                         ::
                         operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                         ::buffer;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
    }
    else {
      do {
        pcVar19 = pcVar19 + 1;
      } while (*pcVar19 != '\0');
      if (uVar2 != 0) {
        lVar17 = uVar18 * 0x30;
        do {
          iVar6 = *piVar11;
          if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
            iVar6 = 0x15 - *(char *)((long)piVar11 + 0x15);
          }
          if (iVar6 == (int)((long)pcVar19 - (long)puVar4)) {
            piVar13 = *(int **)(piVar11 + 2);
            if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
              piVar13 = piVar11;
            }
            if ((piVar13 == (int *)puVar4) ||
               (iVar6 = memcmp(puVar4,piVar13,(long)pcVar19 - (long)puVar4 & 0xffffffff), iVar6 == 0
               )) goto LAB_00d49794;
          }
          lVar17 = lVar17 + -0x30;
          piVar11 = piVar11 + 0xc;
        } while (lVar17 != 0);
        goto LAB_00d497a4;
      }
LAB_00d49794:
      if (piVar11 == piVar9) goto LAB_00d497a4;
      puVar15 = (uint *)(piVar11 + 6);
    }
    puVar4 = DataParser::ALPHA_MULTIPLIER;
    pcVar7 = DataParser::ALPHA_MULTIPLIER + -1;
    do {
      pcVar7 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    piVar11 = *(int **)(puVar15 + 2);
    uVar2 = *puVar15;
    uVar18 = (ulong)uVar2;
    piVar9 = piVar11 + uVar18 * 0xc;
    piVar13 = piVar11;
    if (uVar2 != 0) {
      uVar16 = (long)pcVar7 - (long)DataParser::ALPHA_MULTIPLIER;
      lVar17 = uVar18 * 0x30;
      piVar12 = piVar11;
      do {
        iVar6 = *piVar12;
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar12 + 0x15);
        }
        if (iVar6 == (int)uVar16) {
          piVar1 = *(int **)(piVar12 + 2);
          if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
            piVar1 = piVar12;
          }
          piVar13 = piVar12;
          if ((piVar1 == (int *)puVar4) ||
             (iVar6 = memcmp(puVar4,piVar1,uVar16 & 0xffffffff), iVar6 == 0)) break;
        }
        lVar17 = lVar17 + -0x30;
        piVar12 = piVar12 + 0xc;
        piVar13 = piVar9;
      } while (lVar17 != 0);
    }
    puVar4 = DataParser::RED_MULTIPLIER;
    if (piVar9 == piVar13) {
      pcVar7 = DataParser::RED_MULTIPLIER + -1;
      do {
        pcVar7 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      piVar13 = piVar11;
      if (uVar2 != 0) {
        uVar16 = (long)pcVar7 - (long)DataParser::RED_MULTIPLIER;
        lVar17 = uVar18 * 0x30;
        piVar12 = piVar11;
        do {
          iVar6 = *piVar12;
          if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
            iVar6 = 0x15 - *(char *)((long)piVar12 + 0x15);
          }
          if (iVar6 == (int)uVar16) {
            piVar1 = *(int **)(piVar12 + 2);
            if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
              piVar1 = piVar12;
            }
            piVar13 = piVar12;
            if ((piVar1 == (int *)puVar4) ||
               (iVar6 = memcmp(puVar4,piVar1,uVar16 & 0xffffffff), iVar6 == 0)) break;
          }
          lVar17 = lVar17 + -0x30;
          piVar12 = piVar12 + 0xc;
          piVar13 = piVar9;
        } while (lVar17 != 0);
      }
      puVar4 = DataParser::GREEN_MULTIPLIER;
      if (piVar9 == piVar13) {
        pcVar7 = DataParser::GREEN_MULTIPLIER + -1;
        do {
          pcVar7 = pcVar7 + 1;
        } while (*pcVar7 != '\0');
        piVar13 = piVar11;
        if (uVar2 != 0) {
          uVar16 = (long)pcVar7 - (long)DataParser::GREEN_MULTIPLIER;
          lVar17 = uVar18 * 0x30;
          piVar12 = piVar11;
          do {
            iVar6 = *piVar12;
            if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
              iVar6 = 0x15 - *(char *)((long)piVar12 + 0x15);
            }
            if (iVar6 == (int)uVar16) {
              piVar1 = *(int **)(piVar12 + 2);
              if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
                piVar1 = piVar12;
              }
              piVar13 = piVar12;
              if ((piVar1 == (int *)puVar4) ||
                 (iVar6 = memcmp(puVar4,piVar1,uVar16 & 0xffffffff), iVar6 == 0)) break;
            }
            lVar17 = lVar17 + -0x30;
            piVar12 = piVar12 + 0xc;
            piVar13 = piVar9;
          } while (lVar17 != 0);
        }
        puVar4 = DataParser::BLUE_MULTIPLIER;
        if (piVar9 == piVar13) {
          pcVar7 = DataParser::BLUE_MULTIPLIER + -1;
          do {
            pcVar7 = pcVar7 + 1;
          } while (*pcVar7 != '\0');
          piVar13 = piVar11;
          if (uVar2 != 0) {
            uVar16 = (long)pcVar7 - (long)DataParser::BLUE_MULTIPLIER;
            lVar17 = uVar18 * 0x30;
            piVar12 = piVar11;
            do {
              iVar6 = *piVar12;
              if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
                iVar6 = 0x15 - *(char *)((long)piVar12 + 0x15);
              }
              if (iVar6 == (int)uVar16) {
                piVar1 = *(int **)(piVar12 + 2);
                if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
                  piVar1 = piVar12;
                }
                piVar13 = piVar12;
                if ((piVar1 == (int *)puVar4) ||
                   (iVar6 = memcmp(puVar4,piVar1,uVar16 & 0xffffffff), iVar6 == 0)) break;
              }
              lVar17 = lVar17 + -0x30;
              piVar12 = piVar12 + 0xc;
              piVar13 = piVar9;
            } while (lVar17 != 0);
          }
          puVar4 = DataParser::ALPHA_OFFSET;
          if (piVar9 == piVar13) {
            pcVar7 = DataParser::ALPHA_OFFSET + -1;
            do {
              pcVar7 = pcVar7 + 1;
            } while (*pcVar7 != '\0');
            piVar13 = piVar11;
            if (uVar2 != 0) {
              uVar16 = (long)pcVar7 - (long)DataParser::ALPHA_OFFSET;
              lVar17 = uVar18 * 0x30;
              piVar12 = piVar11;
              do {
                iVar6 = *piVar12;
                if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
                  iVar6 = 0x15 - *(char *)((long)piVar12 + 0x15);
                }
                if (iVar6 == (int)uVar16) {
                  piVar1 = *(int **)(piVar12 + 2);
                  if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
                    piVar1 = piVar12;
                  }
                  piVar13 = piVar12;
                  if ((piVar1 == (int *)puVar4) ||
                     (iVar6 = memcmp(puVar4,piVar1,uVar16 & 0xffffffff), iVar6 == 0)) break;
                }
                lVar17 = lVar17 + -0x30;
                piVar12 = piVar12 + 0xc;
                piVar13 = piVar9;
              } while (lVar17 != 0);
            }
            puVar4 = DataParser::RED_OFFSET;
            if (piVar9 == piVar13) {
              pcVar7 = DataParser::RED_OFFSET + -1;
              do {
                pcVar7 = pcVar7 + 1;
              } while (*pcVar7 != '\0');
              piVar13 = piVar11;
              if (uVar2 != 0) {
                uVar16 = (long)pcVar7 - (long)DataParser::RED_OFFSET;
                lVar17 = uVar18 * 0x30;
                piVar12 = piVar11;
                do {
                  iVar6 = *piVar12;
                  if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
                    iVar6 = 0x15 - *(char *)((long)piVar12 + 0x15);
                  }
                  if (iVar6 == (int)uVar16) {
                    piVar1 = *(int **)(piVar12 + 2);
                    if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
                      piVar1 = piVar12;
                    }
                    piVar13 = piVar12;
                    if ((piVar1 == (int *)puVar4) ||
                       (iVar6 = memcmp(puVar4,piVar1,uVar16 & 0xffffffff), iVar6 == 0)) break;
                  }
                  lVar17 = lVar17 + -0x30;
                  piVar12 = piVar12 + 0xc;
                  piVar13 = piVar9;
                } while (lVar17 != 0);
              }
              puVar4 = DataParser::GREEN_OFFSET;
              if (piVar9 == piVar13) {
                pcVar7 = DataParser::GREEN_OFFSET + -1;
                do {
                  pcVar7 = pcVar7 + 1;
                } while (*pcVar7 != '\0');
                piVar13 = piVar11;
                if (uVar2 != 0) {
                  uVar16 = (long)pcVar7 - (long)DataParser::GREEN_OFFSET;
                  lVar17 = uVar18 * 0x30;
                  piVar12 = piVar11;
                  do {
                    iVar6 = *piVar12;
                    if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
                      iVar6 = 0x15 - *(char *)((long)piVar12 + 0x15);
                    }
                    if (iVar6 == (int)uVar16) {
                      piVar1 = *(int **)(piVar12 + 2);
                      if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
                        piVar1 = piVar12;
                      }
                      piVar13 = piVar12;
                      if ((piVar1 == (int *)puVar4) ||
                         (iVar6 = memcmp(puVar4,piVar1,uVar16 & 0xffffffff), iVar6 == 0)) break;
                    }
                    lVar17 = lVar17 + -0x30;
                    piVar12 = piVar12 + 0xc;
                    piVar13 = piVar9;
                  } while (lVar17 != 0);
                }
                puVar4 = DataParser::BLUE_OFFSET;
                if (piVar9 == piVar13) {
                  pcVar7 = DataParser::BLUE_OFFSET + -1;
                  do {
                    pcVar7 = pcVar7 + 1;
                  } while (*pcVar7 != '\0');
                  piVar13 = piVar11;
                  if (uVar2 != 0) {
                    uVar16 = (long)pcVar7 - (long)DataParser::BLUE_OFFSET;
                    lVar17 = uVar18 * 0x30;
                    do {
                      iVar6 = *piVar11;
                      if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
                        iVar6 = 0x15 - *(char *)((long)piVar11 + 0x15);
                      }
                      if (iVar6 == (int)uVar16) {
                        piVar12 = *(int **)(piVar11 + 2);
                        if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
                          piVar12 = piVar11;
                        }
                        piVar13 = piVar11;
                        if ((piVar12 == (int *)puVar4) ||
                           (iVar6 = memcmp(puVar4,piVar12,uVar16 & 0xffffffff), iVar6 == 0)) break;
                      }
                      lVar17 = lVar17 + -0x30;
                      piVar11 = piVar11 + 0xc;
                      piVar13 = piVar9;
                    } while (lVar17 != 0);
                  }
                  if (piVar9 == piVar13) goto LAB_00d49d94;
                }
              }
            }
          }
        }
      }
    }
    (**(code **)(*(long *)param_1 + 0x100))(param_1,puVar15,param_1 + 0xc4);
    lVar17 = *(long *)(param_1 + 0x108);
    lVar14 = *(long *)(param_1 + 0x110) - lVar17;
    uVar18 = lVar14 >> 1;
    if (uVar18 < 0xfffffffffffffff8) {
      std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x108),8);
      lVar17 = *(long *)(param_1 + 0x108);
    }
    else {
      *(ulong *)(param_1 + 0x110) = lVar17 + uVar18 * 2 + 0x10;
    }
    lVar10 = lVar14 * 0x80000000;
    *(short *)(lVar17 + (lVar14 * 0x80000000 >> 0x1f)) =
         (short)(int)(*(float *)(param_1 + 0xc4) * 100.0);
    *(short *)(lVar17 + (lVar10 + 0x100000000 >> 0x1f)) =
         (short)(int)(*(float *)(param_1 + 200) * 100.0);
    *(short *)(lVar17 + (lVar10 + 0x200000000 >> 0x1f)) =
         (short)(int)(*(float *)(param_1 + 0xcc) * 100.0);
    *(short *)(lVar17 + (lVar10 + 0x300000000 >> 0x1f)) =
         (short)(int)(*(float *)(param_1 + 0xd0) * 100.0);
    *(short *)(lVar17 + (lVar10 + 0x400000000 >> 0x1f)) = (short)*(undefined4 *)(param_1 + 0xd4);
    *(short *)(lVar17 + (lVar10 + 0x500000000 >> 0x1f)) = (short)*(undefined4 *)(param_1 + 0xd8);
    *(short *)(lVar17 + (lVar10 + 0x600000000 >> 0x1f)) = (short)*(undefined4 *)(param_1 + 0xdc);
    *(short *)(lVar17 + (lVar10 + 0x700000000 >> 0x1f)) = (short)*(undefined4 *)(param_1 + 0xe0);
    if (-1 < (int)uVar18) goto LAB_00d49e58;
  }
LAB_00d49d94:
  uVar18 = (ulong)*(uint *)(param_1 + 0x70);
  if ((int)*(uint *)(param_1 + 0x70) < 0) {
    lVar17 = *(long *)(param_1 + 0x108);
    lVar14 = *(long *)(param_1 + 0x110) - lVar17;
    uVar18 = lVar14 >> 1;
    *(int *)(param_1 + 0x70) = (int)uVar18;
    if (uVar18 < 0xfffffffffffffff8) {
      std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x108),8);
      lVar17 = *(long *)(param_1 + 0x108);
      uVar18 = (ulong)*(uint *)(param_1 + 0x70);
    }
    else {
      *(ulong *)(param_1 + 0x110) = lVar17 + uVar18 * 2 + 0x10;
    }
    lVar10 = lVar14 * 0x80000000;
    *(undefined2 *)(lVar17 + (lVar14 * 0x80000000 >> 0x1f)) = 100;
    *(undefined2 *)(lVar17 + (lVar10 + 0x100000000 >> 0x1f)) = 100;
    *(undefined2 *)(lVar17 + (lVar10 + 0x200000000 >> 0x1f)) = 100;
    *(undefined2 *)(lVar17 + (lVar10 + 0x300000000 >> 0x1f)) = 100;
    *(undefined2 *)(lVar17 + (lVar10 + 0x400000000 >> 0x1f)) = 0;
    *(undefined2 *)(lVar17 + (lVar10 + 0x500000000 >> 0x1f)) = 0;
    *(undefined2 *)(lVar17 + (lVar10 + 0x600000000 >> 0x1f)) = 0;
    *(undefined2 *)(lVar17 + (lVar10 + 0x700000000 >> 0x1f)) = 0;
  }
LAB_00d49e58:
  lVar17 = *(long *)(param_1 + 0x138);
  lVar14 = *(long *)(param_1 + 0x140) - lVar17;
  if (lVar14 == -2) {
    *(long *)(param_1 + 0x140) = lVar17;
  }
  else {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
              ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x138),1);
    lVar17 = *(long *)(param_1 + 0x138);
  }
  *(short *)(lVar17 + (lVar14 >> 1) * 2) = (short)uVar18;
  return uVar5;
}

