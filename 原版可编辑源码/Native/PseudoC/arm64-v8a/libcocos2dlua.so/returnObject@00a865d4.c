
/* fairygui::GObjectPool::returnObject(fairygui::GObject*) */

void __thiscall fairygui::GObjectPool::returnObject(GObjectPool *this,GObject *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  GObject local_60 [16];
  void *local_50;
  GObject *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  GObject::getResourceURL();
  local_40 = local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)this,(piecewise_construct_t *)local_60,(tuple *)&DAT_013ccd88,
                     (tuple *)&local_40);
  puVar1 = *(undefined8 **)(lVar3 + 0x30);
  local_40 = param_1;
  if (puVar1 == *(undefined8 **)(lVar3 + 0x38)) {
    std::__ndk1::vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>>::
    __push_back_slow_path<fairygui::GObject*const&>
              ((vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>> *)
               (lVar3 + 0x28),&local_40);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(lVar3 + 0x30) = puVar1 + 1;
  }
  cocos2d::Ref::retain((Ref *)local_40);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

