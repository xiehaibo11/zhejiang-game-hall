
long toJavaString(long *param_1,char *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_3 < 0) {
    return 0;
  }
  lVar1 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/String");
  lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      uVar3 = getJavaMethodID(param_1,"java/lang/String","<init>","([BLjava/lang/String;)V");
      uVar4 = (**(code **)(*param_1 + 0x580))(param_1,param_3);
      (**(code **)(*param_1 + 0x680))(param_1,uVar4,0,param_3,param_2);
      lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
      if (lVar2 == 0) {
        lVar2 = (**(code **)(*param_1 + 0x538))(param_1,"utf-8");
        lVar5 = (**(code **)(*param_1 + 0x78))(param_1);
        if (lVar5 == 0) {
          if (lVar2 != 0) {
            lVar5 = (**(code **)(*param_1 + 0xe0))(param_1,lVar1,uVar3,uVar4,lVar2);
            lVar6 = (**(code **)(*param_1 + 0x78))(param_1);
            if (lVar6 == 0) {
              if (lVar5 != 0) {
                (**(code **)(*param_1 + 0xb8))(param_1,lVar1);
                (**(code **)(*param_1 + 0xb8))(param_1,lVar2);
                (**(code **)(*param_1 + 0xb8))(param_1,uVar4);
                return lVar5;
              }
            }
            else {
              log2Console(5,"eup","A Java exception has been caught.");
              (**(code **)(*param_1 + 0x80))(param_1);
              (**(code **)(*param_1 + 0x88))(param_1);
            }
            pcVar7 = "Failed to new string: %s";
            goto LAB_00111ed0;
          }
        }
        else {
          log2Console(5,"eup","A Java exception has been caught.");
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
        }
        pcVar7 = "Failed to new string: utf-8";
      }
      else {
        log2Console(5,"eup","A Java exception has been caught.");
        (**(code **)(*param_1 + 0x80))(param_1);
        (**(code **)(*param_1 + 0x88))(param_1);
        pcVar7 = "Failed to set region of byte array.";
      }
      log2Console(6,"eup",pcVar7);
      return 0;
    }
  }
  else {
    log2Console(5,"eup","A Java exception has been caught.");
    (**(code **)(*param_1 + 0x80))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  pcVar7 = "Failed to find class: %s";
  param_2 = "java/lang/String";
LAB_00111ed0:
  log2Console(6,"eup",pcVar7,param_2);
  return 0;
}

