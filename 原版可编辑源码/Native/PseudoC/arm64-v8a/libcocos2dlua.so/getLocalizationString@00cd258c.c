
/* cocostudio::JsonLocalizationManager::getLocalizationString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void cocostudio::JsonLocalizationManager::getLocalizationString
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                *param_1,long param_2,basic_string *param_3)

{
  basic_string *__s2;
  uint uVar1;
  basic_string bVar2;
  int iVar3;
  size_t sVar4;
  uint *puVar5;
  basic_string *pbVar6;
  basic_string *pbVar7;
  basic_string *pbVar8;
  long lVar9;
  basic_string *pbVar10;
  ulong uVar11;
  basic_string *pbVar12;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(param_1,param_3);
  puVar5 = *(uint **)(param_2 + 8);
  if (puVar5 == (uint *)0x0) {
    return;
  }
  bVar2 = *param_3;
  if (((byte)bVar2 & 1) == 0) {
    pbVar7 = param_3 + 1;
  }
  else {
    pbVar7 = *(basic_string **)(param_3 + 0x10);
  }
  pbVar6 = pbVar7 + -1;
  do {
    pbVar6 = pbVar6 + 1;
  } while (*pbVar6 != (basic_string)0x0);
  pbVar8 = *(basic_string **)(puVar5 + 2);
  uVar1 = *puVar5;
  uVar11 = (ulong)uVar1;
  pbVar12 = pbVar8 + uVar11 * 0x30;
  pbVar10 = pbVar8;
  if (uVar1 != 0) {
    lVar9 = uVar11 * 0x30;
    do {
      iVar3 = *(int *)pbVar10;
      if ((*(ushort *)(pbVar10 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - (char)pbVar10[0x15];
      }
      if (iVar3 == (int)((long)pbVar6 - (long)pbVar7)) {
        __s2 = *(basic_string **)(pbVar10 + 8);
        if ((*(ushort *)(pbVar10 + 0x16) & 0x1000) != 0) {
          __s2 = pbVar10;
        }
        if ((__s2 == pbVar7) ||
           (iVar3 = memcmp(pbVar7,__s2,(long)pbVar6 - (long)pbVar7 & 0xffffffff), iVar3 == 0))
        break;
      }
      lVar9 = lVar9 + -0x30;
      pbVar10 = pbVar10 + 0x30;
      if (lVar9 == 0) {
        return;
      }
    } while( true );
  }
  if (pbVar12 == pbVar10) {
    return;
  }
  if (((byte)bVar2 & 1) == 0) {
    pbVar7 = param_3 + 1;
  }
  else {
    pbVar7 = *(basic_string **)(param_3 + 0x10);
  }
  pbVar6 = pbVar7 + -1;
  do {
    pbVar6 = pbVar6 + 1;
  } while (*pbVar6 != (basic_string)0x0);
  if (uVar1 != 0) {
    lVar9 = uVar11 * 0x30;
    do {
      iVar3 = *(int *)pbVar8;
      if ((*(ushort *)(pbVar8 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - (char)pbVar8[0x15];
      }
      if (iVar3 == (int)((long)pbVar6 - (long)pbVar7)) {
        pbVar10 = *(basic_string **)(pbVar8 + 8);
        if ((*(ushort *)(pbVar8 + 0x16) & 0x1000) != 0) {
          pbVar10 = pbVar8;
        }
        if ((pbVar10 == pbVar7) ||
           (iVar3 = memcmp(pbVar7,pbVar10,(long)pbVar6 - (long)pbVar7 & 0xffffffff), iVar3 == 0))
        break;
      }
      lVar9 = lVar9 + -0x30;
      pbVar8 = pbVar8 + 0x30;
      if (lVar9 == 0) {
        DAT_01785a60 = 0;
        DAT_01785a58 = 0;
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        return;
      }
    } while( true );
  }
  if (pbVar8 == pbVar12) {
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    return;
  }
  if (((byte)pbVar8[0x2f] >> 2 & 1) == 0) {
    return;
  }
  if (((byte)*param_3 & 1) == 0) {
    param_3 = param_3 + 1;
  }
  else {
    param_3 = *(basic_string **)(param_3 + 0x10);
  }
  pbVar7 = param_3 + -1;
  do {
    pbVar7 = pbVar7 + 1;
  } while (*pbVar7 != (basic_string)0x0);
  uVar1 = **(uint **)(param_2 + 8);
  pbVar10 = *(basic_string **)(*(uint **)(param_2 + 8) + 2);
  pbVar6 = pbVar10;
  if (uVar1 == 0) {
LAB_00cd27e8:
    if (pbVar6 == pbVar10 + (ulong)uVar1 * 0x30) goto LAB_00cd2808;
    pbVar7 = pbVar6 + 0x18;
    if (((byte)pbVar6[0x2f] >> 4 & 1) != 0) goto LAB_00cd281c;
  }
  else {
    lVar9 = (ulong)uVar1 * 0x30;
    do {
      iVar3 = *(int *)pbVar6;
      if ((*(ushort *)(pbVar6 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - (char)pbVar6[0x15];
      }
      if (iVar3 == (int)((long)pbVar7 - (long)param_3)) {
        pbVar8 = *(basic_string **)(pbVar6 + 8);
        if ((*(ushort *)(pbVar6 + 0x16) & 0x1000) != 0) {
          pbVar8 = pbVar6;
        }
        if ((pbVar8 == param_3) ||
           (iVar3 = memcmp(param_3,pbVar8,(long)pbVar7 - (long)param_3 & 0xffffffff), iVar3 == 0))
        goto LAB_00cd27e8;
      }
      lVar9 = lVar9 + -0x30;
      pbVar6 = pbVar6 + 0x30;
    } while (lVar9 != 0);
LAB_00cd2808:
    pbVar7 = (basic_string *)
             &rapidjson::
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
  pbVar7 = *(basic_string **)(pbVar7 + 8);
LAB_00cd281c:
  sVar4 = strlen((char *)pbVar7);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1,(char *)pbVar7,sVar4);
  return;
}

