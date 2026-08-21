
/* cocostudio::DictionaryHelper::getIntValueFromArray_json(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, int, int) */

ulong __thiscall
cocostudio::DictionaryHelper::getIntValueFromArray_json
          (DictionaryHelper *this,GenericValue *param_1,char *param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  GenericValue *extraout_x1;
  GenericValue *extraout_x1_00;
  GenericValue *extraout_x1_01;
  GenericValue *extraout_x1_02;
  GenericValue *extraout_x1_03;
  GenericValue *extraout_x1_04;
  GenericValue *extraout_x1_05;
  GenericValue *extraout_x1_06;
  GenericValue *pGVar6;
  GenericValue *extraout_x1_07;
  GenericValue *extraout_x1_08;
  GenericValue *extraout_x1_09;
  GenericValue *pGVar7;
  ulong uVar8;
  char *pcVar9;
  uint *puVar10;
  long lVar11;
  GenericValue *pGVar12;
  GenericValue *pGVar13;
  GenericValue *pGVar14;
  ulong uVar15;
  GenericValue *pGVar16;
  GenericValue *pGVar17;
  char *pcVar18;
  GenericValue *pGVar19;
  GenericValue *pGVar20;
  ulong uVar21;
  
  uVar5 = (ulong)(uint)param_4;
  uVar15 = (ulong)(uint)param_3;
  if (*(short *)(param_1 + 0x16) == 0) {
    return uVar5;
  }
  pcVar18 = param_2 + -1;
  pcVar9 = pcVar18;
  do {
    pcVar9 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  pGVar13 = *(GenericValue **)(param_1 + 8);
  uVar3 = *(uint *)param_1;
  uVar21 = (ulong)uVar3;
  pGVar12 = pGVar13 + uVar21 * 0x30;
  pGVar19 = param_1;
  pGVar6 = (GenericValue *)param_2;
  uVar8 = uVar5;
  pGVar17 = pGVar13;
  if (uVar3 != 0) {
    pGVar16 = (GenericValue *)((long)pcVar9 - (long)param_2 & 0xffffffff);
    lVar11 = uVar21 * 0x30;
    do {
      uVar2 = *(uint *)pGVar17;
      if ((*(ushort *)(pGVar17 + 0x16) & 0x1000) != 0) {
        uVar2 = 0x15 - (int)(char)pGVar17[0x15];
      }
      if (uVar2 == (uint)((long)pcVar9 - (long)param_2)) {
        pGVar19 = *(GenericValue **)(pGVar17 + 8);
        if ((*(ushort *)(pGVar17 + 0x16) & 0x1000) != 0) {
          pGVar19 = pGVar17;
        }
        if (pGVar19 == (GenericValue *)param_2) goto LAB_00c5dffc;
        pGVar6 = pGVar16;
        uVar2 = memcmp(param_2,pGVar19,(size_t)pGVar16);
        uVar5 = (ulong)uVar2;
        pGVar19 = extraout_x1;
        if (uVar2 == 0) goto LAB_00c5dffc;
      }
      lVar11 = lVar11 + -0x30;
      pGVar17 = pGVar17 + 0x30;
    } while (lVar11 != 0);
LAB_00c5e128:
    return (ulong)(uint)param_4;
  }
LAB_00c5dffc:
  pcVar9 = pcVar18;
  if (pGVar12 == pGVar17) goto LAB_00c5e128;
  do {
    pcVar9 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  if (uVar3 != 0) {
    pGVar17 = (GenericValue *)((long)pcVar9 - (long)param_2 & 0xffffffff);
    lVar11 = uVar21 * 0x30;
    do {
      uVar3 = *(uint *)pGVar13;
      if ((*(ushort *)(pGVar13 + 0x16) & 0x1000) != 0) {
        uVar3 = 0x15 - (int)(char)pGVar13[0x15];
      }
      if (uVar3 == (uint)((long)pcVar9 - (long)param_2)) {
        pGVar19 = *(GenericValue **)(pGVar13 + 8);
        if ((*(ushort *)(pGVar13 + 0x16) & 0x1000) != 0) {
          pGVar19 = pGVar13;
        }
        if (pGVar19 == (GenericValue *)param_2) goto LAB_00c5e08c;
        pGVar6 = pGVar17;
        uVar3 = memcmp(param_2,pGVar19,(size_t)pGVar17);
        uVar5 = (ulong)uVar3;
        pGVar19 = extraout_x1_00;
        if (uVar3 == 0) goto LAB_00c5e08c;
      }
      lVar11 = lVar11 + -0x30;
      pGVar13 = pGVar13 + 0x30;
    } while (lVar11 != 0);
LAB_00c5e130:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    return (ulong)(uint)param_4;
  }
LAB_00c5e08c:
  if (pGVar13 == pGVar12) goto LAB_00c5e130;
  pcVar9 = pcVar18;
  if (*(short *)(pGVar13 + 0x2e) == 0) goto LAB_00c5e128;
  do {
    pcVar9 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  uVar3 = *(uint *)param_1;
  pGVar13 = *(GenericValue **)(param_1 + 8);
  pGVar17 = pGVar13;
  if (uVar3 == 0) {
LAB_00c5e14c:
    if (pGVar17 != pGVar13 + (ulong)uVar3 * 0x30) {
      uVar5 = (ulong)(uint)param_4;
      if (*(short *)(*(long *)(pGVar17 + 0x20) + (ulong)(uint)param_3 * 0x18 + 0x16) == 0) {
        return uVar5;
      }
      do {
        pcVar18 = pcVar18 + 1;
      } while (*pcVar18 != '\0');
      uVar3 = *(uint *)param_1;
      pGVar13 = *(GenericValue **)(param_1 + 8);
      pGVar17 = pGVar13;
      if (uVar3 == 0) {
LAB_00c5e210:
        if (pGVar17 != pGVar13 + (ulong)uVar3 * 0x30) {
          return (ulong)*(uint *)(*(long *)(pGVar17 + 0x20) + (ulong)(uint)param_3 * 0x18);
        }
      }
      else {
        pGVar12 = (GenericValue *)((long)pcVar18 - (long)param_2 & 0xffffffff);
        lVar11 = (ulong)uVar3 * 0x30;
        do {
          uVar2 = *(uint *)pGVar17;
          if ((*(ushort *)(pGVar17 + 0x16) & 0x1000) != 0) {
            uVar2 = 0x15 - (int)(char)pGVar17[0x15];
          }
          if (uVar2 == (uint)((long)pcVar18 - (long)param_2)) {
            pGVar19 = *(GenericValue **)(pGVar17 + 8);
            if ((*(ushort *)(pGVar17 + 0x16) & 0x1000) != 0) {
              pGVar19 = pGVar17;
            }
            if (pGVar19 == (GenericValue *)param_2) goto LAB_00c5e210;
            pGVar6 = pGVar12;
            uVar2 = memcmp(param_2,pGVar19,(size_t)pGVar12);
            uVar5 = (ulong)uVar2;
            pGVar19 = extraout_x1_02;
            if (uVar2 == 0) goto LAB_00c5e210;
          }
          lVar11 = lVar11 + -0x30;
          pGVar17 = pGVar17 + 0x30;
        } while (lVar11 != 0);
      }
    }
  }
  else {
    pGVar12 = (GenericValue *)((long)pcVar9 - (long)param_2 & 0xffffffff);
    lVar11 = (ulong)uVar3 * 0x30;
    do {
      uVar2 = *(uint *)pGVar17;
      if ((*(ushort *)(pGVar17 + 0x16) & 0x1000) != 0) {
        uVar2 = 0x15 - (int)(char)pGVar17[0x15];
      }
      if (uVar2 == (uint)((long)pcVar9 - (long)param_2)) {
        pGVar19 = *(GenericValue **)(pGVar17 + 8);
        if ((*(ushort *)(pGVar17 + 0x16) & 0x1000) != 0) {
          pGVar19 = pGVar17;
        }
        if (pGVar19 == (GenericValue *)param_2) goto LAB_00c5e14c;
        pGVar6 = pGVar12;
        uVar2 = memcmp(param_2,pGVar19,(size_t)pGVar12);
        uVar5 = (ulong)uVar2;
        pGVar19 = extraout_x1_01;
        if (uVar2 == 0) goto LAB_00c5e14c;
      }
      lVar11 = lVar11 + -0x30;
      pGVar17 = pGVar17 + 0x30;
    } while (lVar11 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
  if (*(short *)(pGVar19 + 0x16) == 0) {
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    return uVar5;
  }
  pGVar13 = pGVar6 + -1;
  pGVar17 = pGVar13;
  do {
    pGVar17 = pGVar17 + 1;
  } while (*pGVar17 != (GenericValue)0x0);
  uVar3 = *(uint *)pGVar19;
  pGVar20 = *(GenericValue **)(pGVar19 + 8);
  pGVar16 = pGVar19;
  pGVar7 = pGVar6;
  uVar21 = uVar15;
  pGVar12 = pGVar20;
  if (uVar3 != 0) {
    pGVar14 = (GenericValue *)((long)pGVar17 - (long)pGVar6 & 0xffffffff);
    lVar11 = (ulong)uVar3 * 0x30;
    do {
      uVar2 = *(uint *)pGVar12;
      if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
        uVar2 = 0x15 - (int)(char)pGVar12[0x15];
      }
      if (uVar2 == (uint)((long)pGVar17 - (long)pGVar6)) {
        pGVar16 = *(GenericValue **)(pGVar12 + 8);
        if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
          pGVar16 = pGVar12;
        }
        if (pGVar16 == pGVar6) break;
        pGVar7 = pGVar14;
        uVar2 = memcmp(pGVar6,pGVar16,(size_t)pGVar14);
        uVar5 = (ulong)uVar2;
        pGVar16 = extraout_x1_03;
        if (uVar2 == 0) break;
      }
      lVar11 = lVar11 + -0x30;
      pGVar12 = pGVar12 + 0x30;
      if (lVar11 == 0) {
        DAT_01785a60 = 0;
        DAT_01785a58 = 0;
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        return uVar5;
      }
    } while( true );
  }
  if (pGVar12 == pGVar20 + (ulong)uVar3 * 0x30) {
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    return uVar5;
  }
  pGVar17 = pGVar13;
  if (*(short *)(pGVar12 + 0x2e) == 0) {
    return uVar5;
  }
  do {
    pGVar17 = pGVar17 + 1;
  } while (*pGVar17 != (GenericValue)0x0);
  uVar3 = *(uint *)pGVar19;
  pGVar20 = *(GenericValue **)(pGVar19 + 8);
  pGVar12 = pGVar20;
  if (uVar3 == 0) {
LAB_00c5e3e0:
    if (pGVar12 != pGVar20 + (ulong)uVar3 * 0x30) {
      if (*(short *)(*(long *)(pGVar12 + 0x20) + (uVar15 & 0xffffffff) * 0x18 + 0x16) == 0) {
        return uVar5;
      }
      do {
        pGVar13 = pGVar13 + 1;
      } while (*pGVar13 != (GenericValue)0x0);
      uVar3 = *(uint *)pGVar19;
      pGVar19 = *(GenericValue **)(pGVar19 + 8);
      pGVar17 = pGVar19;
      if (uVar3 == 0) {
LAB_00c5e498:
        if (pGVar17 != pGVar19 + (ulong)uVar3 * 0x30) {
          lVar11 = *(long *)(pGVar17 + 0x20);
          goto LAB_00c5e4c4;
        }
      }
      else {
        lVar11 = (ulong)uVar3 * 0x30;
        do {
          uVar2 = *(uint *)pGVar17;
          if ((*(ushort *)(pGVar17 + 0x16) & 0x1000) != 0) {
            uVar2 = 0x15 - (int)(char)pGVar17[0x15];
          }
          if (uVar2 == (uint)((long)pGVar13 - (long)pGVar6)) {
            pGVar12 = *(GenericValue **)(pGVar17 + 8);
            if ((*(ushort *)(pGVar17 + 0x16) & 0x1000) != 0) {
              pGVar12 = pGVar17;
            }
            if (pGVar12 == pGVar6) goto LAB_00c5e498;
            uVar2 = memcmp(pGVar6,pGVar12,(long)pGVar13 - (long)pGVar6 & 0xffffffff);
            uVar5 = (ulong)uVar2;
            if (uVar2 == 0) goto LAB_00c5e498;
          }
          lVar11 = lVar11 + -0x30;
          pGVar17 = pGVar17 + 0x30;
        } while (lVar11 != 0);
      }
      lVar11 = 0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
LAB_00c5e4c4:
      puVar10 = (uint *)(lVar11 + (uVar15 & 0xffffffff) * 0x18);
      uVar1 = *(ushort *)((long)puVar10 + 0x16);
      if ((uVar1 >> 9 & 1) != 0) {
        return uVar5;
      }
      if ((uVar1 >> 5 & 1) == 0) {
        if ((uVar1 >> 6 & 1) != 0) {
          NEON_ucvtf((ulong)*puVar10);
          return uVar5;
        }
        return uVar5;
      }
      return uVar5;
    }
  }
  else {
    pGVar14 = (GenericValue *)((long)pGVar17 - (long)pGVar6 & 0xffffffff);
    lVar11 = (ulong)uVar3 * 0x30;
    do {
      uVar2 = *(uint *)pGVar12;
      if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
        uVar2 = 0x15 - (int)(char)pGVar12[0x15];
      }
      if (uVar2 == (uint)((long)pGVar17 - (long)pGVar6)) {
        pGVar16 = *(GenericValue **)(pGVar12 + 8);
        if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
          pGVar16 = pGVar12;
        }
        if (pGVar16 == pGVar6) goto LAB_00c5e3e0;
        pGVar7 = pGVar14;
        uVar2 = memcmp(pGVar6,pGVar16,(size_t)pGVar14);
        uVar5 = (ulong)uVar2;
        pGVar16 = extraout_x1_04;
        if (uVar2 == 0) goto LAB_00c5e3e0;
      }
      lVar11 = lVar11 + -0x30;
      pGVar12 = pGVar12 + 0x30;
    } while (lVar11 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
  uVar5 = uVar8;
  if (*(short *)(pGVar16 + 0x16) == 0) goto LAB_00c5e7b4;
  pGVar13 = pGVar7 + -1;
  pGVar17 = pGVar13;
  do {
    pGVar17 = pGVar17 + 1;
  } while (*pGVar17 != (GenericValue)0x0);
  uVar3 = *(uint *)pGVar16;
  pGVar20 = *(GenericValue **)(pGVar16 + 8);
  pGVar6 = pGVar16;
  pGVar12 = pGVar7;
  uVar15 = uVar21;
  pGVar19 = pGVar20;
  if (uVar3 == 0) {
LAB_00c5e610:
    if (pGVar19 != pGVar20 + (ulong)uVar3 * 0x30) {
      pGVar17 = pGVar13;
      if (*(short *)(pGVar19 + 0x2e) == 0) {
        uVar5 = uVar8 & 0xffffffff;
        goto LAB_00c5e7b4;
      }
      do {
        pGVar17 = pGVar17 + 1;
      } while (*pGVar17 != (GenericValue)0x0);
      uVar3 = *(uint *)pGVar16;
      pGVar20 = *(GenericValue **)(pGVar16 + 8);
      pGVar19 = pGVar20;
      if (uVar3 == 0) {
LAB_00c5e6d4:
        if (pGVar19 != pGVar20 + (ulong)uVar3 * 0x30) {
          uVar5 = uVar8 & 0xffffffff;
          if (*(short *)(*(long *)(pGVar19 + 0x20) + (uVar21 & 0xffffffff) * 0x18 + 0x16) == 0)
          goto LAB_00c5e7b4;
          do {
            pGVar13 = pGVar13 + 1;
          } while (*pGVar13 != (GenericValue)0x0);
          uVar3 = *(uint *)pGVar16;
          pGVar19 = *(GenericValue **)(pGVar16 + 8);
          pGVar17 = pGVar19;
          if (uVar3 == 0) {
LAB_00c5e78c:
            if (pGVar17 != pGVar19 + (ulong)uVar3 * 0x30) {
              uVar5 = (ulong)(*(short *)(*(long *)(pGVar17 + 0x20) + (uVar21 & 0xffffffff) * 0x18 +
                                        0x16) == 10);
              goto LAB_00c5e7b4;
            }
          }
          else {
            pGVar16 = (GenericValue *)((long)pGVar13 - (long)pGVar7 & 0xffffffff);
            lVar11 = (ulong)uVar3 * 0x30;
            do {
              uVar2 = *(uint *)pGVar17;
              if ((*(ushort *)(pGVar17 + 0x16) & 0x1000) != 0) {
                uVar2 = 0x15 - (int)(char)pGVar17[0x15];
              }
              if (uVar2 == (uint)((long)pGVar13 - (long)pGVar7)) {
                pGVar6 = *(GenericValue **)(pGVar17 + 8);
                if ((*(ushort *)(pGVar17 + 0x16) & 0x1000) != 0) {
                  pGVar6 = pGVar17;
                }
                if ((pGVar6 == pGVar7) ||
                   (pGVar12 = pGVar16, iVar4 = memcmp(pGVar7,pGVar6,(size_t)pGVar16),
                   pGVar6 = extraout_x1_07, iVar4 == 0)) goto LAB_00c5e78c;
              }
              lVar11 = lVar11 + -0x30;
              pGVar17 = pGVar17 + 0x30;
            } while (lVar11 != 0);
          }
        }
      }
      else {
        pGVar14 = (GenericValue *)((long)pGVar17 - (long)pGVar7 & 0xffffffff);
        lVar11 = (ulong)uVar3 * 0x30;
        do {
          uVar2 = *(uint *)pGVar19;
          if ((*(ushort *)(pGVar19 + 0x16) & 0x1000) != 0) {
            uVar2 = 0x15 - (int)(char)pGVar19[0x15];
          }
          if (uVar2 == (uint)((long)pGVar17 - (long)pGVar7)) {
            pGVar6 = *(GenericValue **)(pGVar19 + 8);
            if ((*(ushort *)(pGVar19 + 0x16) & 0x1000) != 0) {
              pGVar6 = pGVar19;
            }
            if ((pGVar6 == pGVar7) ||
               (pGVar12 = pGVar14, iVar4 = memcmp(pGVar7,pGVar6,(size_t)pGVar14),
               pGVar6 = extraout_x1_06, iVar4 == 0)) goto LAB_00c5e6d4;
          }
          lVar11 = lVar11 + -0x30;
          pGVar19 = pGVar19 + 0x30;
        } while (lVar11 != 0);
      }
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      if (*(short *)(pGVar6 + 0x16) == 0) {
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
        return uVar5;
      }
      pGVar13 = pGVar12 + -1;
      pGVar17 = pGVar13;
      do {
        pGVar17 = pGVar17 + 1;
      } while (*pGVar17 != (GenericValue)0x0);
      uVar3 = *(uint *)pGVar6;
      pGVar20 = *(GenericValue **)(pGVar6 + 8);
      pGVar16 = pGVar6;
      pGVar7 = pGVar12;
      uVar8 = uVar15;
      pGVar19 = pGVar20;
      if (uVar3 != 0) {
        pGVar14 = (GenericValue *)((long)pGVar17 - (long)pGVar12 & 0xffffffff);
        lVar11 = (ulong)uVar3 * 0x30;
        do {
          uVar2 = *(uint *)pGVar19;
          if ((*(ushort *)(pGVar19 + 0x16) & 0x1000) != 0) {
            uVar2 = 0x15 - (int)(char)pGVar19[0x15];
          }
          if (uVar2 == (uint)((long)pGVar17 - (long)pGVar12)) {
            pGVar16 = *(GenericValue **)(pGVar19 + 8);
            if ((*(ushort *)(pGVar19 + 0x16) & 0x1000) != 0) {
              pGVar16 = pGVar19;
            }
            if ((pGVar16 == pGVar12) ||
               (pGVar7 = pGVar14, iVar4 = memcmp(pGVar12,pGVar16,(size_t)pGVar14),
               pGVar16 = extraout_x1_08, iVar4 == 0)) break;
          }
          lVar11 = lVar11 + -0x30;
          pGVar19 = pGVar19 + 0x30;
          if (lVar11 == 0) {
            DAT_01785a60 = 0;
            DAT_01785a58 = 0;
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            return uVar5;
          }
        } while( true );
      }
      if (pGVar19 == pGVar20 + (ulong)uVar3 * 0x30) {
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
        return uVar5;
      }
      pGVar17 = pGVar13;
      if (*(short *)(pGVar19 + 0x2e) == 0) {
        return uVar5;
      }
      do {
        pGVar17 = pGVar17 + 1;
      } while (*pGVar17 != (GenericValue)0x0);
      uVar3 = *(uint *)pGVar6;
      pGVar20 = *(GenericValue **)(pGVar6 + 8);
      pGVar19 = pGVar20;
      if (uVar3 == 0) {
LAB_00c5e978:
        if (pGVar19 != pGVar20 + (ulong)uVar3 * 0x30) {
          if (*(short *)(*(long *)(pGVar19 + 0x20) + (uVar15 & 0xffffffff) * 0x18 + 0x16) == 0) {
            return uVar5;
          }
          uVar15 = uVar15 & 0xffffffff;
          do {
            pGVar13 = pGVar13 + 1;
          } while (*pGVar13 != (GenericValue)0x0);
          uVar3 = *(uint *)pGVar6;
          pGVar19 = *(GenericValue **)(pGVar6 + 8);
          pGVar17 = pGVar19;
          if (uVar3 == 0) {
LAB_00c5ea38:
            if (pGVar17 != pGVar19 + (ulong)uVar3 * 0x30) {
              lVar11 = *(long *)(pGVar17 + 0x20);
              goto LAB_00c5ea64;
            }
          }
          else {
            lVar11 = (ulong)uVar3 * 0x30;
            do {
              uVar2 = *(uint *)pGVar17;
              if ((*(ushort *)(pGVar17 + 0x16) & 0x1000) != 0) {
                uVar2 = 0x15 - (int)(char)pGVar17[0x15];
              }
              if (uVar2 == (uint)((long)pGVar13 - (long)pGVar12)) {
                pGVar6 = *(GenericValue **)(pGVar17 + 8);
                if ((*(ushort *)(pGVar17 + 0x16) & 0x1000) != 0) {
                  pGVar6 = pGVar17;
                }
                if ((pGVar6 == pGVar12) ||
                   (iVar4 = memcmp(pGVar12,pGVar6,(long)pGVar13 - (long)pGVar12 & 0xffffffff),
                   iVar4 == 0)) goto LAB_00c5ea38;
              }
              lVar11 = lVar11 + -0x30;
              pGVar17 = pGVar17 + 0x30;
            } while (lVar11 != 0);
          }
          lVar11 = 0;
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01785a58 = 0;
          DAT_01785a60 = 0;
LAB_00c5ea64:
          if ((*(byte *)(lVar11 + uVar15 * 0x18 + 0x17) >> 4 & 1) != 0) {
            return lVar11 + uVar15 * 0x18;
          }
          return *(ulong *)(lVar11 + uVar15 * 0x18 + 8);
        }
      }
      else {
        pGVar14 = (GenericValue *)((long)pGVar17 - (long)pGVar12 & 0xffffffff);
        lVar11 = (ulong)uVar3 * 0x30;
        do {
          uVar2 = *(uint *)pGVar19;
          if ((*(ushort *)(pGVar19 + 0x16) & 0x1000) != 0) {
            uVar2 = 0x15 - (int)(char)pGVar19[0x15];
          }
          if (uVar2 == (uint)((long)pGVar17 - (long)pGVar12)) {
            pGVar16 = *(GenericValue **)(pGVar19 + 8);
            if ((*(ushort *)(pGVar19 + 0x16) & 0x1000) != 0) {
              pGVar16 = pGVar19;
            }
            if ((pGVar16 == pGVar12) ||
               (pGVar7 = pGVar14, iVar4 = memcmp(pGVar12,pGVar16,(size_t)pGVar14),
               pGVar16 = extraout_x1_09, iVar4 == 0)) goto LAB_00c5e978;
          }
          lVar11 = lVar11 + -0x30;
          pGVar19 = pGVar19 + 0x30;
        } while (lVar11 != 0);
      }
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      pGVar17 = pGVar7 + -1;
      do {
        pGVar17 = pGVar17 + 1;
      } while (*pGVar17 != (GenericValue)0x0);
      uVar3 = *(uint *)pGVar16;
      pGVar19 = *(GenericValue **)(pGVar16 + 8);
      pGVar13 = pGVar19;
      if (uVar3 == 0) {
LAB_00c5eb6c:
        if (pGVar13 != pGVar19 + (ulong)uVar3 * 0x30) {
          lVar11 = *(long *)(pGVar13 + 0x20);
          goto LAB_00c5eb98;
        }
      }
      else {
        lVar11 = (ulong)uVar3 * 0x30;
        do {
          uVar2 = *(uint *)pGVar13;
          if ((*(ushort *)(pGVar13 + 0x16) & 0x1000) != 0) {
            uVar2 = 0x15 - (int)(char)pGVar13[0x15];
          }
          if (uVar2 == (uint)((long)pGVar17 - (long)pGVar7)) {
            pGVar6 = *(GenericValue **)(pGVar13 + 8);
            if ((*(ushort *)(pGVar13 + 0x16) & 0x1000) != 0) {
              pGVar6 = pGVar13;
            }
            if ((pGVar6 == pGVar7) ||
               (iVar4 = memcmp(pGVar7,pGVar6,(long)pGVar17 - (long)pGVar7 & 0xffffffff), iVar4 == 0)
               ) goto LAB_00c5eb6c;
          }
          lVar11 = lVar11 + -0x30;
          pGVar13 = pGVar13 + 0x30;
        } while (lVar11 != 0);
      }
      lVar11 = 0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
LAB_00c5eb98:
      return lVar11 + (uVar8 & 0xffffffff) * 0x18;
    }
  }
  else {
    pGVar14 = (GenericValue *)((long)pGVar17 - (long)pGVar7 & 0xffffffff);
    lVar11 = (ulong)uVar3 * 0x30;
    do {
      uVar2 = *(uint *)pGVar19;
      if ((*(ushort *)(pGVar19 + 0x16) & 0x1000) != 0) {
        uVar2 = 0x15 - (int)(char)pGVar19[0x15];
      }
      if (uVar2 == (uint)((long)pGVar17 - (long)pGVar7)) {
        pGVar6 = *(GenericValue **)(pGVar19 + 8);
        if ((*(ushort *)(pGVar19 + 0x16) & 0x1000) != 0) {
          pGVar6 = pGVar19;
        }
        if ((pGVar6 == pGVar7) ||
           (pGVar12 = pGVar14, iVar4 = memcmp(pGVar7,pGVar6,(size_t)pGVar14),
           pGVar6 = extraout_x1_05, iVar4 == 0)) goto LAB_00c5e610;
      }
      lVar11 = lVar11 + -0x30;
      pGVar19 = pGVar19 + 0x30;
    } while (lVar11 != 0);
  }
  uVar5 = uVar8 & 0xffffffff;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00c5e7b4:
  return (ulong)((uint)uVar5 & 1);
}

