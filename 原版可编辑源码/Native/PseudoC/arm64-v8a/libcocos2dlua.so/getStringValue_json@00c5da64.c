
/* cocostudio::DictionaryHelper::getStringValue_json(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, char const*) */

int * __thiscall
cocostudio::DictionaryHelper::getStringValue_json
          (DictionaryHelper *this,GenericValue *param_1,char *param_2,char *param_3)

{
  int *__s2;
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(short *)(param_1 + 0x16) == 0) {
    return (int *)param_3;
  }
  pcVar5 = param_2 + -1;
  pcVar3 = pcVar5;
  do {
    pcVar3 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  piVar7 = *(int **)(param_1 + 8);
  uVar1 = *(uint *)param_1;
  uVar9 = (ulong)uVar1;
  piVar4 = piVar7 + uVar9 * 0xc;
  piVar6 = piVar7;
  if (uVar1 != 0) {
    lVar8 = uVar9 * 0x30;
    do {
      iVar2 = *piVar6;
      if ((*(ushort *)((long)piVar6 + 0x16) & 0x1000) != 0) {
        iVar2 = 0x15 - *(char *)((long)piVar6 + 0x15);
      }
      if (iVar2 == (int)((long)pcVar3 - (long)param_2)) {
        __s2 = *(int **)(piVar6 + 2);
        if ((*(ushort *)((long)piVar6 + 0x16) & 0x1000) != 0) {
          __s2 = piVar6;
        }
        if ((__s2 == (int *)param_2) ||
           (iVar2 = memcmp(param_2,__s2,(long)pcVar3 - (long)param_2 & 0xffffffff), iVar2 == 0))
        break;
      }
      lVar8 = lVar8 + -0x30;
      piVar6 = piVar6 + 0xc;
      if (lVar8 == 0) {
        return (int *)param_3;
      }
    } while( true );
  }
  pcVar3 = pcVar5;
  if (piVar4 == piVar6) {
    return (int *)param_3;
  }
  do {
    pcVar3 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  if (uVar1 != 0) {
    lVar8 = uVar9 * 0x30;
    do {
      iVar2 = *piVar7;
      if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
        iVar2 = 0x15 - *(char *)((long)piVar7 + 0x15);
      }
      if (iVar2 == (int)((long)pcVar3 - (long)param_2)) {
        piVar6 = *(int **)(piVar7 + 2);
        if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
          piVar6 = piVar7;
        }
        if ((piVar6 == (int *)param_2) ||
           (iVar2 = memcmp(param_2,piVar6,(long)pcVar3 - (long)param_2 & 0xffffffff), iVar2 == 0))
        break;
      }
      lVar8 = lVar8 + -0x30;
      piVar7 = piVar7 + 0xc;
      if (lVar8 == 0) {
        DAT_01785a60 = 0;
        DAT_01785a58 = 0;
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        return (int *)param_3;
      }
    } while( true );
  }
  if (piVar7 == piVar4) {
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    return (int *)param_3;
  }
  if (*(short *)((long)piVar7 + 0x2e) == 0) {
    return (int *)param_3;
  }
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  uVar1 = *(uint *)param_1;
  piVar7 = *(int **)(param_1 + 8);
  piVar6 = piVar7;
  if (uVar1 == 0) {
LAB_00c5dc7c:
    if (piVar6 != piVar7 + (ulong)uVar1 * 0xc) {
      piVar7 = piVar6 + 6;
      if ((*(byte *)((long)piVar6 + 0x2f) >> 4 & 1) != 0) {
        return piVar7;
      }
      goto LAB_00c5dcac;
    }
  }
  else {
    lVar8 = (ulong)uVar1 * 0x30;
    do {
      iVar2 = *piVar6;
      if ((*(ushort *)((long)piVar6 + 0x16) & 0x1000) != 0) {
        iVar2 = 0x15 - *(char *)((long)piVar6 + 0x15);
      }
      if (iVar2 == (int)((long)pcVar5 - (long)param_2)) {
        piVar4 = *(int **)(piVar6 + 2);
        if ((*(ushort *)((long)piVar6 + 0x16) & 0x1000) != 0) {
          piVar4 = piVar6;
        }
        if ((piVar4 == (int *)param_2) ||
           (iVar2 = memcmp(param_2,piVar4,(long)pcVar5 - (long)param_2 & 0xffffffff), iVar2 == 0))
        goto LAB_00c5dc7c;
      }
      lVar8 = lVar8 + -0x30;
      piVar6 = piVar6 + 0xc;
    } while (lVar8 != 0);
  }
  piVar7 = (int *)&rapidjson::
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
LAB_00c5dcac:
  return *(int **)(piVar7 + 2);
}

