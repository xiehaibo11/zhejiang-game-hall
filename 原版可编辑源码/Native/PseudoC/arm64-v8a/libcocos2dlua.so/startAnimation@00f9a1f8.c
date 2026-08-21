
/* cocos2d::Director::startAnimation() */

void __thiscall cocos2d::Director::startAnimation(Director *this)

{
  undefined8 uVar1;
  pthread_t pVar2;
  long *plVar3;
  
  uVar1 = std::__ndk1::chrono::steady_clock::now();
  *(undefined8 *)(this + 0x188) = uVar1;
  this[0x1d0] = (Director)0x0;
  pVar2 = pthread_self();
  *(pthread_t *)(this + 0x1c8) = pVar2;
  plVar3 = (long *)Application::getInstance();
  (**(code **)(*plVar3 + 0x28))(*(undefined4 *)(this + 0x118));
  this[400] = (Director)0x1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9a1a8 with catch @ 00f9a23c
                        */
  return;
}

