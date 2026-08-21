
/* cocos2d::GLView::getAllTouches() const */

void __thiscall cocos2d::GLView::getAllTouches(GLView *this)

{
  uint uVar1;
  undefined8 *puVar2;
  vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>> *in_x8;
  long lVar3;
  
  uVar1 = DAT_0178f998;
  lVar3 = 0;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  do {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(undefined8 **)(in_x8 + 8);
      if (puVar2 == *(undefined8 **)(in_x8 + 0x10)) {
        std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>::
        __push_back_slow_path<cocos2d::Touch*const&>(in_x8,(Touch **)((long)&DAT_0178f920 + lVar3));
      }
      else {
        *puVar2 = *(undefined8 *)((long)&DAT_0178f920 + lVar3);
        *(undefined8 **)(in_x8 + 8) = puVar2 + 1;
      }
    }
    lVar3 = lVar3 + 8;
    uVar1 = (int)uVar1 >> 1;
  } while (lVar3 != 0x78);
  return;
}

