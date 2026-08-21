
/* fairygui::GTween::toDouble(double, double, float) */

void fairygui::GTween::toDouble(double param_1,double param_2,float param_3)

{
  GTweener *this;
  
                    /* try { // try from 00ac0ea8 to 00bc0eaf has its CatchHandler @ 00ac0ff0 */
                    /* try { // try from 00ac0eb0 to 00bc0f37 has its CatchHandler @ 00ac0634 */
  this = (GTweener *)TweenManager::createTween();
  GTweener::_to(this,param_1,param_2,param_3);
  return;
}

