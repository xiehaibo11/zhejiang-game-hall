
/* cocostudio::SpriteFrameCacheHelper::retainSpriteFrames(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocostudio::SpriteFrameCacheHelper::retainSpriteFrames
          (SpriteFrameCacheHelper *this,basic_string *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  SpriteFrameCacheHelper *pSVar4;
  long *plVar5;
  SpriteFrameCache *this_00;
  long lVar6;
  void *pvVar7;
  SpriteFrame **local_b0;
  SpriteFrame **local_a8;
  SpriteFrame **local_a0;
  byte local_98 [16];
  void *local_88;
  Ref *local_78;
  void *local_70 [2];
  undefined8 *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pSVar4 = (SpriteFrameCacheHelper *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>>>
                       *)this,param_1);
  if (this + 8 == pSVar4) {
    plVar5 = (long *)cocos2d::FileUtils::getInstance();
    (**(code **)(*plVar5 + 0x50))(local_98,plVar5,param_1);
    plVar5 = (long *)cocos2d::FileUtils::getInstance();
    (**(code **)(*plVar5 + 0xc0))(local_70,plVar5,local_98);
    this_00 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,"frames");
    local_78 = (Ref *)&local_b0;
    lVar6 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                      ((basic_string *)local_70,(piecewise_construct_t *)&local_b0,
                       (tuple *)&DAT_014137d8,(tuple *)&local_78);
    lVar6 = cocos2d::Value::asValueMap((Value *)(lVar6 + 0x28));
    if (((byte)local_b0._0_1_ & 1) != 0) {
      operator_delete(local_a0);
    }
    local_a8 = (SpriteFrame **)0x0;
    local_a0 = (SpriteFrame **)0x0;
    local_b0 = (SpriteFrame **)0x0;
    for (plVar5 = *(long **)(lVar6 + 0x10); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      local_78 = (Ref *)cocos2d::SpriteFrameCache::getSpriteFrameByName
                                  (this_00,(basic_string *)(plVar5 + 2));
      if (local_a8 == local_a0) {
        std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>::
        __push_back_slow_path<cocos2d::SpriteFrame*const&>
                  ((vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>> *)
                   &local_b0,(SpriteFrame **)&local_78);
      }
      else {
        *local_a8 = (SpriteFrame *)local_78;
        local_a8 = local_a8 + 1;
      }
      if (local_78 != (Ref *)0x0) {
        cocos2d::Ref::retain(local_78);
      }
    }
    local_78 = (Ref *)param_1;
    lVar6 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)this,(piecewise_construct_t *)param_1,(tuple *)&DAT_014137d8,
                       (tuple *)&local_78);
    if ((vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>> *)
        (lVar6 + 0x38) !=
        (vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>> *)&local_b0) {
      std::__ndk1::vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>>::
      assign<cocos2d::SpriteFrame**>
                ((vector<cocos2d::SpriteFrame*,std::__ndk1::allocator<cocos2d::SpriteFrame*>> *)
                 (lVar6 + 0x38),local_b0,local_a8);
    }
    pvVar2 = local_70[0];
    puVar3 = local_60;
    if (local_b0 != (SpriteFrame **)0x0) {
      local_a8 = local_b0;
      operator_delete(local_b0);
      pvVar2 = local_70[0];
      puVar3 = local_60;
    }
    while (puVar3 != (void *)0x0) {
      pvVar7 = (void *)*puVar3;
      local_70[0] = pvVar2;
      cocos2d::Value::~Value((Value *)(puVar3 + 5));
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      pvVar2 = local_70[0];
      puVar3 = pvVar7;
    }
    local_70[0] = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

