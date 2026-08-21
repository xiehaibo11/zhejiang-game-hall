
/* CocosDenshion::SimpleAudioEngine::getInstance() */

AndroidJavaEngine * CocosDenshion::SimpleAudioEngine::getInstance(void)

{
  AndroidJavaEngine *this;
  
                    /* try { // try from 00df41c8 to 00ef4217 has its CatchHandler @ 00df41c8
                       catch(type#1 @ 00000000) { ... } // from try @ 00df41c8 with catch @ 00df41c8
                       catch(type#1 @ 00000000) { ... } // from try @ 00df4258 with catch @ 00df41c8
                       catch(type#1 @ 00000000) { ... } // from try @ 00df430c with catch @ 00df41c8
                        */
  if (DAT_01788b08 == (AndroidJavaEngine *)0x0) {
    this = operator_new(0x28);
    android::AndroidJavaEngine::AndroidJavaEngine(this);
    DAT_01788b08 = this;
  }
  return DAT_01788b08;
}

