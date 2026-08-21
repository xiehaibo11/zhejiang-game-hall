
/* dragonBones::JSONDataParser::_parseActionDataInFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int,
   dragonBones::BoneData*, dragonBones::SlotData*) */

void __thiscall
dragonBones::JSONDataParser::_parseActionDataInFrame
          (JSONDataParser *this,GenericValue *param_1,uint param_2,BoneData *param_3,
          SlotData *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  char *pcVar13;
  
  puVar3 = DataParser::EVENT;
  pcVar13 = DataParser::EVENT + -1;
  pcVar5 = pcVar13;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  piVar8 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar6 = (ulong)uVar2;
  piVar12 = piVar8 + uVar6 * 0xc;
  piVar10 = piVar8;
  if (uVar2 != 0) {
    uVar7 = (long)pcVar5 - (long)DataParser::EVENT;
    lVar11 = uVar6 * 0x30;
    piVar9 = piVar8;
    do {
      iVar4 = *piVar9;
      if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
      }
      if (iVar4 == (int)uVar7) {
        piVar1 = *(int **)(piVar9 + 2);
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar9;
        }
        piVar10 = piVar9;
        if ((piVar1 == (int *)puVar3) ||
           (iVar4 = memcmp(puVar3,piVar1,uVar7 & 0xffffffff), iVar4 == 0)) break;
      }
      lVar11 = lVar11 + -0x30;
      piVar9 = piVar9 + 0xc;
      piVar10 = piVar12;
    } while (lVar11 != 0);
  }
  if (piVar12 != piVar10) {
    do {
      pcVar13 = pcVar13 + 1;
    } while (*pcVar13 != '\0');
    if (uVar2 == 0) {
LAB_00d3f214:
      if (piVar8 == piVar12) goto LAB_00d3f224;
      piVar8 = piVar8 + 6;
    }
    else {
      lVar11 = uVar6 * 0x30;
      do {
        iVar4 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar4 == (int)((long)pcVar13 - (long)puVar3)) {
          piVar10 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar10 = piVar8;
          }
          if ((piVar10 == (int *)puVar3) ||
             (iVar4 = memcmp(puVar3,piVar10,(long)pcVar13 - (long)puVar3 & 0xffffffff), iVar4 == 0))
          goto LAB_00d3f214;
        }
        lVar11 = lVar11 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar11 != 0);
LAB_00d3f224:
      piVar8 = (int *)&rapidjson::
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
    _mergeActionFrame(this,piVar8,param_2,10,param_3,param_4);
  }
  puVar3 = DataParser::SOUND;
  pcVar13 = DataParser::SOUND + -1;
  pcVar5 = pcVar13;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  piVar8 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar6 = (ulong)uVar2;
  piVar12 = piVar8 + uVar6 * 0xc;
  piVar10 = piVar8;
  if (uVar2 != 0) {
    uVar7 = (long)pcVar5 - (long)DataParser::SOUND;
    lVar11 = uVar6 * 0x30;
    piVar9 = piVar8;
    do {
      iVar4 = *piVar9;
      if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
      }
      if (iVar4 == (int)uVar7) {
        piVar1 = *(int **)(piVar9 + 2);
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar9;
        }
        piVar10 = piVar9;
        if ((piVar1 == (int *)puVar3) ||
           (iVar4 = memcmp(puVar3,piVar1,uVar7 & 0xffffffff), iVar4 == 0)) break;
      }
      lVar11 = lVar11 + -0x30;
      piVar9 = piVar9 + 0xc;
      piVar10 = piVar12;
    } while (lVar11 != 0);
  }
  if (piVar12 != piVar10) {
    do {
      pcVar13 = pcVar13 + 1;
    } while (*pcVar13 != '\0');
    if (uVar2 == 0) {
LAB_00d3f368:
      if (piVar8 == piVar12) goto LAB_00d3f378;
      piVar8 = piVar8 + 6;
    }
    else {
      lVar11 = uVar6 * 0x30;
      do {
        iVar4 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar4 == (int)((long)pcVar13 - (long)puVar3)) {
          piVar10 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar10 = piVar8;
          }
          if ((piVar10 == (int *)puVar3) ||
             (iVar4 = memcmp(puVar3,piVar10,(long)pcVar13 - (long)puVar3 & 0xffffffff), iVar4 == 0))
          goto LAB_00d3f368;
        }
        lVar11 = lVar11 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar11 != 0);
