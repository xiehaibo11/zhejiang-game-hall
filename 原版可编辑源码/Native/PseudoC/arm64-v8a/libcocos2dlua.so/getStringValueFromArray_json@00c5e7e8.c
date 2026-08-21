
/* cocostudio::DictionaryHelper::getStringValueFromArray_json(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, int, char const*)
    */

char * __thiscall
cocostudio::DictionaryHelper::getStringValueFromArray_json
          (DictionaryHelper *this,GenericValue *param_1,char *param_2,int param_3,char *param_4)

{
  uint uVar1;
  int *__s2;
  uint uVar2;
  int iVar3;
  GenericValue *extraout_x1;
  GenericValue *__s2_00;
  GenericValue *extraout_x1_00;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  GenericValue *pGVar11;
  GenericValue *pGVar12;
  
  uVar7 = (ulong)(uint)param_3;
  if (*(short *)(param_1 + 0x16) == 0) {
    return param_4;
  }
  pcVar10 = param_2 + -1;
  pcVar5 = pcVar10;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  uVar2 = *(uint *)param_1;
  pGVar11 = *(GenericValue **)(param_1 + 8);
  __s2_00 = param_1;
  piVar4 = (int *)param_2;
  pGVar12 = pGVar11;
  if (uVar2 != 0) {
    piVar8 = (int *)((long)pcVar5 - (long)param_2 & 0xffffffff);
    lVar6 = (ulong)uVar2 * 0x30;
    do {
      uVar1 = *(uint *)pGVar12;
      if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
        uVar1 = 0x15 - (int)(char)pGVar12[0x15];
      }
      if (uVar1 == (uint)((long)pcVar5 - (long)param_2)) {
        __s2_00 = *(GenericValue **)(pGVar12 + 8);
        if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
          __s2_00 = pGVar12;
        }
        if ((__s2_00 == (GenericValue *)param_2) ||
           (piVar4 = piVar8, iVar3 = memcmp(param_2,__s2_00,(size_t)piVar8), __s2_00 = extraout_x1,
           iVar3 == 0)) break;
      }
      lVar6 = lVar6 + -0x30;
      pGVar12 = pGVar12 + 0x30;
      if (lVar6 == 0) {
        DAT_01785a60 = 0;
        DAT_01785a58 = 0;
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        return param_4;
      }
    } while( true );
  }
  if (pGVar12 == pGVar11 + (ulong)uVar2 * 0x30) {
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    return param_4;
  }
  pcVar5 = pcVar10;
  if (*(short *)(pGVar12 + 0x2e) == 0) {
    return param_4;
  }
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  uVar2 = *(uint *)param_1;
  pGVar11 = *(GenericValue **)(param_1 + 8);
  pGVar12 = pGVar11;
  if (uVar2 == 0) {
LAB_00c5e978:
    if (pGVar12 != pGVar11 + (ulong)uVar2 * 0x30) {
      if (*(short *)(*(long *)(pGVar12 + 0x20) + (ulong)(uint)param_3 * 0x18 + 0x16) == 0) {
        return param_4;
      }
      uVar7 = (ulong)(uint)param_3;
      do {
        pcVar10 = pcVar10 + 1;
      } while (*pcVar10 != '\0');
      uVar2 = *(uint *)param_1;
      piVar8 = *(int **)(param_1 + 8);
      piVar4 = piVar8;
      if (uVar2 == 0) {
LAB_00c5ea38:
        if (piVar4 != piVar8 + (ulong)uVar2 * 0xc) {
          lVar6 = *(long *)(piVar4 + 8);
          goto LAB_00c5ea64;
        }
      }
      else {
        lVar6 = (ulong)uVar2 * 0x30;
        do {
          iVar3 = *piVar4;
          if ((*(ushort *)((long)piVar4 + 0x16) & 0x1000) != 0) {
            iVar3 = 0x15 - *(char *)((long)piVar4 + 0x15);
          }
          if (iVar3 == (int)((long)pcVar10 - (long)param_2)) {
            piVar9 = *(int **)(piVar4 + 2);
            if ((*(ushort *)((long)piVar4 + 0x16) & 0x1000) != 0) {
              piVar9 = piVar4;
            }
            if ((piVar9 == (int *)param_2) ||
               (iVar3 = memcmp(param_2,piVar9,(long)pcVar10 - (long)param_2 & 0xffffffff),
               iVar3 == 0)) goto LAB_00c5ea38;
          }
          lVar6 = lVar6 + -0x30;
          piVar4 = piVar4 + 0xc;
        } while (lVar6 != 0);
      }
      lVar6 = 0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
LAB_00c5ea64:
      if ((*(byte *)(lVar6 + uVar7 * 0x18 + 0x17) >> 4 & 1) != 0) {
        return (char *)(lVar6 + uVar7 * 0x18);
      }
      return *(char **)(lVar6 + uVar7 * 0x18 + 8);
    }
  }
  else {
    piVar8 = (int *)((long)pcVar5 - (long)param_2 & 0xffffffff);
    lVar6 = (ulong)uVar2 * 0x30;
    do {
      uVar1 = *(uint *)pGVar12;
      if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
        uVar1 = 0x15 - (int)(char)pGVar12[0x15];
      }
      if (uVar1 == (uint)((long)pcVar5 - (long)param_2)) {
        __s2_00 = *(GenericValue **)(pGVar12 + 8);
        if ((*(ushort *)(pGVar12 + 0x16) & 0x1000) != 0) {
          __s2_00 = pGVar12;
        }
        if ((__s2_00 == (GenericValue *)param_2) ||
           (piVar4 = piVar8, iVar3 = memcmp(param_2,__s2_00,(size_t)piVar8),
           __s2_00 = extraout_x1_00, iVar3 == 0)) goto LAB_00c5e978;
      }
      lVar6 = lVar6 + -0x30;
      pGVar12 = pGVar12 + 0x30;
    } while (lVar6 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
  pcVar5 = (char *)((long)piVar4 + -1);
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  uVar2 = *(uint *)__s2_00;
  piVar9 = *(int **)(__s2_00 + 8);
  piVar8 = piVar9;
  if (uVar2 == 0) {
LAB_00c5eb6c:
    if (piVar8 != piVar9 + (ulong)uVar2 * 0xc) {
      lVar6 = *(long *)(piVar8 + 8);
      goto LAB_00c5eb98;
    }
  }
  else {
    lVar6 = (ulong)uVar2 * 0x30;
    do {
      iVar3 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar3 == (int)((long)pcVar5 - (long)piVar4)) {
        __s2 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          __s2 = piVar8;
        }
        if ((__s2 == piVar4) ||
           (iVar3 = memcmp(piVar4,__s2,(long)pcVar5 - (long)piVar4 & 0xffffffff), iVar3 == 0))
        goto LAB_00c5eb6c;
      }
      lVar6 = lVar6 + -0x30;
      piVar8 = piVar8 + 0xc;
    } while (lVar6 != 0);
  }
  lVar6 = 0;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00c5eb98:
  return (char *)(lVar6 + (uVar7 & 0xffffffff) * 0x18);
}

