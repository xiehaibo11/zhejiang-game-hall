
/* cocos2d::ui::ImageView::setTextureRect(cocos2d::Rect const&) */

void __thiscall cocos2d::ui::ImageView::setTextureRect(ImageView *this,Rect *param_1)

{
  long *plVar1;
  
  if ((this[0x4f8] == (ImageView)0x0) &&
     (plVar1 = (long *)Scale9Sprite::getSprite(), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00dc76ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x558))(plVar1,param_1);
    return;
  }
  return;
}

