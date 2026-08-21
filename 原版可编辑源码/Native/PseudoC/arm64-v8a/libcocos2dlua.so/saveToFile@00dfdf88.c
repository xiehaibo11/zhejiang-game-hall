
/* cocos2d::extension::Manifest::saveToFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::extension::Manifest::saveToFile(Manifest *this,basic_string *param_1)

{
  long lVar1;
  char *__ptr;
  char *pcVar2;
  long *plVar3;
  char *__size;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [16];
  void *local_d0;
  void **local_c8;
  undefined8 local_c0;
  void *pvStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  void *local_80;
  void *pvStack_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_c8 = &local_80;
  pvStack_78 = (void *)0x0;
  local_80 = (void *)0x0;
  local_68 = (char *)0x0;
  local_70 = (char *)0x0;
  pvStack_b8 = (void *)0x0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_90 = 0x144;
  local_60 = (char *)0x0;
  local_58 = (char *)0x100;
  local_a0 = 0;
  uStack_98 = 0x200;
  local_8c = 0x2000;
  local_88 = 4;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  Accept<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>>
            ((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)(this + 0x140),(PrettyWriter *)&local_c8);
  plVar3 = (long *)FileUtils::getInstance();
  pcVar2 = local_68;
  __ptr = local_70;
  if (local_60 < local_68 + 1) {
    if (local_70 == (char *)0x0) {
      __size = local_58;
      if (local_80 == (void *)0x0) {
        local_80 = operator_new(1);
        __size = local_58;
        pvStack_78 = local_80;
      }
    }
    else {
      __size = local_60 + (((ulong)(local_60 + (1 - (long)local_70)) >> 1) - (long)local_70);
    }
    lVar4 = (long)pcVar2 - (long)__ptr;
    if (__size < (char *)(lVar4 + 1)) {
      __size = (char *)(lVar4 + 1);
    }
    if (__size == (char *)0x0) {
      free(__ptr);
      local_70 = (char *)0x0;
    }
    else {
      local_70 = realloc(__ptr,(size_t)__size);
    }
    local_68 = local_70 + lVar4;
    local_60 = local_70 + (long)__size;
  }
  *local_68 = '\0';
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e0,local_70);
  (**(code **)(*plVar3 + 0xd8))(plVar3,local_e0,param_1);
  if (((byte)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  free(local_b0);
  if (pvStack_b8 != (void *)0x0) {
    operator_delete(pvStack_b8);
  }
  free(local_70);
  if (pvStack_78 != (void *)0x0) {
    operator_delete(pvStack_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

