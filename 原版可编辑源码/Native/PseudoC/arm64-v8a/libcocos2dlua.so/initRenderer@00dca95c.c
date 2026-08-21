
/* cocos2d::ui::LoadingBar::initRenderer() */

void __thiscall cocos2d::ui::LoadingBar::initRenderer(LoadingBar *this)

{
  long lVar1;
  Scale9Sprite *this_00;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = (Scale9Sprite *)Scale9Sprite::create();
  *(Scale9Sprite **)(this + 0x500) = this_00;
  Scale9Sprite::setScale9Enabled(this_00,false);
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x500),0xffffffff,0xffffffff);
  local_30 = 0x3f00000000000000;
  (**(code **)(**(long **)(this + 0x500) + 0x148))(*(long **)(this + 0x500),&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

