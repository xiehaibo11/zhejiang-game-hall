
/* std::__ndk1::__shared_ptr_emplace<cocos2d::Vector<cocos2d::Ref*>,
   std::__ndk1::allocator<cocos2d::Vector<cocos2d::Ref*> > >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::Vector<cocos2d::Ref*>,std::__ndk1::allocator<cocos2d::Vector<cocos2d::Ref*>>>
::__on_zero_shared(__shared_ptr_emplace<cocos2d::Vector<cocos2d::Ref*>,std::__ndk1::allocator<cocos2d::Vector<cocos2d::Ref*>>>
                   *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x18);
  }
  *(undefined8 **)(this + 0x20) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x20) = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}

