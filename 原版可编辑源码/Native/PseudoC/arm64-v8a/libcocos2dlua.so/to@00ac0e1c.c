
/* fairygui::GTween::to(cocos2d::Vec4 const&, cocos2d::Vec4 const&, float) */

void fairygui::GTween::to(Vec4 *param_1,Vec4 *param_2,float param_3)

{
  GTweener *this;
  
                    /* try { // try from 00ac0e34 to 00bc0e5f has its CatchHandler @ 00ac0ff0 */
  this = (GTweener *)TweenManager::createTween();
  GTweener::_to(this,param_1,param_2,param_3);
  return;
}

