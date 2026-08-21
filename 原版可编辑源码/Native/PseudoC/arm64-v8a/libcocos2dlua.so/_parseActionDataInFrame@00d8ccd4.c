
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
  long lVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  
  puVar3 = DataParser::EVENT;
  pcVar10 = DataParser::EVENT + -1;
  pcVar5 = pcVar10;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  piVar12 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar6 = (ulong)uVar2;
  piVar13 = piVar12 + uVar6 * 0xc;
  piVar11 = piVar12;
  if (uVar2 != 0) {
    uVar7 = (long)pcVar5 - (long)DataParser::EVENT;
    lVar9 = uVar6 * 0x30;
    piVar8 = piVar12;
    do {
      iVar4 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar4 == (int)uVar7) {
        piVar1 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar8;
        }
        piVar11 = piVar8;
        if ((piVar1 == (int *)puVar3) ||
           (iVar4 = memcmp(puVar3,piVar1,uVar7 & 0xffffffff), iVar4 == 0)) break;
      }
      lVar9 = lVar9 + -0x30;
      piVar8 = piVar8 + 0xc;
      piVar11 = piVar13;
    } while (lVar9 != 0);
  }
  if (piVar13 != piVar11) {
    do {
      pcVar10 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    if (uVar2 == 0) {
LAB_00d8ce2c:
      if (piVar12 == piVar13) goto LAB_00d8ce3c;
      piVar12 = piVar12 + 6;
    }
    else {
      lVar9 = uVar6 * 0x30;
      do {
        iVar4 = *piVar12;
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar12 + 0x15);
        }
        if (iVar4 == (int)((long)pcVar10 - (long)puVar3)) {
          piVar11 = *(int **)(piVar12 + 2);
          if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
            piVar11 = piVar12;
          }
          if ((piVar11 == (int *)puVar3) ||
             (iVar4 = memcmp(puVar3,piVar11,(long)pcVar10 - (long)puVar3 & 0xffffffff), iVar4 == 0))
          goto LAB_00d8ce2c;
        }
        lVar9 = lVar9 + -0x30;
        piVar12 = piVar12 + 0xc;
      } while (lVar9 != 0);
LAB_00d8ce3c:
      piVar12 = (int *)&rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::
                        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                        ::buffer;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
    _mergeActionFrame(this,piVar12,param_2,10,param_3,param_4);
  }
  puVar3 = DataParser::SOUND;
  pcVar10 = DataParser::SOUND + -1;
  pcVar5 = pcVar10;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  piVar12 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar6 = (ulong)uVar2;
  piVar13 = piVar12 + uVar6 * 0xc;
  piVar11 = piVar12;
  if (uVar2 != 0) {
    uVar7 = (long)pcVar5 - (long)DataParser::SOUND;
    lVar9 = uVar6 * 0x30;
    piVar8 = piVar12;
    do {
      iVar4 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar4 == (int)uVar7) {
        piVar1 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar8;
        }
        piVar11 = piVar8;
        if ((piVar1 == (int *)puVar3) ||
           (iVar4 = memcmp(puVar3,piVar1,uVar7 & 0xffffffff), iVar4 == 0)) break;
      }
      lVar9 = lVar9 + -0x30;
      piVar8 = piVar8 + 0xc;
      piVar11 = piVar13;
    } while (lVar9 != 0);
  }
  if (piVar13 != piVar11) {
    do {
      pcVar10 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    if (uVar2 == 0) {
LAB_00d8cf88:
      if (piVar12 == piVar13) goto LAB_00d8cf98;
      piVar12 = piVar12 + 6;
    }
    else {
      lVar9 = uVar6 * 0x30;
      do {
        iVar4 = *piVar12;
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar12 + 0x15);
        }
        if (iVar4 == (int)((long)pcVar10 - (long)puVar3)) {
          piVar11 = *(int **)(piVar12 + 2);
          if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
            piVar11 = piVar12;
          }
          if ((piVar11 == (int *)puVar3) ||
             (iVar4 = memcmp(puVar3,piVar11,(long)pcVar10 - (long)puVar3 & 0xffffffff), iVar4 == 0))
          goto LAB_00d8cf88;
        }
        lVar9 = lVar9 + -0x30;
        piVar12 = piVar12 + 0xc;
      } while (lVar9 != 0);
LAB_00d8cf98:
      piVar12 = (int *)&rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::
                        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                        ::buffer;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
    _mergeActionFrame(this,piVar12,param_2,0xb,param_3,param_4);
  }
  puVar3 = DataParser::ACTION;
  pcVar10 = DataParser::ACTION + -1;
  pcVar5 = pcVar10;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  piVar12 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar6 = (ulong)uVar2;
  piVar13 = piVar12 + uVar6 * 0xc;
  piVar11 = piVar12;
  if (uVar2 != 0) {
    uVar7 = (long)pcVar5 - (long)DataParser::ACTION;
    lVar9 = uVar6 * 0x30;
    piVar8 = piVar12;
    do {
      iVar4 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar4 == (int)uVar7) {
        piVar1 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar8;
        }
        piVar11 = piVar8;
        if ((piVar1 == (int *)puVar3) ||
           (iVar4 = memcmp(puVar3,piVar1,uVar7 & 0xffffffff), iVar4 == 0)) break;
      }
      lVar9 = lVar9 + -0x30;
      piVar8 = piVar8 + 0xc;
      piVar11 = piVar13;
    } while (lVar9 != 0);
  }
  if (piVar13 != piVar11) {
    do {
      pcVar10 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    if (uVar2 == 0) {
LAB_00d8d0e4:
      if (piVar12 == piVar13) goto LAB_00d8d0f4;
      piVar12 = piVar12 + 6;
    }
    else {
      lVar9 = uVar6 * 0x30;
      do {
        iVar4 = *piVar12;
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar12 + 0x15);
        }
        if (iVar4 == (int)((long)pcVar10 - (long)puVar3)) {
          piVar11 = *(int **)(piVar12 + 2);
          if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
            piVar11 = piVar12;
          }
          if ((piVar11 == (int *)puVar3) ||
             (iVar4 = memcmp(puVar3,piVar11,(long)pcVar10 - (long)puVar3 & 0xffffffff), iVar4 == 0))
          goto LAB_00d8d0e4;
        }
        lVar9 = lVar9 + -0x30;
        piVar12 = piVar12 + 0xc;
      } while (lVar9 != 0);
