
undefined4 getJavaThreadId(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = getJavaMethodID(param_1,"java/lang/Thread","getId",&DAT_001279d7);
  if (lVar2 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,param_2,lVar2);
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 == 0) {
      return uVar1;
    }
    log2Console(5,"eup","A Java exception has been caught.");
    (**(code **)(*param_1 + 0x80))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
    log2Console(6,"eup","Failed to call: %s","getId");
  }
  return 0xffffffff;
}

