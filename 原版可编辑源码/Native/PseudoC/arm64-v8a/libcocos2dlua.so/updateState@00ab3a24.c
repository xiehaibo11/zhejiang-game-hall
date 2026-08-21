
/* fairygui::GearLook::updateState() */

void __thiscall fairygui::GearLook::updateState(GearLook *this)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  piecewise_construct_t *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = *(long *)(this + 8);
  uVar5 = *(undefined8 *)(lVar4 + 0xec);
  uVar1 = *(undefined1 *)(lVar4 + 0xf6);
  uVar2 = *(undefined1 *)(lVar4 + 0xf5);
  local_50 = (piecewise_construct_t *)GController::getSelectedPageId(*(GController **)(this + 0x10))
  ;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x20),local_50,(tuple *)&DAT_013cf215,
                     (tuple *)&local_50);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  *(undefined1 *)(lVar4 + 0x30) = uVar1;
  *(undefined1 *)(lVar4 + 0x31) = uVar2;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

