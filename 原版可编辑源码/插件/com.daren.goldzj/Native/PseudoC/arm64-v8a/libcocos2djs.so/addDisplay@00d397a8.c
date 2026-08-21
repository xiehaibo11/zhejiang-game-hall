
/* dragonBones::SkinData::addDisplay(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, dragonBones::DisplayData*) */

void __thiscall
dragonBones::SkinData::addDisplay(SkinData *this,basic_string *param_1,DisplayData *param_2)

{
  long lVar1;
  long lVar2;
  DisplayData *local_40 [2];
  basic_string *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 != (DisplayData *)0x0) {
    *(SkinData **)(param_2 + 0x60) = this;
  }
  local_40[0] = param_2;
  local_30 = param_1;
  lVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x28),(piecewise_construct_t *)param_1,
                     (tuple *)&DAT_019489f1,(tuple *)&local_30);
  if (*(undefined8 **)(lVar2 + 0x40) == *(undefined8 **)(lVar2 + 0x48)) {
    std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>
    ::__push_back_slow_path<dragonBones::DisplayData*const&>
              ((vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>
                *)(lVar2 + 0x38),local_40);
  }
  else {
    **(undefined8 **)(lVar2 + 0x40) = param_2;
    *(long *)(lVar2 + 0x40) = *(long *)(lVar2 + 0x40) + 8;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

