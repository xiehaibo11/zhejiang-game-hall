
void FUN_0013fc98(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  __android_log_print(4,"apk_diff_native","invoke startInvokeJavaForWriteLog");
  if (DAT_0016ba90 == (long *)0x0) {
    pcVar5 = "pEnv is null";
  }
  else if (param_2 == 0) {
    pcVar5 = "logContent is null";
  }
  else {
    lVar2 = (**(code **)(*DAT_0016ba90 + 0x30))
                      (DAT_0016ba90,"com/ymnsdk/replugin/trace/PluginTraceManager");
    if (lVar2 == 0) {
      pcVar5 = "the jclazz  is null";
    }
    else {
      lVar3 = (**(code **)(*DAT_0016ba90 + 0x388))
                        (DAT_0016ba90,lVar2,"getInstance",
                         "()Lcom/ymnsdk/replugin/trace/PluginTraceManager;");
      if (lVar3 == 0) {
        pcVar5 = "the getInstanceId  is null";
      }
      else {
        lVar3 = FUN_0013fe34(DAT_0016ba90,lVar2,lVar3);
        if (lVar3 == 0) {
          pcVar5 = "the pluginTraceManagerObject  is null";
        }
        else {
          lVar2 = (**(code **)(*DAT_0016ba90 + 0x108))
                            (DAT_0016ba90,lVar2,"summitMergeApkLog","(Ljava/lang/String;)V");
          if (lVar2 != 0) {
            __android_log_print(4,"apk_diff_native","CallVoidMethod summitMergeApkLog by native");
            plVar1 = DAT_0016ba90;
            uVar4 = (**(code **)(*DAT_0016ba90 + 0x538))(DAT_0016ba90,param_2);
            FUN_0013fed0(plVar1,lVar3,lVar2,uVar4);
            return;
          }
          pcVar5 = "the summitMergeApkLogMethodId  is null";
        }
      }
    }
  }
  __android_log_print(4,"apk_diff_native",pcVar5);
  return;
}

