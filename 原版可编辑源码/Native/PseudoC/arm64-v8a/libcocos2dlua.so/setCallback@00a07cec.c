
/* universe::network::ShowLineNumbers::setCallback(int, int, std::__ndk1::function<void
   (universe::network::ZhouLuJun*)> const&) */

void __thiscall
universe::network::ShowLineNumbers::setCallback
          (ShowLineNumbers *this,int param_1,int param_2,function *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 local_80 [2];
  undefined1 *local_70 [4];
  undefined1 **local_50;
  long local_38;
  
  local_70[0] = (undefined1 *)local_80;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80[0] = CONCAT44(param_1,param_2);
                    /* try { // try from 00a07d38 to 00b07e4f has its CatchHandler @ 00a07d38
                       catch() { ... } // from try @ 00a07d38 with catch @ 00a07d38
                       catch() { ... } // from try @ 00a07ed0 with catch @ 00a07d38 */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,std::__ndk1::function<void(universe::network::ZhouLuJun*)>>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,std::__ndk1::function<void(universe::network::ZhouLuJun*)>>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,std::__ndk1::function<void(universe::network::ZhouLuJun*)>>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,std::__ndk1::function<void(universe::network::ZhouLuJun*)>>>>
          ::
          __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
                    ((ulonglong *)this,(piecewise_construct_t *)local_80,(tuple *)&DAT_012f90f2,
                     (tuple *)local_70);
  plVar3 = *(long **)(param_3 + 0x20);
  if (plVar3 == (long *)0x0) {
    local_50 = (undefined1 **)0x0;
  }
  else if ((long *)param_3 == plVar3) {
    local_50 = local_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,local_70);
  }
  else {
    local_50 = (undefined1 **)(**(code **)(*plVar3 + 0x10))(plVar3);
  }
  FUN_00a0ba80(local_70,lVar2 + 0x20);
  if (local_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (undefined1 **)0x0) goto LAB_00a07dc4;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_00a07dc4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