LAB_00d8d0f4:
      piVar12 = (int *)&rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::
                        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                        ::buffer;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
    _mergeActionFrame(this,piVar12,param_2,0,param_3,param_4);
  }
  puVar3 = DataParser::EVENTS;
  pcVar10 = DataParser::EVENTS + -1;
  pcVar5 = pcVar10;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  piVar12 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar6 = (ulong)uVar2;
  piVar13 = piVar12 + uVar6 * 0xc;
  piVar11 = piVar12;
  if (uVar2 != 0) {
    uVar7 = (long)pcVar5 - (long)DataParser::EVENTS;
    lVar9 = uVar6 * 0x30;
    piVar8 = piVar12;
    do {
      iVar4 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar4 == (int)uVar7) {
        piVar1 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar8;
        }
        piVar11 = piVar8;
        if ((piVar1 == (int *)puVar3) ||
           (iVar4 = memcmp(puVar3,piVar1,uVar7 & 0xffffffff), iVar4 == 0)) break;
      }
      lVar9 = lVar9 + -0x30;
      piVar8 = piVar8 + 0xc;
      piVar11 = piVar13;
    } while (lVar9 != 0);
  }
  if (piVar13 != piVar11) {
    do {
      pcVar10 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    if (uVar2 == 0) {
LAB_00d8d240:
      if (piVar12 == piVar13) goto LAB_00d8d250;
      piVar12 = piVar12 + 6;
    }
    else {
                    /* try { // try from 00d8d1e0 to 00e8d49b has its CatchHandler @ 00d8d1e0
                       catch() { ... } // from try @ 00d8d1e0 with catch @ 00d8d1e0
                       catch() { ... } // from try @ 00d8da78 with catch @ 00d8d1e0 */
      lVar9 = uVar6 * 0x30;
      do {
        iVar4 = *piVar12;
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar12 + 0x15);
        }
        if (iVar4 == (int)((long)pcVar10 - (long)puVar3)) {
          piVar11 = *(int **)(piVar12 + 2);
          if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
            piVar11 = piVar12;
          }
          if ((piVar11 == (int *)puVar3) ||
             (iVar4 = memcmp(puVar3,piVar11,(long)pcVar10 - (long)puVar3 & 0xffffffff), iVar4 == 0))
          goto LAB_00d8d240;
        }
        lVar9 = lVar9 + -0x30;
        piVar12 = piVar12 + 0xc;
      } while (lVar9 != 0);
LAB_00d8d250:
      piVar12 = (int *)&rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::
                        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                        ::buffer;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
    _mergeActionFrame(this,piVar12,param_2,10,param_3,param_4);
  }
  puVar3 = DataParser::ACTIONS;
  pcVar10 = DataParser::ACTIONS + -1;
  pcVar5 = pcVar10;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  piVar11 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar6 = (ulong)uVar2;
  piVar13 = piVar11 + uVar6 * 0xc;
  piVar12 = piVar11;
  if (uVar2 != 0) {
    uVar7 = (long)pcVar5 - (long)DataParser::ACTIONS;
    lVar9 = uVar6 * 0x30;
    do {
      iVar4 = *piVar12;
      if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar12 + 0x15);
      }
      if (iVar4 == (int)uVar7) {
        piVar8 = *(int **)(piVar12 + 2);
        if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
          piVar8 = piVar12;
        }
        if ((piVar8 == (int *)puVar3) ||
           (iVar4 = memcmp(puVar3,piVar8,uVar7 & 0xffffffff), iVar4 == 0)) break;
      }
      lVar9 = lVar9 + -0x30;
      piVar12 = piVar12 + 0xc;
      if (lVar9 == 0) {
        return;
      }
    } while( true );
  }
  if (piVar13 == piVar12) {
    return;
  }
  do {
    pcVar10 = pcVar10 + 1;
  } while (*pcVar10 != '\0');
  if (uVar2 == 0) {
LAB_00d8d3a4:
    if (piVar11 != piVar13) {
      piVar11 = piVar11 + 6;
      goto LAB_00d8d3e4;
    }
  }
  else {
    lVar9 = uVar6 * 0x30;
    do {
      iVar4 = *piVar11;
      if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar11 + 0x15);
      }
      if (iVar4 == (int)((long)pcVar10 - (long)puVar3)) {
        piVar12 = *(int **)(piVar11 + 2);
        if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
          piVar12 = piVar11;
        }
        if ((piVar12 == (int *)puVar3) ||
           (iVar4 = memcmp(puVar3,piVar12,(long)pcVar10 - (long)puVar3 & 0xffffffff), iVar4 == 0))
        goto LAB_00d8d3a4;
      }
      lVar9 = lVar9 + -0x30;
      piVar11 = piVar11 + 0xc;
    } while (lVar9 != 0);
  }
  piVar11 = (int *)&rapidjson::
                    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    ::
                    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                    ::buffer;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00d8d3e4:
  _mergeActionFrame(this,piVar11,param_2,0,param_3,param_4);
  return;
}

