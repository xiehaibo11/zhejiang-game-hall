
/* fairygui::GTween::delayedCall(float) */

void fairygui::GTween::delayedCall(float param_1)

{
  GTweener *this;
  
  this = (GTweener *)TweenManager::createTween();
  GTweener::setDelay(this,param_1);
  return;
}

