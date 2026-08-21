
/* fairygui::UIObjectFactory::setPackageItemExtension(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::function<fairygui::GComponent* ()>) */

void fairygui::UIObjectFactory::setPackageItemExtension(basic_string *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  basic_string *local_70 [4];
  basic_string **local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) goto LAB_00a9ddf0;
  lVar3 = UIPackage::getItemByURL(param_1);
  if (lVar3 != 0) {
    plVar4 = (long *)param_2[4];
    if (plVar4 == (long *)0x0) {
      local_50 = (basic_string **)0x0;
    }
    else if (param_2 == plVar4) {
      local_50 = local_70;
      (**(code **)(*plVar4 + 0x18))(plVar4,local_70);
    }
    else {
      local_50 = (basic_string **)(**(code **)(*plVar4 + 0x10))();
    }
    FUN_00a9e59c(local_70,lVar3 + 0xe0);
    if (local_70 == local_50) {
      pcVar5 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (basic_string **)0x0) goto LAB_00a9dd44;
      pcVar5 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar5)();
  }
LAB_00a9dd44:
  local_70[0] = param_1;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<fairygui::GComponent*()>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)_packageItemExtensions,(piecewise_construct_t *)param_1,
                     (tuple *)&DAT_013ce012,(tuple *)local_70);
  plVar4 = (long *)param_2[4];
  if (plVar4 == (long *)0x0) {
    local_50 = (basic_string **)0x0;
  }
  else if (param_2 == plVar4) {
    local_50 = local_70;
    (**(code **)(*plVar4 + 0x18))(plVar4,local_70);
  }
  else {
    local_50 = (basic_string **)(**(code **)(*plVar4 + 0x10))(plVar4);
  }
  FUN_00a9e59c(local_70,lVar3 + 0x30);
  if (local_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (basic_string **)0x0) goto LAB_00a9ddf0;
    pcVar5 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar5)();
LAB_00a9ddf0:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

