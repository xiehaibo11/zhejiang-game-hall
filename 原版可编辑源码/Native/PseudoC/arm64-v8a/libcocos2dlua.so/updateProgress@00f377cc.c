
/* cocos2d::ProgressTimer::updateProgress() */

void __thiscall cocos2d::ProgressTimer::updateProgress(ProgressTimer *this)

{
  if (*(int *)(this + 0x2f8) == 1) {
    updateBar(this);
    return;
  }
  if (*(int *)(this + 0x2f8) == 0) {
    updateRadial(this);
    return;
  }
  return;
}

