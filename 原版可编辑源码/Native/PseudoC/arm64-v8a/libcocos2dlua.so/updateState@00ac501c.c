
/* fairygui::GearAnimation::updateState() */

void __thiscall fairygui::GearAnimation::updateState(GearAnimation *this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  piecewise_construct_t *local_60;
  Value aVStack_58 [16];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(this + 8) + 0x30))(aVStack_48,*(long **)(this + 8),4);
  uVar2 = cocos2d::Value::asBool(aVStack_48);
  (**(code **)(**(long **)(this + 8) + 0x30))(aVStack_58,*(long **)(this + 8),5);
  lVar3 = cocos2d::Value::asInt(aVStack_58);
  local_60 = (piecewise_construct_t *)GController::getSelectedPageId(*(GController **)(this + 0x10))
  ;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x20),local_60,(tuple *)&DAT_013d02c0,
                     (tuple *)&local_60);
  *(ulong *)(lVar4 + 0x28) = uVar2 & 1 | lVar3 << 0x20;
  cocos2d::Value::~Value(aVStack_58);
  cocos2d::Value::~Value(aVStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

