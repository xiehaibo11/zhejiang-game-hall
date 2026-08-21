
/* fairygui::GearAnimation::apply() */

void __thiscall fairygui::GearAnimation::apply(GearAnimation *this)

{
  GearAnimation *pGVar1;
  long lVar2;
  basic_string *pbVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  Value aVStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined1 *)(*(long *)(this + 8) + 0x99) = 1;
  pbVar3 = (basic_string *)GController::getSelectedPageId(*(GController **)(this + 0x10));
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>>>
                      *)(this + 0x20),pbVar3);
  pGVar1 = this + 0x48;
  if (lVar4 != 0) {
    pGVar1 = (GearAnimation *)(lVar4 + 0x28);
  }
  uVar6 = *(ulong *)pGVar1;
  plVar5 = *(long **)(this + 8);
  cocos2d::Value::Value(aVStack_48,(uVar6 & 0xff) != 0);
  (**(code **)(*plVar5 + 0x38))(plVar5,4,aVStack_48);
  cocos2d::Value::~Value(aVStack_48);
  plVar5 = *(long **)(this + 8);
  cocos2d::Value::Value(aVStack_48,(int)(uVar6 >> 0x20));
  (**(code **)(*plVar5 + 0x38))(plVar5,5,aVStack_48);
  cocos2d::Value::~Value(aVStack_48);
  *(undefined1 *)(*(long *)(this + 8) + 0x99) = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

