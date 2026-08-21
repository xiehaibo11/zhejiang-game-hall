
/* fairygui::GObjectPool::getObject(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Ref * __thiscall fairygui::GObjectPool::getObject(GObjectPool *this,basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  Ref *this_00;
  undefined8 *puVar4;
  Ref *this_01;
  basic_string local_60 [8];
  ulong local_58;
  void *local_50;
  undefined1 *local_40;
  long local_38;
  
                    /* try { // try from 00a864c4 to 00b864ef has its CatchHandler @ 00a86560 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  UIPackage::normalizeURL((UIPackage *)param_1,param_1);
                    /* try { // try from 00a864f4 to 00b86507 has its CatchHandler @ 00a86564 */
  uVar1 = (ulong)((byte)local_60[0] >> 1);
  if (((byte)local_60[0] & 1) != 0) {
    uVar1 = local_58;
  }
  if (uVar1 == 0) {
    this_01 = (Ref *)0x0;
  }
  else {
    local_40 = local_60;
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)this,(piecewise_construct_t *)local_60,(tuple *)&DAT_013ccd88
                       ,(tuple *)&local_40);
    if (*(long *)(lVar3 + 0x28) == *(long *)(lVar3 + 0x30)) {
      this_01 = (Ref *)UIPackage::createObjectFromURL(local_60);
    }
    else {
      this_01 = *(Ref **)(*(long *)(lVar3 + 0x30) + -8);
      cocos2d::Ref::retain(this_01);
      puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x30) + -8);
      this_00 = (Ref *)*puVar4;
                    /* try { // try from 00a86544 to 00b8654b has its CatchHandler @ 00a86560 */
      *(undefined8 **)(lVar3 + 0x30) = puVar4;
      cocos2d::Ref::release(this_00);
                    /* try { // try from 00a8654c to 00b8657f has its CatchHandler @ 00a863f4 */
      cocos2d::Ref::autorelease(this_01);
    }
  }
  if (((byte)local_60[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00a864c4 with catch @ 00a86560
                       catch() { ... } // from try @ 00a86544 with catch @ 00a86560 */
    operator_delete(local_50);
  }
                    /* catch() { ... } // from try @ 00a86434 with catch @ 00a86564
                       catch() { ... } // from try @ 00a864a4 with catch @ 00a86564
                       catch() { ... } // from try @ 00a864f4 with catch @ 00a86564 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

