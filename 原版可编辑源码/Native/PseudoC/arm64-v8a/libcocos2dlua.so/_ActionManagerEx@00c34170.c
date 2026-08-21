
/* cocostudio::ActionManagerEx::~ActionManagerEx() */

void __thiscall cocostudio::ActionManagerEx::~ActionManagerEx(ActionManagerEx *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__ActionManagerEx_016c7c90;
  if (*(long *)(this + 0x40) != 0) {
    puVar1 = *(void **)(this + 0x38);
    while (puVar1 != (void *)0x0) {
      pvVar4 = (void *)*puVar1;
      std::__ndk1::
      allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,void*>>>
      ::
      __destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Vector<cocostudio::ActionObject*>>>
                ();
      operator_delete(puVar1);
      puVar1 = pvVar4;
    }
    lVar2 = *(long *)(this + 0x30);
    *(undefined8 *)(this + 0x38) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x28) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  puVar1 = *(void **)(this + 0x38);
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    std::__ndk1::
    allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,void*>>>
    ::
    __destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Vector<cocostudio::ActionObject*>>>
              ();
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