LAB_00d3f378:
      piVar8 = (int *)&rapidjson::
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
    _mergeActionFrame(this,piVar8,param_2,0xb,param_3,param_4);
  }
  puVar3 = DataParser::ACTION;
  pcVar13 = DataParser::ACTION + -1;
  pcVar5 = pcVar13;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  piVar8 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar6 = (ulong)uVar2;
  piVar12 = piVar8 + uVar6 * 0xc;
  piVar10 = piVar8;
  if (uVar2 != 0) {
    uVar7 = (long)pcVar5 - (long)DataParser::ACTION;
    lVar11 = uVar6 * 0x30;
    piVar9 = piVar8;
    do {
      iVar4 = *piVar9;
      if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
      }
      if (iVar4 == (int)uVar7) {
        piVar1 = *(int **)(piVar9 + 2);
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar9;
        }
        piVar10 = piVar9;
        if ((piVar1 == (int *)puVar3) ||
           (iVar4 = memcmp(puVar3,piVar1,uVar7 & 0xffffffff), iVar4 == 0)) break;
      }
      lVar11 = lVar11 + -0x30;
      piVar9 = piVar9 + 0xc;
      piVar10 = piVar12;
    } while (lVar11 != 0);
  }
  if (piVar12 != piVar10) {
    do {
      pcVar13 = pcVar13 + 1;
    } while (*pcVar13 != '\0');
    if (uVar2 == 0) {
LAB_00d3f4bc:
      if (piVar8 == piVar12) goto LAB_00d3f4cc;
      piVar8 = piVar8 + 6;
    }
    else {
      lVar11 = uVar6 * 0x30;
      do {
        iVar4 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar4 == (int)((long)pcVar13 - (long)puVar3)) {
          piVar10 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar10 = piVar8;
          }
          if ((piVar10 == (int *)puVar3) ||
             (iVar4 = memcmp(puVar3,piVar10,(long)pcVar13 - (long)puVar3 & 0xffffffff), iVar4 == 0))
          goto LAB_00d3f4bc;
        }
        lVar11 = lVar11 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar11 != 0);
LAB_00d3f4cc:
      piVar8 = (int *)&rapidjson::
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
    _mergeActionFrame(this,piVar8,param_2,0,param_3,param_4);
  }
  puVar3 = DataParser::EVENTS;
  pcVar13 = DataParser::EVENTS + -1;
  pcVar5 = pcVar13;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  piVar8 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar6 = (ulong)uVar2;
  piVar12 = piVar8 + uVar6 * 0xc;
  piVar10 = piVar8;
  if (uVar2 != 0) {
    uVar7 = (long)pcVar5 - (long)DataParser::EVENTS;
    lVar11 = uVar6 * 0x30;
    piVar9 = piVar8;
    do {
      iVar4 = *piVar9;
      if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
      }
      if (iVar4 == (int)uVar7) {
        piVar1 = *(int **)(piVar9 + 2);
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar9;
        }
        piVar10 = piVar9;
        if ((piVar1 == (int *)puVar3) ||
           (iVar4 = memcmp(puVar3,piVar1,uVar7 & 0xffffffff), iVar4 == 0)) break;
      }
      lVar11 = lVar11 + -0x30;
      piVar9 = piVar9 + 0xc;
      piVar10 = piVar12;
    } while (lVar11 != 0);
  }
  if (piVar12 != piVar10) {
    do {
      pcVar13 = pcVar13 + 1;
    } while (*pcVar13 != '\0');
    if (uVar2 == 0) {
LAB_00d3f610:
      if (piVar8 == piVar12) goto LAB_00d3f620;
      piVar8 = piVar8 + 6;
    }
    else {
      lVar11 = uVar6 * 0x30;
      do {
        iVar4 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar4 == (int)((long)pcVar13 - (long)puVar3)) {
          piVar10 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar10 = piVar8;
          }
          if ((piVar10 == (int *)puVar3) ||
             (iVar4 = memcmp(puVar3,piVar10,(long)pcVar13 - (long)puVar3 & 0xffffffff), iVar4 == 0))
          goto LAB_00d3f610;
        }
        lVar11 = lVar11 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar11 != 0);
LAB_00d3f620:
      piVar8 = (int *)&rapidjson::
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
    _mergeActionFrame(this,piVar8,param_2,10,param_3,param_4);
  }
  puVar3 = DataParser::ACTIONS;
  pcVar13 = DataParser::ACTIONS + -1;
  pcVar5 = pcVar13;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  piVar8 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar6 = (ulong)uVar2;
  piVar12 = piVar8 + uVar6 * 0xc;
  piVar10 = piVar8;
  if (uVar2 != 0) {
    uVar7 = (long)pcVar5 - (long)DataParser::ACTIONS;
    lVar11 = uVar6 * 0x30;
    piVar9 = piVar8;
    do {
      iVar4 = *piVar9;
      if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
      }
      if (iVar4 == (int)uVar7) {
        piVar1 = *(int **)(piVar9 + 2);
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar9;
        }
        piVar10 = piVar9;
        if ((piVar1 == (int *)puVar3) ||
           (iVar4 = memcmp(puVar3,piVar1,uVar7 & 0xffffffff), iVar4 == 0)) break;
      }
      lVar11 = lVar11 + -0x30;
      piVar9 = piVar9 + 0xc;
      piVar10 = piVar12;
    } while (lVar11 != 0);
  }
  if (piVar12 == piVar10) {
    return;
  }
  do {
    pcVar13 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  if (uVar2 == 0) {
LAB_00d3f764:
    if (piVar8 != piVar12) {
      piVar8 = piVar8 + 6;
      goto LAB_00d3f7a4;
    }
  }
  else {
    lVar11 = uVar6 * 0x30;
    do {
      iVar4 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar4 == (int)((long)pcVar13 - (long)puVar3)) {
        piVar10 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar10 = piVar8;
        }
        if ((piVar10 == (int *)puVar3) ||
           (iVar4 = memcmp(puVar3,piVar10,(long)pcVar13 - (long)puVar3 & 0xffffffff), iVar4 == 0))
        goto LAB_00d3f764;
      }
      lVar11 = lVar11 + -0x30;
      piVar8 = piVar8 + 0xc;
    } while (lVar11 != 0);
  }
  piVar8 = (int *)&rapidjson::
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
LAB_00d3f7a4:
  _mergeActionFrame(this,piVar8,param_2,0,param_3,param_4);
  return;
}

