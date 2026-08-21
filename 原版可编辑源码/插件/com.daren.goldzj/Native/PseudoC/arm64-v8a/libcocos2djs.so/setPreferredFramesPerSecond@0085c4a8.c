
/* cocos2d::Application::setPreferredFramesPerSecond(int) */

void __thiscall cocos2d::Application::setPreferredFramesPerSecond(Application *this,int param_1)

{
  *(int *)(this + 0x20) = param_1;
  setPreferredFramesPerSecondJNI(param_1);
  return;
}

