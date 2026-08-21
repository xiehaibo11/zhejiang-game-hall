
/* cocos2d::ui::Text::setTextAreaSize(cocos2d::Size const&) */

void __thiscall cocos2d::ui::Text::setTextAreaSize(Text *this,Size *param_1)

{
  Label::setDimensions(*(Label **)(this + 0x528),*(float *)param_1,*(float *)(param_1 + 4));
  if (this[0x387] == (Text)0x0) {
    Size::operator=((Size *)(this + 0x39c),param_1);
  }
  (**(code **)(**(long **)(this + 0x528) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)this);
  this[0x530] = (Text)0x1;
  return;
}

