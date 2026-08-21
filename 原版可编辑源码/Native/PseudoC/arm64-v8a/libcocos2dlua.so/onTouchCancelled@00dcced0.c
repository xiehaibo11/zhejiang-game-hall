
/* cocos2d::ui::Slider::onTouchCancelled(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::ui::Slider::onTouchCancelled(Touch *param_1,Event *param_2)

{
  Widget::onTouchCancelled(param_1,param_2);
  percentChangedEvent((Slider *)param_1,3);
  return;
}

