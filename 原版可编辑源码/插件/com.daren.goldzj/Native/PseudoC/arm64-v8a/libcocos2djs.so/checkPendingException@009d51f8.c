
/* CrashReport::checkPendingException(_JNIEnv*) */

undefined8 CrashReport::checkPendingException(_JNIEnv *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 009d507c with catch @ 009d51f8 */
                    /* catch() { ... } // from try @ 009d5074 with catch @ 009d5200 */
  uVar2 = 0;
                    /* catch() { ... } // from try @ 009d506c with catch @ 009d5208 */
                    /* catch() { ... } // from try @ 009d5084 with catch @ 009d5210 */
  if ((param_1 != (_JNIEnv *)0x0) &&
     (lVar1 = (**(code **)(*(long *)param_1 + 0x78))(), uVar2 = 0, lVar1 != 0)) {
    __android_log_print(6,"CrashReport","[cocos2d-x] check jni error");
                    /* try { // try from 009d523c to 00ad52b7 has its CatchHandler @ 009d523c
                       catch() { ... } // from try @ 009d523c with catch @ 009d523c
                       catch() { ... } // from try @ 009d52d0 with catch @ 009d523c */
    (**(code **)(*(long *)param_1 + 0x80))(param_1);
    (**(code **)(*(long *)param_1 + 0x88))(param_1);
    uVar2 = 1;
  }
  return uVar2;
}

