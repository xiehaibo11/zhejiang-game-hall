
/* fairygui::GTween::to(cocos2d::Vec3 const&, cocos2d::Vec3 const&, float) */

void fairygui::GTween::to(Vec3 *param_1,Vec3 *param_2,float param_3)

{
  GTweener *this;
  
                    /* try { // try from 00ac0df8 to 00bc0e0f has its CatchHandler @ 00ac0ff8 */
  this = (GTweener *)TweenManager::createTween();
                    /* try { // try from 00ac0e14 to 00bc0e2b has its CatchHandler @ 00ac0ff4 */
  GTweener::_to(this,param_1,param_2,param_3);
  return;
}

