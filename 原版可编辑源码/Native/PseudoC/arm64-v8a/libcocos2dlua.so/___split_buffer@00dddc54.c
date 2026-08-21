
/* std::__ndk1::__split_buffer<cocos2d::Vector<cocos2d::Node*>,
   std::__ndk1::allocator<cocos2d::Vector<cocos2d::Node*> >&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<cocos2d::Vector<cocos2d::Node*>,std::__ndk1::allocator<cocos2d::Vector<cocos2d::Node*>>&>
::~__split_buffer(__split_buffer<cocos2d::Vector<cocos2d::Node*>,std::__ndk1::allocator<cocos2d::Vector<cocos2d::Node*>>&>
                  *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  while (lVar4 != lVar1) {
    *(undefined8 **)(this + 0x10) = (undefined8 *)(lVar4 + -0x18);
    puVar3 = *(undefined8 **)(lVar4 + -0x18);
    puVar2 = *(undefined8 **)(lVar4 + -0x10);
    if (puVar3 != puVar2) {
      do {
        cocos2d::Ref::release((Ref *)*puVar3);
        puVar3 = puVar3 + 1;
      } while (puVar2 != puVar3);
      puVar3 = *(undefined8 **)(lVar4 + -0x18);
    }
    *(undefined8 **)(lVar4 + -0x10) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 **)(lVar4 + -0x10) = puVar3;
      operator_delete(puVar3);
    }
    lVar4 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}

