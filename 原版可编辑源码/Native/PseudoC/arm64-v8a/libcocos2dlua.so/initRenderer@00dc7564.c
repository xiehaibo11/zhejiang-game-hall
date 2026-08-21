
/* cocos2d::ui::ImageView::initRenderer() */

void __thiscall cocos2d::ui::ImageView::initRenderer(ImageView *this)

{
  Scale9Sprite *pSVar1;
  
  pSVar1 = (Scale9Sprite *)Scale9Sprite::create();
  *(Scale9Sprite **)(this + 0x510) = pSVar1;
  Scale9Sprite::setRenderingType(pSVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00dc75a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x510),0xffffffff,0xffffffff);
  return;
}

