
/* cocos2d::Application::run() */

int __thiscall cocos2d::Application::run(Application *this)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x10))();
  return -(uVar1 & 1);
}

