
/* universe::JniAssistant::getMethodInfo_DefaultClassLoader(universe::JniMethodInfo_&, char const*,
   char const*, char const*) */

undefined8
universe::JniAssistant::getMethodInfo_DefaultClassLoader
          (JniMethodInfo_ *param_1,char *param_2,char *param_3,char *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  
  if ((((param_2 != (char *)0x0) && (param_3 != (char *)0x0)) && (param_4 != (char *)0x0)) &&
     (plVar1 = (long *)getEnv(), plVar1 != (long *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    if (lVar2 == 0) {
      pcVar4 = "Failed to find class %s";
      param_3 = param_2;
    }
    else {
      lVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,lVar2,param_3,param_4);
      if (lVar3 != 0) {
        *(long *)(param_1 + 0x10) = lVar3;
        *(long **)param_1 = plVar1;
        *(long *)(param_1 + 8) = lVar2;
        return 1;
      }
      pcVar4 = "Failed to find method id of %s";
    }
    __android_log_print(6,"JniAssistant",pcVar4,param_3);
    (**(code **)(*plVar1 + 0x88))(plVar1);
  }
  return 0;
}

