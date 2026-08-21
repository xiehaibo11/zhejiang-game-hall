
/* cocos2d::ui::Layout::addBackGroundImage() */

void __thiscall cocos2d::ui::Layout::addBackGroundImage(Layout *this)

{
  Scale9Sprite *pSVar1;
  
  pSVar1 = (Scale9Sprite *)Scale9Sprite::create();
  *(Scale9Sprite **)(this + 0x538) = pSVar1;
  Scale9Sprite::setRenderingType(pSVar1,0);
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x538),0xffffffff,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00dafa54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00dafa54 to 00eafa5f has its CatchHandler @ 00dafb04 */
  (**(code **)(**(long **)(this + 0x538) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
  return;
}

