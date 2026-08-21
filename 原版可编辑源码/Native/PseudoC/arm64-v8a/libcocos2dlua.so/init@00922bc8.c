
/* cocostudio::CustomGUIReader::init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, int, int) */

void __thiscall
cocostudio::CustomGUIReader::init
          (CustomGUIReader *this,basic_string *param_1,int param_2,int param_3)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  ObjectFactory *this_00;
  long lVar4;
  long lVar5;
  code *pcVar6;
  TInfo aTStack_d0 [32];
  undefined1 auStack_b0 [48];
  basic_string *local_80;
  code *local_78;
  undefined8 uStack_70;
  CustomGUIReader *local_68;
  basic_string **local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x28) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
                    /* try { // try from 00922c08 to 00a22c53 has its CatchHandler @ 00922c08
                       catch() { ... } // from try @ 00922c08 with catch @ 00922c08
                       catch() { ... } // from try @ 00922c58 with catch @ 00922c08 */
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x28),(char *)pbVar2,uVar1);
  }
  *(int *)(this + 0x40) = param_2;
  *(int *)(this + 0x44) = param_3;
  this_00 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
  cocos2d::ObjectFactory::TInfo::TInfo(aTStack_d0);
  if (aTStack_d0 != (TInfo *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00922c54 to 00a22c57 has its CatchHandler @ 00922cac */
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
                    /* try { // try from 00922c58 to 00a22cbf has its CatchHandler @ 00922c08 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           aTStack_d0,(char *)pbVar2,uVar1);
  }
  local_80 = (basic_string *)&PTR_FUN_0169ce20;
  uStack_70 = 0;
  local_78 = createInstance;
  local_68 = this;
  local_60 = &local_80;
  FUN_00923624(&local_80,auStack_b0);
  if (&local_80 == local_60) {
    pcVar6 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (basic_string **)0x0) goto LAB_00922cc4;
                    /* catch() { ... } // from try @ 00922c54 with catch @ 00922cac */
    pcVar6 = *(code **)(*local_60 + 0x28);
  }
                    /* try { // try from 00922cc0 to 00a22d77 has its CatchHandler @ 00922cc0
                       catch() { ... } // from try @ 00922cc0 with catch @ 00922cc0
                       catch() { ... } // from try @ 00922df8 with catch @ 00922cc0 */
  (*pcVar6)();
LAB_00922cc4:
  cocos2d::ObjectFactory::registerType(this_00,aTStack_d0);
  lVar4 = GUIReader::getInstance();
  local_80 = param_1;
  lVar5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Ref*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Ref*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Ref*>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(lVar4 + 0x80),(piecewise_construct_t *)param_1,
                     (tuple *)0x12c813b,(tuple *)&local_80);
  *(CustomGUIReader **)(lVar5 + 0x38) = this;
  local_80 = param_1;
  lVar4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,void(cocos2d::Ref::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Ref*,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,void(cocos2d::Ref::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Ref*,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,void(cocos2d::Ref::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Ref*,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(lVar4 + 0x68),(piecewise_construct_t *)param_1,
                     (tuple *)0x12c813b,(tuple *)&local_80);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(code **)(lVar4 + 0x38) = setCustomProps;
  cocos2d::ObjectFactory::TInfo::~TInfo(aTStack_d0);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

