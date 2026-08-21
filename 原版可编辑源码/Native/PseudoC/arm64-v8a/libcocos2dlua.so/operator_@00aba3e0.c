
/* fairygui::WeakPtr::TEMPNAMEPLACEHOLDERVALUE(fairygui::GObject*) */

WeakPtr * __thiscall fairygui::WeakPtr::operator=(WeakPtr *this,GObject *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  piecewise_construct_t *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)this != 0) {
    remove(*(ulong *)this);
  }
  if (param_1 == (GObject *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x1d0);
    if (lVar2 == 0) {
      local_40 = (piecewise_construct_t *)(param_1 + 0x1c8);
      lVar2 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,fairygui::GObject*>>>
              ::
              __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                        (&_weakPointers,local_40,(tuple *)&DAT_013cfda0,(tuple *)&local_40);
      *(GObject **)(lVar2 + 0x18) = param_1;
      lVar2 = *(long *)(param_1 + 0x1d0);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x1c8);
    *(long *)(param_1 + 0x1d0) = lVar2 + 1;
  }
  *(undefined8 *)this = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

