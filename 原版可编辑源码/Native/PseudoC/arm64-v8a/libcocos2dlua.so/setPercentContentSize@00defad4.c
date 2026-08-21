
/* cocos2d::ui::LayoutComponent::setPercentContentSize(cocos2d::Vec2 const&) */

void __thiscall
cocos2d::ui::LayoutComponent::setPercentContentSize(LayoutComponent *this,Vec2 *param_1)

{
  setPercentWidth(this,*(float *)param_1);
  setPercentHeight(this,*(float *)(param_1 + 4));
  return;
}

