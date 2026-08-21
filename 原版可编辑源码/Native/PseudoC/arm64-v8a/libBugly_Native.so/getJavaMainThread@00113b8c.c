
long getJavaMainThread(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  log2Console(4,"eup","Try to get Java main thread.");
  lVar1 = (**(code **)(*param_1 + 0x30))(param_1,"android/os/Looper");
  lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      lVar2 = getJavaStaticMethodID
                        (param_1,"android/os/Looper","getMainLooper","()Landroid/os/Looper;");
      if (lVar2 == 0) {
        return 0;
      }
      lVar1 = (**(code **)(*param_1 + 0x390))(param_1,lVar1,lVar2);
      lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
      if (lVar2 == 0) {
        if (lVar1 != 0) {
          lVar2 = getJavaMethodID(param_1,"android/os/Looper","getThread","()Ljava/lang/Thread;");
          if (lVar2 == 0) {
            return 0;
          }
          lVar2 = (**(code **)(*param_1 + 0x110))(param_1,lVar1,lVar2);
          lVar3 = (**(code **)(*param_1 + 0x78))(param_1);
          if (lVar3 == 0) {
            if (lVar2 != 0) {
              (**(code **)(*param_1 + 0xb8))(param_1,lVar1);
              lVar1 = (**(code **)(*param_1 + 0x78))(param_1);
              if (lVar1 != 0) {
                log2Console(5,"eup","A Java exception has been caught.");
                (**(code **)(*param_1 + 0x80))(param_1);
                (**(code **)(*param_1 + 0x88))(param_1);
                log2Console(6,"eup","Failed to delete local reference.");
                return 0;
              }
              return lVar2;
            }
          }
          else {
            log2Console(5,"eup","A Java exception has been caught.");
            (**(code **)(*param_1 + 0x80))(param_1);
            (**(code **)(*param_1 + 0x88))(param_1);
          }
          pcVar4 = "Failed to call: %s";
          pcVar5 = "getThread";
          goto LAB_00113c3c;
        }
      }
      else {
        log2Console(5,"eup","A Java exception has been caught.");
        (**(code **)(*param_1 + 0x80))(param_1);
        (**(code **)(*param_1 + 0x88))(param_1);
      }
      pcVar4 = "Failed to call: %s";
      pcVar5 = "getMainLooper";
      goto LAB_00113c3c;
    }
  }
  else {
    log2Console(5,"eup","A Java exception has been caught.");
    (**(code **)(*param_1 + 0x80))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  pcVar4 = "Failed to find class: %s";
  pcVar5 = "android/os/Looper";
LAB_00113c3c:
  log2Console(6,"eup",pcVar4,pcVar5);
  return 0;
}

