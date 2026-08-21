
/* cocos2d::Director::pause() */

void __thiscall cocos2d::Director::pause(Director *this)

{
  undefined8 uVar1;
  pthread_t pVar2;
  long *plVar3;
  
  if (this[0x148] == (Director)0x0) {
                    /* catch() { ... } // from try @ 00f9a77c with catch @ 00f9a7b4
                       try { // try from 00f9a7b4 to 0109a807 has its CatchHandler @ 00f9a734 */
    *(undefined4 *)(this + 0x11c) = *(undefined4 *)(this + 0x118);
    *(undefined4 *)(this + 0x118) = 0x3e800000;
    if (this[0x1d0] == (Director)0x0) {
      this[0x1d0] = (Director)0x1;
      uVar1 = std::__ndk1::chrono::steady_clock::now();
      *(undefined8 *)(this + 0x188) = uVar1;
      this[0x1d0] = (Director)0x0;
                    /* catch() { ... } // from try @ 00f9a75c with catch @ 00f9a7e4 */
      pVar2 = pthread_self();
      *(pthread_t *)(this + 0x1c8) = pVar2;
      plVar3 = (long *)Application::getInstance();
                    /* catch() { ... } // from try @ 00f9a758 with catch @ 00f9a7f4 */
      (**(code **)(*plVar3 + 0x28))(*(undefined4 *)(this + 0x118));
      this[400] = (Director)0x1;
    }
                    /* try { // try from 00f9a808 to 0109a863 has its CatchHandler @ 00f9a808
                       catch(type#1 @ 00000000) { ... } // from try @ 00f9a808 with catch @ 00f9a808
                       catch(type#1 @ 00000000) { ... } // from try @ 00f9a86c with catch @ 00f9a808
                       catch(type#1 @ 00000000) { ... } // from try @ 00f9a8d8 with catch @ 00f9a808
                        */
    this[0x148] = (Director)0x1;
  }
  return;
}

