
/* cocostudio::DictionaryHelper::getFloatValueFromArray_json(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, int, float) */

DictionaryHelper * __thiscall
cocostudio::DictionaryHelper::getFloatValueFromArray_json
          (DictionaryHelper *this,GenericValue *param_1,char *param_2,int param_3,float param_4)

{
  int *__s2;
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  GenericValue *extraout_x1;
  GenericValue *extraout_x1_00;
  GenericValue *extraout_x1_01;
  GenericValue *extraout_x1_02;
  GenericValue *__s2_00;
  GenericValue *extraout_x1_03;
  GenericValue *extraout_x1_04;
  GenericValue *extraout_x1_05;
  GenericValue *__s1;
  ulong uVar5;
  DictionaryHelper *in_x4;
  DictionaryHelper *pDVar6;
  char *pcVar7;
  uint *puVar8;
  GenericValue *pGVar9;
  GenericValue *pGVar10;
  GenericValue *pGVar11;
  GenericValue *pGVar12;
  ulong uVar13;
  char *pcVar14;
  int *piVar15;
  GenericValue *pGVar16;
  int *piVar17;
  GenericValue *pGVar18;
  GenericValue *pGVar19;
  long lVar20;
  
  uVar5 = (ulong)(uint)param_3;
  if (*(short *)(param_1 + 0x16) == 0) {
    return this;
  }
  pcVar14 = param_2 + -1;
  pcVar7 = pcVar14;
  do {
    pcVar7 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  uVar1 = *(uint *)param_1;
  pGVar18 = *(GenericValue **)(param_1 + 8);
  pGVar10 = param_1;
  pGVar11 = (GenericValue *)param_2;
  pGVar9 = pGVar18;
  if (uVar1 != 0) {
    pGVar12 = (GenericValue *)((long)pcVar7 - (long)param_2 & 0xffffffff);
    lVar20 = (ulong)uVar1 * 0x30;
    do {
      uVar3 = *(uint *)pGVar9;
      if ((*(ushort *)(pGVar9 + 0x16) & 0x1000) != 0) {
        uVar3 = 0x15 - (int)(char)pGVar9[0x15];
      }
      if (uVar3 == (uint)((long)pcVar7 - (long)param_2)) {
        pGVar10 = *(GenericValue **)(pGVar9 + 8);
        if ((*(ushort *)(pGVar9 + 0x16) & 0x1000) != 0) {
          pGVar10 = pGVar9;
        }
        if (pGVar10 == (GenericValue *)param_2) break;
        pGVar11 = pGVar12;
        uVar3 = memcmp(param_2,pGVar10,(size_t)pGVar12);
        this = (DictionaryHelper *)(ulong)uVar3;
        pGVar10 = extraout_x1;
        if (uVar3 == 0) break;
      }
      lVar20 = lVar20 + -0x30;
      pGVar9 = pGVar9 + 0x30;
      if (lVar20 == 0) {
        DAT_01785a60 = 0;
        DAT_01785a58 = 0;
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        return this;
      }
    } while( true );
  }
  if (pGVar9 == pGVar18 + (ulong)uVar1 * 0x30) {
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    return this;
  }
  pcVar7 = pcVar14;
  if (*(short *)(pGVar9 + 0x2e) == 0) {
    return this;
  }
  do {
    pcVar7 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  uVar1 = *(uint *)param_1;
  pGVar18 = *(GenericValue **)(param_1 + 8);
  pGVar9 = pGVar18;
  if (uVar1 == 0) {
LAB_00c5e3e0:
    if (pGVar9 != pGVar18 + (ulong)uVar1 * 0x30) {
      if (*(short *)(*(long *)(pGVar9 + 0x20) + (ulong)(uint)param_3 * 0x18 + 0x16) == 0) {
        return this;
      }
      do {
        pcVar14 = pcVar14 + 1;
      } while (*pcVar14 != '\0');
      uVar1 = *(uint *)param_1;
      piVar17 = *(int **)(param_1 + 8);
      piVar15 = piVar17;
      if (uVar1 == 0) {
LAB_00c5e498:
        if (piVar15 != piVar17 + (ulong)uVar1 * 0xc) {
          lVar20 = *(long *)(piVar15 + 8);
          goto LAB_00c5e4c4;
        }
      }
      else {
        lVar20 = (ulong)uVar1 * 0x30;
        do {
          iVar4 = *piVar15;
          if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
            iVar4 = 0x15 - *(char *)((long)piVar15 + 0x15);
          }
          if (iVar4 == (int)((long)pcVar14 - (long)param_2)) {
            __s2 = *(int **)(piVar15 + 2);
            if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
              __s2 = piVar15;
            }
            if (__s2 == (int *)param_2) goto LAB_00c5e498;
            uVar3 = memcmp(param_2,__s2,(long)pcVar14 - (long)param_2 & 0xffffffff);
            this = (DictionaryHelper *)(ulong)uVar3;
            if (uVar3 == 0) goto LAB_00c5e498;
          }
          lVar20 = lVar20 + -0x30;
          piVar15 = piVar15 + 0xc;
        } while (lVar20 != 0);
      }
      lVar20 = 0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
LAB_00c5e4c4:
      puVar8 = (uint *)(lVar20 + (ulong)(uint)param_3 * 0x18);
      uVar2 = *(ushort *)((long)puVar8 + 0x16);
      if ((uVar2 >> 9 & 1) != 0) {
        return this;
      }
      if ((uVar2 >> 5 & 1) == 0) {
        if ((uVar2 >> 6 & 1) != 0) {
          NEON_ucvtf((ulong)*puVar8);
          return this;
        }
        return this;
      }
      return this;
    }
  }
  else {
    pGVar12 = (GenericValue *)((long)pcVar7 - (long)param_2 & 0xffffffff);
    lVar20 = (ulong)uVar1 * 0x30;
    do {
      uVar3 = *(uint *)pGVar9;
      if ((*(ushort *)(pGVar9 + 0x16) & 0x1000) != 0) {
        uVar3 = 0x15 - (int)(char)pGVar9[0x15];
      }
      if (uVar3 == (uint)((long)pcVar7 - (long)param_2)) {
        pGVar10 = *(GenericValue **)(pGVar9 + 8);
        if ((*(ushort *)(pGVar9 + 0x16) & 0x1000) != 0) {
          pGVar10 = pGVar9;
        }
        if (pGVar10 == (GenericValue *)param_2) goto LAB_00c5e3e0;
        pGVar11 = pGVar12;
        uVar3 = memcmp(param_2,pGVar10,(size_t)pGVar12);
        this = (DictionaryHelper *)(ulong)uVar3;
        pGVar10 = extraout_x1_00;
        if (uVar3 == 0) goto LAB_00c5e3e0;
      }
      lVar20 = lVar20 + -0x30;
      pGVar9 = pGVar9 + 0x30;
    } while (lVar20 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
  pDVar6 = in_x4;
  if (*(short *)(pGVar10 + 0x16) == 0) goto LAB_00c5e7b4;
  pGVar18 = pGVar11 + -1;
  pGVar9 = pGVar18;
  do {
    pGVar9 = pGVar9 + 1;
  } while (*pGVar9 != (GenericValue)0x0);
  uVar1 = *(uint *)pGVar10;
  pGVar19 = *(GenericValue **)(pGVar10 + 8);
  __s2_00 = pGVar10;
  __s1 = pGVar11;
  uVar13 = uVar5;
  pGVar12 = pGVar19;
  if (uVar1 == 0) {
LAB_00c5e610:
    if (pGVar12 != pGVar19 + (ulong)uVar1 * 0x30) {
      pGVar9 = pGVar18;
      if (*(short *)(pGVar12 + 0x2e) == 0) {
        pDVar6 = (DictionaryHelper *)((ulong)in_x4 & 0xffffffff);
        goto LAB_00c5e7b4;
      }
      do {
        pGVar9 = pGVar9 + 1;
      } while (*pGVar9 != (GenericValue)0x0);
      uVar1 = *(uint *)pGVar10;
      pGVar19 = *(GenericValue **)(pGVar10 + 8);
      pGVar12 = pGVar19;
      if (uVar1 == 0) {
LAB_00c5e6d4:
        if (pGVar12 != pGVar19 + (ulong)uVar1 * 0x30) {
          pDVar6 = (DictionaryHelper *)((ulong)in_x4 & 0xffffffff);
          if (*(short *)(*(long *)(pGVar12 + 0x20) + (uVar5 & 0xffffffff) * 0x18 + 0x16) == 0)
          goto LAB_00c5e7b4;
          do {
            pGVar18 = pGVar18 + 1;
          } while (*pGVar18 != (GenericValue)0x0);
          uVar1 = *(uint *)pGVar10;
          pGVar10 = *(GenericValue **)(pGVar10 + 8);
          pGVar9 = pGVar10;
          if (uVar1 == 0) {
LAB_00c5e78c:
            if (pGVar9 != pGVar10 + (ulong)uVar1 * 0x30) {
              pDVar6 = (DictionaryHelper *)
                       (ulong)(*(short *)(*(long *)(pGVar9 + 0x20) + (uVar5 & 0xffffffff) * 0x18 +
                                         0x16) == 10);
              goto LAB_00c5e7b4;
            }
          }
          else {
            pGVar12 = (GenericValue *)((long)pGVar18 - (long)pGVar11 & 0xffffffff);
            lVar20 = (ulong)uVar1 * 0x30;
            do {
              uVar3 = *(uint *)pGVar9;
              if ((*(ushort *)(pGVar9 + 0x16) & 0x1000) != 0) {
                uVar3 = 0x15 - (int)(char)pGVar9[0x15];
              }
              if (uVar3 == (uint)((long)pGVar18 - (long)pGVar11)) {
                __s2_00 = *(GenericValue **)(pGVar9 + 8);
                if ((*(ushort *)(pGVar9 + 0x16) & 0x1000) != 0) {
                  __s2_00 = pGVar9;
                }
                if ((__s2_00 == pGVar11) ||
                   (__s1 = pGVar12, iVar4 = memcmp(pGVar11,__s2_00,(size_t)pGVar12),
                   __s2_00 = extraout_x1_03, iVar4 == 0)) goto LAB_00c5e78c;
              }
              lVar20 = lVar20 + -0x30;
              pGVar9 = pGVar9 + 0x30;
            } while (lVar20 != 0);
          }
        }
      }
      else {
        pGVar16 = (GenericValue *)((long)pGVar9 - (long)pGVar11 & 0xffffffff);
        lVar20 = (ulong)uVar1 * 0x30;
        do {
          uVar3 = *(uint *)pGVar12;
          if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
            uVar3 = 0x15 - (int)(char)pGVar12[0x15];
          }
          if (uVar3 == (uint)((long)pGVar9 - (long)pGVar11)) {
            __s2_00 = *(GenericValue **)(pGVar12 + 8);
            if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
              __s2_00 = pGVar12;
            }
            if ((__s2_00 == pGVar11) ||
               (__s1 = pGVar16, iVar4 = memcmp(pGVar11,__s2_00,(size_t)pGVar16),
               __s2_00 = extraout_x1_02, iVar4 == 0)) goto LAB_00c5e6d4;
          }
          lVar20 = lVar20 + -0x30;
          pGVar12 = pGVar12 + 0x30;
        } while (lVar20 != 0);
      }
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      if (*(short *)(__s2_00 + 0x16) == 0) {
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
        return pDVar6;
      }
      pGVar10 = __s1 + -1;
      pGVar9 = pGVar10;
      do {
        pGVar9 = pGVar9 + 1;
      } while (*pGVar9 != (GenericValue)0x0);
      uVar1 = *(uint *)__s2_00;
      pGVar19 = *(GenericValue **)(__s2_00 + 8);
      pGVar18 = __s2_00;
      pGVar12 = __s1;
      uVar5 = uVar13;
      pGVar11 = pGVar19;
      if (uVar1 != 0) {
        pGVar16 = (GenericValue *)((long)pGVar9 - (long)__s1 & 0xffffffff);
        lVar20 = (ulong)uVar1 * 0x30;
        do {
          uVar3 = *(uint *)pGVar11;
          if ((*(ushort *)(pGVar11 + 0x16) & 0x1000) != 0) {
            uVar3 = 0x15 - (int)(char)pGVar11[0x15];
          }
          if (uVar3 == (uint)((long)pGVar9 - (long)__s1)) {
            pGVar18 = *(GenericValue **)(pGVar11 + 8);
            if ((*(ushort *)(pGVar11 + 0x16) & 0x1000) != 0) {
              pGVar18 = pGVar11;
            }
            if ((pGVar18 == __s1) ||
               (pGVar12 = pGVar16, iVar4 = memcmp(__s1,pGVar18,(size_t)pGVar16),
               pGVar18 = extraout_x1_04, iVar4 == 0)) break;
          }
          lVar20 = lVar20 + -0x30;
          pGVar11 = pGVar11 + 0x30;
          if (lVar20 == 0) {
            DAT_01785a60 = 0;
            DAT_01785a58 = 0;
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            return pDVar6;
          }
        } while( true );
      }
      if (pGVar11 == pGVar19 + (ulong)uVar1 * 0x30) {
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
        return pDVar6;
      }
      pGVar9 = pGVar10;
      if (*(short *)(pGVar11 + 0x2e) == 0) {
        return pDVar6;
      }
      do {
        pGVar9 = pGVar9 + 1;
      } while (*pGVar9 != (GenericValue)0x0);
      uVar1 = *(uint *)__s2_00;
      pGVar19 = *(GenericValue **)(__s2_00 + 8);
      pGVar11 = pGVar19;
      if (uVar1 == 0) {
LAB_00c5e978:
        if (pGVar11 != pGVar19 + (ulong)uVar1 * 0x30) {
          if (*(short *)(*(long *)(pGVar11 + 0x20) + (uVar13 & 0xffffffff) * 0x18 + 0x16) == 0) {
            return pDVar6;
          }
          uVar13 = uVar13 & 0xffffffff;
          do {
            pGVar10 = pGVar10 + 1;
          } while (*pGVar10 != (GenericValue)0x0);
          uVar1 = *(uint *)__s2_00;
          pGVar11 = *(GenericValue **)(__s2_00 + 8);
          pGVar9 = pGVar11;
          if (uVar1 == 0) {
LAB_00c5ea38:
            if (pGVar9 != pGVar11 + (ulong)uVar1 * 0x30) {
              lVar20 = *(long *)(pGVar9 + 0x20);
              goto LAB_00c5ea64;
            }
          }
          else {
            lVar20 = (ulong)uVar1 * 0x30;
            do {
              uVar3 = *(uint *)pGVar9;
              if ((*(ushort *)(pGVar9 + 0x16) & 0x1000) != 0) {
                uVar3 = 0x15 - (int)(char)pGVar9[0x15];
              }
              if (uVar3 == (uint)((long)pGVar10 - (long)__s1)) {
                pGVar18 = *(GenericValue **)(pGVar9 + 8);
                if ((*(ushort *)(pGVar9 + 0x16) & 0x1000) != 0) {
                  pGVar18 = pGVar9;
                }
                if ((pGVar18 == __s1) ||
                   (iVar4 = memcmp(__s1,pGVar18,(long)pGVar10 - (long)__s1 & 0xffffffff), iVar4 == 0
                   )) goto LAB_00c5ea38;
              }
              lVar20 = lVar20 + -0x30;
              pGVar9 = pGVar9 + 0x30;
            } while (lVar20 != 0);
          }
          lVar20 = 0;
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01785a58 = 0;
          DAT_01785a60 = 0;
LAB_00c5ea64:
          if ((*(byte *)(lVar20 + uVar13 * 0x18 + 0x17) >> 4 & 1) != 0) {
            return (DictionaryHelper *)(lVar20 + uVar13 * 0x18);
          }
          return *(DictionaryHelper **)(lVar20 + uVar13 * 0x18 + 8);
        }
      }
      else {
        pGVar16 = (GenericValue *)((long)pGVar9 - (long)__s1 & 0xffffffff);
        lVar20 = (ulong)uVar1 * 0x30;
        do {
          uVar3 = *(uint *)pGVar11;
          if ((*(ushort *)(pGVar11 + 0x16) & 0x1000) != 0) {
            uVar3 = 0x15 - (int)(char)pGVar11[0x15];
          }
          if (uVar3 == (uint)((long)pGVar9 - (long)__s1)) {
            pGVar18 = *(GenericValue **)(pGVar11 + 8);
            if ((*(ushort *)(pGVar11 + 0x16) & 0x1000) != 0) {
              pGVar18 = pGVar11;
            }
            if ((pGVar18 == __s1) ||
               (pGVar12 = pGVar16, iVar4 = memcmp(__s1,pGVar18,(size_t)pGVar16),
               pGVar18 = extraout_x1_05, iVar4 == 0)) goto LAB_00c5e978;
          }
          lVar20 = lVar20 + -0x30;
          pGVar11 = pGVar11 + 0x30;
        } while (lVar20 != 0);
      }
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      pGVar9 = pGVar12 + -1;
      do {
        pGVar9 = pGVar9 + 1;
      } while (*pGVar9 != (GenericValue)0x0);
      uVar1 = *(uint *)pGVar18;
      pGVar11 = *(GenericValue **)(pGVar18 + 8);
      pGVar10 = pGVar11;
      if (uVar1 == 0) {
LAB_00c5eb6c:
        if (pGVar10 != pGVar11 + (ulong)uVar1 * 0x30) {
          lVar20 = *(long *)(pGVar10 + 0x20);
          goto LAB_00c5eb98;
        }
      }
      else {
        lVar20 = (ulong)uVar1 * 0x30;
        do {
          uVar3 = *(uint *)pGVar10;
          if ((*(ushort *)(pGVar10 + 0x16) & 0x1000) != 0) {
            uVar3 = 0x15 - (int)(char)pGVar10[0x15];
          }
          if (uVar3 == (uint)((long)pGVar9 - (long)pGVar12)) {
            pGVar18 = *(GenericValue **)(pGVar10 + 8);
            if ((*(ushort *)(pGVar10 + 0x16) & 0x1000) != 0) {
              pGVar18 = pGVar10;
            }
            if ((pGVar18 == pGVar12) ||
               (iVar4 = memcmp(pGVar12,pGVar18,(long)pGVar9 - (long)pGVar12 & 0xffffffff),
               iVar4 == 0)) goto LAB_00c5eb6c;
          }
          lVar20 = lVar20 + -0x30;
          pGVar10 = pGVar10 + 0x30;
        } while (lVar20 != 0);
      }
      lVar20 = 0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
LAB_00c5eb98:
      return (DictionaryHelper *)(lVar20 + (uVar5 & 0xffffffff) * 0x18);
    }
  }
  else {
    pGVar16 = (GenericValue *)((long)pGVar9 - (long)pGVar11 & 0xffffffff);
    lVar20 = (ulong)uVar1 * 0x30;
    do {
      uVar3 = *(uint *)pGVar12;
      if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
        uVar3 = 0x15 - (int)(char)pGVar12[0x15];
      }
      if (uVar3 == (uint)((long)pGVar9 - (long)pGVar11)) {
        __s2_00 = *(GenericValue **)(pGVar12 + 8);
        if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
          __s2_00 = pGVar12;
        }
        if ((__s2_00 == pGVar11) ||
           (__s1 = pGVar16, iVar4 = memcmp(pGVar11,__s2_00,(size_t)pGVar16),
           __s2_00 = extraout_x1_01, iVar4 == 0)) goto LAB_00c5e610;
      }
      lVar20 = lVar20 + -0x30;
      pGVar12 = pGVar12 + 0x30;
    } while (lVar20 != 0);
  }
  pDVar6 = (DictionaryHelper *)((ulong)in_x4 & 0xffffffff);
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00c5e7b4:
  return (DictionaryHelper *)(ulong)((uint)pDVar6 & 1);
}

