
/* cocostudio::DictionaryHelper::getSubDictionary_json(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*) */

int * __thiscall
cocostudio::DictionaryHelper::getSubDictionary_json
          (DictionaryHelper *this,GenericValue *param_1,char *param_2)

{
  int *__s2;
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  
  pcVar3 = param_2 + -1;
  do {
    pcVar3 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  uVar1 = *(uint *)param_1;
  piVar4 = *(int **)(param_1 + 8);
  piVar5 = piVar4;
  if (uVar1 == 0) {
LAB_00c5d1c0:
    if (piVar5 != piVar4 + (ulong)uVar1 * 0xc) {
      return piVar5 + 6;
    }
  }
  else {
    lVar6 = (ulong)uVar1 * 0x30;
    do {
      iVar2 = *piVar5;
      if ((*(ushort *)((long)piVar5 + 0x16) & 0x1000) != 0) {
        iVar2 = 0x15 - *(char *)((long)piVar5 + 0x15);
      }
      if (iVar2 == (int)((long)pcVar3 - (long)param_2)) {
        __s2 = *(int **)(piVar5 + 2);
        if ((*(ushort *)((long)piVar5 + 0x16) & 0x1000) != 0) {
          __s2 = piVar5;
        }
        if ((__s2 == (int *)param_2) ||
           (iVar2 = memcmp(param_2,__s2,(long)pcVar3 - (long)param_2 & 0xffffffff), iVar2 == 0))
        goto LAB_00c5d1c0;
      }
      lVar6 = lVar6 + -0x30;
      piVar5 = piVar5 + 0xc;
    } while (lVar6 != 0);
  }
  DAT_01785a60 = 0;
  DAT_01785a58 = 0;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  return (int *)&rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::
                 operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                 ::buffer;
}

