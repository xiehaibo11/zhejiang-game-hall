
/* cocos2d::ui::AbstractCheckButton::initRenderer() */

void __thiscall cocos2d::ui::AbstractCheckButton::initRenderer(AbstractCheckButton *this)

{
  undefined8 uVar1;
  
  uVar1 = Sprite::create();
  *(undefined8 *)(this + 0x4f0) = uVar1;
  uVar1 = Sprite::create();
  *(undefined8 *)(this + 0x4f8) = uVar1;
  uVar1 = Sprite::create();
  *(undefined8 *)(this + 0x500) = uVar1;
  uVar1 = Sprite::create();
  *(undefined8 *)(this + 0x508) = uVar1;
  uVar1 = Sprite::create();
  *(undefined8 *)(this + 0x510) = uVar1;
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x4f0),0xffffffff,0xffffffff);
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x4f8),0xffffffff,0xffffffff);
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x500),0xffffffff,0xffffffff);
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x508),0xffffffff,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00dc31f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x510),0xffffffff,0xffffffff);
  return;
}

