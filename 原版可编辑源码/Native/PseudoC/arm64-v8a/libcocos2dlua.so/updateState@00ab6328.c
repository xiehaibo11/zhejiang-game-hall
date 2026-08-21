
/* fairygui::GearXY::updateState() */

void __thiscall fairygui::GearXY::updateState(GearXY *this)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  piecewise_construct_t *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 8);
                    /* try { // try from 00ab6358 to 00bb6377 has its CatchHandler @ 00ab653c */
  cocos2d::Vec4::Vec4((Vec4 *)&local_48,*(float *)(lVar2 + 0xc0),*(float *)(lVar2 + 0xc4),
                      *(float *)(lVar2 + 0xc0) / *(float *)(*(long *)(lVar2 + 0xa0) + 200),
                      *(float *)(lVar2 + 0xc4) / *(float *)(*(long *)(lVar2 + 0xa0) + 0xcc));
  local_30 = (piecewise_construct_t *)GController::getSelectedPageId(*(GController **)(this + 0x10))
  ;
                    /* try { // try from 00ab637c to 00bb6383 has its CatchHandler @ 00ab6538 */
                    /* try { // try from 00ab6384 to 00bb638b has its CatchHandler @ 00ab6534 */
                    /* try { // try from 00ab638c to 00bb63ef has its CatchHandler @ 00ab6554 */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vec4>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x28),local_30,(tuple *)&DAT_013cf765,
                     (tuple *)&local_30);
  *(undefined8 *)(lVar2 + 0x30) = uStack_40;
  *(undefined8 *)(lVar2 + 0x28) = local_48;
  cocos2d::Vec4::~Vec4((Vec4 *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

