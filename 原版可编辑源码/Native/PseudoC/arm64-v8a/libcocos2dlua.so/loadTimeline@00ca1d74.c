
/* cocostudio::timeline::ActionTimelineCache::loadTimeline(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

long * __thiscall
cocostudio::timeline::ActionTimelineCache::loadTimeline
          (ActionTimelineCache *this,GenericValue *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  DictionaryHelper *pDVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  GenericValue *pGVar10;
  code *pcVar11;
  int iVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  pcVar6 = (char *)DictionaryHelper::getStringValue_json(pDVar5,param_1,"frameType",(char *)0x0);
  if (pcVar6 == (char *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_a0,pcVar6);
    lVar7 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>>>
                        *)this,(basic_string *)local_a0);
    if (((byte)local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    plVar8 = (long *)0x0;
    if (lVar7 != 0) {
      plVar8 = (long *)Timeline::create();
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      uVar2 = DictionaryHelper::getIntValue_json(pDVar5,param_1,"actionTag",0);
      (**(code **)(*plVar8 + 0x40))(plVar8,uVar2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b8,pcVar6);
      lVar7 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocostudio::timeline::Frame*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>>>
                          *)this,(basic_string *)local_b8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007d44e0("unordered_map::at: key not found");
      }
      plVar9 = *(long **)(lVar7 + 0x50);
      if (plVar9 == (long *)0x0) {
        local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )0x0;
      }
      else if ((long *)(lVar7 + 0x30) == plVar9) {
        local_80 = local_a0;
        (**(code **)(*plVar9 + 0x18))(plVar9,local_a0);
      }
      else {
        local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(**(code **)(*plVar9 + 0x10))();
      }
      if (((byte)local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
      iVar3 = DictionaryHelper::getArrayCount_json(pDVar5,param_1,"frames",0);
      if (0 < iVar3) {
        iVar12 = 0;
        do {
          pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
          pGVar10 = (GenericValue *)
                    DictionaryHelper::getSubDictionary_json(pDVar5,param_1,"frames",iVar12);
          if (local_80 ==
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0)
          {
            plVar9 = (long *)0x0;
          }
          else {
            plVar9 = (long *)(**(code **)(*(long *)local_80 + 0x30))(local_80,pGVar10);
            pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
            uVar2 = DictionaryHelper::getIntValue_json(pDVar5,pGVar10,"frameIndex",0);
            (**(code **)(*plVar9 + 0x10))(plVar9,uVar2);
            pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
            uVar4 = DictionaryHelper::getBooleanValue_json(pDVar5,pGVar10,"tween",false);
            (**(code **)(*plVar9 + 0x40))(plVar9,uVar4 & 1);
          }
          (**(code **)(*plVar8 + 0x28))(plVar8,plVar9);
          iVar12 = iVar12 + 1;
        } while (iVar3 != iVar12);
      }
      if (local_a0 == local_80) {
        pcVar11 = *(code **)(*(long *)local_80 + 0x20);
      }
      else {
        if (local_80 ==
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0)
        goto LAB_00ca1fd4;
        pcVar11 = *(code **)(*(long *)local_80 + 0x28);
      }
      (*pcVar11)();
    }
  }
LAB_00ca1fd4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

