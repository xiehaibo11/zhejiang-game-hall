
/* cocostudio::TriggerMng::parse(cocostudio::CocoLoader*, cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::TriggerMng::parse(TriggerMng *this,CocoLoader *param_1,stExpCocoNode *param_2)

{
  long lVar1;
  char *__ptr;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  TriggerObj *this_00;
  char *__size;
  long *plVar7;
  ulong uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_148 [16];
  void *local_138;
  void *local_130;
  void *pvStack_128;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  void **ppvStack_100;
  undefined8 local_f8;
  void *pvStack_f0;
  void *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  uint local_c0 [2];
  TriggerObj *pTStack_b8;
  undefined8 local_b0;
  TriggerMng *pTStack_a8;
  TriggerMng *pTStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = stExpCocoNode::GetChildNum(param_2 + 0xd0);
  uVar8 = (ulong)uVar3;
  lVar5 = stExpCocoNode::GetChildArray(param_2 + 0xd0,param_1);
  puVar6 = (undefined8 *)cocos2d::ScriptEngineManager::getInstance();
  plVar7 = (long *)*puVar6;
  if (plVar7 == (long *)0x0) {
    if (0 < (int)uVar3) {
      do {
        this_00 = (TriggerObj *)TriggerObj::create();
        (**(code **)(*(long *)this_00 + 0x38))(this_00,param_1,lVar5);
        uVar4 = TriggerObj::getId(this_00);
        local_c0[0] = uVar4;
        pTStack_b8 = this_00;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>>>
        ::
        __emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,cocostudio::TriggerObj*>>
                  ((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,cocostudio::TriggerObj*>>>
                    *)(this + 8),local_c0,(pair *)local_c0);
        cocos2d::Ref::retain((Ref *)this_00);
        uVar8 = uVar8 - 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar8 != 0);
    }
  }
  else if (0 < (int)uVar3) {
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    pTStack_a8 = (TriggerMng *)0x0;
    local_b0 = 0;
    uStack_98 = 0;
    pTStack_a0 = (TriggerMng *)0x0;
    pTStack_b8 = (TriggerObj *)0x0;
    local_c0[0] = 0;
    local_c0[1] = 0;
    local_70 = 0x400;
    local_68 = 0;
    local_60 = 0;
    pTStack_a8 = operator_new(0x28);
    *(undefined8 *)(pTStack_a8 + 0x18) = 0;
    *(undefined8 *)(pTStack_a8 + 0x20) = 0;
    *(undefined8 *)(pTStack_a8 + 8) = 0x10000;
    *(undefined8 *)(pTStack_a8 + 0x10) = 0;
    *(undefined8 *)pTStack_a8 = 0;
    pTStack_a0 = pTStack_a8;
    buildJson(pTStack_a8,(GenericDocument *)local_c0,param_1,param_2);
    ppvStack_100 = &local_130;
    local_108 = (char *)0x100;
    pvStack_128 = (void *)0x0;
    local_130 = (void *)0x0;
    local_118 = (char *)0x0;
    local_120 = (char *)0x0;
    pvStack_f0 = (void *)0x0;
    local_f8 = 0;
    uStack_e0 = 0;
    local_e8 = (void *)0x0;
    local_110 = (char *)0x0;
    local_d8 = 0;
    uStack_d0 = 0x200;
    local_c8 = 0x144;
    local_c4 = 0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>>
              ((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)local_c0,(Writer *)&ppvStack_100);
    pcVar2 = local_118;
    __ptr = local_120;
    if (local_110 < local_118 + 1) {
      if (local_120 == (char *)0x0) {
        __size = local_108;
        if (local_130 == (void *)0x0) {
          local_130 = operator_new(1);
          __size = local_108;
          pvStack_128 = local_130;
        }
      }
      else {
        __size = local_110 + (((ulong)(local_110 + (1 - (long)local_120)) >> 1) - (long)local_120);
      }
      lVar5 = (long)pcVar2 - (long)__ptr;
      if (__size < (char *)(lVar5 + 1)) {
        __size = (char *)(lVar5 + 1);
      }
      if (__size == (char *)0x0) {
        free(__ptr);
        local_120 = (char *)0x0;
      }
      else {
        local_120 = realloc(__ptr,(size_t)__size);
      }
      local_118 = local_120 + lVar5;
      local_110 = local_120 + (long)__size;
    }
    *local_118 = '\0';
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_148,local_120);
    (**(code **)(*plVar7 + 0x98))(plVar7,1,local_148);
    if (((byte)local_148[0] & 1) != 0) {
      operator_delete(local_138);
    }
    free(local_e8);
    if (pvStack_f0 != (void *)0x0) {
      operator_delete(pvStack_f0);
    }
    free(local_120);
    if (pvStack_128 != (void *)0x0) {
      operator_delete(pvStack_128);
    }
    rapidjson::
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
    ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                        *)local_c0);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

