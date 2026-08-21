
/* cocos2d::experimental::AudioEngineImpl::setFinishCallback(int, std::__ndk1::function<void (int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> const&) */

void __thiscall
cocos2d::experimental::AudioEngineImpl::setFinishCallback
          (AudioEngineImpl *this,int param_1,function *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  int local_7c [3];
  int *local_70 [4];
  int **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70[0] = local_7c;
  local_7c[0] = param_1;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)(this + 0x68),(piecewise_construct_t *)local_7c,(tuple *)&DAT_014266eb,
                     (tuple *)local_70);
  plVar3 = *(long **)(param_2 + 0x20);
  if (plVar3 == (long *)0x0) {
    local_50 = (int **)0x0;
  }
  else if ((long *)param_2 == plVar3) {
    local_50 = local_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,local_70);
  }
  else {
    local_50 = (int **)(**(code **)(*plVar3 + 0x10))(plVar3);
  }
  FUN_009f16f8(local_70,lVar2 + 0x20);
  if (local_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 8);
  }
  else {
    if (local_50 == (int **)0x0) goto LAB_00e661f0;
    pcVar4 = *(code **)(*local_50 + 10);
  }
  (*pcVar4)();
LAB_00e661f0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

