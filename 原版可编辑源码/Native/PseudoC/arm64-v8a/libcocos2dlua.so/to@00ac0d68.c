
/* fairygui::GTween::to(float, float, float) */

void fairygui::GTween::to(float param_1,float param_2,float param_3)

{
  GTweener *this;
  
                    /* try { // try from 00ac0d74 to 00bc0dab has its CatchHandler @ 00ac0fc8 */
  this = (GTweener *)TweenManager::createTween();
  GTweener::_to(this,param_1,param_2,param_3);
  return;
}

