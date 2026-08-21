
/* CrashReport::setTag(int) */

void CrashReport::setTag(int param_1)

{
  ulong uVar1;
  
  if ((hasSetGameType == '\0') &&
     (uVar1 = callJniStaticVoidMethod
                        ((_JNIEnv *)0x0,"com/tencent/bugly/agent/GameAgent","setGameType","(I)V",1),
     (uVar1 & 1) != 0)) {
    hasSetGameType = '\x01';
  }
                    /* catch() { ... } // from try @ 009d5aac with catch @ 009d5bf8 */
                    /* catch() { ... } // from try @ 009d5aa4 with catch @ 009d5c00 */
                    /* catch() { ... } // from try @ 009d5ab4 with catch @ 009d5c08 */
  __android_log_print(4,"CrashReport","[cocos2d-x] set user scene tag: %d",(ulong)(uint)param_1);
                    /* try { // try from 009d5c2c to 00ad5c6b has its CatchHandler @ 009d5c2c
                       catch() { ... } // from try @ 009d5c2c with catch @ 009d5c2c
                       catch() { ... } // from try @ 009d5d44 with catch @ 009d5c2c */
  callJniStaticVoidMethod
            ((_JNIEnv *)0x0,"com/tencent/bugly/agent/GameAgent","setUserSceneTag","(I)V",
             (ulong)(uint)param_1);
  return;
}

