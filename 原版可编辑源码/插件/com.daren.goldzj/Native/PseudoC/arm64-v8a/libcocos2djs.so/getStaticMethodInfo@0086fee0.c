
/* cocos2d::JniHelper::getStaticMethodInfo(cocos2d::JniMethodInfo_&, char const*, char const*, char
   const*) */

undefined8
cocos2d::JniHelper::getStaticMethodInfo
          (JniMethodInfo_ *param_1,char *param_2,char *param_3,char *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_3 == (char *)0x0) {
    return 0;
  }
  if (param_4 == (char *)0x0) {
    return 0;
  }
  plVar1 = pthread_getspecific(DAT_01d35bd8);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)cacheEnv(_psJavaVM);
  }
  if (plVar1 == (long *)0x0) {
    __android_log_print(6,"JniHelper","Failed to get JNIEnv");
  }
  else {
    lVar2 = _getClassID(param_2);
    if (lVar2 == 0) {
      pcVar4 = "Failed to find class %s";
      param_3 = param_2;
    }
    else {
      lVar3 = (**(code **)(*plVar1 + 0x388))(plVar1,lVar2,param_3,param_4);
      if (lVar3 != 0) {
        *(long *)(param_1 + 0x10) = lVar3;
        *(long **)param_1 = plVar1;
        *(long *)(param_1 + 8) = lVar2;
        return 1;
      }
      pcVar4 = "Failed to find static method id of %s";
    }
    __android_log_print(6,"JniHelper",pcVar4,param_3);
    (**(code **)(*plVar1 + 0x88))(plVar1);
  }
  return 0;
}

