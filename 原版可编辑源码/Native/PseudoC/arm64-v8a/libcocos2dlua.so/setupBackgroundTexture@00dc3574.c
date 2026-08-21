
/* cocos2d::ui::AbstractCheckButton::setupBackgroundTexture() */

void __thiscall cocos2d::ui::AbstractCheckButton::setupBackgroundTexture(AbstractCheckButton *this)

{
                    /* try { // try from 00dc3574 to 00ec3583 has its CatchHandler @ 00dc385c */
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  (**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)this);
  this[0x53c] = (AbstractCheckButton)0x1;
  return;
}

