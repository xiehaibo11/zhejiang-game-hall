
/* cocos2d::GroupCommandManager::init() */

undefined8 __thiscall cocos2d::GroupCommandManager::init(GroupCommandManager *this)

{
  long lVar1;
  long lVar2;
  undefined4 local_3c [3];
  undefined4 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = local_3c;
  local_3c[0] = 0;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,bool>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int&&>,std::__ndk1::tuple<>>
                    ((int *)(this + 0x28),(piecewise_construct_t *)local_3c,(tuple *)&DAT_0144cf3e,
                     (tuple *)&local_30);
  *(undefined1 *)(lVar2 + 0x14) = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

