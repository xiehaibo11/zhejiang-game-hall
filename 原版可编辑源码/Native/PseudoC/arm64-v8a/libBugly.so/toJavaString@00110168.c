
long toJavaString(long *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((param_2 == 0) || (param_3 < 0)) {
    return 0;
  }
  lVar1 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/String");
  lVar2 = checkJavaException(param_1);
  if ((lVar2 == 0) && (lVar1 != 0)) {
    uVar3 = getJavaMethodID(param_1,"java/lang/String","<init>","([BLjava/lang/String;)V");
    uVar4 = (**(code **)(*param_1 + 0x580))(param_1,param_3);
    (**(code **)(*param_1 + 0x680))(param_1,uVar4,0,param_3,param_2);
    lVar2 = checkJavaException(param_1);
    if (lVar2 == 0) {
      lVar5 = (**(code **)(*param_1 + 0x538))(param_1,"utf-8");
      lVar6 = checkJavaException(param_1);
      lVar2 = 0;
      if ((lVar6 == 0) && (lVar5 != 0)) {
        lVar6 = (**(code **)(*param_1 + 0xe0))(param_1,lVar1,uVar3,uVar4,lVar5);
        lVar7 = checkJavaException(param_1);
        if ((lVar7 == 0) && (lVar6 != 0)) {
          (**(code **)(*param_1 + 0xb8))(param_1,lVar1);
          (**(code **)(*param_1 + 0xb8))(param_1,lVar5);
          (**(code **)(*param_1 + 0xb8))(param_1,uVar4);
          lVar2 = lVar6;
        }
        else {
          log2Console(6,"CrashReport-Native","Failed to new string: %s",param_2);
        }
      }
      else {
        log2Console(6,"CrashReport-Native","Failed to new string: utf-8");
      }
      return lVar2;
    }
    log2Console(6,"CrashReport-Native","Failed to set region of byte array.");
    return 0;
  }
  log2Console(6,"CrashReport-Native","Failed to find class: %s","java/lang/String");
  return 0;
}

