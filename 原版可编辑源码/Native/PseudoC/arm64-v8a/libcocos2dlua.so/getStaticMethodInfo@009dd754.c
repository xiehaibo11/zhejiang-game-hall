
/* universe::JniAssistant::getStaticMethodInfo(universe::JniMethodInfo_&, char const*, char const*,
   char const*) */

undefined8
universe::JniAssistant::getStaticMethodInfo
          (JniMethodInfo_ *param_1,char *param_2,char *param_3,char *param_4)

{
  long *plVar1;
  _jobject *p_Var2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  
  if (((param_2 != (char *)0x0) && (param_3 != (char *)0x0)) && (param_4 != (char *)0x0)) {
    plVar1 = (long *)getEnv();
    if (plVar1 == (long *)0x0) {
      __android_log_print(6,"JniAssistant","Failed to get JNIEnv");
    }
    else {
      p_Var2 = (_jobject *)getEnv();
      uVar3 = (**(code **)(*(long *)p_Var2 + 0x538))(p_Var2,param_2);
      lVar4 = _JNIEnv::CallObjectMethod(p_Var2,DAT_01782250,DAT_01782258,uVar3);
      if (lVar4 == 0) {
        __android_log_print(6,"JniAssistant","Classloader failed to find class of %s",param_2);
        (**(code **)(*(long *)p_Var2 + 0x88))(p_Var2);
        (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar3);
        pcVar6 = "Failed to find class %s";
        param_3 = param_2;
      }
      else {
        (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar3);
        lVar5 = (**(code **)(*plVar1 + 0x388))(plVar1,lVar4,param_3,param_4);
        if (lVar5 != 0) {
          *(long *)(param_1 + 0x10) = lVar5;
          *(long **)param_1 = plVar1;
          *(long *)(param_1 + 8) = lVar4;
          return 1;
        }
        pcVar6 = "Failed to find static method id of %s";
      }
      __android_log_print(6,"JniAssistant",pcVar6,param_3);
      (**(code **)(*plVar1 + 0x88))(plVar1);
    }
  }
  return 0;
}

