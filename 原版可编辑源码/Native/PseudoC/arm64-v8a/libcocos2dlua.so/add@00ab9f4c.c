
/* fairygui::WeakPtr::add(fairygui::GObject*) */

void fairygui::WeakPtr::add(GObject *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  piecewise_construct_t *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  if (param_1 != (GObject *)0x0) {
    lVar3 = *(long *)(param_1 + 0x1d0);
    if (lVar3 == 0) {
      local_30 = (piecewise_construct_t *)(param_1 + 0x1c8);
      lVar3 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>>>
              ::
              __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                        (&_weakPointers,local_30,(tuple *)&DAT_013cfda0,(tuple *)&local_30);
      *(GObject **)(lVar3 + 0x18) = param_1;
      lVar3 = *(long *)(param_1 + 0x1d0);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x1c8);
    *(long *)(param_1 + 0x1d0) = lVar3 + 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

