
/* CrashReport::setGameType() */

void CrashReport::setGameType(void)

{
  ulong uVar1;
  
  if ((hasSetGameType == '\0') &&
     (uVar1 = callJniStaticVoidMethod
                        ((_JNIEnv *)0x0,"com/tencent/bugly/agent/GameAgent","setGameType","(I)V",1),
     (uVar1 & 1) != 0)) {
    hasSetGameType = '\x01';
  }
  return;
}

