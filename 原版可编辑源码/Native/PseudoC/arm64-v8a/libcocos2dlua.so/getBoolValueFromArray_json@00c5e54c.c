
/* cocostudio::DictionaryHelper::getBoolValueFromArray_json(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, int, bool) */

ulong __thiscall
cocostudio::DictionaryHelper::getBoolValueFromArray_json
          (DictionaryHelper *this,GenericValue *param_1,char *param_2,int param_3,bool param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  GenericValue *extraout_x1;
  GenericValue *extraout_x1_00;
  GenericValue *extraout_x1_01;
  GenericValue *extraout_x1_02;
  GenericValue *__s2;
  GenericValue *extraout_x1_03;
  GenericValue *__s1;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  GenericValue *pGVar8;
  GenericValue *pGVar9;
  long lVar10;
  ulong uVar11;
  GenericValue *pGVar12;
  GenericValue *pGVar13;
  GenericValue *pGVar14;
  char *pcVar15;
  GenericValue *pGVar16;
  GenericValue *pGVar17;
  
  uVar6 = (ulong)param_4;
  uVar11 = (ulong)(uint)param_3;
  if (*(short *)(param_1 + 0x16) == 0) {
    return uVar6;
  }
  pcVar15 = param_2 + -1;
  uVar5 = (uint)param_4;
  pcVar7 = pcVar15;
  do {
    pcVar7 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  uVar2 = *(uint *)param_1;
  pGVar16 = *(GenericValue **)(param_1 + 8);
  pGVar9 = param_1;
  pGVar14 = (GenericValue *)param_2;
  pGVar8 = pGVar16;
  if (uVar2 != 0) {
    pGVar12 = (GenericValue *)((long)pcVar7 - (long)param_2 & 0xffffffff);
    lVar10 = (ulong)uVar2 * 0x30;
    do {
      uVar1 = *(uint *)pGVar8;
      if ((*(ushort *)(pGVar8 + 0x16) & 0x1000) != 0) {
        uVar1 = 0x15 - (int)(char)pGVar8[0x15];
      }
      if (uVar1 == (uint)((long)pcVar7 - (long)param_2)) {
        pGVar9 = *(GenericValue **)(pGVar8 + 8);
        if ((*(ushort *)(pGVar8 + 0x16) & 0x1000) != 0) {
          pGVar9 = pGVar8;
        }
        if ((pGVar9 == (GenericValue *)param_2) ||
           (pGVar14 = pGVar12, iVar3 = memcmp(param_2,pGVar9,(size_t)pGVar12), pGVar9 = extraout_x1,
           iVar3 == 0)) goto LAB_00c5e610;
      }
      lVar10 = lVar10 + -0x30;
      pGVar8 = pGVar8 + 0x30;
    } while (lVar10 != 0);
LAB_00c5e6b0:
    DAT_01785a60 = 0;
    DAT_01785a58 = 0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    return (ulong)uVar5;
  }
LAB_00c5e610:
  if (pGVar8 == pGVar16 + (ulong)uVar2 * 0x30) goto LAB_00c5e6b0;
  pcVar7 = pcVar15;
  if (*(short *)(pGVar8 + 0x2e) == 0) {
    return (ulong)uVar5;
  }
  do {
    pcVar7 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  uVar2 = *(uint *)param_1;
  pGVar16 = *(GenericValue **)(param_1 + 8);
  pGVar8 = pGVar16;
  if (uVar2 == 0) {
LAB_00c5e6d4:
    if (pGVar8 != pGVar16 + (ulong)uVar2 * 0x30) {
      uVar6 = (ulong)uVar5;
      if (*(short *)(*(long *)(pGVar8 + 0x20) + (ulong)(uint)param_3 * 0x18 + 0x16) == 0) {
        return uVar6;
      }
      do {
        pcVar15 = pcVar15 + 1;
      } while (*pcVar15 != '\0');
      uVar5 = *(uint *)param_1;
      pGVar16 = *(GenericValue **)(param_1 + 8);
      pGVar8 = pGVar16;
      if (uVar5 == 0) {
LAB_00c5e78c:
        if (pGVar8 != pGVar16 + (ulong)uVar5 * 0x30) {
          return (ulong)(*(short *)(*(long *)(pGVar8 + 0x20) + (ulong)(uint)param_3 * 0x18 + 0x16)
                        == 10);
        }
      }
      else {
        pGVar12 = (GenericValue *)((long)pcVar15 - (long)param_2 & 0xffffffff);
        lVar10 = (ulong)uVar5 * 0x30;
        do {
          uVar2 = *(uint *)pGVar8;
          if ((*(ushort *)(pGVar8 + 0x16) & 0x1000) != 0) {
            uVar2 = 0x15 - (int)(char)pGVar8[0x15];
          }
          if (uVar2 == (uint)((long)pcVar15 - (long)param_2)) {
            pGVar9 = *(GenericValue **)(pGVar8 + 8);
            if ((*(ushort *)(pGVar8 + 0x16) & 0x1000) != 0) {
              pGVar9 = pGVar8;
            }
            if ((pGVar9 == (GenericValue *)param_2) ||
               (pGVar14 = pGVar12, iVar3 = memcmp(param_2,pGVar9,(size_t)pGVar12),
               pGVar9 = extraout_x1_01, iVar3 == 0)) goto LAB_00c5e78c;
          }
          lVar10 = lVar10 + -0x30;
          pGVar8 = pGVar8 + 0x30;
        } while (lVar10 != 0);
      }
    }
  }
  else {
    pGVar12 = (GenericValue *)((long)pcVar7 - (long)param_2 & 0xffffffff);
    lVar10 = (ulong)uVar2 * 0x30;
    do {
      uVar1 = *(uint *)pGVar8;
      if ((*(ushort *)(pGVar8 + 0x16) & 0x1000) != 0) {
        uVar1 = 0x15 - (int)(char)pGVar8[0x15];
      }
      if (uVar1 == (uint)((long)pcVar7 - (long)param_2)) {
        pGVar9 = *(GenericValue **)(pGVar8 + 8);
        if ((*(ushort *)(pGVar8 + 0x16) & 0x1000) != 0) {
          pGVar9 = pGVar8;
        }
        if ((pGVar9 == (GenericValue *)param_2) ||
           (pGVar14 = pGVar12, iVar3 = memcmp(param_2,pGVar9,(size_t)pGVar12),
           pGVar9 = extraout_x1_00, iVar3 == 0)) goto LAB_00c5e6d4;
      }
      lVar10 = lVar10 + -0x30;
      pGVar8 = pGVar8 + 0x30;
    } while (lVar10 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
  if (*(short *)(pGVar9 + 0x16) == 0) {
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    return uVar6;
  }
  pGVar16 = pGVar14 + -1;
  pGVar8 = pGVar16;
  do {
    pGVar8 = pGVar8 + 1;
  } while (*pGVar8 != (GenericValue)0x0);
  uVar5 = *(uint *)pGVar9;
  pGVar17 = *(GenericValue **)(pGVar9 + 8);
  __s2 = pGVar9;
  __s1 = pGVar14;
  uVar4 = uVar11;
  pGVar12 = pGVar17;
  if (uVar5 != 0) {
    pGVar13 = (GenericValue *)((long)pGVar8 - (long)pGVar14 & 0xffffffff);
    lVar10 = (ulong)uVar5 * 0x30;
    do {
      uVar2 = *(uint *)pGVar12;
      if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
        uVar2 = 0x15 - (int)(char)pGVar12[0x15];
      }
      if (uVar2 == (uint)((long)pGVar8 - (long)pGVar14)) {
        __s2 = *(GenericValue **)(pGVar12 + 8);
        if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
          __s2 = pGVar12;
        }
        if ((__s2 == pGVar14) ||
           (__s1 = pGVar13, iVar3 = memcmp(pGVar14,__s2,(size_t)pGVar13), __s2 = extraout_x1_02,
           iVar3 == 0)) break;
      }
      lVar10 = lVar10 + -0x30;
      pGVar12 = pGVar12 + 0x30;
      if (lVar10 == 0) {
        DAT_01785a60 = 0;
        DAT_01785a58 = 0;
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        return uVar6;
      }
    } while( true );
  }
  if (pGVar12 == pGVar17 + (ulong)uVar5 * 0x30) {
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    return uVar6;
  }
  pGVar8 = pGVar16;
  if (*(short *)(pGVar12 + 0x2e) == 0) {
    return uVar6;
  }
  do {
    pGVar8 = pGVar8 + 1;
  } while (*pGVar8 != (GenericValue)0x0);
  uVar5 = *(uint *)pGVar9;
  pGVar17 = *(GenericValue **)(pGVar9 + 8);
  pGVar12 = pGVar17;
  if (uVar5 == 0) {
LAB_00c5e978:
    if (pGVar12 != pGVar17 + (ulong)uVar5 * 0x30) {
      if (*(short *)(*(long *)(pGVar12 + 0x20) + (uVar11 & 0xffffffff) * 0x18 + 0x16) == 0) {
        return uVar6;
      }
      uVar11 = uVar11 & 0xffffffff;
      do {
        pGVar16 = pGVar16 + 1;
      } while (*pGVar16 != (GenericValue)0x0);
      uVar5 = *(uint *)pGVar9;
      pGVar9 = *(GenericValue **)(pGVar9 + 8);
      pGVar8 = pGVar9;
      if (uVar5 == 0) {
LAB_00c5ea38:
        if (pGVar8 != pGVar9 + (ulong)uVar5 * 0x30) {
          lVar10 = *(long *)(pGVar8 + 0x20);
          goto LAB_00c5ea64;
        }
      }
      else {
        lVar10 = (ulong)uVar5 * 0x30;
        do {
          uVar2 = *(uint *)pGVar8;
          if ((*(ushort *)(pGVar8 + 0x16) & 0x1000) != 0) {
            uVar2 = 0x15 - (int)(char)pGVar8[0x15];
          }
          if (uVar2 == (uint)((long)pGVar16 - (long)pGVar14)) {
            pGVar12 = *(GenericValue **)(pGVar8 + 8);
            if ((*(ushort *)(pGVar8 + 0x16) & 0x1000) != 0) {
              pGVar12 = pGVar8;
            }
            if ((pGVar12 == pGVar14) ||
               (iVar3 = memcmp(pGVar14,pGVar12,(long)pGVar16 - (long)pGVar14 & 0xffffffff),
               iVar3 == 0)) goto LAB_00c5ea38;
          }
          lVar10 = lVar10 + -0x30;
          pGVar8 = pGVar8 + 0x30;
        } while (lVar10 != 0);
      }
      lVar10 = 0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
LAB_00c5ea64:
      if ((*(byte *)(lVar10 + uVar11 * 0x18 + 0x17) >> 4 & 1) != 0) {
        return lVar10 + uVar11 * 0x18;
      }
      return *(ulong *)(lVar10 + uVar11 * 0x18 + 8);
    }
  }
  else {
    pGVar13 = (GenericValue *)((long)pGVar8 - (long)pGVar14 & 0xffffffff);
    lVar10 = (ulong)uVar5 * 0x30;
    do {
      uVar2 = *(uint *)pGVar12;
      if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
        uVar2 = 0x15 - (int)(char)pGVar12[0x15];
      }
      if (uVar2 == (uint)((long)pGVar8 - (long)pGVar14)) {
        __s2 = *(GenericValue **)(pGVar12 + 8);
        if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
          __s2 = pGVar12;
        }
        if ((__s2 == pGVar14) ||
           (__s1 = pGVar13, iVar3 = memcmp(pGVar14,__s2,(size_t)pGVar13), __s2 = extraout_x1_03,
           iVar3 == 0)) goto LAB_00c5e978;
      }
      lVar10 = lVar10 + -0x30;
      pGVar12 = pGVar12 + 0x30;
    } while (lVar10 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
  pGVar8 = __s1 + -1;
  do {
    pGVar8 = pGVar8 + 1;
  } while (*pGVar8 != (GenericValue)0x0);
  uVar5 = *(uint *)__s2;
  pGVar14 = *(GenericValue **)(__s2 + 8);
  pGVar9 = pGVar14;
  if (uVar5 == 0) {
LAB_00c5eb6c:
    if (pGVar9 != pGVar14 + (ulong)uVar5 * 0x30) {
      lVar10 = *(long *)(pGVar9 + 0x20);
      goto LAB_00c5eb98;
    }
  }
  else {
    lVar10 = (ulong)uVar5 * 0x30;
    do {
      uVar2 = *(uint *)pGVar9;
      if ((*(ushort *)(pGVar9 + 0x16) & 0x1000) != 0) {
        uVar2 = 0x15 - (int)(char)pGVar9[0x15];
      }
      if (uVar2 == (uint)((long)pGVar8 - (long)__s1)) {
        pGVar16 = *(GenericValue **)(pGVar9 + 8);
        if ((*(ushort *)(pGVar9 + 0x16) & 0x1000) != 0) {
          pGVar16 = pGVar9;
        }
        if ((pGVar16 == __s1) ||
           (iVar3 = memcmp(__s1,pGVar16,(long)pGVar8 - (long)__s1 & 0xffffffff), iVar3 == 0))
        goto LAB_00c5eb6c;
      }
      lVar10 = lVar10 + -0x30;
      pGVar9 = pGVar9 + 0x30;
    } while (lVar10 != 0);
  }
  lVar10 = 0;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00c5eb98:
  return lVar10 + (uVar4 & 0xffffffff) * 0x18;
}

