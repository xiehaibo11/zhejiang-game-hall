
/* cocos2d::ui::Slider::onTouchEnded(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::ui::Slider::onTouchEnded(Touch *param_1,Event *param_2)

{
  Widget::onTouchEnded(param_1,param_2);
  percentChangedEvent((Slider *)param_1,2);
  return;
}

