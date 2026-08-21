
/* cocos2d::ProgressTimer::setType(cocos2d::ProgressTimer::Type) */

void __thiscall cocos2d::ProgressTimer::setType(ProgressTimer *this,int param_2)

{
  if (*(int *)(this + 0x2f8) != param_2) {
    if (*(void **)(this + 800) != (void *)0x0) {
      free(*(void **)(this + 800));
      *(undefined8 *)(this + 800) = 0;
      *(undefined4 *)(this + 0x318) = 0;
    }
    *(int *)(this + 0x2f8) = param_2;
  }
  return;
}

