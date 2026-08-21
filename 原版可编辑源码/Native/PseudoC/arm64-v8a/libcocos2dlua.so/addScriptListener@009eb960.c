
/* universe::Downloader2::addScriptListener(int, int) */

void __thiscall universe::Downloader2::addScriptListener(Downloader2 *this,int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int local_3c [3];
  int *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = local_3c;
  local_3c[0] = param_1;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,int>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)(this + 0x180),(piecewise_construct_t *)local_3c,(tuple *)&DAT_012f4d1b,
                     (tuple *)&local_30);
  *(int *)(lVar2 + 0x14) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

