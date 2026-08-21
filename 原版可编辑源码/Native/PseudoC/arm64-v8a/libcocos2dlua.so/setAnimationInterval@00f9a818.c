
/* cocos2d::Director::setAnimationInterval(float) */

void __thiscall cocos2d::Director::setAnimationInterval(Director *this,float param_1)

{
  undefined8 uVar1;
  pthread_t pVar2;
  long *plVar3;
  
  *(float *)(this + 0x118) = param_1;
  if (this[0x1d0] == (Director)0x0) {
    this[0x1d0] = (Director)0x1;
    uVar1 = std::__ndk1::chrono::steady_clock::now();
    *(undefined8 *)(this + 0x188) = uVar1;
    this[0x1d0] = (Director)0x0;
    pVar2 = pthread_self();
    *(pthread_t *)(this + 0x1c8) = pVar2;
    plVar3 = (long *)Application::getInstance();
    (**(code **)(*plVar3 + 0x28))(*(undefined4 *)(this + 0x118));
                    /* try { // try from 00f9a864 to 0109a86b has its CatchHandler @ 00f9a910 */
    this[400] = (Director)0x1;
  }
                    /* try { // try from 00f9a86c to 0109a8cf has its CatchHandler @ 00f9a808 */
  return;
}

