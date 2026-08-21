
long checkJavaException(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x78))();
  if (lVar1 != 0) {
    log2Console(5,"eup","A Java exception has been caught.");
    (**(code **)(*param_1 + 0x80))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  return lVar1;
}

