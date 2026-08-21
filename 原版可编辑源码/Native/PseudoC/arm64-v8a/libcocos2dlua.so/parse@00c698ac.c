
/* cocostudio::TriggerMng::parse(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall cocostudio::TriggerMng::parse(TriggerMng *this,GenericValue *param_1)

{
  long lVar1;
  char *__ptr;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  DictionaryHelper *pDVar5;
  undefined8 *puVar6;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *this_00;
  undefined8 uVar7;
  TriggerObj *this_01;
  char *__size;
  int iVar8;
  long *plVar9;
  long lVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  void *local_d0;
  void *pvStack_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  void **local_98;
  TriggerObj *local_90;
  void *pvStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined1 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar3 = DictionaryHelper::getArrayCount_json(pDVar5,param_1,"Triggers",0);
  puVar6 = (undefined8 *)cocos2d::ScriptEngineManager::getInstance();
  plVar9 = (long *)*puVar6;
  if (plVar9 == (long *)0x0) {
    if (0 < iVar3) {
      iVar8 = 0;
      do {
        pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
        uVar7 = DictionaryHelper::getSubDictionary_json(pDVar5,param_1,"Triggers",iVar8);
        this_01 = (TriggerObj *)TriggerObj::create();
        (**(code **)(*(long *)this_01 + 0x30))(this_01,uVar7);
        uVar4 = TriggerObj::getId(this_01);
        local_98 = (void **)CONCAT44(local_98._4_4_,uVar4);
        local_90 = this_01;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>>>
        ::
        __emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,cocostudio::TriggerObj*>>
                  ((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>>>
                    *)(this + 8),(uint *)&local_98,(pair *)&local_98);
        cocos2d::Ref::retain((Ref *)this_01);
        iVar8 = iVar8 + 1;
      } while (iVar3 != iVar8);
    }
  }
  else if (0 < iVar3) {
    pDVar5 = (DictionaryHelper *)DictionaryHelper::getInstance();
    this_00 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               *)DictionaryHelper::getSubDictionary_json(pDVar5,param_1,"Triggers");
    local_98 = &local_d0;
    local_b0 = (char *)0x0;
    local_a8 = (char *)0x100;
    pvStack_c8 = (void *)0x0;
    local_d0 = (void *)0x0;
    local_b8 = (char *)0x0;
    local_c0 = (char *)0x0;
    pvStack_88 = (void *)0x0;
    local_90 = (TriggerObj *)0x0;
    uStack_78 = 0;
    local_80 = (void *)0x0;
    local_70 = 0;
    uStack_68 = 0x200;
    local_60 = 0x144;
    local_5c = 0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>>
              (this_00,(Writer *)&local_98);
    pcVar2 = local_b8;
    __ptr = local_c0;
    if (local_b0 < local_b8 + 1) {
      if (local_c0 == (char *)0x0) {
        __size = local_a8;
        if (local_d0 == (void *)0x0) {
          local_d0 = operator_new(1);
          __size = local_a8;
          pvStack_c8 = local_d0;
        }
      }
      else {
        __size = local_b0 + (((ulong)(local_b0 + (1 - (long)local_c0)) >> 1) - (long)local_c0);
      }
      lVar10 = (long)pcVar2 - (long)__ptr;
      if (__size < (char *)(lVar10 + 1)) {
        __size = (char *)(lVar10 + 1);
      }
      if (__size == (char *)0x0) {
        free(__ptr);
        local_c0 = (char *)0x0;
      }
      else {
        local_c0 = realloc(__ptr,(size_t)__size);
      }
      local_b8 = local_c0 + lVar10;
      local_b0 = local_c0 + (long)__size;
    }
    *local_b8 = '\0';
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_e8,local_c0);
    (**(code **)(*plVar9 + 0x98))(plVar9,1,local_e8);
    if (((byte)local_e8[0] & 1) != 0) {
      operator_delete(local_d8);
    }
    free(local_80);
    if (pvStack_88 != (void *)0x0) {
      operator_delete(pvStack_88);
    }
    free(local_c0);
    if (pvStack_c8 != (void *)0x0) {
      operator_delete(pvStack_c8);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

