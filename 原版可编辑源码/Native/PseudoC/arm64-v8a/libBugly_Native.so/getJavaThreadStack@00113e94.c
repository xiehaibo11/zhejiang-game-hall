
undefined8 getJavaThreadStack(long *param_1,long param_2,char *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if ((param_1 == (long *)0x0) || (param_4 < 1)) {
    pcVar5 = "env == NULL || maxLen <= 0, return!";
  }
  else {
    if (param_3 == (char *)0x0) {
      uVar4 = javaTheadDump(param_1,param_4);
      return uVar4;
    }
    iVar1 = strcmp(param_3,"main");
    if (iVar1 == 0) {
      lVar2 = getJavaMainThread(param_1);
    }
    else {
      lVar2 = getJavaThreadByName(param_1,*(undefined4 *)(param_2 + 8),param_3);
    }
    if (lVar2 == 0) {
      log2Console(6,"eup","Failed to get java thread with thread name: %s",param_3);
      return 0;
    }
    lVar3 = getJavaThreadName(param_1,lVar2);
    if (lVar3 != 0) {
      snprintf((char *)(param_2 + 0x428),0x80,"%s",lVar3);
    }
    uVar4 = getJavaThreadStackByThreadObject(param_1,lVar2,param_4);
    (**(code **)(*param_1 + 0xb8))(param_1,lVar2);
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 == 0) {
      return uVar4;
    }
    log2Console(5,"eup","A Java exception has been caught.");
    (**(code **)(*param_1 + 0x80))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
    pcVar5 = "Failed to delete local reference.";
  }
  log2Console(6,"eup",pcVar5);
  return 0;
}

