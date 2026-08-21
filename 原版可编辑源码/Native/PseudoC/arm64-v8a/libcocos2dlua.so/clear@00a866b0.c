
/* fairygui::GObjectPool::clear() */

void __thiscall fairygui::GObjectPool::clear(GObjectPool *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  
  for (plVar4 = *(long **)(this + 0x10); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    puVar6 = (undefined8 *)plVar4[5];
    puVar1 = (undefined8 *)plVar4[6];
    if (puVar6 != puVar1) {
      do {
        puVar5 = puVar6 + 1;
        cocos2d::Ref::release((Ref *)*puVar6);
        puVar6 = puVar5;
      } while (puVar1 != puVar5);
      puVar6 = (undefined8 *)plVar4[5];
    }
    plVar4[6] = (long)puVar6;
  }
  if (*(long *)(this + 0x18) != 0) {
    puVar6 = *(void **)(this + 0x10);
    while (puVar6 != (void *)0x0) {
      pvVar7 = (void *)*puVar6;
      std::__ndk1::
      allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,void*>>>
      ::
      __destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Vector<fairygui::GObject*>>>
                ();
      operator_delete(puVar6);
      puVar6 = pvVar7;
    }
    lVar2 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x10) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)this + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}

