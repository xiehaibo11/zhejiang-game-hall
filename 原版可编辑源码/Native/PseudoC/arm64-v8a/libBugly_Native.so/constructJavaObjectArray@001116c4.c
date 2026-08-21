
undefined8 constructJavaObjectArray(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  lVar1 = (**(code **)(*param_1 + 0x30))();
  lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x560))(param_1,param_3,lVar1,0);
      lVar1 = (**(code **)(*param_1 + 0x78))(param_1);
      if (lVar1 == 0) {
        return uVar3;
      }
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
      pcVar4 = "Failed to new object array of type: %s";
      goto LAB_00111750;
    }
  }
  else {
    log2Console(5,"eup","A Java exception has been caught.");
    (**(code **)(*param_1 + 0x80))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  pcVar4 = "Failed to find class: %s";
LAB_00111750:
  log2Console(6,"eup",pcVar4,param_2);
  return 0;
}

