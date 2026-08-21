
/* cocos2d::ui::EditBox::initRenderer() */

void __thiscall cocos2d::ui::EditBox::initRenderer(EditBox *this)

{
  undefined8 uVar1;
  
  uVar1 = Scale9Sprite::create();
  *(undefined8 *)(this + 0x4f8) = uVar1;
  uVar1 = Scale9Sprite::create();
  *(undefined8 *)(this + 0x500) = uVar1;
  uVar1 = Scale9Sprite::create();
  *(undefined8 *)(this + 0x508) = uVar1;
  Scale9Sprite::setRenderingType(*(Scale9Sprite **)(this + 0x4f8),1);
  Scale9Sprite::setRenderingType(*(Scale9Sprite **)(this + 0x500),1);
  Scale9Sprite::setRenderingType(*(Scale9Sprite **)(this + 0x508),1);
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x4f8),0xfffffffe,0xffffffff);
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x500),0xfffffffe,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00dea5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x508),0xfffffffe,0xffffffff);
  return;
}

