
/* cocostudio::WidgetPropertiesReader0300::setPropsForAllCustomWidgetFromJsonDictionary(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::ui::Widget*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall
cocostudio::WidgetPropertiesReader0300::setPropsForAllCustomWidgetFromJsonDictionary
          (WidgetPropertiesReader0300 *this,basic_string *param_1,Widget *param_2,
          GenericValue *param_3)

{
  long *plVar1;
  long lVar2;
  GUIReader *pGVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  basic_string *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pGVar3 = DAT_01785a68;
  if ((DAT_01785a68 == (GUIReader *)0x0) &&
     (pGVar3 = operator_new(0x98,(nothrow_t *)&std::nothrow), pGVar3 != (GUIReader *)0x0)) {
    GUIReader::GUIReader(pGVar3);
  }
  DAT_01785a68 = pGVar3;
  pGVar3 = DAT_01785a68;
  local_60 = param_1;
  lVar4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Ref*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Ref*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Ref*>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(DAT_01785a68 + 0x80),(piecewise_construct_t *)param_1,
                     (tuple *)&DAT_0141488b,(tuple *)&local_60);
  lVar7 = *(long *)(lVar4 + 0x38);
  local_60 = param_1;
  lVar4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,void(cocos2d::Ref::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Ref*,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,void(cocos2d::Ref::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Ref*,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,void(cocos2d::Ref::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Ref*,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(pGVar3 + 0x68),(piecewise_construct_t *)param_1,
                     (tuple *)&DAT_0141488b,(tuple *)&local_60);
  if (lVar7 != 0) {
    pcVar5 = *(code **)(lVar4 + 0x38);
    uVar6 = *(ulong *)(lVar4 + 0x40) & 1;
    if (uVar6 != 0 || pcVar5 != (code *)0x0) {
      plVar1 = (long *)(lVar7 + ((long)*(ulong *)(lVar4 + 0x40) >> 1));
      if (uVar6 != 0) {
        pcVar5 = *(code **)(pcVar5 + *plVar1);
      }
      (*pcVar5)(plVar1,param_1,param_2,param_3);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

