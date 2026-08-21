
/* fairygui::GObjectPool::~GObjectPool() */

void __thiscall fairygui::GObjectPool::~GObjectPool(GObjectPool *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = *(void **)(this + 0x10);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
                    /* try { // try from 00a86470 to 00b864a3 has its CatchHandler @ 00a863f4 */
    std::__ndk1::
    allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,void*>>>
    ::
    __destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Vector<fairygui::GObject*>>>
              ();
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar2 == (void *)0x0) {
                    /* try { // try from 00a864a4 to 00b864bb has its CatchHandler @ 00a86564 */
    return;
  }
  operator_delete(pvVar2);
  return;
}

