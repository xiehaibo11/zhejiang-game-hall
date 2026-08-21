
/* cocos2d::GroupCommandManager::releaseGroupID(int) */

void __thiscall cocos2d::GroupCommandManager::releaseGroupID(GroupCommandManager *this,int param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int local_3c [3];
  int *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = local_3c;
  local_3c[0] = param_1;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,bool>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)(this + 0x28),(piecewise_construct_t *)local_3c,(tuple *)&DAT_0144cf3e,
                     (tuple *)&local_30);
  *(undefined1 *)(lVar3 + 0x14) = 0;
  piVar1 = *(int **)(this + 0x58);
  if (piVar1 == *(int **)(this + 0x60)) {
    std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
              ((vector<int,std::__ndk1::allocator<int>> *)(this + 0x50),local_3c);
  }
  else {
    *piVar1 = local_3c[0];
    *(int **)(this + 0x58) = piVar1 + 1;
  }
                    /* try { // try from 00fddabc to 010ddac3 has its CatchHandler @ 00fddb80 */
  if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* try { // try from 00fddac4 to 010ddaff has its CatchHandler @ 00fdd9a4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

