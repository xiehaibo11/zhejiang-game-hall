
/* CocosDenshion::android::AndroidJavaEngine::AndroidJavaEngine() */

void __thiscall
CocosDenshion::android::AndroidJavaEngine::AndroidJavaEngine(AndroidJavaEngine *this)

{
  int iVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df4220 with catch @ 00df42b0
                        */
  SimpleAudioEngine::SimpleAudioEngine((SimpleAudioEngine *)this);
  this[8] = (AndroidJavaEngine)0x0;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  *(AndroidJavaEngine **)(this + 0x10) = this + 0x10;
  *(AndroidJavaEngine **)(this + 0x18) = this + 0x10;
  *(undefined ***)this = &PTR_preloadBackgroundMusic_016e74e8;
  *(undefined8 *)(this + 0x20) = 0;
  iVar1 = cocos2d::experimental::getSDKVersion();
  if (0 < iVar1) {
                    /* try { // try from 00df4300 to 00ef4303 has its CatchHandler @ 00df4304 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df4300 with catch @ 00df4304
                        */
                    /* try { // try from 00df4308 to 00ef430b has its CatchHandler @ 00df4314 */
                    /* try { // try from 00df430c to 00ef4317 has its CatchHandler @ 00df41c8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df4308 with catch @ 00df4314
                        */
    __android_log_print(3,"cocos2d","android SDK version:%d",iVar1);
                    /* try { // try from 00df4318 to 00ef4397 has its CatchHandler @ 00df4318
                       catch() { ... } // from try @ 00df4318 with catch @ 00df4318
                       catch() { ... } // from try @ 00df43a8 with catch @ 00df4318 */
    if (iVar1 == 0x15) {
      this[8] = (AndroidJavaEngine)0x1;
    }
    return;
  }
  __android_log_print(3,"cocos2d","%s","Fail to get android SDK version.");
  return;
}

