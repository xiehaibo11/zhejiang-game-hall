
/* cocos2d::ui::Button::initRenderer() */

void __thiscall cocos2d::ui::Button::initRenderer(Button *this)

{
  undefined8 uVar1;
  
  uVar1 = Scale9Sprite::create();
  *(undefined8 *)(this + 0x4f0) = uVar1;
  uVar1 = Scale9Sprite::create();
  *(undefined8 *)(this + 0x4f8) = uVar1;
  uVar1 = Scale9Sprite::create();
  *(undefined8 *)(this + 0x500) = uVar1;
  Scale9Sprite::setRenderingType(*(Scale9Sprite **)(this + 0x4f8),0);
  Scale9Sprite::setRenderingType(*(Scale9Sprite **)(this + 0x4f0),0);
  Scale9Sprite::setRenderingType(*(Scale9Sprite **)(this + 0x500),0);
                    /* try { // try from 00dc04d8 to 00ec04e3 has its CatchHandler @ 00dc07b4 */
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x4f0),0xfffffffe,0xffffffff);
                    /* try { // try from 00dc04ec to 00ec050f has its CatchHandler @ 00dc07b0 */
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x4f8),0xfffffffe,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00dc0518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x500),0xfffffffe,0xffffffff);
  return;
}

