
/* cocos2d::Director::resume() */

void __thiscall cocos2d::Director::resume(Director *this)

{
  undefined8 uVar1;
  pthread_t pVar2;
  long *plVar3;
  
  if (this[0x148] != (Director)0x0) {
    *(undefined4 *)(this + 0x118) = *(undefined4 *)(this + 0x11c);
    if (this[0x1d0] == (Director)0x0) {
      this[0x1d0] = (Director)0x1;
      uVar1 = std::__ndk1::chrono::steady_clock::now();
      *(undefined8 *)(this + 0x188) = uVar1;
      this[0x1d0] = (Director)0x0;
      pVar2 = pthread_self();
      *(pthread_t *)(this + 0x1c8) = pVar2;
      plVar3 = (long *)Application::getInstance();
      (**(code **)(*plVar3 + 0x28))(*(undefined4 *)(this + 0x118));
      this[400] = (Director)0x1;
    }
                    /* try { // try from 00f9a8d0 to 0109a8d7 has its CatchHandler @ 00f9a924 */
    this[0x148] = (Director)0x0;
                    /* try { // try from 00f9a8d8 to 0109a927 has its CatchHandler @ 00f9a808 */
    *(undefined4 *)(this + 0x100) = 0;
    this[400] = (Director)0x1;
  }
  return;
}

