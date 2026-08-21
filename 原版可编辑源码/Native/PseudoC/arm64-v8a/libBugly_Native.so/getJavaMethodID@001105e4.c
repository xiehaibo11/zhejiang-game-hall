
undefined8 getJavaMethodID(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 != (long *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x30))();
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 == 0) {
      if (lVar1 != 0) {
        uVar3 = (**(code **)(*param_1 + 0x108))(param_1,lVar1,param_3,param_4);
        lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
        if (lVar2 != 0) {
          log2Console(5,"eup","A Java exception has been caught.");
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
          log2Console(6,"eup",
                      "Failed to get method ID for specific method(Name: %s, Signature: %s).",
                      param_3,param_4);
          return 0;
        }
        (**(code **)(*param_1 + 0xb8))(param_1,lVar1);
        return uVar3;
      }
    }
    else {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    log2Console(6,"eup","Failed to find class: %s",param_2);
  }
  return 0;
}

